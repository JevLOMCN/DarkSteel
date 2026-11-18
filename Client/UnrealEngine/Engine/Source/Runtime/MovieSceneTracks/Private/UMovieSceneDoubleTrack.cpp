// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 14687a270

UClass * __cdecl UMovieSceneDoubleTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleTrack",
               &Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleTrack,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneDoubleTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton;
}

// UMovieSceneDoubleTrack @ 14689d960

UMovieSceneDoubleTrack * __thiscall
UMovieSceneDoubleTrack::UMovieSceneDoubleTrack(UMovieSceneDoubleTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneDoubleTrack @ 14689d9c0

UMovieSceneDoubleTrack * __thiscall
UMovieSceneDoubleTrack::UMovieSceneDoubleTrack
          (UMovieSceneDoubleTrack *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  FVar1 = FMovieSceneBlendTypeField::All();
  this->field_0x88 = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  return this;
}

// ~UMovieSceneDoubleTrack @ 1468a0870

void __thiscall UMovieSceneDoubleTrack::~UMovieSceneDoubleTrack(UMovieSceneDoubleTrack *this)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// CreateNewSection @ 1468ae480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneDoubleTrack::CreateNewSection(UMovieSceneDoubleTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister();
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

// GetPrivateStaticClass @ 1468b7140

UClass * __cdecl UMovieSceneDoubleTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleTrack",
               &Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleTrack,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneDoubleTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneDoubleTrack @ 1468d0050

void __cdecl UMovieSceneDoubleTrack::StaticRegisterNativesUMovieSceneDoubleTrack(void)

{
  return;
}

// SupportsType @ 1468d1460

bool __thiscall
UMovieSceneDoubleTrack::SupportsType
          (UMovieSceneDoubleTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d14aa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d14aa:
  pUVar5 = Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister();
  return pUVar4 == pUVar5;
}

