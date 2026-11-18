// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 12

// StaticClass @ 14d9b0cb0

UClass * __cdecl UPhysicsControlInitializerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlInitializerComponent",
               &Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsControlInitializerComponent,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsControlInitializerComponent>,
               InternalVTableHelperCtorCaller<UPhysicsControlInitializerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton;
}

// UPhysicsControlInitializerComponent @ 14d9c01f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsControlInitializerComponent * __thiscall
UPhysicsControlInitializerComponent::UPhysicsControlInitializerComponent
          (UPhysicsControlInitializerComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FInitialCharacterControls::FInitialCharacterControls(&this->InitialCharacterControls);
  *(undefined8 *)&this->InitialControls = 0;
  *(undefined8 *)&(this->InitialControls).field_0x8 = 0;
  *(undefined8 *)&(this->InitialControls).field_0x20 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x28 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialControls).field_0x34 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InitialControls).field_0x40 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x48 = 0;
  *(undefined8 *)&this->InitialBodyModifiers = 0;
  *(undefined8 *)&(this->InitialBodyModifiers).field_0x8 = 0;
  *(undefined8 *)&(this->InitialBodyModifiers).field_0x20 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x28 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x34 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InitialBodyModifiers).field_0x40 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x48 = 0;
  this->bCreateControlsAtBeginPlay = true;
  return this;
}

// UPhysicsControlInitializerComponent @ 14d9c02d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPhysicsControlInitializerComponent * __thiscall
UPhysicsControlInitializerComponent::UPhysicsControlInitializerComponent
          (UPhysicsControlInitializerComponent *this,FObjectInitializer *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FInitialCharacterControls::FInitialCharacterControls(&this->InitialCharacterControls);
  *(undefined8 *)&this->InitialControls = 0;
  *(undefined8 *)&(this->InitialControls).field_0x8 = 0;
  *(undefined8 *)&(this->InitialControls).field_0x20 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x28 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialControls).field_0x34 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InitialControls).field_0x40 = 0;
  *(undefined4 *)&(this->InitialControls).field_0x48 = 0;
  *(undefined8 *)&this->InitialBodyModifiers = 0;
  *(undefined8 *)&(this->InitialBodyModifiers).field_0x8 = 0;
  *(undefined8 *)&(this->InitialBodyModifiers).field_0x20 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x28 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x34 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InitialBodyModifiers).field_0x40 = 0;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x48 = 0;
  this->bCreateControlsAtBeginPlay = true;
  return this;
}

// ~UPhysicsControlInitializerComponent @ 14d9c1600

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
UPhysicsControlInitializerComponent::~UPhysicsControlInitializerComponent
          (UPhysicsControlInitializerComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined4 *)&(this->InitialBodyModifiers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitialBodyModifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitialBodyModifiers);
  *(undefined4 *)&(this->InitialControls).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitialControls).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitialControls);
  pFVar2 = (this->InitialCharacterControls).LimbSetupData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginPlay @ 14d9cc0d0

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
UPhysicsControlInitializerComponent::BeginPlay(UPhysicsControlInitializerComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  UPhysicsControlComponent *this_00;
  UClass *local_res8;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (this->bCreateControlsAtBeginPlay != false) {
    plVar1 = *(longlong **)&this->field_0xa8;
    pcVar2 = *(code **)(*plVar1 + 0x738);
    local_res8 = UPhysicsControlComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    this_00 = (UPhysicsControlComponent *)(*pcVar2)(plVar1,&local_res8);
    if (this_00 != (UPhysicsControlComponent *)0x0) {
      UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)this_00,true);
      CreateInitialCharacterControls(this,this_00);
      CreateOrUpdateInitialControls(this,this_00);
      CreateOrUpdateInitialBodyModifiers(this,this_00);
    }
  }
  return;
}

// CreateControls @ 14d9d0440

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
UPhysicsControlInitializerComponent::CreateControls
          (UPhysicsControlInitializerComponent *this,UPhysicsControlComponent *param_1)

{
  if (param_1 != (UPhysicsControlComponent *)0x0) {
    UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)param_1,true);
    CreateInitialCharacterControls(this,param_1);
    CreateOrUpdateInitialControls(this,param_1);
    CreateOrUpdateInitialBodyModifiers(this,param_1);
  }
  return;
}

// CreateInitialCharacterControls @ 14d9d3810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPhysicsControlInitializerComponent::CreateInitialCharacterControls
          (UPhysicsControlInitializerComponent *this,UPhysicsControlComponent *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar28;
  bool bVar29;
  UObject *pUVar30;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar31;
  UClass *pUVar32;
  USkeletalMeshComponent *this_00;
  UPhysicsAsset *pUVar33;
  FString *pFVar34;
  TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
  *pTVar35;
  int iVar36;
  uint uVar37;
  UPhysicsControlComponent *pUVar38;
  uint uVar39;
  int iVar40;
  undefined1 *puVar41;
  uint *puVar42;
  undefined1 auStackY_518 [32];
  undefined1 local_4c8 [4];
  undefined8 local_4c4;
  FName local_4b8;
  undefined8 local_4b0;
  FPhysicsControlNames local_4a8;
  FPhysicsControlNames local_498;
  FPhysicsControlNames local_488;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_478;
  int iStack_470;
  uint uStack_46c;
  undefined1 *local_468;
  undefined4 uStack_460;
  int iStack_45c;
  int local_458;
  int iStack_454;
  int iStack_450;
  undefined4 uStack_44c;
  int local_448;
  UPhysicsControlComponent *local_438;
  undefined8 uStack_430;
  UClass *local_428;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_418;
  undefined8 uStack_3f8;
  FPhysicsControlModifierData local_3e8;
  FPhysicsControlData local_3d8;
  FPhysicsControlData local_388;
  FString local_338;
  FString local_328;
  undefined1 local_318 [32];
  void *local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  ForElementType<FSetElementId> local_2d8;
  int local_2d0;
  undefined1 local_2c8 [32];
  void *local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  ForElementType<FSetElementId> local_288;
  int local_280;
  undefined1 local_278 [32];
  void *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 local_248;
  undefined4 local_244;
  ForElementType<FSetElementId> local_238;
  int local_230;
  undefined1 local_228 [72];
  undefined4 local_1e0;
  undefined1 local_1d8 [72];
  undefined4 local_190;
  undefined1 local_188 [72];
  undefined4 local_140;
  undefined1 local_138 [72];
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_438 = param_1;
  bVar29 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InitialCharacterControls);
  if (!bVar29) {
    return;
  }
  iVar40 = 0;
  local_4c4 = 0;
  if ((this->InitialCharacterControls).SkeletalMeshComponentName == (FName)0x0) {
    pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InitialCharacterControls);
    pcVar7 = *(code **)(*(longlong *)pUVar30 + 0x738);
    local_428 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_428 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_428);
    }
    this_00 = (USkeletalMeshComponent *)(*pcVar7)(pUVar30);
    pUVar38 = param_1;
  }
  else {
    pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InitialCharacterControls);
    pTVar31 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                          *)&pUVar30[0xe].field_0x18);
    iVar3 = *(int *)&(pTVar31->Elements).field_0x28;
    uStack_46c = 1;
    puVar1 = &(pTVar31->Elements).field_0x10;
    iStack_45c = iVar40;
    local_458 = iVar40;
    if (iVar3 != 0) {
      puVar42 = *(uint **)&(pTVar31->Elements).field_0x20;
      if (puVar42 == (uint *)0x0) {
        puVar42 = (uint *)puVar1;
      }
      uVar39 = *puVar42;
      iVar40 = 0;
      local_458 = 0;
      while (uVar39 == 0) {
        iVar40 = iVar40 + 1;
        local_458 = local_458 + 0x20;
        iStack_45c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar40) goto LAB_14d9d3920;
        uVar39 = puVar42[iVar40];
      }
      uStack_46c = ~(uVar39 - 1) & uVar39;
      uVar2 = (ulonglong)uStack_46c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_448 = (int)lVar6;
      iStack_45c = local_458 + -1 + local_448;
      if (iVar3 < iStack_45c) {
        iStack_45c = iVar3;
      }
    }
