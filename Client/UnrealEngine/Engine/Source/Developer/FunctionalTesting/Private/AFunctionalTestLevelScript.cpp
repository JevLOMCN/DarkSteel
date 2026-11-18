// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 6

// StaticClass @ 148c734c0

UClass * __cdecl AFunctionalTestLevelScript::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestLevelScript",
               &Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton,
               StaticRegisterNativesAFunctionalTestLevelScript,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalTestLevelScript>,
               InternalVTableHelperCtorCaller<AFunctionalTestLevelScript>,local_res8,
               ALevelScriptActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton;
}

// AFunctionalTestLevelScript @ 148c7e8e0

AFunctionalTestLevelScript * __thiscall
AFunctionalTestLevelScript::AFunctionalTestLevelScript
          (AFunctionalTestLevelScript *this,FVTableHelper *param_1)

{
  ALevelScriptActor::ALevelScriptActor((ALevelScriptActor *)this,param_1);
  *(undefined ***)this = &___7AFunctionalTestLevelScript__6B_;
  return this;
}

// AFunctionalTestLevelScript @ 148c7e910

AFunctionalTestLevelScript * __thiscall
AFunctionalTestLevelScript::AFunctionalTestLevelScript
          (AFunctionalTestLevelScript *this,FObjectInitializer *param_1)

{
  ALevelScriptActor::ALevelScriptActor((ALevelScriptActor *)this,param_1);
  *(undefined ***)this = &___7AFunctionalTestLevelScript__6B_;
  return this;
}

// ~AFunctionalTestLevelScript @ 148c80aa0

void __thiscall
AFunctionalTestLevelScript::~AFunctionalTestLevelScript(AFunctionalTestLevelScript *this)

{
  *(undefined ***)this = &___7AFunctionalTestLevelScript__6B_;
  ALevelScriptActor::~ALevelScriptActor((ALevelScriptActor *)this);
  return;
}

// GetPrivateStaticClass @ 148c91380

UClass * __cdecl AFunctionalTestLevelScript::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FunctionalTesting",L"FunctionalTestLevelScript",
               &Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton,
               StaticRegisterNativesAFunctionalTestLevelScript,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AFunctionalTestLevelScript>,
               InternalVTableHelperCtorCaller<AFunctionalTestLevelScript>,local_res8,
               ALevelScriptActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AFunctionalTestLevelScript.InnerSingleton;
}

// StaticRegisterNativesAFunctionalTestLevelScript @ 148c9d3c0

void __cdecl AFunctionalTestLevelScript::StaticRegisterNativesAFunctionalTestLevelScript(void)

{
  return;
}

