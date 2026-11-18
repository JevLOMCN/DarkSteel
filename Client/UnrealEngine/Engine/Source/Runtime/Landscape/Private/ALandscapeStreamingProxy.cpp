// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 11

// StaticClass @ 145ef73d0

UClass * __cdecl ALandscapeStreamingProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeStreamingProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ALandscapeProxy::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeStreamingProxy",
               &Z_Registration_Info_UClass_ALandscapeStreamingProxy.InnerSingleton,
               StaticRegisterNativesALandscapeStreamingProxy,0x868,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeStreamingProxy>,
               InternalVTableHelperCtorCaller<ALandscapeStreamingProxy>,local_res8,
               ALandscapeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeStreamingProxy.InnerSingleton;
}

// ALandscapeStreamingProxy @ 145f025b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeStreamingProxy * __thiscall
ALandscapeStreamingProxy::ALandscapeStreamingProxy
          (ALandscapeStreamingProxy *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  ALandscapeProxy::ALandscapeProxy((ALandscapeProxy *)this,param_1);
  this_00 = &(this->LandscapeActorRef).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&(this->OverriddenSharedProperties).Elements = 0;
  *(undefined8 *)&(this->OverriddenSharedProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverriddenSharedProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x34 = 0;
  (this->OverriddenSharedProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverriddenSharedProperties).HashSize = 0;
  return this;
}

// ALandscapeStreamingProxy @ 145f02660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ALandscapeStreamingProxy * __thiscall
ALandscapeStreamingProxy::ALandscapeStreamingProxy
          (ALandscapeStreamingProxy *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  ALandscapeProxy::ALandscapeProxy((ALandscapeProxy *)this,param_1);
  this_00 = &(this->LandscapeActorRef).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LandscapeActorRef).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&(this->OverriddenSharedProperties).Elements = 0;
  *(undefined8 *)&(this->OverriddenSharedProperties).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverriddenSharedProperties).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverriddenSharedProperties).Elements.field_0x34 = 0;
  (this->OverriddenSharedProperties).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverriddenSharedProperties).HashSize = 0;
  return this;
}

// ~ALandscapeStreamingProxy @ 145f03d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ALandscapeStreamingProxy::~ALandscapeStreamingProxy(ALandscapeStreamingProxy *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__APartitionActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  (this->OverriddenSharedProperties).HashSize = 0;
  FVar1 = (this->OverriddenSharedProperties).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OverriddenSharedProperties).Elements);
  pvVar2 = *(void **)&(this->LandscapeActorRef).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  ALandscapeProxy::~ALandscapeProxy((ALandscapeProxy *)this);
  return;
}

// GetLandscapeActor @ 145f0ffb0

ALandscape * __thiscall ALandscapeStreamingProxy::GetLandscapeActor(ALandscapeStreamingProxy *this)

{
  ALandscape *pAVar1;
  
  pAVar1 = TSoftObjectPtr<ALandscape>::Get(&this->LandscapeActorRef);
  return pAVar1;
}

// GetLandscapeActor @ 145f0ffd0

ALandscape * __thiscall ALandscapeStreamingProxy::GetLandscapeActor(ALandscapeStreamingProxy *this)

{
  ALandscape *pAVar1;
  
  pAVar1 = TSoftObjectPtr<ALandscape>::Get(&this->LandscapeActorRef);
  return pAVar1;
}

// GetLandscapeHoleMaterial @ 145f100a0

UMaterialInterface * __thiscall
ALandscapeStreamingProxy::GetLandscapeHoleMaterial(ALandscapeStreamingProxy *this)

{
  longlong *plVar1;
  UMaterialInterface *pUVar2;
  
  pUVar2 = (UMaterialInterface *)this->_padding_;
  if (pUVar2 == (UMaterialInterface *)0x0) {
    plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x770))();
    pUVar2 = (UMaterialInterface *)0x0;
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145f100cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (UMaterialInterface *)
               (**(code **)(*plVar1 + 0x788))(plVar1,*(code **)(*plVar1 + 0x788));
      return pUVar2;
    }
  }
  return pUVar2;
}

// GetLandscapeMaterial @ 145f10320

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall
ALandscapeStreamingProxy::GetLandscapeMaterial(ALandscapeStreamingProxy *this,schar param_1)

{
  UWorld *pUVar1;
  int *piVar2;
  longlong *plVar3;
  UMaterialInterface *pUVar4;
  UMaterial *pUVar5;
  int *piVar6;
  
  if ((param_1 != -1) && (pUVar1 = AActor::GetWorld((AActor *)this), pUVar1 != (UWorld *)0x0)) {
    piVar2 = (int *)this->_padding_;
    piVar6 = piVar2 + (longlong)(int)this->_padding_ * 4;
    for (; piVar2 != piVar6; piVar2 = piVar2 + 4) {
      if ((*piVar2 == (int)param_1) &&
         (*(UMaterialInterface **)(piVar2 + 2) != (UMaterialInterface *)0x0)) {
        return *(UMaterialInterface **)(piVar2 + 2);
      }
    }
  }
  pUVar5 = (UMaterial *)this->_padding_;
  if (pUVar5 == (UMaterial *)0x0) {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x770))();
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145f103ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UMaterialInterface *)
               (**(code **)(*plVar3 + 0x780))(plVar3,param_1,*(code **)(*plVar3 + 0x780));
      return pUVar4;
    }
    pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  return (UMaterialInterface *)pUVar5;
}

// GetPrivateStaticClass @ 145f12ae0

UClass * __cdecl ALandscapeStreamingProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeStreamingProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = ALandscapeProxy::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeStreamingProxy",
               &Z_Registration_Info_UClass_ALandscapeStreamingProxy.InnerSingleton,
               StaticRegisterNativesALandscapeStreamingProxy,0x868,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeStreamingProxy>,
               InternalVTableHelperCtorCaller<ALandscapeStreamingProxy>,local_res8,
               ALandscapeProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeStreamingProxy.InnerSingleton;
}

// SetLandscapeActor @ 145f1e040

void __thiscall
ALandscapeStreamingProxy::SetLandscapeActor(ALandscapeStreamingProxy *this,ALandscape *param_1)

{
  ALandscape *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ALandscape *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->LandscapeActorRef).SoftObjectPtr,(FObjectPtr)local_res8);
  return;
}

// StaticRegisterNativesALandscapeStreamingProxy @ 145f1ef60

void __cdecl ALandscapeStreamingProxy::StaticRegisterNativesALandscapeStreamingProxy(void)

{
  return;
}

