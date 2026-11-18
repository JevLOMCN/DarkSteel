// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 38

// StaticClass @ 146060f50

UClass * __cdecl UMovieSceneScalingAnchors::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneScalingAnchors",
               &Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton,
               StaticRegisterNativesUMovieSceneScalingAnchors,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneScalingAnchors>,
               InternalVTableHelperCtorCaller<UMovieSceneScalingAnchors>,local_res8,
               UMovieScenePlayRateCurve::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton;
}

// UMovieSceneScalingAnchors @ 1460958c0

UMovieSceneScalingAnchors * __thiscall
UMovieSceneScalingAnchors::UMovieSceneScalingAnchors
          (UMovieSceneScalingAnchors *this,FVTableHelper *param_1)

{
  UMovieScenePlayRateCurve::UMovieScenePlayRateCurve((UMovieScenePlayRateCurve *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTimeWarpSource__;
  (this->ScalingDrivers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalingDrivers).ArrayNum = 0;
  (this->ScalingDrivers).ArrayMax = 0;
  *(undefined8 *)&this->InitialAnchors = 0;
  *(undefined8 *)&(this->InitialAnchors).field_0x8 = 0;
  *(undefined8 *)&(this->InitialAnchors).field_0x20 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x28 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialAnchors).field_0x34 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InitialAnchors).field_0x40 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x48 = 0;
  *(undefined8 *)&this->ScalingGroups = 0;
  *(undefined8 *)&(this->ScalingGroups).field_0x8 = 0;
  *(undefined8 *)&(this->ScalingGroups).field_0x20 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x28 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalingGroups).field_0x34 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalingGroups).field_0x40 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x48 = 0;
  *(undefined8 *)&this->CurrentAnchors = 0;
  *(undefined8 *)&(this->CurrentAnchors).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentAnchors).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentAnchors).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentAnchors).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x48 = 0;
  (this->NewDuration).FrameNumber = 0;
  (this->NewDuration).SubFrame = 0.0;
  this->bPlayRateCurveIsUpToDate = false;
  return this;
}

// UMovieSceneScalingAnchors @ 146095a00

UMovieSceneScalingAnchors * __thiscall
UMovieSceneScalingAnchors::UMovieSceneScalingAnchors(UMovieSceneScalingAnchors *this)

{
  UMovieScenePlayRateCurve::UMovieScenePlayRateCurve((UMovieScenePlayRateCurve *)this);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTimeWarpSource__;
  (this->ScalingDrivers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalingDrivers).ArrayNum = 0;
  (this->ScalingDrivers).ArrayMax = 0;
  *(undefined8 *)&this->InitialAnchors = 0;
  *(undefined8 *)&(this->InitialAnchors).field_0x8 = 0;
  *(undefined8 *)&(this->InitialAnchors).field_0x20 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x28 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x2c = 0x80;
  *(undefined4 *)&(this->InitialAnchors).field_0x34 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InitialAnchors).field_0x40 = 0;
  *(undefined4 *)&(this->InitialAnchors).field_0x48 = 0;
  *(undefined8 *)&this->ScalingGroups = 0;
  *(undefined8 *)&(this->ScalingGroups).field_0x8 = 0;
  *(undefined8 *)&(this->ScalingGroups).field_0x20 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x28 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalingGroups).field_0x34 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ScalingGroups).field_0x40 = 0;
  *(undefined4 *)&(this->ScalingGroups).field_0x48 = 0;
  *(undefined8 *)&this->CurrentAnchors = 0;
  *(undefined8 *)&(this->CurrentAnchors).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentAnchors).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentAnchors).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentAnchors).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentAnchors).field_0x48 = 0;
  (this->NewDuration).FrameNumber = 0;
  (this->NewDuration).SubFrame = 0.0;
  this->bPlayRateCurveIsUpToDate = false;
  return this;
}

// ~UMovieSceneScalingAnchors @ 1460985e0

void __thiscall
UMovieSceneScalingAnchors::~UMovieSceneScalingAnchors(UMovieSceneScalingAnchors *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneNumericVariantGetter__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneChannelOwner__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTimeWarpSource__;
  *(undefined4 *)&(this->CurrentAnchors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentAnchors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentAnchors);
  *(undefined4 *)&(this->ScalingGroups).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalingGroups).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalingGroups);
  *(undefined4 *)&(this->InitialAnchors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitialAnchors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitialAnchors);
  pFVar2 = (this->ScalingDrivers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTimeWarpSource__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneDecoration__6B_;
  UMovieScenePlayRateCurve::~UMovieScenePlayRateCurve((UMovieScenePlayRateCurve *)this);
  return;
}

// AddScalingDriver @ 1460a9d80

void __thiscall
UMovieSceneScalingAnchors::AddScalingDriver
          (UMovieSceneScalingAnchors *this,TScriptInterface<IMovieSceneScalingDriver> *param_1)

{
  TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptInterface<IMovieSceneScalingDriver>_const_&>(&this->ScalingDrivers,param_1);
  (**(code **)(this->_padding_ + 0x58))(&this->_padding_);
  *(undefined1 *)&this->_padding_ = 0;
  this->bPlayRateCurveIsUpToDate = false;
  return;
}

// ComputeTraversedHull @ 1460b6f20

TRange<FFrameTime> * __thiscall
UMovieSceneScalingAnchors::ComputeTraversedHull
          (UMovieSceneScalingAnchors *this,TRange<FFrameTime> *__return_storage_ptr__,
          TRange<FFrameTime> *param_1)

