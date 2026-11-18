// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 7

// StaticClass @ 14def7110

UClass * __cdecl URootMotionGeneratorOp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RootMotionGeneratorOp",
               &Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton,
               StaticRegisterNativesURootMotionGeneratorOp,0xb0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URootMotionGeneratorOp>,
               InternalVTableHelperCtorCaller<URootMotionGeneratorOp>,local_res8,
               URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton;
}

// URootMotionGeneratorOp @ 14df1b140

URootMotionGeneratorOp * __thiscall
URootMotionGeneratorOp::URootMotionGeneratorOp(URootMotionGeneratorOp *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7URootMotionGeneratorOp__6B_;
  (this->SourceRootBone).ComparisonIndex = 0;
  (this->SourceRootBone).Number = 0;
  (this->TargetRootBone).ComparisonIndex = 0;
  (this->TargetRootBone).Number = 0;
  (this->TargetPelvisBone).ComparisonIndex = 0;
  (this->TargetPelvisBone).Number = 0;
  this->bRotateWithPelvis = false;
  this->bPropagateToNonRetargetedChildren = true;
  this->bMaintainOffsetFromPelvis = true;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->GlobalOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->GlobalOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->GlobalOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->GlobalOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->GlobalOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->GlobalOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->GlobalOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->GlobalOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// URootMotionGeneratorOp @ 14df1b1e0

URootMotionGeneratorOp * __thiscall
URootMotionGeneratorOp::URootMotionGeneratorOp
          (URootMotionGeneratorOp *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7URootMotionGeneratorOp__6B_;
  (this->SourceRootBone).ComparisonIndex = 0;
  (this->SourceRootBone).Number = 0;
  (this->TargetRootBone).ComparisonIndex = 0;
  (this->TargetRootBone).Number = 0;
  (this->TargetPelvisBone).ComparisonIndex = 0;
  (this->TargetPelvisBone).Number = 0;
  this->bRotateWithPelvis = false;
  this->bPropagateToNonRetargetedChildren = true;
  this->bMaintainOffsetFromPelvis = true;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->GlobalOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->GlobalOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->GlobalOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->GlobalOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->GlobalOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->GlobalOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->GlobalOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->GlobalOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~URootMotionGeneratorOp @ 14df1ca80

void __thiscall URootMotionGeneratorOp::~URootMotionGeneratorOp(URootMotionGeneratorOp *this)

{
  this->_padding_ = (longlong)&___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2c260

void __thiscall
URootMotionGeneratorOp::ConvertToInstancedStruct
          (URootMotionGeneratorOp *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UPackage *pUVar7;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOp,(UObject *)pUVar7,
                         L"IKRetargetRootMotionOp");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton,
             (uchar *)0x0);
  puVar2 = param_1->StructMemory;
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if (puVar2 == (uchar *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd1,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pUVar3 == (UScriptStruct *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0xd2,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOp,(UObject *)pUVar7,
                         L"IKRetargetRootMotionOp");
    if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14df2c341;
  }
  else {
LAB_14df2c341:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton)->
                 _padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14df2c38b;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14df2c38b:
  puVar2[8] = (uchar)this->_padding_;
  *(FName *)(puVar2 + 0xd4) = this->SourceRootBone;
  *(FName *)(puVar2 + 0xdc) = this->TargetRootBone;
  *(FName *)(puVar2 + 0xe4) = this->TargetPelvisBone;
  puVar2[0x58] = this->RootMotionSource;
  puVar2[0x6d] = this->RootHeightSource;
  puVar2[0xd1] = this->bPropagateToNonRetargetedChildren;
  puVar2[0xd0] = this->bMaintainOffsetFromPelvis;
  puVar2[0x6c] = this->bRotateWithPelvis;
  dVar5 = (this->GlobalOffset).Rotation.XY.m128d_f64[1];
  *(double *)(puVar2 + 0x70) = (this->GlobalOffset).Rotation.XY.m128d_f64[0];
  *(double *)(puVar2 + 0x78) = dVar5;
  dVar5 = (this->GlobalOffset).Rotation.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0x80) = (this->GlobalOffset).Rotation.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0x88) = dVar5;
  dVar5 = (this->GlobalOffset).Translation.XY.m128d_f64[1];
  *(double *)(puVar2 + 0x90) = (this->GlobalOffset).Translation.XY.m128d_f64[0];
  *(double *)(puVar2 + 0x98) = dVar5;
  dVar5 = (this->GlobalOffset).Translation.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0xa0) = (this->GlobalOffset).Translation.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0xa8) = dVar5;
  dVar5 = (this->GlobalOffset).Scale3D.XY.m128d_f64[1];
  *(double *)(puVar2 + 0xb0) = (this->GlobalOffset).Scale3D.XY.m128d_f64[0];
  *(double *)(puVar2 + 0xb8) = dVar5;
  dVar5 = (this->GlobalOffset).Scale3D.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0xc0) = (this->GlobalOffset).Scale3D.ZW.m128d_f64[0];
  *(double *)(puVar2 + 200) = dVar5;
  return;
}

// GetPrivateStaticClass @ 14df3e310

UClass * __cdecl URootMotionGeneratorOp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RootMotionGeneratorOp",
               &Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton,
               StaticRegisterNativesURootMotionGeneratorOp,0xb0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URootMotionGeneratorOp>,
               InternalVTableHelperCtorCaller<URootMotionGeneratorOp>,local_res8,
               URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionGeneratorOp.InnerSingleton;
}

// StaticRegisterNativesURootMotionGeneratorOp @ 14df5a3f0

void __cdecl URootMotionGeneratorOp::StaticRegisterNativesURootMotionGeneratorOp(void)

{
  return;
}

