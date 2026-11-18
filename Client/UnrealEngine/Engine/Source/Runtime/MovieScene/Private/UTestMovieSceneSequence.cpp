// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// StaticClass @ 146269000

UClass * __cdecl UTestMovieSceneSequence::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSequence",
               &Z_Registration_Info_UClass_UTestMovieSceneSequence.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSequence,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestMovieSceneSequence>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSequence.InnerSingleton;
}

// UTestMovieSceneSequence @ 14629b3d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UTestMovieSceneSequence * __thiscall
UTestMovieSceneSequence::UTestMovieSceneSequence
          (UTestMovieSceneSequence *this,FVTableHelper *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence((UMovieSceneSequence *)this,param_1);
  this->_padding_ = (longlong)&___7UTestMovieSceneSequence__6B_;
  (this->MovieScene).field0_0x0.DebugPtr = (UMovieScene *)0x0;
  return this;
}

// ~UTestMovieSceneSequence @ 14629c0b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall UTestMovieSceneSequence::~UTestMovieSceneSequence(UTestMovieSceneSequence *this)

{
  this->_padding_ = (longlong)&___7UTestMovieSceneSequence__6B_;
  UMovieSceneSequence::~UMovieSceneSequence((UMovieSceneSequence *)this);
  return;
}

// BindPossessableObject @ 1462a4990

void __thiscall
UTestMovieSceneSequence::BindPossessableObject
          (UTestMovieSceneSequence *this,FGuid *param_1,UObject *param_2,UObject *param_3)

{
  return;
}

// CanPossessObject @ 1462a6de0

bool __thiscall
UTestMovieSceneSequence::CanPossessObject
          (UTestMovieSceneSequence *this,UObject *param_1,UObject *param_2)

{
  return false;
}

// GetMovieScene @ 1462af2d0

UMovieScene * __thiscall UTestMovieSceneSequence::GetMovieScene(UTestMovieSceneSequence *this)

{
  return (this->MovieScene).field0_0x0.DebugPtr;
}

// GetParentObject @ 1462af320

UObject * __thiscall
UTestMovieSceneSequence::GetParentObject(UTestMovieSceneSequence *this,UObject *param_1)

{
  return (UObject *)0x0;
}

// GetPrivateStaticClass @ 1462b0110

UClass * __cdecl UTestMovieSceneSequence::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneSequence.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneSequence",
               &Z_Registration_Info_UClass_UTestMovieSceneSequence.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneSequence,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestMovieSceneSequence>,
               InternalVTableHelperCtorCaller<UTestMovieSceneSequence>,local_res8,
               UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneSequence.InnerSingleton;
}

// LocateBoundObjects @ 1462b57e0

void __thiscall
UTestMovieSceneSequence::LocateBoundObjects
          (UTestMovieSceneSequence *this,FGuid *param_1,UObject *param_2,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  return;
}

// StaticRegisterNativesUTestMovieSceneSequence @ 1462bdee0

void __cdecl UTestMovieSceneSequence::StaticRegisterNativesUTestMovieSceneSequence(void)

{
  return;
}

// UnbindInvalidObjects @ 1462be960

void __thiscall
UTestMovieSceneSequence::UnbindInvalidObjects
          (UTestMovieSceneSequence *this,FGuid *param_1,UObject *param_2)

{
  return;
}

// UnbindObjects @ 1462be970

void __thiscall
UTestMovieSceneSequence::UnbindObjects
          (UTestMovieSceneSequence *this,FGuid *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,UObject *param_3)

{
  return;
}

// UnbindPossessableObjects @ 1462be980

void __thiscall
UTestMovieSceneSequence::UnbindPossessableObjects(UTestMovieSceneSequence *this,FGuid *param_1)

{
  return;
}