{
  UpdateCurve(this,(UMovieScenePlayRateCurve *)this);
  UMovieScenePlayRateCurve::ComputeTraversedHull
            ((UMovieScenePlayRateCurve *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// DeleteChannel @ 1460b9fd0

bool __thiscall
UMovieSceneScalingAnchors::DeleteChannel
          (UMovieSceneScalingAnchors *this,FMovieSceneTimeWarpVariant *param_1,FName param_2)

{
  bool bVar1;
  
  bVar1 = ::FName::Equals(param_2,"PlayRate");
  if (bVar1) {
    FMovieSceneTimeWarpVariant::Set(param_1,__real_3ff0000000000000);
    return true;
  }
  return false;
}

// FindScalingGroup @ 1460c6380

FMovieSceneAnchorsScalingGroup * __thiscall
UMovieSceneScalingAnchors::FindScalingGroup(UMovieSceneScalingAnchors *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FMovieSceneAnchorsScalingGroup *pFVar3;
  FMovieSceneAnchorsScalingGroup *pFVar4;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>,FDefaultSetAllocator>
                      *)&this->ScalingGroups,(uint)uVar2,param_1);
  pFVar4 = (FMovieSceneAnchorsScalingGroup *)0x0;
  if (iVar1 != -1) {
    pFVar4 = (FMovieSceneAnchorsScalingGroup *)
             ((longlong)iVar1 * 0x68 + *(longlong *)&(this->ScalingGroups).field_0x0);
  }
  pFVar3 = (FMovieSceneAnchorsScalingGroup *)&(pFVar4->Sections).Elements.field_0x10;
  if (pFVar4 == (FMovieSceneAnchorsScalingGroup *)0x0) {
    pFVar3 = (FMovieSceneAnchorsScalingGroup *)0x0;
  }
  return pFVar3;
}

// GenerateTimeWarpTransform @ 1460c8490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneNestedSequenceTransform * __thiscall
UMovieSceneScalingAnchors::GenerateTimeWarpTransform
          (UMovieSceneScalingAnchors *this,
          FMovieSceneNestedSequenceTransform *__return_storage_ptr__)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  FMovieSceneTimeWarpVariant local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_20.Variant.WeakCustomGetter.WeakPtr.ObjectIndex = 0;
  local_20.Variant.WeakCustomGetter.WeakPtr.ObjectSerialNumber = 0;
  FMovieSceneTimeWarpVariant::Set(&local_20,(UMovieSceneTimeWarpGetter *)&this[-1]._padding_);
  local_28 = 0;
  (__return_storage_ptr__->Offset).FrameNumber = 0;
  (__return_storage_ptr__->Offset).SubFrame = 0.0;
  *&(__return_storage_ptr__->TimeScale).Variant.Data = local_20.Variant.Data;
  (__return_storage_ptr__->TimeScale).Variant.WeakCustomGetter.WeakPtr =
       local_20.Variant.WeakCustomGetter.WeakPtr;
  (__return_storage_ptr__->Warping).Start = 0;
  (__return_storage_ptr__->Warping).End = 0;
  FMovieSceneNumericVariant::MakeWeakUnsafe((FMovieSceneNumericVariant *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCurrentAnchors @ 1460c9670

TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
* __thiscall UMovieSceneScalingAnchors::GetCurrentAnchors(UMovieSceneScalingAnchors *this)

{
  return &this->CurrentAnchors;
}

// GetInitialAnchors @ 1460cab70

TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
* __thiscall UMovieSceneScalingAnchors::GetInitialAnchors(UMovieSceneScalingAnchors *this)

{
  return &this->InitialAnchors;
}

// GetOrCreateScalingGroup @ 1460ce7f0

FMovieSceneAnchorsScalingGroup * __thiscall
UMovieSceneScalingAnchors::GetOrCreateScalingGroup(UMovieSceneScalingAnchors *this,FGuid *param_1)

{
  ulong64 uVar1;
  FMovieSceneAnchorsScalingGroup *pFVar2;
  
  uVar1 = CityHash64((char *)param_1,0x10);
  pFVar2 = TMapBase<FGuid,FMovieSceneAnchorsScalingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>_>
           ::FindOrAddImpl<FGuid_const_&>
                     ((TMapBase<FGuid,FMovieSceneAnchorsScalingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>_>
                       *)&this->ScalingGroups,(uint)uVar1,param_1);
  return pFVar2;
}

// GetPrivateStaticClass @ 1460cfb10

UClass * __cdecl UMovieSceneScalingAnchors::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneScalingAnchors",
               &Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton,
               StaticRegisterNativesUMovieSceneScalingAnchors,0x2f8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieSceneScalingAnchors>,
               InternalVTableHelperCtorCaller<UMovieSceneScalingAnchors>,local_res8,
               UMovieScenePlayRateCurve::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScalingAnchors.InnerSingleton;
}

// GetScalingGroups @ 1460d01b0

TMap<FGuid,FMovieSceneAnchorsScalingGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>_>
* __thiscall UMovieSceneScalingAnchors::GetScalingGroups(UMovieSceneScalingAnchors *this)

{
  return &this->ScalingGroups;
}

// GetTimeWarpSortOrder @ 1460d0cb0

int __thiscall UMovieSceneScalingAnchors::GetTimeWarpSortOrder(UMovieSceneScalingAnchors *this)

{
  return -0x80000000;
}

// HasAnyScalingDrivers @ 1460d11a0

bool __thiscall UMovieSceneScalingAnchors::HasAnyScalingDrivers(UMovieSceneScalingAnchors *this)

{
  return (this->ScalingDrivers).ArrayNum != 0;
}

// Initialize @ 1460d2050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieScenePlayRateCurve * __thiscall
UMovieSceneScalingAnchors::Initialize
          (UMovieSceneScalingAnchors *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMovieScenePlayRateCurve *pUVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1->Object == (FSharedPlaybackState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UMovieScenePlayRateCurve *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(param_1->Object->WeakPlaybackContext).WeakPtr);
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UMovieScenePlayRateCurve_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar5);
  local_98._8_8_ = pUVar4;
  pUVar3 = (UMovieScenePlayRateCurve *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  UpdateCurve(this,pUVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pUVar3;
}

// InverseRemapTimeCycled @ 1460d8820

TOptional<FFrameTime> * __thiscall
UMovieSceneScalingAnchors::InverseRemapTimeCycled
          (UMovieSceneScalingAnchors *this,TOptional<FFrameTime> *__return_storage_ptr__,
          FFrameTime param_1,FFrameTime param_2,FInverseTransformTimeParams *param_3)

{
  UpdateCurve(this,(UMovieScenePlayRateCurve *)this);
  UMovieScenePlayRateCurve::InverseRemapTimeCycled
            ((UMovieScenePlayRateCurve *)this,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// InverseRemapTimeWithinRange @ 1460d8890

bool __thiscall
UMovieSceneScalingAnchors::InverseRemapTimeWithinRange
          (UMovieSceneScalingAnchors *this,FFrameTime param_1,FFrameTime param_2,FFrameTime param_3,
          TFunctionRef<bool___cdecl(FFrameTime)> *param_4)

{
  bool bVar1;
  
  UpdateCurve(this,(UMovieScenePlayRateCurve *)this);
  bVar1 = UMovieScenePlayRateCurve::InverseRemapTimeWithinRange
                    ((UMovieScenePlayRateCurve *)this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// IsTimeWarpActive @ 1460d9370

bool __thiscall UMovieSceneScalingAnchors::IsTimeWarpActive(UMovieSceneScalingAnchors *this)

{
  return true;
}

// OnDecorationAdded @ 1460dadc0

void __thiscall
UMovieSceneScalingAnchors::OnDecorationAdded(UMovieSceneScalingAnchors *this,UMovieScene *param_1)

{
  longlong *plVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UMovieScene *local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  undefined1 local_28 [16];
  FString local_18;
  
  local_res18.DebugPtr = UMovieSceneTimeWarpDecoration::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_28._8_8_ = &local_res10;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMovieSceneDecorationContainerObject::GetOrCreateDecoration'::__l2::<lambda_1>,void,UObject_*>
       ::Call;
  local_res10 = param_1;
  pUVar3 = FMovieSceneDecorationContainer::GetOrCreateDecoration
                     ((FMovieSceneDecorationContainer *)&param_1->_padding_,
                      (TSubclassOf<UObject> *)&local_res18.ObjectPtr,(UObject *)param_1,
                      (TFunctionRef<void___cdecl(UObject_*)> *)local_28);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UMovieSceneTimeWarpDecoration::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      plVar1 = &this[-1]._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (plVar1 == (longlong *)0x0)) {
        local_28._8_8_ = (longlong *)0x0;
        if (plVar1 != (longlong *)0x0) {
          local_28._8_8_ = &this->_padding_;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)plVar1);
        local_28._8_8_ = &this->_padding_;
      }
      local_28._0_8_ = plVar1;
      TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TScriptInterface<IMovieSceneTimeWarpSource>_const_&>
                ((TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_> *)
                 &pUVar3[1].field_0x8,(TScriptInterface<IMovieSceneTimeWarpSource> *)local_28);
      return;
    }
    pFVar5 = GetTypeName<UMovieSceneTimeWarpDecoration>((FString *)local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,pUVar3);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UMovieSceneTimeWarpDecoration>((FString *)local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// OnDecorationRemoved @ 1460daf60

void __thiscall UMovieSceneScalingAnchors::OnDecorationRemoved(UMovieSceneScalingAnchors *this)

{
  UClass *pUVar1;
  UMovieSceneDecorationContainerObject *this_00;
  UMovieSceneTimeWarpDecoration *pUVar2;
  longlong *this_01;
  UMovieSceneDecorationContainerObject *local_res8;
  TObjectPtr<UClass>_u_0 local_res10;
  longlong *local_18;
  longlong *local_10;
  
  pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
  this_01 = &this[-1]._padding_;
  this_00 = (UMovieSceneDecorationContainerObject *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar1);
  if ((this_00 != (UMovieSceneDecorationContainerObject *)0x0) &&
     (pUVar2 = UMovieSceneDecorationContainerObject::FindDecoration<UMovieSceneTimeWarpDecoration>
                         (this_00), pUVar2 != (UMovieSceneTimeWarpDecoration *)0x0)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    local_10 = &this->_padding_;
    if (this_01 == (longlong *)0x0) {
      local_10 = (longlong *)0x0;
    }
    local_18 = this_01;
    TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove
              (&pUVar2->Sources,(TScriptInterface<IMovieSceneTimeWarpSource> *)&local_18);
    if ((pUVar2->Sources).ArrayNum == 0) {
      local_res10.DebugPtr = UMovieSceneTimeWarpDecoration::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res10.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      local_10 = (longlong *)&local_res8;
      local_18 = (longlong *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`UMovieSceneDecorationContainerObject::RemoveDecoration'::__l2::<lambda_1>,void,UObject_*>
                 ::Call;
      local_res8 = this_00;
      FMovieSceneDecorationContainer::RemoveDecoration
                (&this_00->Decorations,(TSubclassOf<UObject> *)&local_res10.ObjectPtr,
                 (TFunctionRef<void___cdecl(UObject_*)> *)&local_18);
    }
  }
  return;
}

// OnPreDecorationCompiled @ 1460db230

void __thiscall UMovieSceneScalingAnchors::OnPreDecorationCompiled(UMovieSceneScalingAnchors *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
           *)&this->_padding_);
  iVar1 = (int)this->_padding_;
  puVar5 = (undefined8 *)this->_padding_;
  puVar4 = puVar5 + (longlong)iVar1 * 2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<TScriptInterface<IMovieSceneScalingDriver>,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (puVar5 == puVar4) break;
    pUVar2 = (UObject *)*puVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    plVar3 = (longlong *)puVar5[1];
    if (pUVar2 == (UObject *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&this->_padding_);
    puVar5 = puVar5 + 2;
  }
  (**(code **)(this[-1]._padding_ + 0x58))();
  this[-1].bPlayRateCurveIsUpToDate = false;
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// PopulateChannelProxy @ 1460de110

EMovieSceneChannelProxyType __thiscall
UMovieSceneScalingAnchors::PopulateChannelProxy
          (UMovieSceneScalingAnchors *this,FMovieSceneChannelProxyData *param_1,
          EAllowTopLevelChannels param_2)

{
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneTimeWarpChannel>
            (param_1,(FMovieSceneTimeWarpChannel *)&this->_padding_);
  return Static;
}

// RemapTime @ 1460e4370

FFrameTime __thiscall
UMovieSceneScalingAnchors::RemapTime(UMovieSceneScalingAnchors *this,FFrameTime param_1)

{
  UpdateCurve(this,(UMovieScenePlayRateCurve *)this);
  UMovieScenePlayRateCurve::RemapTime((UMovieScenePlayRateCurve *)this,param_1);
  return param_1;
}

// RemoveScalingDriver @ 1460e86d0

void __thiscall
UMovieSceneScalingAnchors::RemoveScalingDriver
          (UMovieSceneScalingAnchors *this,TScriptInterface<IMovieSceneScalingDriver> *param_1)

{
  TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove
            (&this->ScalingDrivers,param_1);
  (**(code **)(this->_padding_ + 0x58))(&this->_padding_);
  *(undefined1 *)&this->_padding_ = 0;
  this->bPlayRateCurveIsUpToDate = false;
  return;
}

// RemoveScalingGroup @ 1460e8710

void __thiscall
UMovieSceneScalingAnchors::RemoveScalingGroup(UMovieSceneScalingAnchors *this,FGuid *param_1)

{
  ulong64 uVar1;
  
  if (*(int *)&(this->ScalingGroups).field_0x8 != *(int *)&(this->ScalingGroups).field_0x34) {
    uVar1 = CityHash64((char *)param_1,0x10);
    TSet<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FMovieSceneAnchorsScalingGroup>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneAnchorsScalingGroup,0>,FDefaultSetAllocator>
                         *)&this->ScalingGroups,(uint)uVar1,param_1);
  }
  return;
}

// ResetScaling @ 1460e9a20

void __thiscall UMovieSceneScalingAnchors::ResetScaling(UMovieSceneScalingAnchors *this)

{
  (**(code **)(this->_padding_ + 0x58))(&this->_padding_);
  *(undefined1 *)&this->_padding_ = 0;
  this->bPlayRateCurveIsUpToDate = false;
  return;
}

// ScaleBy @ 1460f2db0

void __thiscall UMovieSceneScalingAnchors::ScaleBy(UMovieSceneScalingAnchors *this,double param_1)

{
  return;
}

// Serialize @ 1460f40c0

void __thiscall
UMovieSceneScalingAnchors::Serialize(UMovieSceneScalingAnchors *this,FArchive *param_1)

{
  TScriptInterface<IMovieSceneScalingDriver> *pTVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res10 [3];
  TScriptInterface<IMovieSceneScalingDriver> local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    pTVar1 = (TScriptInterface<IMovieSceneScalingDriver> *)
             (this->ScalingDrivers).AllocatorInstance.Data;
    local_18._0_8_ = 0;
    local_18._8_8_ = 0;
    if ((pTVar1 <= &local_18) && (&local_18 < pTVar1 + (this->ScalingDrivers).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res10[0].Item = &local_18;
    TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&this->ScalingDrivers,local_res10);
  }
  return;
}

// Serialize @ 1460f4190

void __thiscall
UMovieSceneScalingAnchors::Serialize
          (UMovieSceneScalingAnchors *this,FStructuredArchiveRecord param_1)

{
  TScriptInterface<IMovieSceneScalingDriver> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FArchive *pFVar4;
  FSlotBase local_res10;
  <lambda_1> local_res18 [2];
  TScriptInterface<IMovieSceneScalingDriver> local_18;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,pFVar4);
  if ((pFVar4->field_0x28 & 1) != 0) {
    pTVar1 = (TScriptInterface<IMovieSceneScalingDriver> *)
             (this->ScalingDrivers).AllocatorInstance.Data;
    local_18._0_8_ = 0;
    local_18._8_8_ = 0;
    if ((pTVar1 <= &local_18) && (&local_18 < pTVar1 + (this->ScalingDrivers).ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res18[0].Item = &local_18;
    TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&this->ScalingDrivers,local_res18);
  }
  return;
}

// SetIsTimeWarpActive @ 1460f70b0

void __thiscall
UMovieSceneScalingAnchors::SetIsTimeWarpActive(UMovieSceneScalingAnchors *this,bool param_1)

{
  return;
}

// StaticRegisterNativesUMovieSceneScalingAnchors @ 1460fa2b0

void __cdecl UMovieSceneScalingAnchors::StaticRegisterNativesUMovieSceneScalingAnchors(void)

{
  return;
}

// UpdateCurve @ 1460fcbd0

void __thiscall
UMovieSceneScalingAnchors::UpdateCurve
          (UMovieSceneScalingAnchors *this,UMovieScenePlayRateCurve *param_1)

{
  TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
  *pTVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  FMovieSceneScalingAnchor *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
  *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  UClass *pUVar18;
  UObject *pUVar19;
  ulong64 uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined1 *puVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  int *piVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  int iVar33;
  uint uVar34;
  undefined1 *puVar36;
  uint *puVar37;
  FFrameNumber FVar38;
  FMovieSceneScalingAnchor *pFVar39;
  FFrameNumber FVar40;
  double dVar41;
  undefined1 local_res20 [8];
  uint local_208 [2];
  ForAnyElementType local_200;
  undefined8 local_1f8;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [4];
  int local_1dc;
  uint local_1d8 [2];
  FMovieSceneScalingAnchor local_1d0;
  longlong local_1c8;
  FScriptContainerElement *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
  *local_1a0;
  FMovieSceneScalingAnchor local_198 [2];
  TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
  *local_188;
  undefined8 uStack_180;
  undefined1 *local_178;
  undefined8 uStack_170;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_const_&> local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FMovieSceneScalingAnchor *local_e0;
  FMovieSceneScalingAnchor *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_94;
  longlong *plVar35;
  
  if (this->bPlayRateCurveIsUpToDate == false) {
    this->bPlayRateCurveIsUpToDate = true;
    lVar22 = (param_1->PlayRate)._padding_;
    param_1->bUpToDate = false;
    (**(code **)(lVar22 + 0x58))();
    pUVar18 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar19 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar18);
    local_c0 = *(undefined8 *)&pUVar19[7].field_0x10;
    uStack_b8 = *(undefined8 *)&pUVar19[7].field_0x18;
    UE::MovieScene::DiscreteInclusiveLower((TRange<FFrameNumber> *)local_158);
    pTVar1 = &this->CurrentAnchors;
    param_1->bManualPlaybackStart = true;
    plVar35 = (longlong *)0x0;
    uVar34 = 0;
    (param_1->PlaybackStartFrame).Value = 0;
    local_1a0 = (TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
                 *)pTVar1;
    TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
             *)pTVar1);
    iVar17 = (this->ScalingDrivers).ArrayNum;
    pFVar27 = (this->ScalingDrivers).AllocatorInstance.Data;
    pFVar32 = pFVar27 + (longlong)iVar17 * 0x10;
    while( true ) {
      if ((this->ScalingDrivers).ArrayNum != iVar17) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TScriptInterface<IMovieSceneScalingDriver>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar27 == pFVar32) break;
      pUVar19 = *(UObject **)pFVar27;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar19);
      }
      plVar21 = *(longlong **)(pFVar27 + 8);
      if (pUVar19 == (UObject *)0x0) {
        plVar21 = plVar35;
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,pTVar1);
      pFVar27 = pFVar27 + 0x10;
    }
    if (*(int *)&(this->CurrentAnchors).field_0x8 == *(int *)&(this->CurrentAnchors).field_0x34) {
      *(undefined1 *)&(param_1->PlayRate)._padding_ = 1;
      (param_1->PlayRate)._padding_ = 0x3ff0000000000000;
    }
    else {
      local_1f0.Data = (FScriptContainerElement *)0x0;
      pTVar1 = &this->InitialAnchors;
      local_1e8 = 0;
      local_168 = 0;
      uVar15 = 1;
      puVar2 = &(this->InitialAnchors).field_0x10;
      iVar17 = *(int *)&(this->InitialAnchors).field_0x28;
      TStack_108.CurrentBitIndex = 0;
      if (iVar17 != 0) {
        puVar37 = *(uint **)&(this->InitialAnchors).field_0x20;
        if (puVar37 == (uint *)0x0) {
          puVar37 = (uint *)puVar2;
        }
        uVar16 = *puVar37;
        uVar34 = 0;
        while (uVar16 == 0) {
          iVar25 = (int)plVar35;
          local_168 = local_168 + 0x20;
          uVar34 = iVar25 + 1;
          plVar35 = (longlong *)(ulonglong)uVar34;
          TStack_108.CurrentBitIndex = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar34)
          goto LAB_1460fcdad;
          uVar16 = puVar37[(longlong)iVar25 + 1];
        }
        uVar15 = -uVar16 & uVar16;
        uVar4 = (ulonglong)uVar15 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_158._4_4_ = (undefined4)lVar22;
        TStack_108.CurrentBitIndex = local_168 + -1 + local_158._4_4_;
        if (iVar17 < TStack_108.CurrentBitIndex) {
          TStack_108.CurrentBitIndex = iVar17;
        }
      }
LAB_1460fcdad:
      uVar16 = *(uint *)&(this->InitialAnchors).field_0x28;
      uVar29 = uVar16 & 0xffffffe0;
      iStack_160 = *(int *)&(this->InitialAnchors).field_0x8 -
                   *(int *)&(this->InitialAnchors).field_0x34;
      uStack_170 = CONCAT44(TStack_108.CurrentBitIndex,0xffffffff);
      uStack_180 = CONCAT44(uVar15,uVar34);
      uStack_164 = local_94;
      TStack_108._padding_ = uStack_180;
      iVar25 = (int)uVar16 >> 5;
      uStack_e8 = CONCAT44(uStack_15c,iStack_160);
      TStack_108.UnvisitedBitMask = 0xffffffff;
      TStack_108.BaseBitIndex = local_168;
      TStack_108._28_4_ = local_94;
      local_188 = pTVar1;
      local_178 = puVar2;
      local_110 = pTVar1;
      TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar16 < 0) || (iVar17 < (int)uVar16)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar34 = *(uint *)&(this->InitialAnchors).field_0x28;
      if (uVar16 != uVar34) {
        puVar36 = *(undefined1 **)&(this->InitialAnchors).field_0x20;
        if (puVar36 == (undefined1 *)0x0) {
          puVar36 = puVar2;
        }
        uVar15 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar25 * 4);
        while (uVar15 == 0) {
          lVar22 = (longlong)iVar25;
          uVar29 = uVar29 + 0x20;
          iVar25 = iVar25 + 1;
          uVar16 = uVar34;
          if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
          goto LAB_1460fceb0;
          uVar15 = *(uint *)(puVar36 + lVar22 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_158._8_4_ = (undefined4)lVar22;
        uVar16 = local_158._8_4_ + -1 + uVar29;
        if ((int)uVar34 < (int)uVar16) {
          uVar16 = uVar34;
        }
      }
LAB_1460fceb0:
      while( true ) {
        pTVar11 = local_110;
        if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
          local_1e0[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneScalingAnchor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e0);
        }
        if (((TStack_108.CurrentBitIndex == uVar16) &&
            (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar11 == pTVar1)) break;
        lVar22 = *(longlong *)pTVar11;
        puVar3 = (undefined8 *)((longlong)TStack_108.CurrentBitIndex * 0x20 + lVar22);
        local_1b8 = *puVar3;
        uStack_1b0 = puVar3[1];
        local_1a8 = *(undefined8 *)((longlong)TStack_108.CurrentBitIndex * 0x20 + 0x10 + lVar22);
        uVar20 = CityHash64((char *)&local_1b8,0x10);
        if (*(int *)&(this->CurrentAnchors).field_0x8 != *(int *)&(this->CurrentAnchors).field_0x34)
        {
          puVar36 = *(undefined1 **)&(this->CurrentAnchors).field_0x40;
          puVar23 = &(this->CurrentAnchors).field_0x38;
          if (puVar36 != (undefined1 *)0x0) {
            puVar23 = puVar36;
          }
          iVar17 = *(int *)(puVar23 +
                           ((ulonglong)(*(int *)&(this->CurrentAnchors).field_0x48 - 1) &
                           uVar20 & 0xffffffff) * 4);
          if (iVar17 != -1) {
            do {
              piVar24 = (int *)((longlong)iVar17 * 0x20 + *(longlong *)&this->CurrentAnchors);
              if (((uStack_1b0._4_4_ == piVar24[3] && (int)uStack_1b0 == piVar24[2]) &&
                  local_1b8._4_4_ == piVar24[1]) && (int)local_1b8 == *piVar24) {
                piVar28 = piVar24 + 4;
                if (piVar24 == (int *)0x0) {
                  piVar28 = (int *)0x0;
                }
                if (piVar28 != (int *)0x0) {
                  iVar17 = 0;
                  if (0 < (int)(uint)local_1e8) {
                    uVar34 = (uint)local_1e8;
                    do {
                      iVar25 = (uVar34 >> 1) + iVar17;
                      lVar22 = (longlong)iVar25;
                      local_188 = *(TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
                                    **)(local_1f0.Data + lVar22 * 0x28);
                      uStack_180 = *(longlong *)(local_1f0.Data + lVar22 * 0x28 + 8);
                      local_178 = *(undefined1 **)(local_1f0.Data + lVar22 * 0x28 + 0x10);
                      uStack_170 = *(longlong *)(local_1f0.Data + lVar22 * 0x28 + 0x10 + 8);
                      _local_168 = *(undefined8 *)(local_1f0.Data + lVar22 * 0x28 + 0x20);
                      if ((int)local_178 < (int)local_1a8) {
                        iVar17 = iVar25 + (uVar34 & 1);
                      }
                      uVar15 = uVar34 >> 1;
                      uVar34 = uVar34 >> 1;
                    } while (uVar15 != 0);
                  }
                  uStack_120 = *(undefined8 *)piVar28;
                  local_128 = local_1a8;
                  local_118 = local_1a8;
                  local_138 = local_1b8;
                  uStack_130 = uStack_1b0;
                  uVar34 = (uint)local_1e8;
                  if ((local_1f0.Data <= (FScriptContainerElement *)&local_138) &&
                     ((FScriptContainerElement *)&local_138 <
                      local_1f0.Data + (longlong)(int)local_1e8._4_4_ * 0x28)) {
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar12) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar34 = (uint)local_1e8;
                  }
                  if (uVar34 == local_1e8._4_4_) {
                    uVar34 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x428,&local_1f0,(int *)((longlong)&local_1e8 + 4));
                  }
                  local_1e8 = CONCAT44(local_1e8._4_4_,uVar34 + 1);
                  lVar22 = (longlong)iVar17;
                  memmove(local_1f0.Data + lVar22 * 0x28 + 0x28,local_1f0.Data + lVar22 * 0x28,
                          (longlong)(int)(uVar34 - iVar17) * 0x28);
                  *(undefined8 *)(local_1f0.Data + lVar22 * 0x28) = local_138;
                  *(undefined8 *)(local_1f0.Data + lVar22 * 0x28 + 8) = uStack_130;
                  *(undefined8 *)(local_1f0.Data + lVar22 * 0x28 + 0x10) = local_128;
                  *(undefined8 *)(local_1f0.Data + lVar22 * 0x28 + 0x10 + 8) = uStack_120;
                  *(undefined8 *)(local_1f0.Data + lVar22 * 0x28 + 0x20) = local_118;
                }
                break;
              }
              iVar17 = piVar24[6];
            } while (iVar17 != -1);
          }
        }
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
      }
      FVar40.Value = 0;
      bVar7 = false;
      bVar12 = false;
      bVar8 = false;
      bVar14 = false;
      if (((int)(uint)local_1e8 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FMovieSceneDoubleChannel::AddConstantKey
                ((FMovieSceneDoubleChannel *)&param_1->PlayRate,
                 (FFrameNumber)(*(int *)(local_1f0.Data + 0x20) + -100),__real_3ff0000000000000);
      uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar34 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar10 = __real_3fe0000000000000;
      dVar9 = __real_3e45798ee2308c3a;
      local_200.Data = (FScriptContainerElement *)0x0;
      local_1f8 = 0;
      local_208[0] = 0;
      FVar38.Value = local_198[0].Position.Value;
      if (0 < (int)(uint)local_1e8) {
        local_1dc = local_198[0].Position.Value;
        iVar17 = (uint)local_1e8;
        iVar25 = FVar40.Value;
        do {
          uVar16 = local_208[0];
          uVar29 = 0;
          if ((int)local_208[0] < iVar17) {
            uVar29 = ~local_208[0] >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar39 = (FMovieSceneScalingAnchor *)(local_1f0.Data + (longlong)(int)uVar16 * 0x28);
          iVar17 = *(int *)(local_1f0.Data + (longlong)(int)uVar16 * 0x28 + 0x18);
          pFVar5 = pFVar39 + 4;
          (pFVar5->Position).Value = iVar17 + iVar25;
          pFVar39[4].Duration = pFVar39[3].Duration;
          iVar26 = pFVar39[2].Position.Value;
          iVar25 = iVar25 + (iVar17 - iVar26);
          local_148.Value = pFVar39;
          if ((bVar12) &&
             (dVar41 = (double)(iVar26 - local_1d0.Position.Value),
             dVar9 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar15,
                                      SUB84(dVar41,0) & uVar34))) {
            if ((!bVar7) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsSet()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                    ,0x1bd,
                                    L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FMovieSceneDoubleChannel::AddConstantKey
                      ((FMovieSceneDoubleChannel *)&param_1->PlayRate,FVar40,
                       (double)((pFVar5->Position).Value - local_1dc) /
                       (double)(pFVar39[2].Position.Value - local_1d0.Position.Value));
          }
          FVar40.Value = (pFVar5->Position).Value;
          if (pFVar5 != local_198) {
            bVar7 = true;
            bVar8 = true;
            local_1dc = FVar40.Value;
          }
          if (pFVar39 + 2 != &local_1d0) {
            local_1d0.Position.Value = pFVar39[2].Position.Value;
            bVar12 = true;
            bVar14 = true;
          }
          local_d8 = pFVar39 + 4;
          local_e0 = pFVar39;
          TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_const_&>_>
                    (local_1a0,
                     (TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_const_&> *)
                     (local_158 + 0xc),(bool *)&local_e0);
          if (((double)pFVar39[2].Duration <= 0.0) || ((double)pFVar39[3].Duration <= 0.0)) {
            iVar17 = (uint)local_1e8;
          }
          else {
            iVar26 = pFVar39[4].Duration + pFVar39[4].Position.Value;
            iVar30 = pFVar39[2].Position.Value + pFVar39[2].Duration;
            uVar16 = local_1f8._4_4_;
            local_1f8 = (ulonglong)local_1f8._4_4_ << 0x20;
            uVar29 = 0;
            if ((int)uVar16 < 1) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,1,&local_200,0,(int *)((longlong)&local_1f8 + 4));
              uVar16 = local_1f8._4_4_;
              uVar29 = (uint)local_1f8;
            }
            if ((local_200.Data <= (FScriptContainerElement *)local_208) &&
               ((FScriptContainerElement *)local_208 < local_200.Data + (longlong)(int)uVar16 * 4))
            {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar12) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar16 = local_1f8._4_4_;
              uVar29 = (uint)local_1f8;
            }
            if (uVar29 == uVar16) {
              uVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_200,(int *)((longlong)&local_1f8 + 4));
            }
            local_1f8 = CONCAT44(local_1f8._4_4_,uVar29 + 1);
            *(uint *)(local_200.Data + (longlong)(int)uVar29 * 4) = local_208[0];
            iVar17 = (uint)local_1e8;
            iVar33 = iVar30;
            bVar12 = bVar14;
            bVar7 = bVar8;
            if ((int)local_208[0] < (int)((uint)local_1e8 + -1)) {
              do {
                pFVar39 = local_148.Value;
                if ((uint)local_1f8 == 0) break;
                uVar16 = 0;
                if ((int)((uint)local_1f8 - 1) < (int)(uint)local_1f8) {
                  uVar16 = ~((uint)local_1f8 - 1) >> 0x1f;
                }
                if (uVar16 == 0) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar17 = (uint)local_1e8;
                }
                uVar16 = *(uint *)(local_200.Data + (longlong)(int)((uint)local_1f8 + -1) * 4);
                uVar29 = 0;
                if ((int)uVar16 < iVar17) {
                  uVar29 = ~uVar16 >> 0x1f;
                }
                if (uVar29 == 0) {
                  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar14) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar17 = (uint)local_1e8;
                }
                local_1c8 = (longlong)(int)uVar16 * 5;
                uVar16 = local_208[0] + 1;
                local_1c0 = local_1f0.Data;
                local_1d8[0] = uVar16;
                if ((int)uVar16 < iVar17) {
                  do {
                    uVar29 = 0;
                    if ((int)uVar16 < iVar17) {
                      uVar29 = ~uVar16 >> 0x1f;
                    }
                    local_1d8[0] = uVar16;
                    if ((uVar29 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar27 = local_1f0.Data + (longlong)(int)uVar16 * 0x28;
                    if (*(int *)(local_1c0 + local_1c8 * 8 + 0x10) +
                        *(int *)(local_1c0 + local_1c8 * 8 + 0x14) <= *(int *)(pFVar27 + 0x10)) {
                      if ((int)(uint)local_1f8 < 1) {
                        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar14) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                      }
                      iVar31 = ((uint)local_1f8 - ((uint)local_1f8 + -1)) + -1;
                      iVar17 = (uint)local_1f8;
                      if (iVar31 != 0) {
                        memmove(local_200.Data + (longlong)(int)((uint)local_1f8 + -1) * 4,
                                local_200.Data + (longlong)(int)((uint)local_1f8 + -1) * 4 + 4,
                                (longlong)iVar31 << 2);
                        iVar17 = (uint)local_1f8;
                      }
                      local_1f8 = CONCAT44(local_1f8._4_4_,iVar17 + -1);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,&local_200,iVar17 + -1,(int *)((longlong)&local_1f8 + 4));
LAB_1460fd8d2:
                      iVar17 = (uint)local_1e8;
                      break;
                    }
                    pFVar32 = pFVar27 + 0x20;
                    dVar41 = (double)*(int *)(local_1c0 + local_1c8 * 8 + 0x24) /
                             (double)*(int *)(local_1c0 + local_1c8 * 8 + 0x14);
                    *(int *)pFVar32 =
                         (int)ROUND((double)(*(int *)(pFVar27 + 0x18) -
                                            *(int *)(local_1c0 + local_1c8 * 8 + 0x18)) *
                                    (dVar41 + dVar41) +
                                    (double)*(int *)(local_1c0 + local_1c8 * 8 + 0x20) +
                                    (double)*(int *)(local_1c0 + local_1c8 * 8 + 0x20) + dVar10) >>
                         1;
                    *(undefined4 *)(pFVar27 + 0x24) = *(undefined4 *)(pFVar27 + 0x1c);
                    local_d0 = pFVar27;
                    local_c8 = pFVar32;
                    TSet<TTuple<FGuid,FMovieSceneScalingAnchor>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FGuid_const_&,FMovieSceneScalingAnchor_const_&>_>
                              (local_1a0,&local_148,(bool *)&local_d0);
                    iVar17 = iVar26;
                    iVar31 = iVar30;
                    if (iVar26 < *(int *)pFVar32 + *(int *)(pFVar27 + 0x24)) {
                      if ((!bVar7) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsSet()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                              ,0x1bd,
                                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                             ), bVar14)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      if ((!bVar12) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsSet()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                              ,0x1bd,
                                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      FMovieSceneDoubleChannel::AddConstantKey
                                ((FMovieSceneDoubleChannel *)&param_1->PlayRate,FVar40,
                                 (double)(iVar30 - local_1d0.Position.Value) /
                                 (double)(iVar26 - local_1dc));
                      iVar31 = *(int *)(pFVar27 + 0x14) + *(int *)(pFVar27 + 0x10);
                      bVar7 = true;
                      bVar12 = true;
                      iVar17 = *(int *)(pFVar27 + 0x24) + *(int *)(pFVar27 + 0x20);
                      local_1dc = iVar26;
                      local_1d0.Position.Value = iVar30;
                      FVar40.Value = iVar26;
                      if (iVar33 < iVar31) {
                        iVar33 = iVar31;
                      }
                    }
                    iVar30 = iVar31;
                    iVar26 = iVar17;
                    if (0 < *(int *)(pFVar27 + 0x1c)) {
                      if (((local_200.Data <= (FScriptContainerElement *)local_1d8) &&
                          ((FScriptContainerElement *)local_1d8 <
                           local_200.Data + (longlong)(int)local_1f8._4_4_ * 4)) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar14)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar17 = (uint)local_1f8;
                      if ((uint)local_1f8 == local_1f8._4_4_) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&local_200,(int *)((longlong)&local_1f8 + 4));
                      }
                      local_1f8 = CONCAT44(local_1f8._4_4_,iVar17 + 1);
                      *(uint *)(local_200.Data + (longlong)iVar17 * 4) = local_1d8[0];
                      local_208[0] = local_208[0] + 1;
                      goto LAB_1460fd8d2;
                    }
                    local_208[0] = local_208[0] + 1;
                    uVar16 = local_1d8[0] + 1;
                    iVar17 = (uint)local_1e8;
                    local_1d8[0] = uVar16;
                  } while ((int)uVar16 < (int)(uint)local_1e8);
                }
                pFVar39 = local_148.Value;
              } while ((int)local_208[0] < iVar17 + -1);
            }
            iVar25 = iVar25 + ((pFVar39[2].Position.Value - pFVar39[4].Position.Value) - iVar33) +
                              iVar26;
            if (!bVar12) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 );
              if (bVar14) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar17 = (uint)local_1e8;
            }
            iVar33 = iVar30 - local_1d0.Position.Value;
            if (!bVar7) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 );
              if (bVar14) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar17 = (uint)local_1e8;
            }
            bVar14 = bVar12;
            bVar8 = bVar7;
            if ((iVar33 != 0) && (iVar26 - local_1dc != 0)) {
              FMovieSceneDoubleChannel::AddConstantKey
                        ((FMovieSceneDoubleChannel *)&param_1->PlayRate,FVar40,
                         (double)iVar33 / (double)(iVar26 - local_1dc));
              bVar7 = true;
              bVar12 = true;
              iVar17 = (uint)local_1e8;
              local_1dc = iVar26;
              local_1d0.Position.Value = iVar30;
              FVar40.Value = iVar26;
              bVar14 = true;
              bVar8 = true;
            }
          }
          local_208[0] = local_208[0] + 1;
          FVar38.Value = local_1dc;
        } while ((int)local_208[0] < iVar17);
      }
      if ((!bVar7) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::InsertKeyInternal
                         ((FMovieSceneDoubleChannel *)&param_1->PlayRate,FVar38);
      uVar34 = 0;
      if ((int)uVar15 < (int)(param_1->PlayRate)._padding_) {
        uVar34 = ~uVar15 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar22 = (param_1->PlayRate)._padding_;
      *(undefined8 *)((longlong)(int)uVar15 * 0x20 + lVar22) = 0x3ff0000000000000;
      *(undefined1 *)((longlong)(int)uVar15 * 0x20 + 0x1c + lVar22) = 1;
      TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::AutoSetTangents
                ((FMovieSceneDoubleChannel *)&param_1->PlayRate,0.0);
      if (local_200.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data);
      }
      if (local_1f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data);
      }
    }
  }
  return;
}

// UpdateFromSource @ 1460fdb30

void __thiscall UMovieSceneScalingAnchors::UpdateFromSource(UMovieSceneScalingAnchors *this)

{
  UpdateCurve(this,(UMovieScenePlayRateCurve *)this);
  return;
}

// _getUObject @ 146100870

UObject * __thiscall UMovieSceneScalingAnchors::_getUObject(UMovieSceneScalingAnchors *this)

{
  return (UObject *)&this[-1].ScalingGroups.field_0x48;
}

// _getUObject`adjustor{368}' @ 14610087c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneScalingAnchors::_getUObject`adjustor{368}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneScalingAnchors::_getUObject_adjustor_368__(UMovieSceneScalingAnchors *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneScalingAnchors *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{376}' @ 146100890

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneScalingAnchors::_getUObject`adjustor{376}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneScalingAnchors::_getUObject_adjustor_376__(UMovieSceneScalingAnchors *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneScalingAnchors *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

