// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb1b70

UClass * __cdecl UEasyParticleComponent_InitialSize_AutoSize_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSize_AutoSize_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize_Runtime,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialSize_AutoSize_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSize_AutoSize_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime.
         InnerSingleton;
}

// UEasyParticleComponent_InitialSize_AutoSize_Runtime @ 14acb6f00

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSize_AutoSize_Runtime * __thiscall
UEasyParticleComponent_InitialSize_AutoSize_Runtime::
UEasyParticleComponent_InitialSize_AutoSize_Runtime
          (UEasyParticleComponent_InitialSize_AutoSize_Runtime *this,FVTableHelper *param_1)

{
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_InitialSize_AutoSize_Runtime__6B_;
  return this;
}

// ~UEasyParticleComponent_InitialSize_AutoSize_Runtime @ 14acb7af0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_InitialSize_AutoSize_Runtime::
~UEasyParticleComponent_InitialSize_AutoSize_Runtime
          (UEasyParticleComponent_InitialSize_AutoSize_Runtime *this)

{
  *(undefined ***)this = &___7UEasyParticleComponent_InitialSize_AutoSize_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acb9fa0

UClass * __cdecl UEasyParticleComponent_InitialSize_AutoSize_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSize_AutoSize_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize_Runtime,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialSize_AutoSize_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSize_AutoSize_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize_AutoSize_Runtime.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize_Runtime @ 14acbd5b0

void __cdecl
UEasyParticleComponent_InitialSize_AutoSize_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialSize_AutoSize_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialSize_AutoSize_Runtime @ 14acc0fe0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSize_AutoSize_Runtime * __thiscall
UEasyParticleComponent_InitialSize_AutoSize_Runtime::
UEasyParticleComponent_InitialSize_AutoSize_Runtime
          (UEasyParticleComponent_InitialSize_AutoSize_Runtime *this,FObjectInitializer *param_1)

{
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_InitialSize_AutoSize_Runtime__6B_;
  return this;
}

// Init_Implementation @ 14acc5840

void __thiscall
UEasyParticleComponent_InitialSize_AutoSize_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialSize_AutoSize_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  float local_res8;
  float fStackX_c;
  
  lVar3 = *(longlong *)&this->field_0x28;
  if (lVar3 != 0) {
    pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialSize_AutoSize_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14acc5884;
  }
  lVar3 = 0;
LAB_14acc5884:
  if ((*(longlong *)&this->field_0x30 != 0) && (lVar3 != 0)) {
    local_res8 = SUB84(param_1->Size,0);
    fStackX_c = SUB84(param_1->Size,4);
    if (*(char *)(lVar3 + 0x50) == '\0') {
      dVar5 = *(double *)(lVar3 + 0x60);
      local_res8 = fStackX_c;
    }
    else {
      dVar5 = *(double *)(lVar3 + 0x58);
    }
    fVar4 = __real_3f800000;
    if (0.0 < (float)dVar5) {
      fVar4 = local_res8 / (float)dVar5;
    }
    *(float *)(*(longlong *)&this->field_0x30 + 0x90) = fVar4;
  }
  return;
}

// Reset_Implementation @ 14acc88d0

void __thiscall
UEasyParticleComponent_InitialSize_AutoSize_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialSize_AutoSize_Runtime *this)

{
  return;
}

