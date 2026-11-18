// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147321770

UClass * __cdecl ARadialForceActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARadialForceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RadialForceActor",
               &Z_Registration_Info_UClass_ARadialForceActor.InnerSingleton,
               StaticRegisterNativesARadialForceActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ARadialForceActor>,
               InternalVTableHelperCtorCaller<ARadialForceActor>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARadialForceActor.InnerSingleton;
}

// ARadialForceActor @ 1473247b0

ARadialForceActor * __thiscall
ARadialForceActor::ARadialForceActor(ARadialForceActor *this,FVTableHelper *param_1)

{
  ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
  this->_padding_ = (longlong)&___7ARadialForceActor__6B_;
  (this->ForceComponent).field0_0x0.DebugPtr = (URadialForceComponent *)0x0;
  return this;
}

// ~ARadialForceActor @ 1473250d0

void __thiscall ARadialForceActor::~ARadialForceActor(ARadialForceActor *this)

{
  this->_padding_ = (longlong)&___7ARadialForceActor__6B_;
  ARigidBodyBase::~ARigidBodyBase((ARigidBodyBase *)this);
  return;
}

// GetPrivateStaticClass @ 147326a20

UClass * __cdecl ARadialForceActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ARadialForceActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RadialForceActor",
               &Z_Registration_Info_UClass_ARadialForceActor.InnerSingleton,
               StaticRegisterNativesARadialForceActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ARadialForceActor>,
               InternalVTableHelperCtorCaller<ARadialForceActor>,local_res8,
               ARigidBodyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ARadialForceActor.InnerSingleton;
}

// StaticRegisterNativesARadialForceActor @ 1473280c0

void __cdecl ARadialForceActor::StaticRegisterNativesARadialForceActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ARadialForceActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDisableForce @ 147329ed0

void __cdecl ARadialForceActor::execDisableForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147329ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x770))();
  return;
}

// execEnableForce @ 147329f00

void __cdecl ARadialForceActor::execEnableForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147329f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x768))();
  return;
}

// execFireImpulse @ 147329f30

void __cdecl ARadialForceActor::execFireImpulse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147329f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// execToggleForce @ 14732aaf0

void __cdecl ARadialForceActor::execToggleForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014732ab08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x778))();
  return;
}

// ARadialForceActor @ 1482d83e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ARadialForceActor * __thiscall
ARadialForceActor::ARadialForceActor(ARadialForceActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  float fVar3;
  FName *pFVar4;
  UClass *pUVar5;
  URadialForceComponent *pUVar6;
  FName local_res8;
  
  ARigidBodyBase::ARigidBodyBase((ARigidBodyBase *)this,param_1);
  this->_padding_ = (longlong)&___7ARadialForceActor__6B_;
  (this->ForceComponent).field0_0x0.DebugPtr = (URadialForceComponent *)0x0;
  pFVar4 = ::FName::FName(&local_res8,L"ForceComponent0");
  FVar2 = *pFVar4;
  pUVar5 = URadialForceComponent::StaticClass();
  pUVar6 = (URadialForceComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar5,pUVar5,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (URadialForceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ForceComponent).field0_0x0.DebugPtr = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (URadialForceComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  fVar3 = __real_3dcccccd;
  this->_padding_ = (longlong)(this->ForceComponent).field0_0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  *(undefined1 *)&this->_padding_ = 1;
  AActor::SetNetUpdateFrequency((AActor *)this,fVar3);
  return this;
}

// DisableForce @ 1482f4a60

void __thiscall ARadialForceActor::DisableForce(ARadialForceActor *this)

{
  URadialForceComponent *pUVar1;
  
  pUVar1 = (this->ForceComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (URadialForceComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482f4a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c0))();
    return;
  }
  return;
}

// EnableForce @ 1483004e0

void __thiscall ARadialForceActor::EnableForce(ARadialForceActor *this)

{
  URadialForceComponent *pUVar1;
  
  pUVar1 = (this->ForceComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (URadialForceComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483004f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,0);
    return;
  }
  return;
}

// FireImpulse @ 148303810

void __thiscall ARadialForceActor::FireImpulse(ARadialForceActor *this)

{
  URadialForceComponent *pUVar1;
  
  pUVar1 = (this->ForceComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (URadialForceComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014830381f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x640))();
    return;
  }
  return;
}

// ToggleForce @ 148325270

void __thiscall ARadialForceActor::ToggleForce(ARadialForceActor *this)

{
  URadialForceComponent *pUVar1;
  
  pUVar1 = (this->ForceComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (URadialForceComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014832527f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2d0))();
    return;
  }
  return;
}