LAB_14d9d3920:
    uVar39 = *(uint *)&(pTVar31->Elements).field_0x28;
    uVar37 = uVar39 & 0xffffffe0;
    iStack_450 = *(int *)&(pTVar31->Elements).field_0x8 - *(int *)&(pTVar31->Elements).field_0x34;
    uStack_460 = 0xffffffff;
    TStack_418._padding_ = CONCAT44(uStack_46c,iVar40);
    TStack_418.CurrentBitIndex = iStack_45c;
    TStack_418.UnvisitedBitMask = 0xffffffff;
    iVar36 = (int)uVar39 >> 5;
    TStack_418._28_4_ = iStack_45c;
    TStack_418.BaseBitIndex = local_458;
    uStack_3f8 = CONCAT44(uStack_44c,iStack_450);
    local_478 = pTVar31;
    iStack_470 = iVar40;
    local_468 = puVar1;
    iStack_454 = iStack_45c;
    local_420 = pTVar31;
    TStack_418.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar39 < 0) || (iVar3 < (int)uVar39)) &&
       (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar29)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&(pTVar31->Elements).field_0x28;
    if (uVar39 != uVar4) {
      puVar5 = *(undefined1 **)&(pTVar31->Elements).field_0x20;
      puVar41 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar41 = puVar5;
      }
      uVar39 = -1 << ((byte)uVar39 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar36 * 4);
      while (uVar39 == 0) {
        iVar36 = iVar36 + 1;
        uVar37 = uVar37 + 0x20;
        uVar39 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar36)
        goto LAB_14d9d3a20;
        uVar39 = *(uint *)(puVar41 + (longlong)iVar36 * 4);
      }
      uVar2 = (ulonglong)(~(uVar39 - 1) & uVar39) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar39 = (int)lVar6 + -1 + uVar37;
      if ((int)uVar4 < (int)uVar39) {
        uVar39 = uVar4;
      }
    }
