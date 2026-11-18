// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 13

// StaticClass @ 145fad9a0

UClass * __cdecl ALandscapeSplineActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineActor",
               &Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton,
               StaticRegisterNativesALandscapeSplineActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeSplineActor>,
               InternalVTableHelperCtorCaller<ALandscapeSplineActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton;
}

// ALandscapeSplineActor @ 145fb4ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeSplineActor * __thiscall
ALandscapeSplineActor::ALandscapeSplineActor(ALandscapeSplineActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  return this;
}

// ALandscapeSplineActor @ 145fb4b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeSplineActor * __thiscall
ALandscapeSplineActor::ALandscapeSplineActor
          (ALandscapeSplineActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__ILandscapeSplineInterface__;
  (this->LandscapeGuid).A = 0;
  (this->LandscapeGuid).B = 0;
  (this->LandscapeGuid).C = 0;
  (this->LandscapeGuid).D = 0;
  pFVar2 = ::FName::FName(&local_res8,L"RootComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  pUVar4[10].field_0x1b = 0;
  return this;
}

// ~ALandscapeSplineActor @ 145fb6550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ALandscapeSplineActor::~ALandscapeSplineActor(ALandscapeSplineActor *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7ILandscapeSplineInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetLandscapeGuid @ 145fc2590

FGuid * __thiscall
ALandscapeSplineActor::GetLandscapeGuid(ALandscapeSplineActor *this,FGuid *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar2 = *(undefined4 *)&this->_padding_;
  uVar3 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  __return_storage_ptr__->A = *(undefined4 *)&this->_padding_;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetLandscapeInfo @ 145fc25b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULandscapeInfo * __thiscall ALandscapeSplineActor::GetLandscapeInfo(ALandscapeSplineActor *this)

{
  UWorld *pUVar1;
  ULandscapeInfo *pUVar2;
  
  pUVar1 = AActor::GetWorld((AActor *)&this[-1]._padding_);
  pUVar2 = ULandscapeInfo::Find(pUVar1,(FGuid *)&this->_padding_);
  return pUVar2;
}

// GetPrivateStaticClass @ 145fc3210

UClass * __cdecl ALandscapeSplineActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineActor",
               &Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton,
               StaticRegisterNativesALandscapeSplineActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeSplineActor>,
               InternalVTableHelperCtorCaller<ALandscapeSplineActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineActor.InnerSingleton;
}

// GetSplinesComponent @ 145fc4240

ULandscapeSplinesComponent * __thiscall
ALandscapeSplineActor::GetSplinesComponent(ALandscapeSplineActor *this)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this[-1]._padding_;
  if (*this_00 != 0) {
    pUVar2 = Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      return (ULandscapeSplinesComponent *)*this_00;
    }
  }
  return (ULandscapeSplinesComponent *)0x0;
}

// IsSplineOwnerValid @ 145fc5250

bool __thiscall ALandscapeSplineActor::IsSplineOwnerValid(ALandscapeSplineActor *this)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(this->_padding_ + 0x18))();
  if (lVar2 != 0) {
    bVar1 = TWeakObjectPtr<ALandscape,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ALandscape,FWeakObjectPtr> *)(lVar2 + 0x28),(void *)0x0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// LandscapeActorToWorld @ 145fc5350

TTransform<double> * __thiscall
ALandscapeSplineActor::LandscapeActorToWorld
          (ALandscapeSplineActor *this,TTransform<double> *__return_storage_ptr__)

{
  longlong lVar1;
  UObject *pUVar2;
  
  lVar1 = (**(code **)(this->_padding_ + 0x18))();
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x28));
  (**(code **)(*(longlong *)&pUVar2[0x11].field_0x18 + 0x20))
            (&pUVar2[0x11].field_0x18,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesALandscapeSplineActor @ 145fc8720

void __cdecl ALandscapeSplineActor::StaticRegisterNativesALandscapeSplineActor(void)

{
  return;
}

// UpdateSharedProperties @ 145fcaa20

void __thiscall
ALandscapeSplineActor::UpdateSharedProperties(ALandscapeSplineActor *this,ULandscapeInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (ULandscapeInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLandscapeInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplineActor.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((((param_1->LandscapeGuid).D != *(uint *)((longlong)&this->_padding_ + 4) ||
       (param_1->LandscapeGuid).C != (uint)this->_padding_) ||
      (param_1->LandscapeGuid).B != *(uint *)((longlong)&this->_padding_ + 4)) ||
      (param_1->LandscapeGuid).A != (uint)this->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLandscapeInfo->LandscapeGuid == LandscapeGuid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeSplineActor.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// _getUObject @ 145fcb7b0

UObject * __thiscall ALandscapeSplineActor::_getUObject(ALandscapeSplineActor *this)

{
  return (UObject *)&this[-1]._padding_;
}

