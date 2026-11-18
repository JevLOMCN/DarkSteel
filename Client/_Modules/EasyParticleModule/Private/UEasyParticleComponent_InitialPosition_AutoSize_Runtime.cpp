// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca4490

UClass * __cdecl UEasyParticleComponent_InitialPosition_AutoSize_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",
               L"EasyParticleComponent_InitialPosition_AutoSize_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPosition_AutoSize_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition_AutoSize_Runtime>
               ,local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime.
         InnerSingleton;
}

// UEasyParticleComponent_InitialPosition_AutoSize_Runtime @ 14aca9e70

UEasyParticleComponent_InitialPosition_AutoSize_Runtime * __thiscall
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::
UEasyParticleComponent_InitialPosition_AutoSize_Runtime
          (UEasyParticleComponent_InitialPosition_AutoSize_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition_AutoSize_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_InitialPosition_AutoSize_Runtime @ 14acaab10

void __thiscall
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::
~UEasyParticleComponent_InitialPosition_AutoSize_Runtime
          (UEasyParticleComponent_InitialPosition_AutoSize_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad7c0

UClass * __cdecl
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",
               L"EasyParticleComponent_InitialPosition_AutoSize_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPosition_AutoSize_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition_AutoSize_Runtime>
               ,local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_AutoSize_Runtime.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize_Runtime @ 14acae3b0

void __cdecl
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialPosition_AutoSize_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialPosition_AutoSize_Runtime @ 14acc0990

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialPosition_AutoSize_Runtime * __thiscall
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::
UEasyParticleComponent_InitialPosition_AutoSize_Runtime
          (UEasyParticleComponent_InitialPosition_AutoSize_Runtime *this,FObjectInitializer *param_1
          )

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition_AutoSize_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acc5480

void __thiscall
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialPosition_AutoSize_Runtime *this,FGeometry *param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float local_res8;
  float fStackX_c;
  
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_InitialPosition_AutoSize_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acc54c4;
  }
  lVar5 = 0;
LAB_14acc54c4:
  lVar3 = this->_padding_;
  if ((lVar3 != 0) && (lVar5 != 0)) {
    local_res8 = SUB84(param_1->Size,0);
    fStackX_c = SUB84(param_1->Size,4);
    fStackX_c = fStackX_c * __real_3f000000;
    fVar6 = (float)((uint)(local_res8 * __real_3f000000) ^ __xmm_80000000800000008000000080000000);
    fVar7 = (float)((uint)fStackX_c ^ __xmm_80000000800000008000000080000000);
    fVar1 = (this->FactorY).factor;
    *(double *)(lVar3 + 0x58) =
         (double)((local_res8 * __real_3f000000 - fVar6) * (this->FactorX).factor + fVar6);
    *(double *)(lVar3 + 0x60) = (double)((fStackX_c - fVar7) * fVar1 + fVar7);
  }
  return;
}

// Reset_Implementation @ 14acc8730

void __thiscall
UEasyParticleComponent_InitialPosition_AutoSize_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialPosition_AutoSize_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

