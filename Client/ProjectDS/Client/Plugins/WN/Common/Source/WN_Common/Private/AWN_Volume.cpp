// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 22

// StaticClass @ 149484250

UClass * __cdecl AWN_Volume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Volume",
               &Z_Registration_Info_UClass_AWN_Volume.InnerSingleton,StaticRegisterNativesAWN_Volume
               ,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_Volume>,InternalVTableHelperCtorCaller<AWN_Volume>,local_res8
               ,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Volume.InnerSingleton;
}

// AWN_Volume @ 14948cb00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_Volume * __thiscall AWN_Volume::AWN_Volume(AWN_Volume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_Volume__6B_;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_VolumeComponent *)0x0;
  return this;
}

// AWN_Volume @ 14948cb40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_Volume * __thiscall AWN_Volume::AWN_Volume(AWN_Volume *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_Volume__6B_;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_VolumeComponent *)0x0;
  return this;
}

// ~AWN_Volume @ 14948fed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Volume::~AWN_Volume(AWN_Volume *this)

{
  this->_padding_ = (longlong)&___7AWN_Volume__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 1494963e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Volume::BeginDestroy(AWN_Volume *this)

{
  (**(code **)(this->_padding_ + 0x768))();
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 149496440

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Volume::BeginPlay(AWN_Volume *this)

{
  AActor::BeginPlay((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000149496459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this);
  return;
}

// Destroyed @ 14949c940

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Volume::Destroyed(AWN_Volume *this)

{
  (**(code **)(this->_padding_ + 0x768))();
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 14949dee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_Volume::EndPlay(AWN_Volume *this,Type param_1)

{
  (**(code **)(this->_padding_ + 0x768))();
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetBounds @ 1494a0620

/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
AWN_Volume::GetBounds(AWN_Volume *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  UWN_VolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_VolumeComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x598))(pUVar1,__return_storage_ptr__,&pUVar1->_padding_);
    return __return_storage_ptr__;
  }
  if (1 < (byte)Common._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&Common);
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1494a16d0

UClass * __cdecl AWN_Volume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Volume",
               &Z_Registration_Info_UClass_AWN_Volume.InnerSingleton,StaticRegisterNativesAWN_Volume
               ,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_Volume>,InternalVTableHelperCtorCaller<AWN_Volume>,local_res8
               ,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Volume.InnerSingleton;
}

// GetTimeEnter @ 1494a3020

double __thiscall AWN_Volume::GetTimeEnter(AWN_Volume *this,EWN_VolumeObserverMode param_1)

{
  UWN_VolumeComponent *pUVar1;
  FWN_VolumeObserverInfo *pFVar2;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_VolumeComponent *)0x0) {
    pFVar2 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
             ::Find(&pUVar1->ObserverInfo,param_1);
    if ((pFVar2 != (FWN_VolumeObserverInfo *)0x0) && (pFVar2->bIsInVolume == true)) {
      return pFVar2->EnterTime;
    }
  }
  return __real_bff0000000000000;
}

// GetTimeLeave @ 1494a3100

double __thiscall AWN_Volume::GetTimeLeave(AWN_Volume *this,EWN_VolumeObserverMode param_1)

{
  UWN_VolumeComponent *pUVar1;
  FWN_VolumeObserverInfo *pFVar2;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_VolumeComponent *)0x0) {
    pFVar2 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
             ::Find(&pUVar1->ObserverInfo,param_1);
    if ((pFVar2 != (FWN_VolumeObserverInfo *)0x0) && (pFVar2->bIsInVolume == false)) {
      return pFVar2->LeaveTime;
    }
  }
  return __real_bff0000000000000;
}

// GetTimeSinceEnter @ 1494a31b0

double __thiscall AWN_Volume::GetTimeSinceEnter(AWN_Volume *this,EWN_VolumeObserverMode param_1)

{
  UWN_VolumeComponent *this_00;
  double dVar1;
  
  this_00 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (this_00 == (UWN_VolumeComponent *)0x0) {
    return __real_bff0000000000000;
  }
  dVar1 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,param_1);
  return dVar1;
}

// GetTimeSinceLeave @ 1494a3260

double __thiscall AWN_Volume::GetTimeSinceLeave(AWN_Volume *this,EWN_VolumeObserverMode param_1)

{
  UWN_VolumeComponent *this_00;
  double dVar1;
  
  this_00 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (this_00 == (UWN_VolumeComponent *)0x0) {
    return __real_bff0000000000000;
  }
  dVar1 = UWN_VolumeComponent::GetTimeSinceLeave(this_00,param_1);
  return dVar1;
}

// OnConstruction @ 1494a6c50

void __thiscall AWN_Volume::OnConstruction(AWN_Volume *this,TTransform<double> *param_1)

{
  UWN_VolumeComponent *pUVar1;
  bool bVar2;
  UWN_CommonSubsystem *this_00;
  
  if ((((this->_padding_ & 0x50) == 0) &&
      (pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr, pUVar1 != (UWN_VolumeComponent *)0x0))
     && (pUVar1->bCanOverlapVolume == false)) {
    bVar2 = FWeakObjectPtr::IsValid(&(pUVar1->CommonSubsystem).WeakPtr);
    if (bVar2) {
      this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(&(pUVar1->CommonSubsystem).WeakPtr);
      UWN_CommonSubsystem::CheckVolumeOverlap(this_00,pUVar1);
    }
    return;
  }
  return;
}

// RegisterSubsystem @ 1494a9910

void __thiscall AWN_Volume::RegisterSubsystem(AWN_Volume *this)

{
  UWN_VolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_VolumeComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494a991f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0xaa8))();
    return;
  }
  return;
}

// StaticRegisterNativesAWN_Volume @ 1494ae1c0

