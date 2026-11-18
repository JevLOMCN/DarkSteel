// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 23

// StaticClass @ 149482850

UClass * __cdecl AWN_AmbientSoundVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_AmbientSoundVolume",
               &Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton,
               StaticRegisterNativesAWN_AmbientSoundVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_AmbientSoundVolume>,
               InternalVTableHelperCtorCaller<AWN_AmbientSoundVolume>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton;
}

// AWN_AmbientSoundVolume @ 14948c040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_AmbientSoundVolume * __thiscall
AWN_AmbientSoundVolume::AWN_AmbientSoundVolume(AWN_AmbientSoundVolume *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_AmbientSoundVolume__6B_;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_AmbientSoundVolumeComponent *)0x0;
  return this;
}

// AWN_AmbientSoundVolume @ 14948c080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_AmbientSoundVolume * __thiscall
AWN_AmbientSoundVolume::AWN_AmbientSoundVolume
          (AWN_AmbientSoundVolume *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UWN_AmbientSoundVolumeComponent *pUVar7;
  FLinearColor_u_0 *pFVar8;
  FName local_res8;
  FLinearColor_u_0 local_18;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_AmbientSoundVolume__6B_;
  (this->VolumeComponent).field0_0x0.DebugPtr = (UWN_AmbientSoundVolumeComponent *)0x0;
  pFVar5 = ::FName::FName(&local_res8,L"VolumeComponent");
  FVar2 = *pFVar5;
  pUVar6 = UWN_AmbientSoundVolumeComponent::StaticClass();
  pUVar7 = (UWN_AmbientSoundVolumeComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar6,pUVar6,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar7 == (UWN_AmbientSoundVolumeComponent *)0x0)) {
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UWN_AmbientSoundVolumeComponent *)0x0) {
      return this;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->VolumeComponent).field0_0x0.DebugPtr = pUVar7;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar7 = (this->VolumeComponent).field0_0x0.DebugPtr;
  this->_padding_ = (longlong)pUVar7;
  pcVar3 = *(code **)(*(longlong *)pUVar7 + 0x788);
  pFVar5 = ::FName::FName(&local_res8,"NoCollision");
  (*pcVar3)(pUVar7,*pFVar5,1);
  pUVar7 = (this->VolumeComponent).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar7 + 0x5f8))(pUVar7,0);
  pUVar7 = (this->VolumeComponent).field0_0x0.DebugPtr;
  puVar1 = &pUVar7->field_0x570;
  *(undefined4 *)puVar1 = 0x3f8ccccd;
  *(undefined4 *)&pUVar7->field_0x574 = 0x3f000000;
  *(undefined4 *)&pUVar7->field_0x578 = 0x3f000000;
  *(undefined4 *)&pUVar7->field_0x57c = 0x3dcccccd;
  pFVar8 = &local_18;
  if (pUVar7->field_0x583 != '\0') {
    pFVar8 = (FLinearColor_u_0 *)puVar1;
  }
  local_18 = FLinearColor::Red.field0_0x0;
  uVar4 = *(undefined8 *)((longlong)pFVar8 + 8);
  *(undefined8 *)puVar1 = *(undefined8 *)pFVar8;
  *(undefined8 *)&pUVar7->field_0x578 = uVar4;
  return this;
}

// ~AWN_AmbientSoundVolume @ 14948fd40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_AmbientSoundVolume::~AWN_AmbientSoundVolume(AWN_AmbientSoundVolume *this)

