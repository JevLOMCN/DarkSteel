// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 10

// StaticClass @ 14dee66a0

UClass * __cdecl UPinBoneOp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"PinBoneOp",&Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton,
               StaticRegisterNativesUPinBoneOp,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPinBoneOp>,InternalVTableHelperCtorCaller<UPinBoneOp>,local_res8
               ,URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton;
}

// UPinBoneOp @ 14df1aa80

UPinBoneOp * __thiscall UPinBoneOp::UPinBoneOp(UPinBoneOp *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 1;
  *(undefined ***)this = &___7UPinBoneOp__6B_;
  (this->BonesToPin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToPin).ArrayNum = 0;
  (this->BonesToPin).ArrayMax = 0;
  this->PinTo = Target;
  this->bCopyTranslation = true;
  this->bCopyRotation = true;
  this->bCopyScale = true;
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
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalOffset).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  (this->LocalOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bMaintainOffset_DEPRECATED = true;
  return this;
}

// UPinBoneOp @ 14df1ab70

UPinBoneOp * __thiscall UPinBoneOp::UPinBoneOp(UPinBoneOp *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->field_0x28 = 1;
  *(undefined ***)this = &___7UPinBoneOp__6B_;
  (this->BonesToPin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToPin).ArrayNum = 0;
  (this->BonesToPin).ArrayMax = 0;
  this->PinTo = Target;
  this->bCopyTranslation = true;
  this->bCopyRotation = true;
  this->bCopyScale = true;
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
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalOffset).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalOffset).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalOffset).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalOffset).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalOffset).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalOffset).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalOffset).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalOffset).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalOffset).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  (this->LocalOffset).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalOffset).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalOffset).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->bMaintainOffset_DEPRECATED = true;
  return this;
}

// ~UPinBoneOp @ 14df1c980

void __thiscall UPinBoneOp::~UPinBoneOp(UPinBoneOp *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UPinBoneOp__6B_;
  pFVar1 = (this->BonesToPin).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7URetargetOpBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2c030

void __thiscall UPinBoneOp::ConvertToInstancedStruct(UPinBoneOp *this,FInstancedStruct *param_1)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  UPackage *pUVar7;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOp,(UObject *)pUVar7,
                         L"IKRetargetPinBoneOp");
  }
  FInstancedStruct::InitializeAs
            (param_1,Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton,
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
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar7 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOp,(UObject *)pUVar7,
                         L"IKRetargetPinBoneOp");
    if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14df2c111;
  }
  else {
LAB_14df2c111:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton)->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOp.OuterSingleton)->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14df2c15b;
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
LAB_14df2c15b:
  puVar2[8] = this->field_0x28;
  TArray<FPinBoneData,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPinBoneData,TSizedDefaultAllocator<32>_> *)(puVar2 + 0x38),&this->BonesToPin);
  puVar2[0x48] = this->PinTo;
  puVar2[0x49] = this->bCopyTranslation;
  puVar2[0x4b] = this->bCopyRotation;
  puVar2[0x4d] = this->bCopyScale;
  puVar2[0x4a] = this->TranslationMode;
  puVar2[0x4c] = this->RotationMode;
  dVar5 = (this->GlobalOffset).Rotation.XY.m128d_f64[1];
  *(double *)(puVar2 + 0x50) = (this->GlobalOffset).Rotation.XY.m128d_f64[0];
  *(double *)(puVar2 + 0x58) = dVar5;
  dVar5 = (this->GlobalOffset).Rotation.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0x60) = (this->GlobalOffset).Rotation.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0x68) = dVar5;
  dVar5 = (this->GlobalOffset).Translation.XY.m128d_f64[1];
  *(double *)(puVar2 + 0x70) = (this->GlobalOffset).Translation.XY.m128d_f64[0];
  *(double *)(puVar2 + 0x78) = dVar5;
  dVar5 = (this->GlobalOffset).Translation.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0x80) = (this->GlobalOffset).Translation.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0x88) = dVar5;
  dVar5 = (this->GlobalOffset).Scale3D.XY.m128d_f64[1];
  *(double *)(puVar2 + 0x90) = (this->GlobalOffset).Scale3D.XY.m128d_f64[0];
  *(double *)(puVar2 + 0x98) = dVar5;
  dVar5 = (this->GlobalOffset).Scale3D.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0xa0) = (this->GlobalOffset).Scale3D.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0xa8) = dVar5;
  dVar5 = (this->LocalOffset).Rotation.XY.m128d_f64[1];
  *(double *)(puVar2 + 0xb0) = (this->LocalOffset).Rotation.XY.m128d_f64[0];
  *(double *)(puVar2 + 0xb8) = dVar5;
  dVar5 = (this->LocalOffset).Rotation.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0xc0) = (this->LocalOffset).Rotation.ZW.m128d_f64[0];
  *(double *)(puVar2 + 200) = dVar5;
  dVar5 = (this->LocalOffset).Translation.XY.m128d_f64[1];
  *(double *)(puVar2 + 0xd0) = (this->LocalOffset).Translation.XY.m128d_f64[0];
  *(double *)(puVar2 + 0xd8) = dVar5;
  dVar5 = (this->LocalOffset).Translation.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0xe0) = (this->LocalOffset).Translation.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0xe8) = dVar5;
  dVar5 = (this->LocalOffset).Scale3D.XY.m128d_f64[1];
  *(double *)(puVar2 + 0xf0) = (this->LocalOffset).Scale3D.XY.m128d_f64[0];
  *(double *)(puVar2 + 0xf8) = dVar5;
  dVar5 = (this->LocalOffset).Scale3D.ZW.m128d_f64[1];
  *(double *)(puVar2 + 0x100) = (this->LocalOffset).Scale3D.ZW.m128d_f64[0];
  *(double *)(puVar2 + 0x108) = dVar5;
  return;
}

// GetPrivateStaticClass @ 14df3ded0

UClass * __cdecl UPinBoneOp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"PinBoneOp",&Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton,
               StaticRegisterNativesUPinBoneOp,0x120,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPinBoneOp>,InternalVTableHelperCtorCaller<UPinBoneOp>,local_res8
               ,URetargetOpBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPinBoneOp.InnerSingleton;
}

// Serialize @ 14df53d40

void __thiscall UPinBoneOp::Serialize(UPinBoneOp *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014df53d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return;
}

// Serialize @ 14df53d70

void __thiscall UPinBoneOp::Serialize(UPinBoneOp *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FIKRigObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUPinBoneOp @ 14df5a360

void __cdecl UPinBoneOp::StaticRegisterNativesUPinBoneOp(void)

{
  return;
}

// __VTableCtorCaller @ 14df62bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPinBoneOp::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &___7UPinBoneOp__6B_;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined2 *)(pUVar4 + 1) = 1;
    *(undefined4 *)&pUVar4[1].field_0x18 = 0x1010101;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 2) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[2].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[2].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 3) = (double)fVar1;
    *(double *)&pUVar4[3].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 4) = (double)fVar2;
    *(double *)&pUVar4[4].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[4].field_0x10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[4].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 5) = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[5].field_0x8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[5].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[5].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)(pUVar4 + 6) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[6].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[6].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[6].field_0x18 = (double)fVar3;
    pUVar4[6].field_0x20 = 1;
    return pUVar4;
  }
  return (UObject *)0x0;
}

