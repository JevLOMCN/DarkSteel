// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147992d80

UClass * __cdecl UStereoLayerShapeQuad::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeQuad.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeQuad",
               &Z_Registration_Info_UClass_UStereoLayerShapeQuad.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeQuad,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeQuad>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeQuad>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeQuad.InnerSingleton;
}

// UStereoLayerShapeQuad @ 1479a7e40

UStereoLayerShapeQuad * __thiscall
UStereoLayerShapeQuad::UStereoLayerShapeQuad(UStereoLayerShapeQuad *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStereoLayerShapeQuad__6B_;
  return this;
}

// UStereoLayerShapeQuad @ 1479a7e70

UStereoLayerShapeQuad * __thiscall
UStereoLayerShapeQuad::UStereoLayerShapeQuad
          (UStereoLayerShapeQuad *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStereoLayerShapeQuad__6B_;
  return this;
}

// ~UStereoLayerShapeQuad @ 1479a9b70

void __thiscall UStereoLayerShapeQuad::~UStereoLayerShapeQuad(UStereoLayerShapeQuad *this)

{
  *(undefined ***)this = &___7UStereoLayerShape__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyShape @ 1479b3650

void __thiscall UStereoLayerShapeQuad::ApplyShape(UStereoLayerShapeQuad *this,FLayerDesc *param_1)

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
    *pIVar3 = (IStereoLayerShape)&___7FQuadLayer__6B_;
  }
  pFVar1 = &param_1->Shape;
  if (pFVar1 == (FShapeWrapper *)local_18) {
    if (pIVar3 != (IStereoLayerShape *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479b36bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,1);
      return;
    }
  }
  else {
    pIVar2 = (pFVar1->Wrapped).Ptr;
    (pFVar1->Wrapped).Ptr = pIVar3;
    if (pIVar2 != (IStereoLayerShape *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479b36a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,1);
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1479ce620

UClass * __cdecl UStereoLayerShapeQuad::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShapeQuad.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShapeQuad",
               &Z_Registration_Info_UClass_UStereoLayerShapeQuad.InnerSingleton,
               StaticRegisterNativesUStereoLayerShapeQuad,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStereoLayerShapeQuad>,
               InternalVTableHelperCtorCaller<UStereoLayerShapeQuad>,local_res8,
               UStereoLayerShape::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShapeQuad.InnerSingleton;
}

// StaticRegisterNativesUStereoLayerShapeQuad @ 1479ee110

void __cdecl UStereoLayerShapeQuad::StaticRegisterNativesUStereoLayerShapeQuad(void)

{
  return;
}