{
  this->_padding_ = (longlong)&___7AWN_AmbientSoundVolume__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 1494963b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_AmbientSoundVolume::BeginDestroy(AWN_AmbientSoundVolume *this)

{
  (**(code **)(this->_padding_ + 0x768))();
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 149496410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_AmbientSoundVolume::BeginPlay(AWN_AmbientSoundVolume *this)

{
  AActor::BeginPlay((AActor *)this);
                    /* WARNING: Could not recover jumptable at 0x000149496429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this);
  return;
}

// Destroyed @ 14949c910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_AmbientSoundVolume::Destroyed(AWN_AmbientSoundVolume *this)

{
  (**(code **)(this->_padding_ + 0x768))();
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 14949dea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_AmbientSoundVolume::EndPlay(AWN_AmbientSoundVolume *this,Type param_1)

{
  (**(code **)(this->_padding_ + 0x768))();
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetBounds @ 1494a05a0

/* WARNING: Enum "Type": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
AWN_AmbientSoundVolume::GetBounds
          (AWN_AmbientSoundVolume *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_AmbientSoundVolumeComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x598))(pUVar1,__return_storage_ptr__,&pUVar1->field_0x1f0);
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

// GetPrivateStaticClass @ 1494a1250

UClass * __cdecl AWN_AmbientSoundVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_AmbientSoundVolume",
               &Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton,
               StaticRegisterNativesAWN_AmbientSoundVolume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_AmbientSoundVolume>,
               InternalVTableHelperCtorCaller<AWN_AmbientSoundVolume>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton;
}

// GetTimeEnter @ 1494a2fd0

double __thiscall
AWN_AmbientSoundVolume::GetTimeEnter(AWN_AmbientSoundVolume *this,EWN_VolumeObserverMode param_1)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  FWN_VolumeObserverInfo *pFVar2;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_AmbientSoundVolumeComponent *)0x0) {
    pFVar2 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
             ::Find(&pUVar1->field_0x648,param_1);
    if ((pFVar2 != (FWN_VolumeObserverInfo *)0x0) && (pFVar2->bIsInVolume == true)) {
      return pFVar2->EnterTime;
    }
  }
  return __real_bff0000000000000;
}

// GetTimeLeave @ 1494a30b0

double __thiscall
AWN_AmbientSoundVolume::GetTimeLeave(AWN_AmbientSoundVolume *this,EWN_VolumeObserverMode param_1)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  FWN_VolumeObserverInfo *pFVar2;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_AmbientSoundVolumeComponent *)0x0) {
    pFVar2 = TMapBase<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EWN_VolumeObserverMode,FWN_VolumeObserverInfo,0>_>
             ::Find(&pUVar1->field_0x648,param_1);
    if ((pFVar2 != (FWN_VolumeObserverInfo *)0x0) && (pFVar2->bIsInVolume == false)) {
      return pFVar2->LeaveTime;
    }
  }
  return __real_bff0000000000000;
}

// GetTimeSinceEnter @ 1494a3190

double __thiscall
AWN_AmbientSoundVolume::GetTimeSinceEnter
          (AWN_AmbientSoundVolume *this,EWN_VolumeObserverMode param_1)

{
  UWN_AmbientSoundVolumeComponent *this_00;
  double dVar1;
  
  this_00 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (this_00 == (UWN_AmbientSoundVolumeComponent *)0x0) {
    return __real_bff0000000000000;
  }
  dVar1 = UWN_VolumeComponent::GetTimeSinceEnter((UWN_VolumeComponent *)this_00,param_1);
  return dVar1;
}

// GetTimeSinceLeave @ 1494a3240

double __thiscall
AWN_AmbientSoundVolume::GetTimeSinceLeave
          (AWN_AmbientSoundVolume *this,EWN_VolumeObserverMode param_1)

{
  UWN_AmbientSoundVolumeComponent *this_00;
  double dVar1;
  
  this_00 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (this_00 == (UWN_AmbientSoundVolumeComponent *)0x0) {
    return __real_bff0000000000000;
  }
  dVar1 = UWN_VolumeComponent::GetTimeSinceLeave((UWN_VolumeComponent *)this_00,param_1);
  return dVar1;
}

// OnConstruction @ 1494a67f0

void __thiscall
AWN_AmbientSoundVolume::OnConstruction(AWN_AmbientSoundVolume *this,TTransform<double> *param_1)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  bool bVar2;
  UWN_CommonSubsystem *this_00;
  
  if ((((this->_padding_ & 0x50) == 0) &&
      (pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr,
      pUVar1 != (UWN_AmbientSoundVolumeComponent *)0x0)) && ((bool)pUVar1->field_0x618 == false)) {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar1->field_0x588);
    if (bVar2) {
      this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar1->field_0x588);
      UWN_CommonSubsystem::CheckVolumeOverlap(this_00,(UWN_VolumeComponent *)pUVar1);
    }
    return;
  }
  return;
}

// PostDuplicate @ 1494a9260

void __thiscall AWN_AmbientSoundVolume::PostDuplicate(AWN_AmbientSoundVolume *this,bool param_1)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FGuid *pFVar5;
  FGuid local_18;
  
  if ((!param_1) &&
     ((this->VolumeComponent).field0_0x0.DebugPtr != (UWN_AmbientSoundVolumeComponent *)0x0)) {
    pFVar5 = FGuid::NewGuid(&local_18);
    uVar2 = pFVar5->B;
    uVar3 = pFVar5->C;
    uVar4 = pFVar5->D;
    pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
    (pUVar1->AmbientSoundInfo).Guid.A = pFVar5->A;
    (pUVar1->AmbientSoundInfo).Guid.B = uVar2;
    (pUVar1->AmbientSoundInfo).Guid.C = uVar3;
    (pUVar1->AmbientSoundInfo).Guid.D = uVar4;
  }
  return;
}

// RegisterSubsystem @ 1494a98f0

void __thiscall AWN_AmbientSoundVolume::RegisterSubsystem(AWN_AmbientSoundVolume *this)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_AmbientSoundVolumeComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494a98ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0xaa8))();
    return;
  }
  return;
}

// StaticRegisterNativesAWN_AmbientSoundVolume @ 1494ae100

void __cdecl AWN_AmbientSoundVolume::StaticRegisterNativesAWN_AmbientSoundVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_AWN_AmbientSoundVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnRegisterSubsystem @ 1494af1b0

void __thiscall AWN_AmbientSoundVolume::UnRegisterSubsystem(AWN_AmbientSoundVolume *this)

{
  UWN_AmbientSoundVolumeComponent *pUVar1;
  
  pUVar1 = (this->VolumeComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_AmbientSoundVolumeComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494af1bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0xab0))();
    return;
  }
  return;
}

// execGetTimeEnter @ 1494b3150

void __cdecl
AWN_AmbientSoundVolume::execGetTimeEnter(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetTimeLeave @ 1494b34d0

void __cdecl
AWN_AmbientSoundVolume::execGetTimeLeave(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetTimeSinceEnter @ 1494b3850

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
AWN_AmbientSoundVolume::execGetTimeSinceEnter(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetTimeSinceLeave @ 1494b3c30

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
AWN_AmbientSoundVolume::execGetTimeSinceLeave(UObject *param_1,FFrame *param_2,void *param_3)

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

