// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// StaticClass @ 1468d9ea0

UClass * __cdecl UMovieScene2DTransformTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformTrack",
               &Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene2DTransformTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene2DTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton;
}

// UMovieScene2DTransformTrack @ 1469017c0

UMovieScene2DTransformTrack * __thiscall
UMovieScene2DTransformTrack::UMovieScene2DTransformTrack
          (UMovieScene2DTransformTrack *this,FVTableHelper *param_1)

{
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieScene2DTransformTrack @ 146901800

UMovieScene2DTransformTrack * __thiscall
UMovieScene2DTransformTrack::UMovieScene2DTransformTrack
          (UMovieScene2DTransformTrack *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  FVar1 = FMovieSceneBlendTypeField::All();
  this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  return this;
}

// ~UMovieScene2DTransformTrack @ 146904ad0

void __thiscall
UMovieScene2DTransformTrack::~UMovieScene2DTransformTrack(UMovieScene2DTransformTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  return;
}

// CreateNewSection @ 146912f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieScene2DTransformTrack::CreateNewSection(UMovieScene2DTransformTrack *this)

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
  pUVar1 = UMovieScene2DTransformSection::StaticClass();
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

// GetPrivateStaticClass @ 146922530

UClass * __cdecl UMovieScene2DTransformTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MovieScene2DTransformTrack",
               &Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene2DTransformTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene2DTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieScene2DTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene2DTransformTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieScene2DTransformTrack @ 1469459a0

void __cdecl UMovieScene2DTransformTrack::StaticRegisterNativesUMovieScene2DTransformTrack(void)

{
  return;
}

// SupportsType @ 1469461c0

bool __thiscall
UMovieScene2DTransformTrack::SupportsType
          (UMovieScene2DTransformTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14694620a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14694620a:
  pUVar5 = UMovieScene2DTransformSection::StaticClass();
  return pUVar4 == pUVar5;
}

