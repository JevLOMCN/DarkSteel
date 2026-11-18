// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticStruct @ 14df06630

UScriptStruct * __cdecl FIKRetargetPinBoneOpSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar1,
                         L"IKRetargetPinBoneOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton;
}

// FIKRetargetPinBoneOpSettings @ 14df16aa0

FIKRetargetPinBoneOpSettings * __thiscall
FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings
          (FIKRetargetPinBoneOpSettings *this,FIKRetargetPinBoneOpSettings *param_1)

{
  TArray<FPinBoneData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UObjectBase *this_00;
  FScriptContainerElement *_Src;
  double dVar4;
  
  this->_padding_ = (longlong)&___7FIKRetargetOpSettingsBase__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = 0;
  this_00 = (UObjectBase *)param_1->_padding_;
  if (this_00 != (UObjectBase *)0x0) {
    UObjectBase::AddRef(this_00);
    this->_padding_ = (longlong)this_00;
  }
  pTVar1 = &this->BonesToPin;
  this->_padding_ = (longlong)&___7FIKRetargetPinBoneOpSettings__6B_;
  piVar2 = &(this->BonesToPin).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->BonesToPin).ArrayNum;
  _Src = (param_1->BonesToPin).AllocatorInstance.Data;
  (this->BonesToPin).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x170);
  }
  this->SkeletonToCopyFrom = param_1->SkeletonToCopyFrom;
  this->bCopyTranslation = param_1->bCopyTranslation;
  this->TranslationMode = param_1->TranslationMode;
  this->bCopyRotation = param_1->bCopyRotation;
  this->RotationMode = param_1->RotationMode;
  this->bCopyScale = param_1->bCopyScale;
  this->bPropagateToChildren = param_1->bPropagateToChildren;
  dVar4 = (param_1->GlobalOffset).Rotation.XY.m128d_f64[1];
  (this->GlobalOffset).Rotation.XY.m128d_f64[0] = (param_1->GlobalOffset).Rotation.XY.m128d_f64[0];
  (this->GlobalOffset).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[1];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[0] = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[0];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalOffset).Translation.XY.m128d_f64[1];
  (this->GlobalOffset).Translation.XY.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.XY.m128d_f64[0];
  (this->GlobalOffset).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalOffset).Translation.ZW.m128d_f64[1];
  (this->GlobalOffset).Translation.ZW.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.ZW.m128d_f64[0];
  (this->GlobalOffset).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[1];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[0];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[1];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[0];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalOffset).Rotation.XY.m128d_f64[1];
  (this->LocalOffset).Rotation.XY.m128d_f64[0] = (param_1->LocalOffset).Rotation.XY.m128d_f64[0];
  (this->LocalOffset).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalOffset).Rotation.ZW.m128d_f64[1];
  (this->LocalOffset).Rotation.ZW.m128d_f64[0] = (param_1->LocalOffset).Rotation.ZW.m128d_f64[0];
  (this->LocalOffset).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalOffset).Translation.XY.m128d_f64[1];
  (this->LocalOffset).Translation.XY.m128d_f64[0] =
       (param_1->LocalOffset).Translation.XY.m128d_f64[0];
  (this->LocalOffset).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalOffset).Translation.ZW.m128d_f64[1];
  (this->LocalOffset).Translation.ZW.m128d_f64[0] =
       (param_1->LocalOffset).Translation.ZW.m128d_f64[0];
  (this->LocalOffset).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalOffset).Scale3D.XY.m128d_f64[1];
  (this->LocalOffset).Scale3D.XY.m128d_f64[0] = (param_1->LocalOffset).Scale3D.XY.m128d_f64[0];
  (this->LocalOffset).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = (param_1->LocalOffset).Scale3D.ZW.m128d_f64[1];
  (this->LocalOffset).Scale3D.ZW.m128d_f64[0] = (param_1->LocalOffset).Scale3D.ZW.m128d_f64[0];
  (this->LocalOffset).Scale3D.ZW.m128d_f64[1] = dVar4;
  return this;
}

// FIKRetargetPinBoneOpSettings @ 14df16c40

FIKRetargetPinBoneOpSettings * __thiscall
FIKRetargetPinBoneOpSettings::FIKRetargetPinBoneOpSettings(FIKRetargetPinBoneOpSettings *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&___7FIKRetargetPinBoneOpSettings__6B_;
  this->_padding_ = 0;
  (this->BonesToPin).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesToPin).ArrayNum = 0;
  (this->BonesToPin).ArrayMax = 0;
  this->bPropagateToChildren = false;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->SkeletonToCopyFrom = Target;
  this->bCopyTranslation = true;
  this->TranslationMode = CopyGlobalPosition;
  this->bCopyRotation = true;
  this->RotationMode = CopyGlobalRotation;
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
  return this;
}

// operator= @ 14df1dcb0

FIKRetargetPinBoneOpSettings * __thiscall
FIKRetargetPinBoneOpSettings::operator=
          (FIKRetargetPinBoneOpSettings *this,FIKRetargetPinBoneOpSettings *param_1)