LAB_14d9d3a20:
    while( true ) {
      pTVar28 = local_420;
      if (*(int *)&(local_420->Elements).field_0x8 - *(int *)&(local_420->Elements).field_0x34 !=
          (int)uStack_3f8) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_4c8);
      }
      if (((TStack_418.CurrentBitIndex == uVar39) &&
          (TStack_418.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar28 == pTVar31)) {
        return;
      }
      this_00 = *(USkeletalMeshComponent **)
                 (*(longlong *)&pTVar28->Elements + (longlong)TStack_418.CurrentBitIndex * 0x10);
      if ((FName)this_00->_padding_ == (this->InitialCharacterControls).SkeletalMeshComponentName)
      break;
      TStack_418.UnvisitedBitMask = TStack_418.UnvisitedBitMask & ~TStack_418._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_418);
    }
    pUVar32 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar40 = (int)pUVar32->_padding_;
    pUVar38 = local_438;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar40) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar40 * 8) !=
        &pUVar32->_padding_)) {
      this_00 = (USkeletalMeshComponent *)0x0;
    }
  }
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    local_438 = (UPhysicsControlComponent *)
                (this->InitialCharacterControls).WorldSpaceControlData.CustomControlPoint.field0_0x0
                ._s_0.Z;
    uStack_430._0_1_ = (this->InitialCharacterControls).WorldSpaceControlData.bUseCustomControlPoint
    ;
    uStack_430._1_1_ = (this->InitialCharacterControls).WorldSpaceControlData.bUseSkeletalAnimation;
    uStack_430._2_1_ = (this->InitialCharacterControls).WorldSpaceControlData.bDisableCollision;
    uStack_430._3_1_ =
         (this->InitialCharacterControls).WorldSpaceControlData.bOnlyControlChildObject;
    uStack_430._4_4_ =
         *(undefined4 *)&(this->InitialCharacterControls).WorldSpaceControlData.field_0x4c;
    local_488.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar8._0_1_ = (this->InitialCharacterControls).BodyModifierData.MovementType;
    uVar8._1_1_ = (this->InitialCharacterControls).BodyModifierData.CollisionType.Value;
    uVar8._2_1_ = (this->InitialCharacterControls).BodyModifierData.KinematicTargetSpace;
    uVar8._3_1_ = (this->InitialCharacterControls).BodyModifierData.field_0x3;
    uVar8._4_4_ = (this->InitialCharacterControls).BodyModifierData.GravityMultiplier;
    uVar9._0_4_ = (this->InitialCharacterControls).BodyModifierData.PhysicsBlendWeight;
    uVar9._4_1_ = (this->InitialCharacterControls).BodyModifierData.bUpdateKinematicFromSimulation;
    uVar9._5_3_ = *(undefined3 *)&(this->InitialCharacterControls).BodyModifierData.field_0xd;
    local_488.Names.ArrayNum = 0;
    local_488.Names.ArrayMax = 0;
    uVar10._0_1_ = (this->InitialCharacterControls).ParentSpaceControlData.bEnabled;
    uVar10._1_3_ = *(undefined3 *)&(this->InitialCharacterControls).ParentSpaceControlData.field_0x1
    ;
    uVar10._4_4_ = (this->InitialCharacterControls).ParentSpaceControlData.LinearStrength;
    uVar11._0_4_ = (this->InitialCharacterControls).ParentSpaceControlData.LinearDampingRatio;
    uVar11._4_4_ = (this->InitialCharacterControls).ParentSpaceControlData.LinearExtraDamping;
    local_278._0_8_ = (FScriptContainerElement *)0x0;
    uVar12._0_4_ = (this->InitialCharacterControls).ParentSpaceControlData.MaxForce;
    uVar12._4_4_ = (this->InitialCharacterControls).ParentSpaceControlData.AngularStrength;
    uVar13._0_4_ = (this->InitialCharacterControls).ParentSpaceControlData.AngularDampingRatio;
    uVar13._4_4_ = (this->InitialCharacterControls).ParentSpaceControlData.AngularExtraDamping;
    local_278._8_8_ = 0;
    uVar14._0_4_ = (this->InitialCharacterControls).ParentSpaceControlData.MaxTorque;
    uVar14._4_4_ = (this->InitialCharacterControls).ParentSpaceControlData.
                   LinearTargetVelocityMultiplier;
    uVar15._0_4_ = (this->InitialCharacterControls).ParentSpaceControlData.
                   AngularTargetVelocityMultiplier;
    uVar15._4_4_ = *(undefined4 *)
                    &(this->InitialCharacterControls).ParentSpaceControlData.field_0x2c;
    local_258 = (void *)0x0;
    dVar16 = (this->InitialCharacterControls).ParentSpaceControlData.CustomControlPoint.field0_0x0.
             _s_0.X;
    dVar17 = (this->InitialCharacterControls).ParentSpaceControlData.CustomControlPoint.field0_0x0.
             _s_0.Y;
    local_250 = 0;
    dVar18 = (this->InitialCharacterControls).ParentSpaceControlData.CustomControlPoint.field0_0x0.
             _s_0.Z;
    uVar19._0_1_ = (this->InitialCharacterControls).ParentSpaceControlData.bUseCustomControlPoint;
    uVar19._1_1_ = (this->InitialCharacterControls).ParentSpaceControlData.bUseSkeletalAnimation;
    uVar19._2_1_ = (this->InitialCharacterControls).ParentSpaceControlData.bDisableCollision;
    uVar19._3_1_ = (this->InitialCharacterControls).ParentSpaceControlData.bOnlyControlChildObject;
    uVar19._4_4_ = *(undefined4 *)
                    &(this->InitialCharacterControls).ParentSpaceControlData.field_0x4c;
    local_24c = 0x80;
    uVar20._0_1_ = (this->InitialCharacterControls).WorldSpaceControlData.bEnabled;
    uVar20._1_3_ = *(undefined3 *)&(this->InitialCharacterControls).WorldSpaceControlData.field_0x1;
    uVar20._4_4_ = (this->InitialCharacterControls).WorldSpaceControlData.LinearStrength;
    uVar21._0_4_ = (this->InitialCharacterControls).WorldSpaceControlData.LinearDampingRatio;
    uVar21._4_4_ = (this->InitialCharacterControls).WorldSpaceControlData.LinearExtraDamping;
    local_248 = 0xffffffff;
    uVar22._0_4_ = (this->InitialCharacterControls).WorldSpaceControlData.MaxForce;
    uVar22._4_4_ = (this->InitialCharacterControls).WorldSpaceControlData.AngularStrength;
    uVar23._0_4_ = (this->InitialCharacterControls).WorldSpaceControlData.AngularDampingRatio;
    uVar23._4_4_ = (this->InitialCharacterControls).WorldSpaceControlData.AngularExtraDamping;
    local_244 = 0;
    uVar24._0_4_ = (this->InitialCharacterControls).WorldSpaceControlData.MaxTorque;
    uVar24._4_4_ = (this->InitialCharacterControls).WorldSpaceControlData.
                   LinearTargetVelocityMultiplier;
    uVar25._0_4_ = (this->InitialCharacterControls).WorldSpaceControlData.
                   AngularTargetVelocityMultiplier;
    uVar25._4_4_ = *(undefined4 *)&(this->InitialCharacterControls).WorldSpaceControlData.field_0x2c
    ;
    local_238 = (ForElementType<FSetElementId>)0x0;
    dVar26 = (this->InitialCharacterControls).WorldSpaceControlData.CustomControlPoint.field0_0x0.
             _s_0.X;
    dVar27 = (this->InitialCharacterControls).WorldSpaceControlData.CustomControlPoint.field0_0x0.
             _s_0.Y;
    local_230 = 0;
    local_498.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_498.Names.ArrayNum = 0;
    local_498.Names.ArrayMax = 0;
    local_2c8._0_8_ = (FScriptContainerElement *)0x0;
    local_2c8._8_8_ = 0;
    local_2a8 = (void *)0x0;
    local_2a0 = 0;
    local_29c = 0x80;
    local_298 = 0xffffffff;
    local_294 = 0;
    local_288 = (ForElementType<FSetElementId>)0x0;
    local_280 = 0;
    local_318._0_8_ = (FScriptContainerElement *)0x0;
    local_318._8_8_ = 0;
    local_2f8 = (void *)0x0;
    local_2f0 = 0;
    local_2ec = 0x80;
    local_2e8 = 0xffffffff;
    local_2e4 = 0;
    local_2d8 = (ForElementType<FSetElementId>)0x0;
    local_2d0 = 0;
    local_4a8.Names.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4a8.Names.ArrayNum = 0;
    local_4a8.Names.ArrayMax = 0;
    local_4b8.ComparisonIndex.Value = 0;
    local_4b8.Number = 0;
    pUVar33 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_00);
    if (pUVar33 == (UPhysicsAsset *)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
      }
    }
    else {
      UPhysicsControlComponent::GetLimbBonesFromSkeletalMesh
                (pUVar38,(TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                          *)local_228,this_00,&(this->InitialCharacterControls).LimbSetupData);
      pFVar34 = ::FString::FString(&local_338,L"");
      local_3d8.CustomControlPoint.field0_0x0._s_0.Z = (double)local_438;
      local_3d8.bUseCustomControlPoint = uStack_430._0_1_;
      local_3d8.bUseSkeletalAnimation = uStack_430._1_1_;
      local_3d8.bDisableCollision = uStack_430._2_1_;
      local_3d8.bOnlyControlChildObject = uStack_430._3_1_;
      local_3d8._76_4_ = uStack_430._4_4_;
      local_3d8._0_8_ = uVar20;
      local_3d8._8_8_ = uVar21;
      local_3d8._16_8_ = uVar22;
      local_3d8._24_8_ = uVar23;
      local_3d8._32_8_ = uVar24;
      local_3d8._40_8_ = uVar25;
      local_3d8.CustomControlPoint.field0_0x0._s_0.X = dVar26;
      local_3d8.CustomControlPoint.field0_0x0._s_0.Y = dVar27;
      pTVar35 = (TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
                 *)UPhysicsControlComponent::CreateControlsFromLimbBones
                             (pUVar38,(TMap<FName,FPhysicsControlNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>_>
                                       *)local_1d8,&local_488,
                              (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                               *)local_228,WorldSpace,&local_3d8,(UPrimitiveComponent *)0x0,
                              local_4b8,pFVar34);
      if ((TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
           *)local_278 != pTVar35) {
        TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
                    *)local_278,pTVar35);
      }
      local_190 = 0;
      if ((void *)local_1d8._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1d8);
      pFVar34 = ::FString::FString(&local_328,L"");
      local_4b0 = 0;
      local_388._0_8_ = uVar10;
      local_388._8_8_ = uVar11;
      local_388._16_8_ = uVar12;
      local_388._24_8_ = uVar13;
      local_388._32_8_ = uVar14;
      local_388._40_8_ = uVar15;
      local_388.CustomControlPoint.field0_0x0._s_0.X = dVar16;
      local_388.CustomControlPoint.field0_0x0._s_0.Y = dVar17;
      local_388.CustomControlPoint.field0_0x0._s_0.Z = dVar18;
      local_388._72_8_ = uVar19;
      pTVar35 = (TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
                 *)UPhysicsControlComponent::CreateControlsFromLimbBones
                             (pUVar38,(TMap<FName,FPhysicsControlNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>_>
                                       *)local_188,&local_498,
                              (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                               *)local_228,ParentSpace,&local_388,(UPrimitiveComponent *)0x0,
                              (FName)0x0,pFVar34);
      if ((TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
           *)local_2c8 != pTVar35) {
        TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
                    *)local_2c8,pTVar35);
      }
      local_140 = 0;
      if ((void *)local_188._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_188._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_188);
      local_3e8._0_8_ = uVar8;
      local_3e8._8_8_ = uVar9;
      pTVar35 = (TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
                 *)UPhysicsControlComponent::CreateBodyModifiersFromLimbBones
                             (pUVar38,(TMap<FName,FPhysicsControlNames,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>_>
                                       *)local_138,&local_4a8,
                              (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                               *)local_228,&local_3e8);
      if ((TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
           *)local_318 != pTVar35) {
        TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,FPhysicsControlNames>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlNames,0>,FDefaultSetAllocator>
                    *)local_318,pTVar35);
      }
      local_f0 = 0;
      if ((void *)local_138._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_138._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      local_1e0 = 0;
      if ((void *)local_228._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_228._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_228);
    }
    if (local_4a8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4a8.Names.AllocatorInstance.Data);
    }
    local_2d0 = 0;
    if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_318,0,local_318._8_4_);
    bVar29 = local_318._12_4_ != 0;
    local_318._8_8_ = (ulonglong)(uint)local_318._12_4_ << 0x20;
    if (bVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_318,0,(int *)(local_318 + 0xc));
    }
    local_2e8 = 0xffffffff;
    local_2e4 = 0;
    local_2f0 = 0;
    if (0x80 < local_2ec) {
      local_2ec = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10),0);
    }
    if (local_2f8 != (void *)0x0) {
      FMemory::Free(local_2f8);
    }
    if ((FScriptContainerElement *)local_318._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_318._0_8_);
    }
    local_280 = 0;
    if (local_288 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_288);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2c8,0,local_2c8._8_4_);
    bVar29 = local_2c8._12_4_ != 0;
    local_2c8._8_8_ = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
    if (bVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_2c8,0,(int *)(local_2c8 + 0xc));
    }
    local_298 = 0xffffffff;
    local_294 = 0;
    local_2a0 = 0;
    if (0x80 < local_29c) {
      local_29c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),0);
    }
    if (local_2a8 != (void *)0x0) {
      FMemory::Free(local_2a8);
    }
    if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2c8._0_8_);
    }
    if (local_498.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Names.AllocatorInstance.Data);
    }
    local_230 = 0;
    if (local_238 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_238);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlNames>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_278,0,local_278._8_4_);
    bVar29 = local_278._12_4_ != 0;
    local_278._8_8_ = (ulonglong)(uint)local_278._12_4_ << 0x20;
    if (bVar29) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_278,0,(int *)(local_278 + 0xc));
    }
    local_248 = 0xffffffff;
    local_244 = 0;
    local_250 = 0;
    if (0x80 < local_24c) {
      local_24c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10),0);
    }
    if (local_258 != (void *)0x0) {
      FMemory::Free(local_258);
    }
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
    if (local_488.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Names.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateOrUpdateInitialBodyModifiers @ 14d9d4dc0

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
UPhysicsControlInitializerComponent::CreateOrUpdateInitialBodyModifiers
          (UPhysicsControlInitializerComponent *this,UPhysicsControlComponent *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  TMap<FName,FInitialBodyModifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialBodyModifier,0>_>
  *pTVar7;
  bool bVar8;
  UObject *pUVar9;
  FWeakObjectPtr FVar10;
  UClass *pUVar11;
  FPhysicsBodyModifierRecord *pFVar12;
  FName *pFVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  UPrimitiveComponent *pUVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  uint *puVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  FWeakObjectPtr *this_00;
  uint uVar25;
  ForAnyElementType FVar26;
  int iVar27;
  undefined1 local_res8 [8];
  UPhysicsControlComponent *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_1a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_198;
  TArray<FName,TSizedDefaultAllocator<32>_> local_188;
  TMap<FName,FInitialBodyModifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialBodyModifier,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  TMap<FName,FInitialBodyModifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialBodyModifier,0>_>
  *local_138;
  FWeakObjectPtr local_130;
  FWeakObjectPtr FStack_128;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  FWeakObjectPtr local_118;
  int iStack_110;
  uint uStack_10c;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  FWeakObjectPtr local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<FName,FInitialBodyModifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialBodyModifier,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FName local_88 [2];
  FWeakObjectPtr local_78;
  FWeakObjectPtr FStack_70;
  undefined4 local_4c;
  
  local_178 = &this->InitialBodyModifiers;
  iStack_170 = 0;
  iVar27 = *(int *)&(this->InitialBodyModifiers).field_0x28;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->InitialBodyModifiers).field_0x10;
  local_158 = 0;
  uStack_16c = 1;
  iStack_15c = 0;
  if (iVar27 != 0) {
    puVar23 = *(uint **)&(this->InitialBodyModifiers).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)pTVar24;
    }
    uVar19 = *puVar23;
    while (uVar19 == 0) {
      iStack_170 = iStack_170 + 1;
      local_158 = local_158 + 0x20;
      iStack_15c = iVar27;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_170) goto LAB_14d9d4e6f;
      uVar19 = puVar23[iStack_170];
    }
    uStack_16c = ~(uVar19 - 1) & uVar19;
    uVar15 = (ulonglong)uStack_16c * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_148 = (int)lVar4;
    iStack_15c = local_158 + -1 + local_148;
    if (iVar27 < iStack_15c) {
      iStack_15c = iVar27;
    }
  }
