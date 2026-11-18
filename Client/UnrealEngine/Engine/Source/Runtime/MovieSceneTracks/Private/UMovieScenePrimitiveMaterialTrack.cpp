// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1468831d0

UClass * __cdecl UMovieScenePrimitiveMaterialTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePrimitiveMaterialTrack",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieScenePrimitiveMaterialTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePrimitiveMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton;
}

// UMovieScenePrimitiveMaterialTrack @ 14689eba0

UMovieScenePrimitiveMaterialTrack * __thiscall
UMovieScenePrimitiveMaterialTrack::UMovieScenePrimitiveMaterialTrack
          (UMovieScenePrimitiveMaterialTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MaterialInfo).MaterialSlotName.ComparisonIndex = 0;
  (this->MaterialInfo).MaterialSlotName.Number = 0;
  (this->MaterialInfo).MaterialSlotIndex = 0;
  (this->MaterialInfo).MaterialType = Empty;
  return this;
}

// UMovieScenePrimitiveMaterialTrack @ 14689ec10

UMovieScenePrimitiveMaterialTrack * __thiscall
UMovieScenePrimitiveMaterialTrack::UMovieScenePrimitiveMaterialTrack
          (UMovieScenePrimitiveMaterialTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MaterialInfo).MaterialSlotName.ComparisonIndex = 0;
  (this->MaterialInfo).MaterialSlotName.Number = 0;
  (this->MaterialInfo).MaterialSlotIndex = 0;
  (this->MaterialInfo).MaterialType = Empty;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Absolute);
  FMovieSceneBlendTypeField::Add((FMovieSceneBlendTypeField *)&this->_padding_,Additive);
  return this;
}

// ~UMovieScenePrimitiveMaterialTrack @ 1468a0e80

void __thiscall
UMovieScenePrimitiveMaterialTrack::~UMovieScenePrimitiveMaterialTrack
          (UMovieScenePrimitiveMaterialTrack *this)

{
  this->_padding_ =
       (longlong)&UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__
  ;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// CreateNewSection @ 1468af0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieScenePrimitiveMaterialTrack::CreateNewSection(UMovieScenePrimitiveMaterialTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// GetMaterialIndex @ 1468b5af0

int __thiscall
UMovieScenePrimitiveMaterialTrack::GetMaterialIndex(UMovieScenePrimitiveMaterialTrack *this)

{
  return (this->MaterialInfo).MaterialSlotIndex;
}

// GetMaterialInfo @ 1468b5b00

FComponentMaterialInfo * __thiscall
UMovieScenePrimitiveMaterialTrack::GetMaterialInfo(UMovieScenePrimitiveMaterialTrack *this)

{
  return &this->MaterialInfo;
}

// GetPrivateStaticClass @ 1468b80f0

UClass * __cdecl UMovieScenePrimitiveMaterialTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePrimitiveMaterialTrack",
               &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton,
               StaticRegisterNativesUMovieScenePrimitiveMaterialTrack,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePrimitiveMaterialTrack>,
               InternalVTableHelperCtorCaller<UMovieScenePrimitiveMaterialTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.InnerSingleton;
}

// SetMaterialIndex @ 1468cebe0

void __thiscall
UMovieScenePrimitiveMaterialTrack::SetMaterialIndex
          (UMovieScenePrimitiveMaterialTrack *this,int param_1)

{
  (this->MaterialInfo).MaterialSlotIndex = param_1;
  (this->MaterialInfo).MaterialType = IndexedMaterial;
  return;
}

// SetMaterialInfo @ 1468cec00

void __thiscall
UMovieScenePrimitiveMaterialTrack::SetMaterialInfo
          (UMovieScenePrimitiveMaterialTrack *this,FComponentMaterialInfo *param_1)

{
  int iVar1;
  EComponentMaterialType EVar2;
  undefined3 uVar3;
  
  iVar1 = param_1->MaterialSlotIndex;
  EVar2 = param_1->MaterialType;
  uVar3 = *(undefined3 *)&param_1->field_0xd;
  (this->MaterialInfo).MaterialSlotName = param_1->MaterialSlotName;
  (this->MaterialInfo).MaterialSlotIndex = iVar1;
  (this->MaterialInfo).MaterialType = EVar2;
  *(undefined3 *)&(this->MaterialInfo).field_0xd = uVar3;
  return;
}

// StaticRegisterNativesUMovieScenePrimitiveMaterialTrack @ 1468d01d0

void __cdecl
UMovieScenePrimitiveMaterialTrack::StaticRegisterNativesUMovieScenePrimitiveMaterialTrack(void)

{
  return;
}

// SupportsType @ 1468d1bb0

bool __thiscall
UMovieScenePrimitiveMaterialTrack::SupportsType
          (UMovieScenePrimitiveMaterialTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1468d1bfa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d1bfa:
  pUVar5 = Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();
  return pUVar4 == pUVar5;
}

