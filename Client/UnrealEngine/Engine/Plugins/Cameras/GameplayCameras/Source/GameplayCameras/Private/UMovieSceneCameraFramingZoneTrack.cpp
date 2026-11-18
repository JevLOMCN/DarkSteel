// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// StaticClass @ 14d5e5390

UClass * __cdecl UMovieSceneCameraFramingZoneTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"MovieSceneCameraFramingZoneTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraFramingZoneTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraFramingZoneTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraFramingZoneTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneTrack.InnerSingleton;
}

// UMovieSceneCameraFramingZoneTrack @ 14d5ff120

UMovieSceneCameraFramingZoneTrack * __thiscall
UMovieSceneCameraFramingZoneTrack::UMovieSceneCameraFramingZoneTrack
          (UMovieSceneCameraFramingZoneTrack *this,FVTableHelper *param_1)

{
  UMovieScenePropertyTrack::UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneCameraFramingZoneTrack @ 14d5ff160

UMovieSceneCameraFramingZoneTrack * __thiscall
UMovieSceneCameraFramingZoneTrack::UMovieSceneCameraFramingZoneTrack
          (UMovieSceneCameraFramingZoneTrack *this,FObjectInitializer *param_1)

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

// ~UMovieSceneCameraFramingZoneTrack @ 14d600e00

void __thiscall
UMovieSceneCameraFramingZoneTrack::~UMovieSceneCameraFramingZoneTrack
          (UMovieSceneCameraFramingZoneTrack *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  UMovieScenePropertyTrack::~UMovieScenePropertyTrack((UMovieScenePropertyTrack *)this);
  return;
}

// CreateNewSection @ 14d6124b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCameraFramingZoneTrack::CreateNewSection(UMovieSceneCameraFramingZoneTrack *this)

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
  pUVar1 = UMovieSceneCameraFramingZoneSection::StaticClass();
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

// GetPrivateStaticClass @ 14d61cea0

UClass * __cdecl UMovieSceneCameraFramingZoneTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneTrack.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"MovieSceneCameraFramingZoneTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraFramingZoneTrack,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraFramingZoneTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraFramingZoneTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraFramingZoneTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneCameraFramingZoneTrack @ 14d6393c0

void __cdecl
UMovieSceneCameraFramingZoneTrack::StaticRegisterNativesUMovieSceneCameraFramingZoneTrack(void)

{
  return;
}

// SupportsType @ 14d6399b0

bool __thiscall
UMovieSceneCameraFramingZoneTrack::SupportsType
          (UMovieSceneCameraFramingZoneTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_14d6399fa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_14d6399fa:
  pUVar5 = UMovieSceneCameraFramingZoneSection::StaticClass();
  return pUVar4 == pUVar5;
}