LAB_14d9d4e6f:
  local_1a8 = *(uint *)&(this->InitialBodyModifiers).field_0x28;
  uVar19 = local_1a8 & 0xffffffe0;
  iStack_150 = *(int *)&(this->InitialBodyModifiers).field_0x8 -
               *(int *)&(this->InitialBodyModifiers).field_0x34;
  TStack_b0._padding_ = CONCAT44(uStack_16c,iStack_170);
  uStack_160 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_15c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)local_1a8 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_158;
  uStack_90 = CONCAT44(uStack_14c,iStack_150);
  local_res10 = param_1;
  local_168 = (undefined1 *)pTVar24;
  local_138 = local_178;
  local_120 = pTVar24;
  local_b8 = local_178;
  TStack_b0.Array = pTVar24;
  if ((((int)local_1a8 < 0) || (iVar27 < (int)local_1a8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar25 = *(uint *)&(this->InitialBodyModifiers).field_0x28;
  if (local_1a8 != uVar25) {
    puVar1 = *(undefined1 **)&(this->InitialBodyModifiers).field_0x20;
    puVar21 = (undefined1 *)pTVar24;
    if (puVar1 != (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar20 = -1 << ((byte)local_1a8 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      iVar16 = iVar16 + 1;
      uVar19 = uVar19 + 0x20;
      local_1a8 = uVar25;
      if ((int)(((int)(uVar25 - 1) >> 0x1f & 0x1fU) + (uVar25 - 1)) >> 5 < iVar16)
      goto LAB_14d9d4f90;
      uVar20 = *(uint *)(puVar21 + (longlong)iVar16 * 4);
    }
    uVar15 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_144 = (int)lVar4;
    local_1a8 = local_144 + -1 + uVar19;
    if ((int)uVar25 < (int)local_1a8) {
      local_1a8 = uVar25;
    }
  }
LAB_14d9d4f90:
  pTVar7 = local_b8;
  if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<FName,FInitialBodyModifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((TStack_b0.CurrentBitIndex == local_1a8) && (TStack_b0.Array == pTVar24)) &&
     (pTVar7 == local_138)) {
    return;
  }
  lVar4 = *(longlong *)pTVar7;
  FVar2 = *(FName *)((longlong)TStack_b0.CurrentBitIndex * 0x68 + lVar4);
  this_00 = (FWeakObjectPtr *)(lVar4 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x68);
  bVar8 = FWeakObjectPtr::IsValid(this_00);
  if (bVar8) {
    iVar27 = 0;
    if (this_00[1] != (FWeakObjectPtr)0x0) {
      pUVar9 = FWeakObjectPtr::Get(this_00);
      FVar10 = (FWeakObjectPtr)
               ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                         ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                           *)&pUVar9[0xe].field_0x18);
      iVar16 = *(int *)((longlong)FVar10 + 0x28);
      uStack_10c = 1;
      pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)FVar10 + 0x10);
      local_f8 = iVar27;
      iStack_fc = iVar27;
      if (iVar16 != 0) {
        pTVar22 = pTVar24;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar10 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar10 + 0x20);
        }
        uVar19 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
        while (uVar19 == 0) {
          iVar27 = iVar27 + 1;
          local_f8 = local_f8 + 0x20;
          iStack_fc = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27) goto LAB_14d9d509c;
          uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
        }
        uStack_10c = ~(uVar19 - 1) & uVar19;
        uVar15 = (ulonglong)uStack_10c * 2 + 1;
        lVar4 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_140 = (int)lVar4;
        iStack_fc = local_140 + -1 + local_f8;
        if (iVar16 < iStack_fc) {
          iStack_fc = iVar16;
        }
      }
