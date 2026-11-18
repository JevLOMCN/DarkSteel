// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b479dd0

UClass * __cdecl UDS_DarkSteelAnim::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DarkSteelAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DarkSteelAnim",
               &Z_Registration_Info_UClass_UDS_DarkSteelAnim.InnerSingleton,
               StaticRegisterNativesUDS_DarkSteelAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_DarkSteelAnim>,
               InternalVTableHelperCtorCaller<UDS_DarkSteelAnim>,local_res8,
               UDS_StuffAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DarkSteelAnim.InnerSingleton;
}

// UDS_DarkSteelAnim @ 14b47d740

UDS_DarkSteelAnim * __thiscall
UDS_DarkSteelAnim::UDS_DarkSteelAnim(UDS_DarkSteelAnim *this,FVTableHelper *param_1)

{
  UDS_StuffAnim::UDS_StuffAnim((UDS_StuffAnim *)this,param_1);
  *(undefined ***)this = &___7UDS_DarkSteelAnim__6B_;
  return this;
}

// ~UDS_DarkSteelAnim @ 14b47df00

void __thiscall UDS_DarkSteelAnim::~UDS_DarkSteelAnim(UDS_DarkSteelAnim *this)

{
  *(undefined ***)this = &___7UDS_DarkSteelAnim__6B_;
  UDS_StuffAnim::~UDS_StuffAnim((UDS_StuffAnim *)this);
  return;
}

// GetPrivateStaticClass @ 14b47f2f0

UClass * __cdecl UDS_DarkSteelAnim::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DarkSteelAnim.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UAnimInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DarkSteelAnim",
               &Z_Registration_Info_UClass_UDS_DarkSteelAnim.InnerSingleton,
               StaticRegisterNativesUDS_DarkSteelAnim,0x450,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_DarkSteelAnim>,
               InternalVTableHelperCtorCaller<UDS_DarkSteelAnim>,local_res8,
               UDS_StuffAnim::StaticClass,USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DarkSteelAnim.InnerSingleton;
}

// StaticRegisterNativesUDS_DarkSteelAnim @ 14b47f5f0

void __cdecl UDS_DarkSteelAnim::StaticRegisterNativesUDS_DarkSteelAnim(void)

{
  return;
}

// UDS_DarkSteelAnim @ 14b864cd0

UDS_DarkSteelAnim * __thiscall
UDS_DarkSteelAnim::UDS_DarkSteelAnim(UDS_DarkSteelAnim *this,FObjectInitializer *param_1)

{
  UAnimInstance::UAnimInstance((UAnimInstance *)this,param_1);
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined2 *)&this->field_0x448 = 0;
  *(undefined ***)this = &___7UDS_DarkSteelAnim__6B_;
  return this;
}

// OnClearVariables @ 14b887a20

void __thiscall UDS_DarkSteelAnim::OnClearVariables(UDS_DarkSteelAnim *this)

{
  *(undefined8 *)&this->field_0x428 = 0;
  *(undefined8 *)&this->field_0x430 = 0;
  *(undefined8 *)&this->field_0x438 = 0;
  return;
}

// OnInitVariables @ 14b889b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_DarkSteelAnim::OnInitVariables(UDS_DarkSteelAnim *this)

{
  char cVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x3d0))();
  if (cVar1 == '\x01') {
    TVar2 = FDS_EntityBase::GetCharStateData(*(FDS_EntityBase **)&this->field_0x430);
    *(undefined8 *)&this->field_0x438 = *(undefined8 *)TVar2.WeakPtr;
  }
  return;
}

// OnNativeThreadSafeUpdateAnimation @ 14b88af00

void __thiscall
UDS_DarkSteelAnim::OnNativeThreadSafeUpdateAnimation(UDS_DarkSteelAnim *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (*(longlong *)&this->field_0x430 != 0) {
    UDS_StuffGatherData::GetData((ulong64)local_res8);
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->field_0x448 = pUVar2[0xb].field_0x1d;
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      this->field_0x449 = pUVar2[0xb].field_0x1c;
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      pUVar2[0xb].field_0x1c = 0;
    }
  }
  return;
}

// OnNativeUpdateAnimation @ 14b88bdd0

void __thiscall UDS_DarkSteelAnim::OnNativeUpdateAnimation(UDS_DarkSteelAnim *this,float param_1)

{
  return;
}

