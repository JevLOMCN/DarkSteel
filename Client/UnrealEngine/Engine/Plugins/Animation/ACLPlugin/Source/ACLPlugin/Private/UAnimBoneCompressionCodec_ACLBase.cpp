// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 9

// StaticClass @ 14de8e6b0

UClass * __cdecl UAnimBoneCompressionCodec_ACLBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimBoneCompressionCodec_ACLBase",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec_ACLBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBoneCompressionCodec_ACLBase>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec_ACLBase>,local_res8,
               UAnimBoneCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.InnerSingleton;
}

// UAnimBoneCompressionCodec_ACLBase @ 14deb1910

UAnimBoneCompressionCodec_ACLBase * __thiscall
UAnimBoneCompressionCodec_ACLBase::UAnimBoneCompressionCodec_ACLBase
          (UAnimBoneCompressionCodec_ACLBase *this,FVTableHelper *param_1)

{
  UAnimBoneCompressionCodec::UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this,param_1);
  *(undefined ***)this = &___7UAnimBoneCompressionCodec_ACLBase__6B_;
  return this;
}

// UAnimBoneCompressionCodec_ACLBase @ 14deb1940

UAnimBoneCompressionCodec_ACLBase * __thiscall
UAnimBoneCompressionCodec_ACLBase::UAnimBoneCompressionCodec_ACLBase
          (UAnimBoneCompressionCodec_ACLBase *this,FObjectInitializer *param_1)

{
  UAnimBoneCompressionCodec::UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this,param_1);
  *(undefined ***)this = &___7UAnimBoneCompressionCodec_ACLBase__6B_;
  return this;
}

// ~UAnimBoneCompressionCodec_ACLBase @ 14deb1d70

void __thiscall
UAnimBoneCompressionCodec_ACLBase::~UAnimBoneCompressionCodec_ACLBase
          (UAnimBoneCompressionCodec_ACLBase *this)

{
  *(undefined ***)this = &___7UAnimBoneCompressionCodec_ACLBase__6B_;
  UAnimBoneCompressionCodec::~UAnimBoneCompressionCodec((UAnimBoneCompressionCodec *)this);
  return;
}

// AllocateAnimData @ 14deb2b80

TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_> __thiscall
UAnimBoneCompressionCodec_ACLBase::AllocateAnimData(UAnimBoneCompressionCodec_ACLBase *this)

{
  undefined8 *puVar1;
  ICompressedAnimData *in_RDX;
  
  puVar1 = ::operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    in_RDX->_padding_ = (longlong)puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = &___7FACLCompressedAnimData__6B_;
    return (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<ICompressedAnimData,TDefaultDelete<ICompressedAnimData>_>)in_RDX;
}

// ByteSwapIn @ 14deb3000

void __thiscall
UAnimBoneCompressionCodec_ACLBase::ByteSwapIn
          (UAnimBoneCompressionCodec_ACLBase *this,ICompressedAnimData *param_1,
          TArrayView<unsigned_char,int> *param_2,FMemoryReader *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014deb300d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3->_padding_ + 0x188))(param_3,param_2->DataPtr,(longlong)param_2->ArrayNum);
  return;
}

// ByteSwapOut @ 14deb3060

void __thiscall
UAnimBoneCompressionCodec_ACLBase::ByteSwapOut
          (UAnimBoneCompressionCodec_ACLBase *this,ICompressedAnimData *param_1,
          TArrayView<unsigned_char,int> *param_2,FMemoryWriter *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014deb306d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_3 + 0x188))(param_3,param_2->DataPtr,(longlong)param_2->ArrayNum);
  return;
}

// GetPrivateStaticClass @ 14deb5930

UClass * __cdecl UAnimBoneCompressionCodec_ACLBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ACLPlugin",L"AnimBoneCompressionCodec_ACLBase",
               &Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.InnerSingleton,
               StaticRegisterNativesUAnimBoneCompressionCodec_ACLBase,0x38,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBoneCompressionCodec_ACLBase>,
               InternalVTableHelperCtorCaller<UAnimBoneCompressionCodec_ACLBase>,local_res8,
               UAnimBoneCompressionCodec::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBoneCompressionCodec_ACLBase.InnerSingleton;
}

// StaticRegisterNativesUAnimBoneCompressionCodec_ACLBase @ 14deb8640

void __cdecl
UAnimBoneCompressionCodec_ACLBase::StaticRegisterNativesUAnimBoneCompressionCodec_ACLBase(void)

{
  return;
}