LAB_14d9d509c:
      uVar19 = *(uint *)((longlong)FVar10 + 0x28);
      iStack_f4 = iStack_15c;
      iStack_f0 = *(int *)((longlong)FVar10 + 8) - *(int *)((longlong)FVar10 + 0x34);
      uVar25 = uVar19 & 0xffffffe0;
      TStack_e0._padding_ = CONCAT44(uStack_10c,iVar27);
      uStack_100 = 0xffffffff;
      TStack_e0.CurrentBitIndex = iStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar19 >> 5;
      TStack_e0._28_4_ = iStack_15c;
      TStack_e0.BaseBitIndex = local_f8;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      local_130 = FVar10;
      local_118 = FVar10;
      iStack_110 = iVar27;
      local_108 = pTVar24;
      local_e8 = FVar10;
      TStack_e0.Array = pTVar24;
      if ((((int)uVar19 < 0) || (iVar16 < (int)uVar19)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6 = local_130;
      uVar20 = *(uint *)((longlong)FVar10 + 0x28);
      if (uVar19 != uVar20) {
        pTVar22 = pTVar24;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar10 + 0x20) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)FVar10 + 0x20);
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                 *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
        while (uVar19 == 0) {
          iVar17 = iVar17 + 1;
          uVar25 = uVar25 + 0x20;
          uVar19 = uVar20;
          if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar17)
          goto LAB_14d9d51b0;
          uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
        }
        uVar15 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_13c = (int)lVar4;
        uVar19 = local_13c + -1 + uVar25;
        if ((int)uVar20 < (int)uVar19) {
          uVar19 = uVar20;
        }
      }
LAB_14d9d51b0:
      do {
        FVar10 = local_e8;
        if (*(int *)((longlong)local_e8 + 8) - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0
           ) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_e0.CurrentBitIndex == uVar19) && (TStack_e0.Array == pTVar24)) &&
           (FVar10 == FVar6)) goto LAB_14d9d53b6;
        pUVar18 = *(UPrimitiveComponent **)
                   (*(longlong *)FVar10 + (longlong)TStack_e0.CurrentBitIndex * 0x10);
        FVar10.ObjectIndex = *(int *)&pUVar18->field_0x18;
        FVar10.ObjectSerialNumber = *(int *)&pUVar18->field_0x1c;
        if (FVar10 == this_00[1]) goto LAB_14d9d5215;
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      } while( true );
    }
    pUVar9 = FWeakObjectPtr::Get(this_00);
    pUVar18 = *(UPrimitiveComponent **)(pUVar9 + 0xb);
    if (pUVar18 == (UPrimitiveComponent *)0x0) {
LAB_14d9d5287:
      pUVar18 = (UPrimitiveComponent *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar27 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar27) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar27 * 8) !=
          &pUVar11->_padding_)) goto LAB_14d9d5287;
    }
    goto LAB_14d9d528a;
  }
  goto LAB_14d9d53b6;
LAB_14d9d5215:
  pUVar11 = Z_Construct_UClass_UMeshComponent_NoRegister();
  iVar27 = (int)pUVar11->_padding_;
  param_1 = local_res10;
  if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar27) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar27 * 8) !=
      &pUVar11->_padding_)) {
    pUVar18 = (UPrimitiveComponent *)0x0;
  }
LAB_14d9d528a:
  if (pUVar18 != (UPrimitiveComponent *)0x0) {
    UPhysicsControlComponent::GetSetsContainingBodyModifier(param_1,&local_188,FVar2);
    pFVar12 = TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
              ::Find((TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
                      *)&param_1->BodyModifierRecords,FVar2);
    if (pFVar12 != (FPhysicsBodyModifierRecord *)0x0) {
      UPhysicsControlComponent::DestroyBodyModifier(param_1,FVar2,RemoveRecord);
      UPhysicsControlComponent::DestroyBodyModifiersInSet(param_1,FVar2);
    }
    local_130 = this_00[3];
    FStack_128 = this_00[4];
    pFVar13 = ::FName::FName(local_88,"All");
    local_78 = local_130;
    FStack_70 = FStack_128;
    bVar8 = UPhysicsControlComponent::CreateNamedBodyModifier
                      (param_1,FVar2,pUVar18,*(FName *)(this_00 + 2),*pFVar13,
                       (FPhysicsControlModifierData *)&local_78);
    iVar27 = local_188.ArrayNum;
    if (bVar8) {
      uVar15 = (ulonglong)local_188.ArrayNum;
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      pFVar13 = (FName *)(local_188.AllocatorInstance.Data + uVar15 * 8);
      FVar26.Data = local_188.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar15 != iVar27) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if ((FName *)FVar26.Data == pFVar13) break;
        FVar3 = *(FName *)FVar26.Data;
        FPhysicsControlNameRecords::AddBodyModifier(&param_1->NameRecords,FVar2,FVar3);
        pTVar14 = FPhysicsControlNameRecords::GetBodyModifierNamesInSet(&param_1->NameRecords,FVar3)
        ;
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&local_198,pTVar14);
        uVar15 = (ulonglong)(uint)local_188.ArrayNum;
        FVar26.Data = FVar26.Data + 8;
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
    }
    if ((FName *)local_188.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
LAB_14d9d53b6:
  TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  pTVar24 = local_120;
  param_1 = local_res10;
  goto LAB_14d9d4f90;
}

