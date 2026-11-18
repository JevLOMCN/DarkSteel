// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 12

// StaticClass @ 14a043730

UClass * __cdecl AWN_UDS_GlobalVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_UDS_GlobalVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_GlobalVolume",
               &Z_Registration_Info_UClass_AWN_UDS_GlobalVolume.InnerSingleton,
               StaticRegisterNativesAWN_UDS_GlobalVolume,0x1558,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_UDS_GlobalVolume>,
               InternalVTableHelperCtorCaller<AWN_UDS_GlobalVolume>,local_res8,
               AWN_UDS_Volume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_UDS_GlobalVolume.InnerSingleton;
}

// AWN_UDS_GlobalVolume @ 14a046d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_UDS_GlobalVolume * __thiscall
AWN_UDS_GlobalVolume::AWN_UDS_GlobalVolume(AWN_UDS_GlobalVolume *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_UDS_Volume__6B_;
  FWN_Ultra_Dynamic_Sky::FWN_Ultra_Dynamic_Sky((FWN_Ultra_Dynamic_Sky *)&this->_padding_);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7AWN_UDS_GlobalVolume__6B_;
  (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~AWN_UDS_GlobalVolume @ 14a0480d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_GlobalVolume::~AWN_UDS_GlobalVolume(AWN_UDS_GlobalVolume *this)

{
  this->_padding_ = (longlong)&___7AWN_UDS_Volume__6B_;
  FWN_Ultra_Dynamic_Sky::~FWN_Ultra_Dynamic_Sky((FWN_Ultra_Dynamic_Sky *)&this->_padding_);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14a04b1f0

UClass * __cdecl AWN_UDS_GlobalVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_UDS_GlobalVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Env",L"WN_UDS_GlobalVolume",
               &Z_Registration_Info_UClass_AWN_UDS_GlobalVolume.InnerSingleton,
               StaticRegisterNativesAWN_UDS_GlobalVolume,0x1558,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_UDS_GlobalVolume>,
               InternalVTableHelperCtorCaller<AWN_UDS_GlobalVolume>,local_res8,
               AWN_UDS_Volume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_UDS_GlobalVolume.InnerSingleton;
}

// StaticRegisterNativesAWN_UDS_GlobalVolume @ 14a04ba50

void __cdecl AWN_UDS_GlobalVolume::StaticRegisterNativesAWN_UDS_GlobalVolume(void)

{
  return;
}

// AWN_UDS_GlobalVolume @ 14a04f7e0

AWN_UDS_GlobalVolume * __thiscall
AWN_UDS_GlobalVolume::AWN_UDS_GlobalVolume(AWN_UDS_GlobalVolume *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  AWN_UDS_Volume::AWN_UDS_Volume((AWN_UDS_Volume *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_UDS_GlobalVolume__6B_;
  (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->UDS_Subsystem).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// BeginDestroy @ 14a0502f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_GlobalVolume::BeginDestroy(AWN_UDS_GlobalVolume *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (((bVar1) &&
      (pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr),
      this != (AWN_UDS_GlobalVolume *)0x0)) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr), bVar1)) {
    (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// Destroyed @ 14a053e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_GlobalVolume::Destroyed(AWN_UDS_GlobalVolume *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (((bVar1) &&
      (pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr),
      this != (AWN_UDS_GlobalVolume *)0x0)) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr), bVar1)) {
    (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 14a054020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_GlobalVolume::EndPlay(AWN_UDS_GlobalVolume *this,Type param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr);
  if (((bVar1) &&
      (pUVar2 = FWeakObjectPtr::Get(&(this->UDS_Subsystem).WeakPtr),
      this != (AWN_UDS_GlobalVolume *)0x0)) &&
     (bVar1 = FWeakObjectPtr::IsValid(&(this->UDS_Subsystem).WeakPtr), bVar1)) {
    (this->UDS_Subsystem).WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// OnConstruction @ 14a061f20

void __thiscall
AWN_UDS_GlobalVolume::OnConstruction(AWN_UDS_GlobalVolume *this,TTransform<double> *param_1)

{
  UWN_VolumeComponent *pUVar1;
  bool bVar2;
  UWN_CommonSubsystem *this_00;
  
  if ((((this->_padding_ & 0x50) == 0) &&
      (pUVar1 = (UWN_VolumeComponent *)this->_padding_, pUVar1 != (UWN_VolumeComponent *)0x0)) &&
     (pUVar1->bCanOverlapVolume == false)) {
    bVar2 = FWeakObjectPtr::IsValid(&(pUVar1->CommonSubsystem).WeakPtr);
    if (bVar2) {
      this_00 = (UWN_CommonSubsystem *)FWeakObjectPtr::Get(&(pUVar1->CommonSubsystem).WeakPtr);
      UWN_CommonSubsystem::CheckVolumeOverlap(this_00,pUVar1);
    }
    return;
  }
  return;
}

// PostLoad @ 14a0632a0

void __thiscall AWN_UDS_GlobalVolume::PostLoad(AWN_UDS_GlobalVolume *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  AWN_UDS_GlobalVolume *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(AWN_UDS_GlobalVolume **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (AWN_UDS_GlobalVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// Tick @ 14a0659c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_UDS_GlobalVolume::Tick(AWN_UDS_GlobalVolume *this,float param_1)

{
  uint uVar1;
  UFunction *pUVar2;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,afStackX_8);
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

