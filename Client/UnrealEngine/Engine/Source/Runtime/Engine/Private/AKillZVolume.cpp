// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147d5ccb0

UClass * __cdecl AKillZVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AKillZVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KillZVolume",
               &Z_Registration_Info_UClass_AKillZVolume.InnerSingleton,
               StaticRegisterNativesAKillZVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<AKillZVolume>,
               InternalVTableHelperCtorCaller<AKillZVolume>,local_res8,APhysicsVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AKillZVolume.InnerSingleton;
}

// AKillZVolume @ 147d77100

AKillZVolume * __thiscall AKillZVolume::AKillZVolume(AKillZVolume *this,FVTableHelper *param_1)

{
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  *(undefined ***)this = &___7AKillZVolume__6B_;
  return this;
}

// AKillZVolume @ 147d77130

AKillZVolume * __thiscall AKillZVolume::AKillZVolume(AKillZVolume *this,FObjectInitializer *param_1)

{
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  this->field_0x59 = this->field_0x59 & 0xf7;
  *(undefined ***)this = &___7AKillZVolume__6B_;
  return this;
}

// ~AKillZVolume @ 147d7b150

void __thiscall AKillZVolume::~AKillZVolume(AKillZVolume *this)

{
  *(undefined ***)this = &___7AKillZVolume__6B_;
  APhysicsVolume::~APhysicsVolume((APhysicsVolume *)this);
  return;
}

// ActorEnteredVolume @ 147d82340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AKillZVolume::ActorEnteredVolume(AKillZVolume *this,AActor *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_00;
  AWorldSettings *pAVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  
  APhysicsVolume::ActorEnteredVolume((APhysicsVolume *)this,param_1);
  if (param_1 == (AActor *)0x0) {
    return;
  }
  pUVar4 = Z_Construct_UClass_UDamageType_NoRegister();
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar7 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  this_00 = AActor::GetWorld((AActor *)this);
  if ((((this_00 == (UWorld *)0x0) ||
       (pAVar5 = UWorld::GetWorldSettings(this_00,true,true), pAVar5 == (AWorldSettings *)0x0)) ||
      (pUVar4 = (pAVar5->KillZDamageType).Class.field0_0x0.DebugPtr, pUVar4 == (UClass *)0x0)) ||
     (pUVar6 = Z_Construct_UClass_UDamageType_NoRegister(), pUVar6 == (UClass *)0x0))
  goto LAB_147d824a6;
  iVar1 = (int)pUVar6->_padding_;
  if (((int)pUVar4->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((!bVar3) ||
     (pUVar4 = (pAVar5->KillZDamageType).Class.field0_0x0.DebugPtr, pUVar4 == (UClass *)0x0))
  goto LAB_147d824a6;
  pUVar6 = Z_Construct_UClass_UDamageType_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
LAB_147d82442:
    pUVar4 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147d82442;
    pUVar4 = (pAVar5->KillZDamageType).Class.field0_0x0.DebugPtr;
  }
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar7 = (pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar4 = Z_Construct_UClass_UDamageType_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar4->_padding_)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147d824a6:
  (**(code **)(param_1->_padding_ + 0x660))(param_1,pUVar7);
  return;
}

// GetPrivateStaticClass @ 147da77f0

UClass * __cdecl AKillZVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AKillZVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"KillZVolume",
               &Z_Registration_Info_UClass_AKillZVolume.InnerSingleton,
               StaticRegisterNativesAKillZVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None
               ,L"Engine",InternalConstructor<AKillZVolume>,
               InternalVTableHelperCtorCaller<AKillZVolume>,local_res8,APhysicsVolume::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AKillZVolume.InnerSingleton;
}

// StaticRegisterNativesAKillZVolume @ 147dc3f90

void __cdecl AKillZVolume::StaticRegisterNativesAKillZVolume(void)

{
  return;
}