// CreateOrUpdateInitialControls @ 14d9d5400

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
UPhysicsControlInitializerComponent::CreateOrUpdateInitialControls
          (UPhysicsControlInitializerComponent *this,UPhysicsControlComponent *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  FName FVar4;
  FWeakObjectPtr FVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  TMap<FName,FInitialPhysicsControl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialPhysicsControl,0>_>
  *pTVar10;
  bool bVar11;
  UObject *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  UClass *pUVar14;
  FPhysicsControlRecord *pFVar15;
  FName *pFVar16;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar17;
  byte bVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  UPrimitiveComponent *pUVar23;
  UPhysicsControlComponent *this_00;
  uint uVar24;
  undefined1 *puVar25;
  FWeakObjectPtr FVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  FWeakObjectPtr this_01;
  ForAnyElementType FVar30;
  uint uVar31;
  UPrimitiveComponent *pUVar32;
  undefined1 local_res8 [8];
  UPhysicsControlComponent *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2f8 [8];
  FWeakObjectPtr local_2f0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_2e8;
  int iStack_2e0;
  uint uStack_2dc;
  undefined1 *local_2d8;
  uint uStack_2d0;
  uint uStack_2cc;
  uint local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_2a0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_290;
  TMap<FName,FInitialPhysicsControl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialPhysicsControl,0>_>
  *local_280;
  int iStack_278;
  uint uStack_274;
  undefined1 *local_270;
  undefined4 uStack_268;
  int iStack_264;
  int local_260;
  int iStack_258;
  undefined4 uStack_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  UPrimitiveComponent *local_238;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  TMap<FName,FInitialPhysicsControl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialPhysicsControl,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FName local_1a0;
  TMap<FName,FInitialPhysicsControl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialPhysicsControl,0>_>
  *local_198;
  undefined8 uStack_190;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  TVector<double>_u_0 local_168;
  FWeakObjectPtr FStack_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr FStack_140;
  FWeakObjectPtr local_138;
  FWeakObjectPtr FStack_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr FStack_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr FStack_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_f8;
  FWeakObjectPtr FStack_f0;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr FStack_e0;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr FStack_d0;
  TVector<double>_u_0 local_c8;
  FWeakObjectPtr FStack_b0;
  undefined4 local_8c;
  int local_6c;
  int local_4c;
  
  puVar1 = &(this->InitialControls).field_0x10;
  iStack_278 = 0;
  iVar22 = *(int *)&(this->InitialControls).field_0x28;
  local_280 = &this->InitialControls;
  local_260 = 0;
  uStack_274 = 1;
  iStack_264 = 0;
  if (iVar22 != 0) {
    puVar27 = *(uint **)&(this->InitialControls).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar20 = *puVar27;
    while (uVar20 == 0) {
      iStack_278 = iStack_278 + 1;
      local_260 = local_260 + 0x20;
      iStack_264 = iVar22;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_278) goto LAB_14d9d54ac;
      uVar20 = puVar27[iStack_278];
    }
    uStack_274 = ~(uVar20 - 1) & uVar20;
    uVar19 = (ulonglong)uStack_274 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_250 = (int)lVar7;
    iStack_264 = local_260 + -1 + local_250;
    if (iVar22 < iStack_264) {
      iStack_264 = iVar22;
    }
  }
LAB_14d9d54ac:
  iStack_258 = *(int *)&(this->InitialControls).field_0x8 -
               *(int *)&(this->InitialControls).field_0x34;
  uVar20 = *(uint *)&(this->InitialControls).field_0x28;
  TStack_1c8._padding_ = CONCAT44(uStack_274,iStack_278);
  bVar18 = (byte)uVar20 & 0x1f;
  uStack_268 = 0xffffffff;
  uVar24 = uVar20 & 0xffffffe0;
  TStack_1c8.CurrentBitIndex = iStack_264;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar20 >> 5;
  TStack_1c8._28_4_ = local_8c;
  TStack_1c8.BaseBitIndex = local_260;
  uStack_1a8 = CONCAT44(uStack_254,iStack_258);
  uVar29 = 1 << bVar18;
  uVar31 = -1 << bVar18;
  local_res10 = param_1;
  local_270 = puVar1;
  local_1d0 = local_280;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar22 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar2 = *(uint *)&(this->InitialControls).field_0x28;
  uStack_2cc = uVar20;
  if (uVar20 != uVar2) {
    puVar3 = *(undefined1 **)&(this->InitialControls).field_0x20;
    puVar25 = puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      puVar25 = puVar3;
    }
    uVar20 = uVar31 & *(uint *)(puVar25 + (longlong)iVar21 * 4);
    while (uVar20 == 0) {
      iVar21 = iVar21 + 1;
      uVar24 = uVar24 + 0x20;
      uStack_2cc = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar21) goto LAB_14d9d55d0;
      uVar31 = 0xffffffff;
      uVar20 = *(uint *)(puVar25 + (longlong)iVar21 * 4);
    }
    uVar29 = ~(uVar20 - 1) & uVar20;
    uVar19 = (ulonglong)uVar29 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_24c = (int)lVar7;
    uStack_2cc = (uVar24 - 1) + local_24c;
    if ((int)uVar2 < (int)uStack_2cc) {
      uStack_2cc = uVar2;
    }
  }
LAB_14d9d55d0:
  local_2e8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
              &this->InitialControls;
  iStack_2c4 = local_6c;
  iStack_2c0 = *(int *)&(this->InitialControls).field_0x8 -
               *(int *)&(this->InitialControls).field_0x34;
  uStack_190 = CONCAT44(uVar29,iVar21);
  uStack_180 = CONCAT44(uStack_2cc,uVar31);
  local_178 = CONCAT44(local_6c,uVar24);
  uStack_170 = CONCAT44(uStack_2bc,iStack_2c0);
  iStack_2e0 = iVar21;
  uStack_2dc = uVar29;
  local_2d8 = puVar1;
  uStack_2d0 = uVar31;
  local_2c8 = uVar24;
  local_198 = (TMap<FName,FInitialPhysicsControl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInitialPhysicsControl,0>_>
               *)local_2e8;
  local_188 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
LAB_14d9d5640:
  pTVar10 = local_1d0;
  if (*(int *)(&local_1d0->field_0x0 + 8) - *(int *)(&local_1d0->field_0x0 + 0x34) !=
      (int)uStack_1a8) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<FName,FInitialPhysicsControl>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((TStack_1c8.CurrentBitIndex == uStack_180._4_4_) && (TStack_1c8.Array == local_188)) &&
     (pTVar10 == local_198)) {
    return;
  }
  lVar7 = *(longlong *)&pTVar10->field_0x0;
  this_01 = (FWeakObjectPtr)(lVar7 + 8 + (longlong)TStack_1c8.CurrentBitIndex * 0x168);
  FVar4 = *(FName *)((longlong)TStack_1c8.CurrentBitIndex * 0x168 + lVar7);
  local_2f0 = this_01;
  bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this_01 + 0x18));
  if (bVar11) {
    local_2b0 = 0;
    if (*(FWeakObjectPtr *)((longlong)this_01 + 0x20) != (FWeakObjectPtr)0x0) {
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this_01 + 0x18));
      pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                          ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                            *)&pUVar12[0xe].field_0x18);
      uVar20 = *(uint *)&(pTVar13->Elements).field_0x28;
      iStack_2e0 = 0;
      local_2c8 = 0;
      puVar1 = &(pTVar13->Elements).field_0x10;
      uStack_2dc = 1;
      uStack_2cc = 0;
      if (uVar20 != 0) {
        puVar27 = *(uint **)&(pTVar13->Elements).field_0x20;
        puVar28 = (uint *)puVar1;
        if (puVar27 != (uint *)0x0) {
          puVar28 = puVar27;
        }
        uVar24 = *puVar28;
        while (uVar24 == 0) {
          iStack_2e0 = iStack_2e0 + 1;
          local_2c8 = local_2c8 + 0x20;
          uStack_2cc = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2e0)
          goto LAB_14d9d576c;
          uVar24 = puVar28[iStack_2e0];
        }
        uStack_2dc = ~(uVar24 - 1) & uVar24;
        uVar19 = (ulonglong)uStack_2dc * 2 + 1;
        lVar7 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_248 = (int)lVar7;
        uStack_2cc = (local_2c8 - 1) + local_248;
        if ((int)uVar20 < (int)uStack_2cc) {
          uStack_2cc = uVar20;
        }
      }
