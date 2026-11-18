// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 1476d9e70

UClass * __cdecl UCameraShakePattern::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakePattern",
               &Z_Registration_Info_UClass_UCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUCameraShakePattern,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakePattern>,
               InternalVTableHelperCtorCaller<UCameraShakePattern>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakePattern.InnerSingleton;
}

// UCameraShakePattern @ 1476e81c0

UCameraShakePattern * __thiscall
UCameraShakePattern::UCameraShakePattern(UCameraShakePattern *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraShakePattern__6B_;
  return this;
}

// UCameraShakePattern @ 1476e81f0

UCameraShakePattern * __thiscall
UCameraShakePattern::UCameraShakePattern(UCameraShakePattern *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UCameraShakePattern__6B_;
  return this;
}

// ~UCameraShakePattern @ 1476e90f0

void __thiscall UCameraShakePattern::~UCameraShakePattern(UCameraShakePattern *this)

{
  *(undefined ***)this = &___7UCameraShakePattern__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147709f00

UClass * __cdecl UCameraShakePattern::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraShakePattern.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraShakePattern",
               &Z_Registration_Info_UClass_UCameraShakePattern.InnerSingleton,
               StaticRegisterNativesUCameraShakePattern,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraShakePattern>,
               InternalVTableHelperCtorCaller<UCameraShakePattern>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraShakePattern.InnerSingleton;
}

// GetShakeInstance @ 14770a970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall UCameraShakePattern::GetShakeInstance(UCameraShakePattern *this)

{
  UClass *pUVar1;
  UCameraShakeBase *pUVar2;
  
  pUVar1 = UCameraShakeBase::StaticClass();
  pUVar2 = (UCameraShakeBase *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  return pUVar2;
}

// GetShakePatternInfo @ 14770a9a0

void __thiscall
UCameraShakePattern::GetShakePatternInfo(UCameraShakePattern *this,FCameraShakeInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014770a9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b0))();
  return;
}

// GetShakePatternInfoImpl @ 14770a9b0

void __thiscall
UCameraShakePattern::GetShakePatternInfoImpl(UCameraShakePattern *this,FCameraShakeInfo *param_1)

{
  return;
}

// IsFinished @ 147714950

bool __thiscall UCameraShakePattern::IsFinished(UCameraShakePattern *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147714953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2d0))();
  return (bool)uVar1;
}

// IsFinishedImpl @ 147714960

bool __thiscall UCameraShakePattern::IsFinishedImpl(UCameraShakePattern *this)

{
  return true;
}

// ScrubShakePattern @ 147726490

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakePattern::ScrubShakePattern
          (UCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147726493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c8))();
  return;
}

// ScrubShakePatternImpl @ 1477264a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakePattern::ScrubShakePatternImpl
          (UCameraShakePattern *this,FCameraShakePatternScrubParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  return;
}

// StartShakePattern @ 14772bd50

void __thiscall
UCameraShakePattern::StartShakePattern
          (UCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014772bd53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2b8))();
  return;
}

// StartShakePatternImpl @ 14772bd60

void __thiscall
UCameraShakePattern::StartShakePatternImpl
          (UCameraShakePattern *this,FCameraShakePatternStartParams *param_1)

{
  return;
}

// StaticRegisterNativesUCameraShakePattern @ 14772be30

void __cdecl UCameraShakePattern::StaticRegisterNativesUCameraShakePattern(void)

{
  return;
}

// StopShakePattern @ 14772d100

void __thiscall
UCameraShakePattern::StopShakePattern
          (UCameraShakePattern *this,FCameraShakePatternStopParams *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014772d103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2d8))();
  return;
}

// StopShakePatternImpl @ 14772d110

void __thiscall
UCameraShakePattern::StopShakePatternImpl
          (UCameraShakePattern *this,FCameraShakePatternStopParams *param_1)

{
  return;
}

// TeardownShakePattern @ 14772dd00

void __thiscall UCameraShakePattern::TeardownShakePattern(UCameraShakePattern *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014772dd03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2e0))();
  return;
}

// TeardownShakePatternImpl @ 14772dd10

void __thiscall UCameraShakePattern::TeardownShakePatternImpl(UCameraShakePattern *this)

{
  return;
}

// UpdateShakePattern @ 147732630

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakePattern::UpdateShakePattern
          (UCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147732633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c0))();
  return;
}

// UpdateShakePatternImpl @ 147732640

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UCameraShakePattern::UpdateShakePatternImpl
          (UCameraShakePattern *this,FCameraShakePatternUpdateParams *param_1,
          FCameraShakePatternUpdateResult *param_2)

{
  return;
}

