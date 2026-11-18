// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1476715d0

UClass * __cdecl ABrushShape::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABrushShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushShape",
               &Z_Registration_Info_UClass_ABrushShape.InnerSingleton,
               StaticRegisterNativesABrushShape,0x2f8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ABrushShape>,
               InternalVTableHelperCtorCaller<ABrushShape>,local_res8,ABrush::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABrushShape.InnerSingleton;
}

// ABrushShape @ 147685bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ABrushShape * __thiscall ABrushShape::ABrushShape(ABrushShape *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined8 *)&this->field_0x2d0 = 0;
  *(undefined8 *)&this->field_0x2d8 = 0;
  *(undefined8 *)&this->field_0x2e8 = 0;
  *(undefined8 *)&this->field_0x2f0 = 0;
  *(undefined ***)this = &___7ABrushShape__6B_;
  return this;
}

// ABrushShape @ 147685c10

ABrushShape * __thiscall ABrushShape::ABrushShape(ABrushShape *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  ABrush::ABrush((ABrush *)this,param_1);
  *(undefined ***)this = &___7ABrushShape__6B_;
  (**(code **)(**(longlong **)&this->field_0x2d8 + 0x788))
            (*(longlong **)&this->field_0x2d8,UCollisionProfile::NoCollision_ProfileName,1);
  pbVar1 = (byte *)(*(longlong *)&this->field_0x2d8 + 0x281);
  *pbVar1 = *pbVar1 | 4;
  pbVar1 = (byte *)(*(longlong *)&this->field_0x2d8 + 0x281);
  *pbVar1 = *pbVar1 & 0xf7;
  return this;
}

// ~ABrushShape @ 147689dd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ABrushShape::~ABrushShape(ABrushShape *this)

{
  *(undefined ***)this = &___7ABrush__6B_;
  if (*(void **)&this->field_0x2e8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x2e8);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1476b3950

UClass * __cdecl ABrushShape::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ABrushShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushShape",
               &Z_Registration_Info_UClass_ABrushShape.InnerSingleton,
               StaticRegisterNativesABrushShape,0x2f8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ABrushShape>,
               InternalVTableHelperCtorCaller<ABrushShape>,local_res8,ABrush::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ABrushShape.InnerSingleton;
}

// IsBrushShape @ 1476ba810

bool __thiscall ABrushShape::IsBrushShape(ABrushShape *this)

{
  return true;
}

// IsStaticBrush @ 1476bad10

bool __thiscall ABrushShape::IsStaticBrush(ABrushShape *this)

{
  return false;
}

// StaticRegisterNativesABrushShape @ 1476ca140

void __cdecl ABrushShape::StaticRegisterNativesABrushShape(void)

{
  return;
}

