// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// Draw @ 145f2d3b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAssetUserData::Draw(UAssetUserData *this,FPrimitiveDrawInterface *param_1,FSceneView *param_2)

{
  return;
}

// DrawCanvas @ 145f2d3c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAssetUserData::DrawCanvas(UAssetUserData *this,FCanvas *param_1,FSceneView *param_2)

{
  return;
}

// PostEditChangeOwner @ 145f32070

void __thiscall
UAssetUserData::PostEditChangeOwner(UAssetUserData *this,FPropertyChangedEvent *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145f32073. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x2c8))();
  return;
}

// PostEditChangeOwner @ 145f32080

void __thiscall UAssetUserData::PostEditChangeOwner(UAssetUserData *this)

{
  return;
}

// StaticClass @ 145f33720

UClass * __cdecl UAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAssetUserData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetUserData",
               &Z_Registration_Info_UClass_UAssetUserData.InnerSingleton,
               StaticRegisterNativesUAssetUserData,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetUserData>,
               InternalVTableHelperCtorCaller<UAssetUserData>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetUserData.InnerSingleton;
}

