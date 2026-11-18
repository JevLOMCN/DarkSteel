// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 7

// StaticClass @ 14aca3b00

UClass * __cdecl UEasyParticleComponent_InitialDrawEffect_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialDrawEffect_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect_Runtime
               ,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialDrawEffect_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialDrawEffect_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime.InnerSingleton;
}

// UEasyParticleComponent_InitialDrawEffect_Runtime @ 14aca9cf0

UEasyParticleComponent_InitialDrawEffect_Runtime * __thiscall
UEasyParticleComponent_InitialDrawEffect_Runtime::UEasyParticleComponent_InitialDrawEffect_Runtime
          (UEasyParticleComponent_InitialDrawEffect_Runtime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_InitialDrawEffect_Runtime__6B_;
  return this;
}

// ~UEasyParticleComponent_InitialDrawEffect_Runtime @ 14acaa9d0

void __thiscall
UEasyParticleComponent_InitialDrawEffect_Runtime::~UEasyParticleComponent_InitialDrawEffect_Runtime
          (UEasyParticleComponent_InitialDrawEffect_Runtime *this)

{
  *(undefined ***)this = &___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad400

UClass * __cdecl UEasyParticleComponent_InitialDrawEffect_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialDrawEffect_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect_Runtime
               ,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialDrawEffect_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialDrawEffect_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect_Runtime @ 14acae360

void __cdecl
UEasyParticleComponent_InitialDrawEffect_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialDrawEffect_Runtime @ 14acb6de0

UEasyParticleComponent_InitialDrawEffect_Runtime * __thiscall
UEasyParticleComponent_InitialDrawEffect_Runtime::UEasyParticleComponent_InitialDrawEffect_Runtime
          (UEasyParticleComponent_InitialDrawEffect_Runtime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UEasyParticleComponent_InitialDrawEffect_Runtime__6B_;
  return this;
}

// Init_Implementation @ 14acbbe20

void __thiscall
UEasyParticleComponent_InitialDrawEffect_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialDrawEffect_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)&this->field_0x28;
  if (lVar3 != 0) {
    pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialDrawEffect_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14acbbe5b;
  }
  lVar3 = 0;
LAB_14acbbe5b:
  if ((*(longlong *)&this->field_0x30 != 0) && (lVar3 != 0)) {
    *(undefined1 *)(*(longlong *)&this->field_0x30 + 0xbc) = *(undefined1 *)(lVar3 + 0x50);
  }
  return;
}