LAB_14d9d576c:
      uVar24 = *(uint *)&(pTVar13->Elements).field_0x28;
      iStack_2c4 = local_4c;
      uVar31 = uVar24 & 0xffffffe0;
      iStack_2c0 = *(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34;
      TStack_228._padding_ = CONCAT44(uStack_2dc,iStack_2e0);
      uStack_2d0 = 0xffffffff;
      TStack_228.CurrentBitIndex = uStack_2cc;
      TStack_228.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)uVar24 >> 5;
      TStack_228._28_4_ = local_4c;
      TStack_228.BaseBitIndex = local_2c8;
      uStack_208 = CONCAT44(uStack_2bc,iStack_2c0);
      local_2e8 = pTVar13;
      local_2d8 = puVar1;
      local_2b8 = pTVar13;
      local_230 = pTVar13;
      TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar24 < 0) || ((int)uVar20 < (int)uVar24)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_01 = local_2f0;
      uVar20 = *(uint *)&(pTVar13->Elements).field_0x28;
      if (uVar24 != uVar20) {
        puVar3 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
        puVar25 = puVar1;
        if (puVar3 != (undefined1 *)0x0) {
          puVar25 = puVar3;
        }
        uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar22 * 4);
        while (uVar24 == 0) {
          iVar22 = iVar22 + 1;
          uVar31 = uVar31 + 0x20;
          uVar24 = uVar20;
          if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar22)
          goto LAB_14d9d5890;
          uVar24 = *(uint *)(puVar25 + (longlong)iVar22 * 4);
        }
        uVar19 = (ulonglong)(~(uVar24 - 1) & uVar24) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_244 = (int)lVar7;
        uVar24 = (uVar31 - 1) + local_244;
        if ((int)uVar20 < (int)uVar24) {
          uVar24 = uVar20;
        }
      }
LAB_14d9d5890:
      do {
        pTVar9 = local_230;
        if (*(int *)&(local_230->Elements).field_0x8 - *(int *)&(local_230->Elements).field_0x34 !=
            (int)uStack_208) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_228.CurrentBitIndex == uVar24) &&
            (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar9 == pTVar13)) goto LAB_14d9d5dc5;
        pUVar32 = *(UPrimitiveComponent **)
                   (*(longlong *)&pTVar9->Elements + (longlong)TStack_228.CurrentBitIndex * 0x10);
        FVar26.ObjectIndex = *(int *)&pUVar32->field_0x18;
        FVar26.ObjectSerialNumber = *(int *)&pUVar32->field_0x1c;
        if (FVar26 == *(FWeakObjectPtr *)((longlong)this_01 + 0x20)) goto LAB_14d9d58f8;
        TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
        pTVar13 = local_2b8;
      } while( true );
    }
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this_01 + 0x18));
    pUVar32 = *(UPrimitiveComponent **)(pUVar12 + 0xb);
    if (pUVar32 == (UPrimitiveComponent *)0x0) {
LAB_14d9d5957:
      pUVar32 = (UPrimitiveComponent *)0x0;
    }
    else {
      pUVar14 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar22 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar32->field_0x10 + 0x38) < iVar22) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar32->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
          &pUVar14->_padding_)) goto LAB_14d9d5957;
    }
    goto LAB_14d9d595a;
  }
  goto LAB_14d9d5dc5;
LAB_14d9d58f8:
  pUVar14 = Z_Construct_UClass_UMeshComponent_NoRegister();
  iVar22 = (int)pUVar14->_padding_;
  if ((*(int *)(*(longlong *)&pUVar32->field_0x10 + 0x38) < iVar22) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar32->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
      &pUVar14->_padding_)) {
    pUVar32 = (UPrimitiveComponent *)0x0;
  }
LAB_14d9d595a:
  if (pUVar32 == (UPrimitiveComponent *)0x0) goto LAB_14d9d5dc5;
  uVar20 = 0;
  local_238 = (UPrimitiveComponent *)0x0;
  bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_01);
  pUVar23 = (UPrimitiveComponent *)0x0;
  if (bVar11) {
    local_2a8 = 0;
    if (*(FWeakObjectPtr *)((longlong)this_01 + 8) != (FWeakObjectPtr)0x0) {
      pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
      local_2e8 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                              *)&pUVar12[0xe].field_0x18);
      uVar24 = *(uint *)&(local_2e8->Elements).field_0x28;
      iStack_2e0 = 0;
      local_2c8 = 0;
      uStack_2dc = 1;
      local_2f0 = (FWeakObjectPtr)&(local_2e8->Elements).field_0x10;
      iVar22 = 0;
      if (uVar24 != 0) {
        puVar27 = *(uint **)&(local_2e8->Elements).field_0x20;
        puVar28 = (uint *)local_2f0;
        if (puVar27 != (uint *)0x0) {
          puVar28 = puVar27;
        }
        uVar20 = *puVar28;
        while (uVar20 == 0) {
          iStack_2e0 = iStack_2e0 + 1;
          local_2c8 = local_2c8 + 0x20;
          uVar20 = uVar24;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_2e0)
          goto LAB_14d9d5a20;
          uVar20 = puVar28[iStack_2e0];
        }
        uStack_2dc = ~(uVar20 - 1) & uVar20;
        uVar19 = (ulonglong)uStack_2dc * 2 + 1;
        lVar7 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_240 = (int)lVar7;
        uVar20 = (local_2c8 - 1) + local_240;
        if ((int)uVar24 < (int)uVar20) {
          uVar20 = uVar24;
        }
LAB_14d9d5a20:
        iVar22 = *(int *)&(local_2e8->Elements).field_0x28;
      }
      uVar24 = *(uint *)&(local_2e8->Elements).field_0x28;
      iStack_2c4 = iStack_264;
      iStack_2c0 = *(int *)&(local_2e8->Elements).field_0x8 -
                   *(int *)&(local_2e8->Elements).field_0x34;
      uVar31 = uVar24 & 0xffffffe0;
      TStack_1f8._padding_ = CONCAT44(uStack_2dc,iStack_2e0);
      uStack_2d0 = 0xffffffff;
      TStack_1f8.CurrentBitIndex = uVar20;
      TStack_1f8.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar24 >> 5;
      TStack_1f8._28_4_ = iStack_264;
      TStack_1f8.BaseBitIndex = local_2c8;
      uStack_1d8 = CONCAT44(uStack_2bc,iStack_2c0);
      uStack_2cc = uVar20;
      local_2d8 = (undefined1 *)local_2f0;
      local_2b8 = local_2e8;
      local_200 = local_2e8;
      TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2f0;
      if ((((int)uVar24 < 0) || (iVar22 < (int)uVar24)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar13 = local_2b8;
      uVar20 = ((FWeakObjectPtr *)((longlong)local_2f0 + 0x18))->ObjectIndex;
      if (uVar24 != uVar20) {
        FVar26 = local_2f0;
        if (*(FWeakObjectPtr *)((longlong)local_2f0 + 0x10) != (FWeakObjectPtr)0x0) {
          FVar26 = *(FWeakObjectPtr *)((longlong)local_2f0 + 0x10);
        }
        uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar26 + (longlong)iVar21 * 4);
        while (uVar24 == 0) {
          iVar21 = iVar21 + 1;
          uVar31 = uVar31 + 0x20;
          uVar24 = uVar20;
          if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar21)
          goto LAB_14d9d5b40;
          uVar24 = *(uint *)((longlong)FVar26 + (longlong)iVar21 * 4);
        }
        uVar19 = (ulonglong)(~(uVar24 - 1) & uVar24) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_23c = (int)lVar7;
        uVar24 = local_23c + -1 + uVar31;
        if ((int)uVar20 < (int)uVar24) {
          uVar24 = uVar20;
        }
      }
