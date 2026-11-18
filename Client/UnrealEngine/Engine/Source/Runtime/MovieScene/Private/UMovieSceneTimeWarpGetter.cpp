// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 21

// StaticClass @ 146269340

UClass * __cdecl UMovieSceneTimeWarpGetter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpGetter",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpGetter,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpGetter>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpGetter>,local_res8,
               UMovieSceneNumericVariantGetter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.InnerSingleton;
}

// UMovieSceneTimeWarpGetter @ 14629aee0

UMovieSceneTimeWarpGetter * __thiscall
UMovieSceneTimeWarpGetter::UMovieSceneTimeWarpGetter
          (UMovieSceneTimeWarpGetter *this,FVTableHelper *param_1)

{
  UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  return this;
}

// UMovieSceneTimeWarpGetter @ 14629af20

UMovieSceneTimeWarpGetter * __thiscall
UMovieSceneTimeWarpGetter::UMovieSceneTimeWarpGetter(UMovieSceneTimeWarpGetter *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Public);
  this->bMuted = '\0';
  return this;
}

// ~UMovieSceneTimeWarpGetter @ 14629bf20

void __thiscall
UMovieSceneTimeWarpGetter::~UMovieSceneTimeWarpGetter(UMovieSceneTimeWarpGetter *this)

{
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&___7IMovieSceneChannelOwner__6B_;
  UMovieSceneNumericVariantGetter::~UMovieSceneNumericVariantGetter
            ((UMovieSceneNumericVariantGetter *)this);
  return;
}

// ComputeTraversedHull @ 1462a8670

TRange<FFrameTime> * __thiscall
UMovieSceneTimeWarpGetter::ComputeTraversedHull
          (UMovieSceneTimeWarpGetter *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneTimeWarpGetter.h"
             ,0x51,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->LowerBound).Type.Value = '\x02';
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = 0;
  (__return_storage_ptr__->LowerBound).Value.SubFrame = 0.0;
  (__return_storage_ptr__->UpperBound).Value.FrameNumber = 0;
  (__return_storage_ptr__->UpperBound).Value.SubFrame = 0.0;
  (__return_storage_ptr__->UpperBound).Type.Value = '\x02';
  return __return_storage_ptr__;
}

// DeleteChannel @ 1462aba60

bool __thiscall
UMovieSceneTimeWarpGetter::DeleteChannel
          (UMovieSceneTimeWarpGetter *this,FMovieSceneTimeWarpVariant *param_1,FName param_2)

{
  return false;
}

// GetCapabilities @ 1462aed00

FChannelOwnerCapabilities __thiscall
UMovieSceneTimeWarpGetter::GetCapabilities(UMovieSceneTimeWarpGetter *this,FName param_1)

{
  *(byte *)param_1 = *(byte *)param_1 | 1;
  return param_1.ComparisonIndex.Value._0_1_;
}

// GetDomain @ 1462af0a0

ETimeWarpChannelDomain __thiscall
UMovieSceneTimeWarpGetter::GetDomain(UMovieSceneTimeWarpGetter *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneTimeWarpGetter.h"
             ,0x7b,L"Pure virtual not implemented (%s)");
  return Time;
}

// GetPrivateStaticClass @ 1462afbe0

UClass * __cdecl UMovieSceneTimeWarpGetter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpGetter",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpGetter,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpGetter>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpGetter>,local_res8,
               UMovieSceneNumericVariantGetter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpGetter.InnerSingleton;
}

// InitializeDefaults @ 1462b2e60

void __thiscall UMovieSceneTimeWarpGetter::InitializeDefaults(UMovieSceneTimeWarpGetter *this)

{
  return;
}

// InverseRemapTimeCycled @ 1462b3d70

TOptional<FFrameTime> * __thiscall
UMovieSceneTimeWarpGetter::InverseRemapTimeCycled
          (UMovieSceneTimeWarpGetter *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2,FInverseTransformTimeParams *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneTimeWarpGetter.h"
             ,99,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// InverseRemapTimeWithinRange @ 1462b4710

bool __thiscall
UMovieSceneTimeWarpGetter::InverseRemapTimeWithinRange
          (UMovieSceneTimeWarpGetter *this,FFrameTime param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneTimeWarpGetter.h"
             ,0x75,L"Pure virtual not implemented (%s)");
  return true;
}

// IsMuted @ 1462b5700

bool __thiscall UMovieSceneTimeWarpGetter::IsMuted(UMovieSceneTimeWarpGetter *this)

{
  return this->bMuted;
}

// IsMuted @ 1462b5710

bool __thiscall UMovieSceneTimeWarpGetter::IsMuted(UMovieSceneTimeWarpGetter *this,FName param_1)

{
  return (bool)((byte)this->_padding_ & 1);
}

// PopulateChannelProxy @ 1462b62e0

EMovieSceneChannelProxyType __thiscall
UMovieSceneTimeWarpGetter::PopulateChannelProxy
          (UMovieSceneTimeWarpGetter *this,FMovieSceneChannelProxyData *param_1,
          EAllowTopLevelChannels param_2)

{
  return Static;
}

// RemapTime @ 1462b8810

FFrameTime __thiscall
UMovieSceneTimeWarpGetter::RemapTime(UMovieSceneTimeWarpGetter *this,FFrameTime param_1)

{
  undefined8 in_R8;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneTimeWarpGetter.h"
             ,0x48,L"Pure virtual not implemented (%s)");
  *(undefined8 *)param_1 = in_R8;
  return param_1;
}

// ScaleBy @ 1462bac10

void __thiscall UMovieSceneTimeWarpGetter::ScaleBy(UMovieSceneTimeWarpGetter *this,double param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Variants\\MovieSceneTimeWarpGetter.h"
             ,0x3e,L"Pure virtual not implemented (%s)");
  return;
}

// SetIsMuted @ 1462bd1b0

void __thiscall UMovieSceneTimeWarpGetter::SetIsMuted(UMovieSceneTimeWarpGetter *this,bool param_1)

{
  this->bMuted = '\0';
  this->field_0x70 = this->field_0x70 | param_1;
  return;
}

// SetIsMuted @ 1462bd1c0

void __thiscall
UMovieSceneTimeWarpGetter::SetIsMuted(UMovieSceneTimeWarpGetter *this,FName param_1,bool param_2)

{
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | param_2;
  return;
}

// StaticRegisterNativesUMovieSceneTimeWarpGetter @ 1462bde70

void __cdecl UMovieSceneTimeWarpGetter::StaticRegisterNativesUMovieSceneTimeWarpGetter(void)

{
  return;
}

// _getUObject @ 1462bfcc0

UObject * __thiscall UMovieSceneTimeWarpGetter::_getUObject(UMovieSceneTimeWarpGetter *this)

{
  return (UObject *)&this[-1]._padding_;
}