void __cdecl AWN_Volume::StaticRegisterNativesAWN_Volume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AWN_Volume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnRegisterSubsystem @ 1494af1d0

void __thiscall AWN_Volume::UnRegisterSubsystem(AWN_Volume *this)

{
  UWN_VolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_VolumeComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494af1df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0xab0))();
    return;
  }
  return;
}

// execGetTimeEnter @ 1494b3280

void __cdecl AWN_Volume::execGetTimeEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x11].field_0x18;
  uVar7 = __real_bff0000000000000;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x650) != *(int *)(lVar2 + 0x67c))) {
    lVar6 = *(longlong *)(lVar2 + 0x688);
    if (*(longlong *)(lVar2 + 0x688) == 0) {
      lVar6 = lVar2 + 0x680;
    }
    iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x690) - 1) & (ulonglong)local_res8[0]) *
                             4);
    if (iVar3 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar3 * 0x30 + *(longlong *)(lVar2 + 0x648));
        if (*pbVar4 == local_res8[0]) {
          pbVar5 = pbVar4 + 8;
          if (pbVar4 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
          }
          if ((pbVar5 != (byte *)0x0) && (*pbVar5 == 1)) {
            uVar7 = *(undefined8 *)(pbVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(pbVar4 + 0x28);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)param_3 = uVar7;
  return;
}

// execGetTimeLeave @ 1494b3600

void __cdecl AWN_Volume::execGetTimeLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x11].field_0x18;
  uVar7 = __real_bff0000000000000;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x650) != *(int *)(lVar2 + 0x67c))) {
    lVar6 = *(longlong *)(lVar2 + 0x688);
    if (*(longlong *)(lVar2 + 0x688) == 0) {
      lVar6 = lVar2 + 0x680;
    }
    iVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)(lVar2 + 0x690) - 1) & (ulonglong)local_res8[0]) *
                             4);
    if (iVar3 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar3 * 0x30 + *(longlong *)(lVar2 + 0x648));
        if (*pbVar4 == local_res8[0]) {
          pbVar5 = pbVar4 + 8;
          if (pbVar4 == (byte *)0x0) {
            pbVar5 = (byte *)0x0;
          }
          if ((pbVar5 != (byte *)0x0) && (*pbVar5 == 0)) {
            uVar7 = *(undefined8 *)(pbVar5 + 0x10);
          }
          break;
        }
        iVar3 = *(int *)(pbVar4 + 0x28);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)param_3 = uVar7;
  return;
}

// execGetTimeSinceEnter @ 1494b39a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AWN_Volume::execGetTimeSinceEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *this;
  int iVar2;
  byte *pbVar3;
  UWorld *pUVar4;
  int *piVar5;
  byte *pbVar6;
  double dVar7;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UActorComponent **)&param_1[0x11].field_0x18;
  dVar7 = __real_bff0000000000000;
  if ((this != (UActorComponent *)0x0) &&
     ((int)this[8].PrimaryComponentTick._padding_ !=
      *(int *)((longlong)&this[8].AssetUserData.AllocatorInstance.Data + 4))) {
    piVar5 = *(int **)&this[8].field_0x88;
    if (*(int **)&this[8].field_0x88 == (int *)0x0) {
      piVar5 = &this[8].AssetUserData.ArrayNum;
    }
    iVar2 = piVar5[(ulonglong)(this[8].UCSSerializationIndex - 1) & (ulonglong)local_res8[0]];
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + this[8].PrimaryComponentTick._padding_);
        if (*pbVar3 == local_res8[0]) {
          pbVar6 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar6 = (byte *)0x0;
          }
          if ((pbVar6 != (byte *)0x0) && (*pbVar6 == 1)) {
            pUVar4 = this->WorldPrivate;
            if (pUVar4 == (UWorld *)0x0) {
              pUVar4 = UActorComponent::GetWorld_Uncached(this);
            }
            dVar7 = pUVar4->TimeSeconds - *(double *)(pbVar6 + 8);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(double *)param_3 = dVar7;
  return;
}

// execGetTimeSinceLeave @ 1494b3d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl AWN_Volume::execGetTimeSinceLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *this;
  int iVar2;
  byte *pbVar3;
  UWorld *pUVar4;
  int *piVar5;
  byte *pbVar6;
  double dVar7;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UActorComponent **)&param_1[0x11].field_0x18;
  dVar7 = __real_bff0000000000000;
  if ((this != (UActorComponent *)0x0) &&
     ((int)this[8].PrimaryComponentTick._padding_ !=
      *(int *)((longlong)&this[8].AssetUserData.AllocatorInstance.Data + 4))) {
    piVar5 = *(int **)&this[8].field_0x88;
    if (*(int **)&this[8].field_0x88 == (int *)0x0) {
      piVar5 = &this[8].AssetUserData.ArrayNum;
    }
    iVar2 = piVar5[(ulonglong)(this[8].UCSSerializationIndex - 1) & (ulonglong)local_res8[0]];
    if (iVar2 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar2 * 0x30 + this[8].PrimaryComponentTick._padding_);
        if (*pbVar3 == local_res8[0]) {
          pbVar6 = pbVar3 + 8;
          if (pbVar3 == (byte *)0x0) {
            pbVar6 = (byte *)0x0;
          }
          if ((pbVar6 != (byte *)0x0) && (*pbVar6 == 0)) {
            pUVar4 = this->WorldPrivate;
            if (pUVar4 == (UWorld *)0x0) {
              pUVar4 = UActorComponent::GetWorld_Uncached(this);
            }
            dVar7 = pUVar4->TimeSeconds - *(double *)(pbVar6 + 0x10);
          }
          break;
        }
        iVar2 = *(int *)(pbVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  *(double *)param_3 = dVar7;
  return;
}

