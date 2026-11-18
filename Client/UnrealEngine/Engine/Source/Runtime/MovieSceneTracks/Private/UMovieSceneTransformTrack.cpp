// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// StaticClass @ 146882fa0

UClass * __cdecl UMovieSceneTransformTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformTrack",
               &Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneTransformTrack,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton;
}

// UMovieSceneTransformTrack @ 14689f1d0

UMovieSceneTransformTrack * __thiscall
UMovieSceneTransformTrack::UMovieSceneTransformTrack
          (UMovieSceneTransformTrack *this,FVTableHelper *param_1)

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

// UMovieSceneTransformTrack @ 14689f230

UMovieSceneTransformTrack * __thiscall
UMovieSceneTransformTrack::UMovieSceneTransformTrack
          (UMovieSceneTransformTrack *this,FObjectInitializer *param_1)

{
  undefined1 uVar1;
  FMovieSceneBlendTypeField FVar2;
  undefined7 extraout_var;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  FVar2 = FMovieSceneBlendTypeField::All();
  uVar1 = *(undefined1 *)CONCAT71(extraout_var,FVar2.BlendTypeField);
  *(uint *)&this->field_0x78 = *(uint *)&this->field_0x78 | 0x11;
  this->field_0x88 = uVar1;
  return this;
}

// ~UMovieSceneTransformTrack @ 1468a1110

void __thiscall
UMovieSceneTransformTrack::~UMovieSceneTransformTrack(UMovieSceneTransformTrack *this)

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

// CreateNewSection @ 1468af550

UMovieSceneSection * __thiscall
UMovieSceneTransformTrack::CreateNewSection(UMovieSceneTransformTrack *this)

{
  UMovieScene3DTransformSection *pUVar1;
  
  pUVar1 = NewObject<UMovieScene3DTransformSection>
                     ((UObject *)this,(FName)0x0,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  return (UMovieSceneSection *)pUVar1;
}

// GetPrivateStaticClass @ 1468b87b0

UClass * __cdecl UMovieSceneTransformTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformTrack",
               &Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneTransformTrack,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneTransformTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneTransformTrack @ 1468d0290

void __cdecl UMovieSceneTransformTrack::StaticRegisterNativesUMovieSceneTransformTrack(void)

{
  return;
}

// SupportsType @ 1468d1de0

bool __thiscall
UMovieSceneTransformTrack::SupportsType
          (UMovieSceneTransformTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d1e2a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d1e2a:
  pUVar5 = Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
  return pUVar4 == pUVar5;
}

