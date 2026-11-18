// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146883510

UClass * __cdecl UMovieSceneDoubleVectorTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorTrack",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleVectorTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton;
}

// UMovieSceneDoubleVectorTrack @ 14689dbd0

UMovieSceneDoubleVectorTrack * __thiscall
UMovieSceneDoubleVectorTrack::UMovieSceneDoubleVectorTrack
          (UMovieSceneDoubleVectorTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// UMovieSceneDoubleVectorTrack @ 14689dc30

UMovieSceneDoubleVectorTrack * __thiscall
UMovieSceneDoubleVectorTrack::UMovieSceneDoubleVectorTrack
          (UMovieSceneDoubleVectorTrack *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  undefined7 extraout_var;
  
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->NumChannelsUsed = 0;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  FVar1 = FMovieSceneBlendTypeField::All();
  *(undefined1 *)&this->_padding_ = *(undefined1 *)CONCAT71(extraout_var,FVar1.BlendTypeField);
  return this;
}

// ~UMovieSceneDoubleVectorTrack @ 1468a08e0

void __thiscall
UMovieSceneDoubleVectorTrack::~UMovieSceneDoubleVectorTrack(UMovieSceneDoubleVectorTrack *this)

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

// CreateNewSection @ 1468ae560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneDoubleVectorTrack::CreateNewSection(UMovieSceneDoubleVectorTrack *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UMovieSceneDoubleVectorSection *this_00;
  UMovieSceneSection *pUVar5;
  longlong *plVar6;
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
  pUVar4 = Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar4);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  this_00 = (UMovieSceneDoubleVectorSection *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  iVar1 = this->NumChannelsUsed;
  if (((iVar1 < 2) || (4 < iVar1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannelsUsed >= 2 && InChannelsUsed <= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Sections\\MovieSceneVectorSection.h"
                         ,0xf9,L"Only 2-4 channels are supported."), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar5 = (UMovieSceneSection *)(*pcVar2)();
    return pUVar5;
  }
  this_00->ChannelsUsed = iVar1;
  UMovieSceneDoubleVectorSection::RecreateChannelProxy(this_00);
  return (UMovieSceneSection *)this_00;
}

// GetPrivateStaticClass @ 1468b72c0

UClass * __cdecl UMovieSceneDoubleVectorTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneDoubleVectorTrack",
               &Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneDoubleVectorTrack,0x150,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneDoubleVectorTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneDoubleVectorTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDoubleVectorTrack.InnerSingleton;
}

// InitializeFromProperty @ 1468bc100

void __thiscall
UMovieSceneDoubleVectorTrack::InitializeFromProperty
          (UMovieSceneDoubleVectorTrack *this,FProperty *param_1,FPropertyDefinition *param_2)

{
  FNameEntryId FVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ulonglong uVar2;
  undefined1 local_res10 [24];
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulonglong *)(param_1[1]._padding_ + 0x18);
  }
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  if (uVar2 == *(uint *)CONCAT44(extraout_var,FVar1.Value)) {
    this->NumChannelsUsed = 2;
    return;
  }
  FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
  if (uVar2 != *(uint *)CONCAT44(extraout_var_00,FVar1.Value)) {
    FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
    if (uVar2 != *(uint *)CONCAT44(extraout_var_01,FVar1.Value)) {
      FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
      if (uVar2 != *(uint *)CONCAT44(extraout_var_02,FVar1.Value)) {
        FVar1 = FNameEntryId::FromValidEName((EName)local_res10);
        if (uVar2 != *(uint *)CONCAT44(extraout_var_03,FVar1.Value)) {
          `UMovieSceneDoubleVectorTrack::InitializeFromProperty'::__l15::<lambda_1>::operator()
                    (local_res10);
          return;
        }
      }
      this->NumChannelsUsed = 4;
      return;
    }
  }
  this->NumChannelsUsed = 3;
  return;
}

// StaticRegisterNativesUMovieSceneDoubleVectorTrack @ 1468d0070

void __cdecl UMovieSceneDoubleVectorTrack::StaticRegisterNativesUMovieSceneDoubleVectorTrack(void)

{
  return;
}

// SupportsType @ 1468d14d0

bool __thiscall
UMovieSceneDoubleVectorTrack::SupportsType
          (UMovieSceneDoubleVectorTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d151a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d151a:
  pUVar5 = Z_Construct_UClass_UMovieSceneDoubleVectorSection_NoRegister();
  return pUVar4 == pUVar5;
}

// operator() @ 1504f5790

bool __thiscall
`UMovieSceneDoubleVectorTrack::InitializeFromProperty'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1034973134198931550>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1034973134198931550>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

