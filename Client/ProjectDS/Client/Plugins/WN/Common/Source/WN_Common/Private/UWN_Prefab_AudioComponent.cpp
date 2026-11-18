// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 10

// StaticClass @ 1494817b0

UClass * __cdecl UWN_Prefab_AudioComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_AudioComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_AudioComponent,0xd40,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_AudioComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_AudioComponent>,local_res8,
               UAudioComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton;
}

// UWN_Prefab_AudioComponent @ 14948e800

UWN_Prefab_AudioComponent * __thiscall
UWN_Prefab_AudioComponent::UWN_Prefab_AudioComponent
          (UWN_Prefab_AudioComponent *this,FVTableHelper *param_1)

{
  UAudioComponent::UAudioComponent((UAudioComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &_vftable__for__IWN_PrefabComponent__;
  return this;
}

// UWN_Prefab_AudioComponent @ 14948e8a0

UWN_Prefab_AudioComponent * __thiscall
UWN_Prefab_AudioComponent::UWN_Prefab_AudioComponent
          (UWN_Prefab_AudioComponent *this,FObjectInitializer *param_1)

{
  UAudioComponent::UAudioComponent((UAudioComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &_vftable__for__IWN_PrefabComponent__;
  return this;
}

// ~UWN_Prefab_AudioComponent @ 1494909a0

void __thiscall
UWN_Prefab_AudioComponent::~UWN_Prefab_AudioComponent(UWN_Prefab_AudioComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &___7IWN_PrefabComponent__6B_;
  UAudioComponent::~UAudioComponent((UAudioComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1cc0

UClass * __cdecl UWN_Prefab_AudioComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_AudioComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_AudioComponent,0xd40,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_AudioComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_AudioComponent>,local_res8,
               UAudioComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a9190

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
UWN_Prefab_AudioComponent::OnUpdateTransform
          (UWN_Prefab_AudioComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FAudioDevice *this_00;
  FName *pFVar13;
  FName FStackX_8;
  code *apcStack_38 [5];
  undefined8 *puStack_10;
  
  USceneComponent::OnUpdateTransform((USceneComponent *)this,param_1,param_2);
  if ((((this->field_0x4c9 & 0x20) == 0) &&
      (this_00 = (FAudioDevice *)(**(code **)(*(longlong *)&this->field_0x250 + 0x88))(),
      this_00 != (FAudioDevice *)0x0)) && ((this->field_0x9a & 0x10) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_AudioUpdateComponentTransform ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UAudioComponent::OnUpdateTransform(EUpdateTransformFlags,ETeleportType)_::_11_::FStat_STAT_AudioUpdateComponentTransform>
           )0x0) {
        pFVar13 = ::FName::FName(&FStackX_8,"STAT_AudioUpdateComponentTransform");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateComponentTransform,*pFVar13
                   ,L"FAudioThreadTask.UpdateAudioComponentTransform",
                   "STATGROUP_AudioThreadCommands","STATCAT_Advanced",L"Audio Thread Commands",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    uVar1 = *(undefined8 *)&this->field_0x1f0;
    uVar2 = *(undefined8 *)&this->field_0x1f8;
    uVar3 = *(undefined8 *)&this->field_0x200;
    uVar4 = *(undefined8 *)&this->field_0x208;
    uVar5 = *(undefined8 *)&this->field_0x210;
    uVar6 = *(undefined8 *)&this->field_0x218;
    uVar7 = *(undefined8 *)&this->field_0x220;
    uVar8 = *(undefined8 *)&this->field_0x228;
    uVar9 = *(undefined8 *)&this->field_0x230;
    uVar10 = *(undefined8 *)&this->field_0x238;
    uVar11 = *(undefined8 *)&this->field_0x240;
    uVar12 = *(undefined8 *)&this->field_0x248;
    apcStack_38[0] = (code *)0x0;
    puStack_10 = FMemory::Malloc(0x70,0x10);
    puStack_10[2] = uVar1;
    puStack_10[3] = uVar2;
    *puStack_10 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UAudioComponent::OnUpdateTransform'::`11'::<lambda_1>,1,1>
                   ::_vftable_;
    puStack_10[4] = uVar3;
    puStack_10[5] = uVar4;
    puStack_10[6] = uVar5;
    puStack_10[7] = uVar6;
    puStack_10[8] = uVar7;
    puStack_10[9] = uVar8;
    puStack_10[10] = uVar9;
    puStack_10[0xb] = uVar10;
    puStack_10[0xc] = uVar11;
    puStack_10[0xd] = uVar12;
    if (puStack_10 != (undefined8 *)0xfffffffffffffff0) {
      apcStack_38[0] =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UAudioComponent::OnUpdateTransform'::__l11::<lambda_1>,void,FActiveSound_&>
           ::Call;
    }
    FAudioDevice::SendCommandToActiveSounds
              (this_00,*(ulong64 *)&this->field_0xc48,
               (TUniqueFunction<void___cdecl(FActiveSound_&)> *)apcStack_38,(TStatId)0x154f11430);
  }
  return;
}

// StaticRegisterNativesUWN_Prefab_AudioComponent @ 1494ae300

void __cdecl UWN_Prefab_AudioComponent::StaticRegisterNativesUWN_Prefab_AudioComponent(void)

{
  return;
}

// _getUObject @ 1494b2cb0

UObject * __thiscall UWN_Prefab_AudioComponent::_getUObject(UWN_Prefab_AudioComponent *this)

{
  return (UObject *)&this[-1].field_0xd18;
}

// _getUObject`adjustor{552}' @ 1494b2cbc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_AudioComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_AudioComponent::_getUObject_adjustor_552__(UWN_Prefab_AudioComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_AudioComponent *)&this[-1].field_0xb18);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{3344}' @ 1494b2cd0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_AudioComponent::_getUObject`adjustor{3344}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_AudioComponent::_getUObject_adjustor_3344__(UWN_Prefab_AudioComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_AudioComponent *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

