// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 11

// FFastGeoPhysicsBodyInstanceOwner @ 14da18ce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFastGeoPhysicsBodyInstanceOwner * __thiscall
FFastGeoPhysicsBodyInstanceOwner::FFastGeoPhysicsBodyInstanceOwner
          (FFastGeoPhysicsBodyInstanceOwner *this)

{
  this->_padding_ = (longlong)NAME_FastGeoPhysicsBodyInstanceOwner;
  this->_padding_ = (longlong)&_vftable__for__FChaosUserDefinedEntity__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsBodyInstanceOwner__;
  this->OwnerComponent = (FFastGeoPrimitiveComponent *)0x0;
  (this->OwnerContainer).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~FFastGeoPhysicsBodyInstanceOwner @ 14da1b6e0

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
FFastGeoPhysicsBodyInstanceOwner::~FFastGeoPhysicsBodyInstanceOwner
          (FFastGeoPhysicsBodyInstanceOwner *this)

{
  this->_padding_ = (longlong)&___7FChaosUserDefinedEntity__6B_;
  return;
}

// GetCollisionResponseToChannel @ 14da29a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ECollisionResponse __thiscall
FFastGeoPhysicsBodyInstanceOwner::GetCollisionResponseToChannel
          (FFastGeoPhysicsBodyInstanceOwner *this,ECollisionChannel param_1)

{
  code *pcVar1;
  bool bVar2;
  ECollisionResponse EVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerContainer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x39a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da29a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(*(longlong *)this->_padding_ + 0xe8))((longlong *)this->_padding_,param_1);
  return EVar3;
}

// GetComplexPhysicalMaterials @ 14da29ac0

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
FFastGeoPhysicsBodyInstanceOwner::GetComplexPhysicalMaterials
          (FFastGeoPhysicsBodyInstanceOwner *this,
          TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicalMaterialMaskParams,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerContainer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x3a6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da29b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,param_1,param_2);
  return;
}

// GetOwnerObject @ 14da2b060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
FFastGeoPhysicsBodyInstanceOwner::GetOwnerObject(FFastGeoPhysicsBodyInstanceOwner *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->OwnerContainer).WeakPtr;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)in_RDX;
}

// GetPhysicalMaterial @ 14da2b080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPhysicalMaterial * __thiscall
FFastGeoPhysicsBodyInstanceOwner::GetPhysicalMaterial(FFastGeoPhysicsBodyInstanceOwner *this)

{
  code *pcVar1;
  bool bVar2;
  UPhysicalMaterial *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerContainer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPhysicalMaterial *)(*pcVar1)();
      return pUVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da2b0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UPhysicalMaterial *)(**(code **)(*(longlong *)this->_padding_ + 0xd8))();
  return pUVar3;
}

// GetPhysicsBodyInstanceOwner @ 14da2b120

IPhysicsBodyInstanceOwner * __cdecl
FFastGeoPhysicsBodyInstanceOwner::GetPhysicsBodyInstanceOwner(FChaosUserDefinedEntity *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr *this;
  IPhysicsBodyInstanceOwner *pIVar3;
  undefined1 local_res8 [32];
  
  if ((param_1 != (FChaosUserDefinedEntity *)0x0) &&
     (param_1->EntityTypeName == NAME_FastGeoPhysicsBodyInstanceOwner)) {
    this = (FWeakObjectPtr *)(**(code **)(param_1->_padding_ + 8))(param_1,local_res8);
    bVar2 = FWeakObjectPtr::IsValid(this);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FastGeoPhysicsBodyInstanceOwner->GetOwnerObject().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x386,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (IPhysicsBodyInstanceOwner *)(*pcVar1)();
        return pIVar3;
      }
    }
    return (IPhysicsBodyInstanceOwner *)(param_1 + 1);
  }
  return (IPhysicsBodyInstanceOwner *)0x0;
}

// GetSourceObject @ 14da2b920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FFastGeoPhysicsBodyInstanceOwner::GetSourceObject(FFastGeoPhysicsBodyInstanceOwner *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerContainer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x394,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da2b968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar3 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 0xd0))();
  return pUVar3;
}

// Initialize @ 14da2c390

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
FFastGeoPhysicsBodyInstanceOwner::Initialize
          (FFastGeoPhysicsBodyInstanceOwner *this,FFastGeoPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFastGeoContainer *pUVar3;
  UFastGeoContainer *local_res8;
  
  this->OwnerComponent = param_1;
  if (param_1 == (FFastGeoPrimitiveComponent *)0x0) {
    pUVar3 = (UFastGeoContainer *)0x0;
  }
  else {
    if (param_1->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOwnerComponentCluster()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                         ,0x32,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar3 = *(UFastGeoContainer **)(param_1->_padding_ + 0x18);
  }
  if ((this->OwnerComponent != (FFastGeoPrimitiveComponent *)0x0) &&
     (pUVar3 == (UFastGeoContainer *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OwnerComponent || NewContainer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x377,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((((this->OwnerContainer).WeakPtr.ObjectIndex != 0) ||
      ((this->OwnerContainer).WeakPtr.ObjectSerialNumber != 0)) &&
     (pUVar3 != (UFastGeoContainer *)0x0)) {
    bVar2 = TWeakObjectPtr<UFastGeoContainer,FWeakObjectPtr>::UEOpEquals<UFastGeoContainer,bool>
                      (&this->OwnerContainer,pUVar3);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwnerContainer.IsExplicitlyNull() || !NewContainer || OwnerContainer == NewContainer"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x378,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_res8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UFastGeoContainer *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&(this->OwnerContainer).WeakPtr,(FObjectPtr)&local_res8);
  return;
}

// IsStaticPhysics @ 14da2e0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FFastGeoPhysicsBodyInstanceOwner::IsStaticPhysics(FFastGeoPhysicsBodyInstanceOwner *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerContainer.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                       ,0x38e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014da2e138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)this->_padding_ + 200))();
  return (bool)uVar3;
}

// Uninitialize @ 14da38a10

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
FFastGeoPhysicsBodyInstanceOwner::Uninitialize(FFastGeoPhysicsBodyInstanceOwner *this)

{
  Initialize(this,(FFastGeoPrimitiveComponent *)0x0);
  return;
}

