// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 11

// StaticClass @ 14452bdf0

UClass * __cdecl UWaveformTransformationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"WaveformTransformationBase",
               &Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton,
               StaticRegisterNativesUWaveformTransformationBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWaveformTransformationBase>,
               InternalVTableHelperCtorCaller<UWaveformTransformationBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton;
}

// UWaveformTransformationBase @ 144530410

UWaveformTransformationBase * __thiscall
UWaveformTransformationBase::UWaveformTransformationBase
          (UWaveformTransformationBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWaveformTransformationBase__6B_;
  *(undefined8 *)&this->OnTransformationChanged = 0;
  *(undefined8 *)&(this->OnTransformationChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTransformationChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTransformationRenderChanged = 0;
  *(undefined8 *)&(this->OnTransformationRenderChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTransformationRenderChanged).field_0x10 = 0;
  return this;
}

// UWaveformTransformationBase @ 144530450

UWaveformTransformationBase * __thiscall
UWaveformTransformationBase::UWaveformTransformationBase
          (UWaveformTransformationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWaveformTransformationBase__6B_;
  *(undefined8 *)&this->OnTransformationChanged = 0;
  *(undefined8 *)&(this->OnTransformationChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTransformationChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnTransformationRenderChanged = 0;
  *(undefined8 *)&(this->OnTransformationRenderChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnTransformationRenderChanged).field_0x10 = 0;
  return this;
}

// ~UWaveformTransformationBase @ 144530cf0

void __thiscall
UWaveformTransformationBase::~UWaveformTransformationBase(UWaveformTransformationBase *this)

{
  this->_padding_ = (longlong)&___7UWaveformTransformationBase__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTransformationRenderChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTransformationChanged);
  UObject::~UObject((UObject *)this);
  return;
}

// CreateTransformation @ 144532c30

TUniquePtr<Audio::IWaveTransformation,TDefaultDelete<Audio::IWaveTransformation>_> __thiscall
UWaveformTransformationBase::CreateTransformation(UWaveformTransformationBase *this)

{
  IWaveTransformation *in_RDX;
  
  *in_RDX = (IWaveTransformation)0x0;
  return (TUniquePtr<Audio::IWaveTransformation,TDefaultDelete<Audio::IWaveTransformation>_>)in_RDX;
}

// GetPrivateStaticClass @ 144535550

UClass * __cdecl UWaveformTransformationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"WaveformTransformationBase",
               &Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton,
               StaticRegisterNativesUWaveformTransformationBase,0x58,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWaveformTransformationBase>,
               InternalVTableHelperCtorCaller<UWaveformTransformationBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationBase.InnerSingleton;
}

// GetTransformationPriority @ 144535870

ETransformationPriority __thiscall
UWaveformTransformationBase::GetTransformationPriority(UWaveformTransformationBase *this)

{
  return None;
}

// IsEditorOnly @ 144535b10

bool __thiscall UWaveformTransformationBase::IsEditorOnly(UWaveformTransformationBase *this)

{
  return true;
}

// OverwriteTransformation @ 144536610

void __thiscall
UWaveformTransformationBase::OverwriteTransformation(UWaveformTransformationBase *this)

{
  return;
}

// StaticRegisterNativesUWaveformTransformationBase @ 144537b90

void __cdecl UWaveformTransformationBase::StaticRegisterNativesUWaveformTransformationBase(void)

{
  return;
}

// UpdateConfiguration @ 1445382b0

void __thiscall
UWaveformTransformationBase::UpdateConfiguration
          (UWaveformTransformationBase *this,FWaveTransformUObjectConfiguration *param_1)

{
  return;
}

