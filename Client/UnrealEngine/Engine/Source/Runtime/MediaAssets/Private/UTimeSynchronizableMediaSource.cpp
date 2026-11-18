// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 12

// StaticClass @ 146c12280

UClass * __cdecl UTimeSynchronizableMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"TimeSynchronizableMediaSource",
               &Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton,
               StaticRegisterNativesUTimeSynchronizableMediaSource,0xa0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTimeSynchronizableMediaSource>,
               InternalVTableHelperCtorCaller<UTimeSynchronizableMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton;
}

// UTimeSynchronizableMediaSource @ 146c1de60

UTimeSynchronizableMediaSource * __thiscall
UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource
          (UTimeSynchronizableMediaSource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  this->bAutoDetectInput = true;
  return this;
}

// UTimeSynchronizableMediaSource @ 146c1ded0

UTimeSynchronizableMediaSource * __thiscall
UTimeSynchronizableMediaSource::UTimeSynchronizableMediaSource(UTimeSynchronizableMediaSource *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  this->_padding_ = 0;
  this->bUseTimeSynchronization = false;
  this->FrameDelay = 0;
  this->TimeDelay = 0.0;
  this->bAutoDetectInput = true;
  return this;
}

// ~UTimeSynchronizableMediaSource @ 146c1ee80

void __thiscall
UTimeSynchronizableMediaSource::~UTimeSynchronizableMediaSource
          (UTimeSynchronizableMediaSource *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UMediaSource::_vftable__for__IMediaOptions__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetMediaOption @ 146c2ac00

FString * __thiscall
UTimeSynchronizableMediaSource::GetMediaOption
          (UTimeSynchronizableMediaSource *this,FString *__return_storage_ptr__,FName *param_1,
          FString *param_2)

{
  FVariant *this_00;
  
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == String)) {
    FVariant::GetValue<FString>(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetMediaOption @ 146c2ac60

double __thiscall
UTimeSynchronizableMediaSource::GetMediaOption
          (UTimeSynchronizableMediaSource *this,FName *param_1,double param_2)

{
  FVariant *this_00;
  
  if (*param_1 == TimeSynchronizableMedia::TimeDelay) {
    return (double)this->_padding_;
  }
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Double)) {
    param_2 = FVariant::GetValue<double>(this_00);
  }
  return param_2;
}

// GetMediaOption @ 146c2acc0

long64 __thiscall
UTimeSynchronizableMediaSource::GetMediaOption
          (UTimeSynchronizableMediaSource *this,FName *param_1,long64 param_2)

{
  int iVar1;
  FVariant *this_00;
  int iVar2;
  
  if (*param_1 == TimeSynchronizableMedia::FrameDelay) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    iVar2 = 4;
    if (iVar1 < 4) {
      iVar2 = iVar1;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    return (longlong)iVar1;
  }
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,*param_1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Int64)) {
    param_2 = FVariant::GetValue<__int64>(this_00);
  }
  return param_2;
}

// GetMediaOption @ 146c2ad20

bool __thiscall
UTimeSynchronizableMediaSource::GetMediaOption
          (UTimeSynchronizableMediaSource *this,FName *param_1,bool param_2)

{
  FName FVar1;
  FVariant *this_00;
  
  FVar1 = *param_1;
  if (FVar1 == TimeSynchronizableMedia::UseTimeSynchronizatioOption) {
    return (bool)(char)this->_padding_;
  }
  if (FVar1 == TimeSynchronizableMedia::AutoDetect) {
    return (bool)(char)this->_padding_;
  }
  this_00 = TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
            ::Find((TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
                    *)&this->_padding_,FVar1);
  if ((this_00 != (FVariant *)0x0) && (this_00->Type == Bool)) {
    param_2 = FVariant::GetValue<bool>(this_00);
  }
  return param_2;
}

// GetPrivateStaticClass @ 146c2d1b0

UClass * __cdecl UTimeSynchronizableMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"TimeSynchronizableMediaSource",
               &Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton,
               StaticRegisterNativesUTimeSynchronizableMediaSource,0xa0,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTimeSynchronizableMediaSource>,
               InternalVTableHelperCtorCaller<UTimeSynchronizableMediaSource>,local_res8,
               UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimeSynchronizableMediaSource.InnerSingleton;
}

// HasMediaOption @ 146c2ef40

bool __thiscall
UTimeSynchronizableMediaSource::HasMediaOption(UTimeSynchronizableMediaSource *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  FVar1 = *param_1;
  if ((((FVar1 == TimeSynchronizableMedia::UseTimeSynchronizatioOption) ||
       (FVar1 == TimeSynchronizableMedia::FrameDelay)) ||
      (FVar1 == TimeSynchronizableMedia::TimeDelay)) ||
     (FVar1 == TimeSynchronizableMedia::AutoDetect)) {
    return true;
  }
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)this->_padding_ - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar3 * 0x28) == FVar1) goto LAB_146c2ee7c;
        iVar3 = *(int *)(this->_padding_ + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146c2ee7c:
  return iVar3 != -1;
}

// StaticRegisterNativesUTimeSynchronizableMediaSource @ 146c38050

void __cdecl
UTimeSynchronizableMediaSource::StaticRegisterNativesUTimeSynchronizableMediaSource(void)

{
  return;
}

// SupportsFormatAutoDetection @ 146c38060

bool __thiscall
UTimeSynchronizableMediaSource::SupportsFormatAutoDetection(UTimeSynchronizableMediaSource *this)

{
  return false;
}