LAB_14d9d5b40:
      do {
        pTVar9 = local_200;
        if (*(int *)&(local_200->Elements).field_0x8 - *(int *)&(local_200->Elements).field_0x34 !=
            (int)uStack_1d8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_1f8.CurrentBitIndex == uVar24) &&
            ((FWeakObjectPtr)TStack_1f8.Array == local_2f0)) &&
           (pUVar23 = local_238, pTVar9 == pTVar13)) goto LAB_14d9d5be6;
        pUVar23 = *(UPrimitiveComponent **)
                   (*(longlong *)&pTVar9->Elements + (longlong)TStack_1f8.CurrentBitIndex * 0x10);
        FVar5.ObjectIndex = *(int *)&pUVar23->field_0x18;
        FVar5.ObjectSerialNumber = *(int *)&pUVar23->field_0x1c;
        if (FVar5 == *(FWeakObjectPtr *)((longlong)this_01 + 8)) goto LAB_14d9d5bbb;
        TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
      } while( true );
    }
    pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
    pUVar23 = *(UPrimitiveComponent **)(pUVar12 + 0xb);
    if (pUVar23 != (UPrimitiveComponent *)0x0) {
LAB_14d9d5bbb:
      pUVar14 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar22 = (int)pUVar14->_padding_;
      if ((iVar22 <= *(int *)(*(longlong *)&pUVar23->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar23->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
          &pUVar14->_padding_)) goto LAB_14d9d5be6;
    }
    pUVar23 = (UPrimitiveComponent *)0x0;
  }
LAB_14d9d5be6:
  this_00 = local_res10;
  UPhysicsControlComponent::GetSetsContainingControl(local_res10,&local_290,FVar4);
  pFVar15 = TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
            ::Find((TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
                    *)&this_00->ControlRecords,FVar4);
  if (pFVar15 != (FPhysicsControlRecord *)0x0) {
    UPhysicsControlComponent::DestroyControl(this_00,FVar4,RemoveRecord);
    UPhysicsControlComponent::DestroyControlsInSet(this_00,FVar4);
  }
  pFVar16 = ::FName::FName(&local_1a0,"All");
  local_168._s_0.Z = (double)*(FWeakObjectPtr *)((longlong)this_01 + 0x100);
  FStack_150 = *(FWeakObjectPtr *)((longlong)this_01 + 0x108);
  local_168._s_0.X = (double)*(FWeakObjectPtr *)((longlong)this_01 + 0xf0);
  local_168._s_0.Y = (double)*(FWeakObjectPtr *)((longlong)this_01 + 0xf8);
  local_138 = *(FWeakObjectPtr *)((longlong)this_01 + 0x120);
  FStack_130 = *(FWeakObjectPtr *)((longlong)this_01 + 0x128);
  local_148 = *(FWeakObjectPtr *)((longlong)this_01 + 0x110);
  FStack_140 = *(FWeakObjectPtr *)((longlong)this_01 + 0x118);
  local_118 = *(FWeakObjectPtr *)((longlong)this_01 + 0x140);
  FStack_110 = *(FWeakObjectPtr *)((longlong)this_01 + 0x148);
  local_128 = *(FWeakObjectPtr *)((longlong)this_01 + 0x130);
  FStack_120 = *(FWeakObjectPtr *)((longlong)this_01 + 0x138);
  local_f8 = *(FWeakObjectPtr *)((longlong)this_01 + 0x30);
  FStack_f0 = *(FWeakObjectPtr *)((longlong)this_01 + 0x38);
  local_108 = *(FWeakObjectPtr *)((longlong)this_01 + 0x150);
  local_d8 = *(FWeakObjectPtr *)((longlong)this_01 + 0x50);
  FStack_d0 = *(FWeakObjectPtr *)((longlong)this_01 + 0x58);
  local_e8 = *(FWeakObjectPtr *)((longlong)this_01 + 0x40);
  FStack_e0 = *(FWeakObjectPtr *)((longlong)this_01 + 0x48);
  local_c8._s_0.Z = (double)*(FWeakObjectPtr *)((longlong)this_01 + 0x70);
  FStack_b0 = *(FWeakObjectPtr *)((longlong)this_01 + 0x78);
  local_c8._s_0.X = (double)*(FWeakObjectPtr *)((longlong)this_01 + 0x60);
  local_c8._s_0.Y = (double)*(FWeakObjectPtr *)((longlong)this_01 + 0x68);
  bVar11 = UPhysicsControlComponent::CreateNamedControl
                     (this_00,FVar4,pUVar23,*(FName *)((longlong)this_01 + 0x10),pUVar32,
                      *(FName *)((longlong)this_01 + 0x28),(FPhysicsControlData *)&local_f8,
                      (FPhysicsControlTarget *)&local_168._s_0,*pFVar16);
  iVar22 = local_290.ArrayNum;
  if (bVar11) {
    uVar19 = (ulonglong)local_290.ArrayNum;
    local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.ArrayNum = 0;
    local_2a0.ArrayMax = 0;
    pFVar16 = (FName *)(local_290.AllocatorInstance.Data + uVar19 * 8);
    FVar30.Data = local_290.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar19 != iVar22) {
        local_2f8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2f8);
      }
      if ((FName *)FVar30.Data == pFVar16) break;
      FVar6 = *(FName *)FVar30.Data;
      FPhysicsControlNameRecords::AddControl(&this_00->NameRecords,FVar4,FVar6);
      pTVar17 = FPhysicsControlNameRecords::GetControlNamesInSet(&this_00->NameRecords,FVar6);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&local_2a0,pTVar17);
      uVar19 = (ulonglong)(uint)local_290.ArrayNum;
      FVar30.Data = FVar30.Data + 8;
      this_00 = local_res10;
    }
    if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.AllocatorInstance.Data);
    }
  }
  if ((FName *)local_290.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
LAB_14d9d5dc5:
  TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  goto LAB_14d9d5640;
}

// GetPrivateStaticClass @ 14d9deb60

UClass * __cdecl UPhysicsControlInitializerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsControl",L"PhysicsControlInitializerComponent",
               &Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsControlInitializerComponent,0x3d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsControlInitializerComponent>,
               InternalVTableHelperCtorCaller<UPhysicsControlInitializerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsControlInitializerComponent.InnerSingleton;
}

// StaticRegisterNativesUPhysicsControlInitializerComponent @ 14d9edc40

void __cdecl
UPhysicsControlInitializerComponent::StaticRegisterNativesUPhysicsControlInitializerComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateControls @ 14d9f73b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UPhysicsControlInitializerComponent::execCreateControls
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UPhysicsControlComponent *pUVar2;
  UPhysicsControlComponent *local_res10;
  
  local_res10 = (UPhysicsControlComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UPhysicsControlComponent *)0x0) {
    UActorComponent::RegisterAllComponentTickFunctions((UActorComponent *)local_res10,true);
    CreateInitialCharacterControls((UPhysicsControlInitializerComponent *)param_1,pUVar2);
    CreateOrUpdateInitialControls((UPhysicsControlInitializerComponent *)param_1,pUVar2);
    CreateOrUpdateInitialBodyModifiers((UPhysicsControlInitializerComponent *)param_1,pUVar2);
  }
  return;
}

