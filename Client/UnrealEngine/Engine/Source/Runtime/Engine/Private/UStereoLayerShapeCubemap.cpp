// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1479931b0

UClass * __cdecl UStereoLayerShapeCubemap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeCubemap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeCubemap",
               &Z_Registration_Info_UClass_UStereoLayerShapeCubemap.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeCubemap,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeCubemap>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeCubemap>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeCubemap.InnerSingleton;
}

// UStereoLayerShapeCubemap @ 1479a7d80

UStereoLayerShapeCubemap * __thiscall
UStereoLayerShapeCubemap::UStereoLayerShapeCubemap
          (UStereoLayerShapeCubemap *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStereoLayerShapeCubemap__6B_;
  return this;
}

// UStereoLayerShapeCubemap @ 1479a7db0

UStereoLayerShapeCubemap * __thiscall
UStereoLayerShapeCubemap::UStereoLayerShapeCubemap
          (UStereoLayerShapeCubemap *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStereoLayerShapeCubemap__6B_;
  return this;
}

// ~UStereoLayerShapeCubemap @ 1479a9b10

void __thiscall UStereoLayerShapeCubemap::~UStereoLayerShapeCubemap(UStereoLayerShapeCubemap *this)

{
  *(undefined ***)this = &___7UStereoLayerShape__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyShape @ 1479b33d0

void __thiscall
UStereoLayerShapeCubemap::ApplyShape(UStereoLayerShapeCubemap *this,FLayerDesc *param_1)

{
  FShapeWrapper *pFVar1;
  IStereoLayerShape *pIVar2;
  IStereoLayerShape *pIVar3;
  longlong local_18 [2];
  
  pIVar3 = ::operator_new(8);
  if (pIVar3 == (IStereoLayerShape *)0x0) {
    pIVar3 = (IStereoLayerShape *)0x0;
  }
  else {
    *pIVar3 = (IStereoLayerShape)&___7FCubemapLayer__6B_;
  }
  pFVar1 = &param_1->Shape;
  if (pFVar1 == (FShapeWrapper *)local_18) {
    if (pIVar3 != (IStereoLayerShape *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479b343b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,1);
      return;
    }
  }
  else {
    pIVar2 = (pFVar1->Wrapped).Ptr;
    (pFVar1->Wrapped).Ptr = pIVar3;
    if (pIVar2 != (IStereoLayerShape *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479b3425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,1);
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1479ce3e0

UClass * __cdecl UStereoLayerShapeCubemap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeCubemap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeCubemap",
               &Z_Registration_Info_UClass_UStereoLayerShapeCubemap.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeCubemap,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeCubemap>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeCubemap>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeCubemap.InnerSingleton;
}

// StaticRegisterNativesUStereoLayerShapeCubemap @ 1479ee080

void __cdecl UStereoLayerShapeCubemap::StaticRegisterNativesUStereoLayerShapeCubemap(void)

{
  return;
}