{
  double dVar1;
  
  FIKRetargetOpSettingsBase::operator=
            ((FIKRetargetOpSettingsBase *)this,(FIKRetargetOpSettingsBase *)param_1);
  TArray<FPinBoneData,TSizedDefaultAllocator<32>_>::operator=
            (&this->BonesToPin,&param_1->BonesToPin);
  this->SkeletonToCopyFrom = param_1->SkeletonToCopyFrom;
  this->bCopyTranslation = param_1->bCopyTranslation;
  this->TranslationMode = param_1->TranslationMode;
  this->bCopyRotation = param_1->bCopyRotation;
  this->RotationMode = param_1->RotationMode;
  this->bCopyScale = param_1->bCopyScale;
  this->bPropagateToChildren = param_1->bPropagateToChildren;
  dVar1 = (param_1->GlobalOffset).Rotation.XY.m128d_f64[1];
  (this->GlobalOffset).Rotation.XY.m128d_f64[0] = (param_1->GlobalOffset).Rotation.XY.m128d_f64[0];
  (this->GlobalOffset).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[1];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[0] = (param_1->GlobalOffset).Rotation.ZW.m128d_f64[0];
  (this->GlobalOffset).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Translation.XY.m128d_f64[1];
  (this->GlobalOffset).Translation.XY.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.XY.m128d_f64[0];
  (this->GlobalOffset).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Translation.ZW.m128d_f64[1];
  (this->GlobalOffset).Translation.ZW.m128d_f64[0] =
       (param_1->GlobalOffset).Translation.ZW.m128d_f64[0];
  (this->GlobalOffset).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[1];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.XY.m128d_f64[0];
  (this->GlobalOffset).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[1];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[0] = (param_1->GlobalOffset).Scale3D.ZW.m128d_f64[0];
  (this->GlobalOffset).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalOffset).Rotation.XY.m128d_f64[1];
  (this->LocalOffset).Rotation.XY.m128d_f64[0] = (param_1->LocalOffset).Rotation.XY.m128d_f64[0];
  (this->LocalOffset).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalOffset).Rotation.ZW.m128d_f64[1];
  (this->LocalOffset).Rotation.ZW.m128d_f64[0] = (param_1->LocalOffset).Rotation.ZW.m128d_f64[0];
  (this->LocalOffset).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalOffset).Translation.XY.m128d_f64[1];
  (this->LocalOffset).Translation.XY.m128d_f64[0] =
       (param_1->LocalOffset).Translation.XY.m128d_f64[0];
  (this->LocalOffset).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalOffset).Translation.ZW.m128d_f64[1];
  (this->LocalOffset).Translation.ZW.m128d_f64[0] =
       (param_1->LocalOffset).Translation.ZW.m128d_f64[0];
  (this->LocalOffset).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalOffset).Scale3D.XY.m128d_f64[1];
  (this->LocalOffset).Scale3D.XY.m128d_f64[0] = (param_1->LocalOffset).Scale3D.XY.m128d_f64[0];
  (this->LocalOffset).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalOffset).Scale3D.ZW.m128d_f64[1];
  (this->LocalOffset).Scale3D.ZW.m128d_f64[0] = (param_1->LocalOffset).Scale3D.ZW.m128d_f64[0];
  (this->LocalOffset).Scale3D.ZW.m128d_f64[1] = dVar1;
  return this;
}

// CopySettingsAtRuntime @ 14df2ddf0

void __thiscall
FIKRetargetPinBoneOpSettings::CopySettingsAtRuntime
          (FIKRetargetPinBoneOpSettings *this,FIKRetargetOpSettingsBase *param_1)

{
  UPackage *pUVar1;
  FName local_res18 [2];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  ::FName::FName(local_res18,"BonesToPin");
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(FName *)local_18.AllocatorInstance.Data = local_res18[0];
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar1,
                         L"IKRetargetPinBoneOpSettings");
  }
  FIKRetargetOpBase::CopyStructProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton,param_1,
             this,&local_18);
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetControllerType @ 14df37de0

UClass * __thiscall
FIKRetargetPinBoneOpSettings::GetControllerType(FIKRetargetPinBoneOpSettings *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargetPinBoneController",
               &Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton,
               UIKRetargetPinBoneController::StaticRegisterNativesUIKRetargetPinBoneController,0x30,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargetPinBoneController>,
               InternalVTableHelperCtorCaller<UIKRetargetPinBoneController>,aFStackX_8,
               UIKRetargetOpControllerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargetPinBoneController.InnerSingleton;
}

// PostLoad @ 14df4c4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FIKRetargetPinBoneOpSettings::PostLoad(FIKRetargetPinBoneOpSettings *this,Type param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if ((int)param_1 < 3) {
    pFVar2 = (this->BonesToPin).AllocatorInstance.Data;
    iVar1 = (this->BonesToPin).ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x170;
    while( true ) {
      if ((this->BonesToPin).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FPinBoneData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar2 == pFVar3) break;
      *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)(pFVar2 + 0x160);
      *(undefined8 *)pFVar2 = *(undefined8 *)(pFVar2 + 0x168);
      pFVar2 = pFVar2 + 0x170;
    }
  }
  return;
}

// Serialize @ 14df53890

bool __thiscall
FIKRetargetPinBoneOpSettings::Serialize(FIKRetargetPinBoneOpSettings *this,FArchive *param_1)

{
  UScriptStruct *this_00;
  int iVar1;
  UPackage *pUVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar2,
                         L"IKRetargetPinBoneOpSettings");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPinBoneOpSettings,(UObject *)pUVar2,
                         L"IKRetargetPinBoneOpSettings");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)this_00,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FIKRetargetPinBoneOpSettings.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    (**(code **)(this->_padding_ + 0x10))(this,iVar1);
  }
  return true;
}

