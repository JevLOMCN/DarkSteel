// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 147b16e80

UClass * __cdecl APhysicsVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsVolume.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsVolume",
               &Z_Registration_Info_UClass_APhysicsVolume.InnerSingleton,
               StaticRegisterNativesAPhysicsVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsVolume>,
               InternalVTableHelperCtorCaller<APhysicsVolume>,aFStackX_8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsVolume.InnerSingleton;
}

// APhysicsVolume @ 148348cb0

APhysicsVolume * __thiscall
APhysicsVolume::APhysicsVolume(APhysicsVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7APhysicsVolume__6B_;
  return this;
}

// APhysicsVolume @ 148348ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsVolume * __thiscall
APhysicsVolume::APhysicsVolume(APhysicsVolume *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  UPhysicsSettings *pUVar3;
  ulonglong uVar4;
  
  AVolume::AVolume((AVolume *)this,param_1);
  uVar4 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7APhysicsVolume__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"OverlapAllDynamic");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x788))
            ((longlong *)this->_padding_,CollisionProfileName,1);
  pUVar3 = UPhysicsSettings::Get();
  this->FluidFriction = *(float *)&pUVar3->_padding_;
  pUVar3 = UPhysicsSettings::Get();
  fVar2 = __real_3dcccccd;
  fVar1 = *(float *)((longlong)&pUVar3->_padding_ + 4);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  this->TerminalVelocity = fVar1;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar2);
  AActor::SetReplicatingMovement((AActor *)this,false);
  return this;
}

// ~APhysicsVolume @ 14834cf40

void __thiscall APhysicsVolume::~APhysicsVolume(APhysicsVolume *this)

{
  this->_padding_ = (longlong)&___7APhysicsVolume__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// ActorEnteredVolume @ 148352a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsVolume::ActorEnteredVolume(APhysicsVolume *this,AActor *param_1)

{
  return;
}

// ActorLeavingVolume @ 148352a30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsVolume::ActorLeavingVolume(APhysicsVolume *this,AActor *param_1)

{
  return;
}

// Destroyed @ 14836b0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsVolume::Destroyed(APhysicsVolume *this)

{
  UWorld *this_00;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::RemovePhysicsVolume(this_00,this);
  }
  AActor::Destroyed((AActor *)this);
  return;
}

// EndPlay @ 148378270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsVolume::EndPlay(APhysicsVolume *this,Type param_1)

{
  undefined1 uVar1;
  int iVar2;
  UPrimitiveComponent *this_00;
  UWorld *this_01;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res18 [16];
  
  this_01 = AActor::GetWorld((AActor *)this);
  if (this_01 != (UWorld *)0x0) {
    UWorld::RemovePhysicsVolume(this_01,this);
    if ((param_1 == RemovedFromWorld) || (param_1 == Destroyed)) {
      this_00 = (UPrimitiveComponent *)this->_padding_;
      UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
      iVar2 = (this_00->OverlappingComponents).ArrayNum;
      pFVar4 = (this_00->OverlappingComponents).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar2 * 0x108;
      while( true ) {
        if ((this_00->OverlappingComponents).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FOverlapInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar4 == pFVar5) break;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar4 + 0xe0));
        if ((pUVar3 != (UObject *)0x0) && ((pUVar3[10].field_0x19 & 4) != 0)) {
          (**(code **)(*(longlong *)pUVar3 + 0x5c0))(pUVar3,1);
        }
        pFVar4 = pFVar4 + 0x108;
      }
      UPrimitiveComponent::SetGenerateOverlapEvents(this_00,this_00->bGenerateOverlapEvents);
    }
  }
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetGravityZ @ 148381b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall APhysicsVolume::GetGravityZ(APhysicsVolume *this)

{
  UWorld *this_00;
  UPhysicsSettings *pUVar1;
  float fVar2;
  
  this_00 = AActor::GetWorld((AActor *)this);
  if (this_00 != (UWorld *)0x0) {
    fVar2 = UWorld::GetGravityZ(this_00);
    return fVar2;
  }
  pUVar1 = UPhysicsSettings::Get();
  return *(float *)&pUVar1->_padding_;
}

// GetPrivateStaticClass @ 148386b10

UClass * __cdecl APhysicsVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APhysicsVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsVolume",
               &Z_Registration_Info_UClass_APhysicsVolume.InnerSingleton,
               StaticRegisterNativesAPhysicsVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APhysicsVolume>,
               InternalVTableHelperCtorCaller<APhysicsVolume>,local_res8,AVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APhysicsVolume.InnerSingleton;
}

// IsOverlapInVolume @ 148392d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall APhysicsVolume::IsOverlapInVolume(APhysicsVolume *this,USceneComponent *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  UClass *pUVar4;
  float local_res8 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (this->bPhysicsOnContact != 0) {
    return true;
  }
  plVar2 = (longlong *)this->_padding_;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (plVar2 != (longlong *)0x0) {
    pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      local_20 = *(undefined4 *)(param_1->ComponentToWorld).Translation.XY.m128d_f64;
      uStack_1c = *(undefined4 *)
                   ((longlong)(param_1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uStack_18 = *(undefined4 *)((param_1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uStack_14 = *(undefined4 *)
                   ((longlong)(param_1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      local_10 = *(undefined4 *)(param_1->ComponentToWorld).Translation.ZW.m128d_f64;
      uStack_c = *(undefined4 *)((longlong)(param_1->ComponentToWorld).Translation.ZW.m128d_f64 + 4)
      ;
      local_res8[0] = -1.0;
      cVar3 = (**(code **)(*plVar2 + 0x820))(plVar2,&local_20,local_res8,&local_38);
      if ((cVar3 == '\0') || (local_res8[0] != 0.0)) {
        return false;
      }
    }
  }
  return true;
}

// PostInitializeComponents @ 14839a2b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APhysicsVolume::PostInitializeComponents(APhysicsVolume *this)

{
  UWorld *this_00;
  
  AActor::PostInitializeComponents((AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  UWorld::AddPhysicsVolume(this_00,this);
  return;
}

// StaticRegisterNativesAPhysicsVolume @ 1483af5e0

void __cdecl APhysicsVolume::StaticRegisterNativesAPhysicsVolume(void)

{
  return;
}

