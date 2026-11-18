// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 18

// StaticClass @ 1468764b0

UClass * __cdecl UMovieSceneCameraShakeSourceShakeTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceShakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSourceShakeTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeSourceShakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton;
}

// UMovieSceneCameraShakeSourceShakeTrack @ 14689d1a0

UMovieSceneCameraShakeSourceShakeTrack * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::UMovieSceneCameraShakeSourceShakeTrack
          (UMovieSceneCameraShakeSourceShakeTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->CameraShakeSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraShakeSections).ArrayNum = 0;
  (this->CameraShakeSections).ArrayMax = 0;
  return this;
}

// UMovieSceneCameraShakeSourceShakeTrack @ 14689d1f0

UMovieSceneCameraShakeSourceShakeTrack * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::UMovieSceneCameraShakeSourceShakeTrack
          (UMovieSceneCameraShakeSourceShakeTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->CameraShakeSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraShakeSections).ArrayNum = 0;
  (this->CameraShakeSections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneCameraShakeSourceShakeTrack @ 1468a0570

void __thiscall
UMovieSceneCameraShakeSourceShakeTrack::~UMovieSceneCameraShakeSourceShakeTrack
          (UMovieSceneCameraShakeSourceShakeTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->CameraShakeSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddNewCameraShake @ 1468a6b90

UMovieSceneSection * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::AddNewCameraShake
          (UMovieSceneCameraShakeSourceShakeTrack *this,FFrameNumber param_1,
          UCameraShakeSourceComponent *param_2)

{
  UMovieSceneSection *pUVar1;
  UClass *local_res18 [2];
  
  local_res18[0] = (param_2->CameraShake).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar1 = AddNewCameraShake(this,param_1,(TSubclassOf<UCameraShakeBase>)local_res18,true);
  return pUVar1;
}

// AddNewCameraShake @ 1468a6bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::AddNewCameraShake
          (UMovieSceneCameraShakeSourceShakeTrack *this,FFrameNumber param_1,
          TSubclassOf<UCameraShakeBase> param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UCameraShakeBase *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  UMovieSceneSection *pUVar8;
  UClass *pUVar9;
  FCameraShakeDuration FVar10;
  UObject *pUVar11;
  char cVar12;
  double dVar13;
  double dVar14;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 == 0) ||
     (pUVar7 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_1468a6c46:
    if ((!param_3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShakeClass || bIsAutomaticShake",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tracks\\MovieSceneCameraShakeSourceShakeTrack.cpp"
                           ,0x17,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UMovieSceneSection *)(*pcVar4)();
      return pUVar8;
    }
  }
  else {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (*(longlong *)param_2.Class.field0_0x0 == 0)) goto LAB_1468a6c46;
  }
  pUVar8 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))(this);
  if (pUVar8 == (UMovieSceneSection *)0x0) {
    return (UMovieSceneSection *)0x0;
  }
  pUVar7 = Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if (*(int *)(pUVar8->_padding_ + 0x38) < iVar1) {
    return (UMovieSceneSection *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_) {
    return (UMovieSceneSection *)0x0;
  }
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  cVar12 = '\0';
  local_res8 = 0;
  if ((lVar2 == 0) ||
     (pUVar7 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar7 == (UClass *)0x0))
  goto LAB_1468a6e32;
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) || (pUVar7 = *(UClass **)param_2.Class.field0_0x0, pUVar7 == (UClass *)0x0))
  goto LAB_1468a6e32;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar9 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  if (pUVar9 == (UClass *)0x0) goto LAB_1468a6e32;
  iVar1 = (int)pUVar9->_padding_;
  if (((int)pUVar7->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_1468a6e32;
  pUVar9 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
LAB_1468a6da8:
    pUVar7 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1468a6da8;
  }
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  this_00 = (UCameraShakeBase *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  lVar2 = *(longlong *)&this_00->field_0x10;
  iVar1 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar2 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar7->_padding_)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UMovieSceneSection *)(*pcVar4)();
    return pUVar8;
  }
  FVar10 = UCameraShakeBase::GetCameraShakeDuration(this_00);
  local_res8._4_1_ = (char)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
  cVar12 = local_res8._4_1_;
  local_res8 = *(undefined8 *)FVar10;
LAB_1468a6e32:
  if ((char)((ulonglong)local_res8 >> 0x20) != '\0') {
    local_res8 = 0x40a00000;
    local_res8._4_1_ = '\0';
    cVar12 = local_res8._4_1_;
  }
  pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
  uVar3 = *(undefined8 *)&pUVar11[7].field_0x20;
  if (((cVar12 != '\0') && (cVar12 != '\x02')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == ECameraShakeDurationType::Fixed || Type == ECameraShakeDurationType::Custom"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Camera\\CameraShakeBase.h"
                         ,0xf1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UMovieSceneSection *)(*pcVar4)();
    return pUVar8;
  }
  pcVar4 = *(code **)(pUVar8->_padding_ + 0x328);
  dVar16 = ((double)(int)uVar3 * (double)(float)local_res8) /
           (double)(int)((ulonglong)uVar3 >> 0x20);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar16;
  auVar15 = roundpd(unaff_XMM6,auVar15,1);
  uVar6 = (**(code **)(this->_padding_ + 800))(this);
  dVar13 = auVar15._0_8_;
  dVar14 = dVar13;
  if (__real_41dfffffffc00000 <= dVar13) {
    dVar14 = __real_41dfffffffc00000;
  }
  if (dVar14 <= __real_c1e0000000000000) {
    dVar14 = __real_c1e0000000000000;
  }
  (*pcVar4)(pUVar8,&this->CameraShakeSections,param_1.Value,(int)(dVar16 - dVar13) + (int)dVar14,
            uVar6);
  if (!param_3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
    }
    pUVar8[1]._padding_ = *(longlong *)param_2.Class.field0_0x0;
  }
  (**(code **)this->_padding_)(&this->_padding_,pUVar8);
  return pUVar8;
}

// AddSection @ 1468a8860

void __thiscall
UMovieSceneCameraShakeSourceShakeTrack::AddSection
          (UMovieSceneCameraShakeSourceShakeTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneSection *local_18 [2];
  
  plVar2 = &this->_padding_;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (((UMovieSceneSection **)*plVar2 <= local_18) &&
     (local_18 < (UMovieSceneSection **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(UMovieSceneSection **)(*plVar2 + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CreateNewSection @ 1468add70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::CreateNewSection
          (UMovieSceneCameraShakeSourceShakeTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_NoRegister();
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

// GetAllSections @ 1468b56f0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCameraShakeSourceShakeTrack::GetAllSections(UMovieSceneCameraShakeSourceShakeTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->CameraShakeSections;
}

// GetPrivateStaticClass @ 1468b69d0

UClass * __cdecl UMovieSceneCameraShakeSourceShakeTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceShakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSourceShakeTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeSourceShakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceShakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceShakeTrack.InnerSingleton;
}

// HasSection @ 1468ba730

bool __thiscall
UMovieSceneCameraShakeSourceShakeTrack::HasSection
          (UMovieSceneCameraShakeSourceShakeTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->CameraShakeSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->CameraShakeSections).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(UMovieSceneSection **)pFVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = *(UMovieSceneSection **)pFVar2 == param_1;
    }
    if (bVar3) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// IsEmpty @ 1468bc750

bool __thiscall
UMovieSceneCameraShakeSourceShakeTrack::IsEmpty(UMovieSceneCameraShakeSourceShakeTrack *this)

{
  return (this->CameraShakeSections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8dc0

void __thiscall
UMovieSceneCameraShakeSourceShakeTrack::RemoveAllAnimationData
          (UMovieSceneCameraShakeSourceShakeTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->CameraShakeSections).ArrayMax;
  (this->CameraShakeSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CameraShakeSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1468c99d0

void __thiscall
UMovieSceneCameraShakeSourceShakeTrack::RemoveSection
          (UMovieSceneCameraShakeSourceShakeTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UMovieSceneSection> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveSectionAt @ 1468ca450

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeSourceShakeTrack::RemoveSectionAt
          (UMovieSceneCameraShakeSourceShakeTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeSourceShakeTrack @ 1468cffb0

void __cdecl
UMovieSceneCameraShakeSourceShakeTrack::StaticRegisterNativesUMovieSceneCameraShakeSourceShakeTrack
          (void)

{
  return;
}

// SupportsMultipleRows @ 1468d0bf0

bool __thiscall
UMovieSceneCameraShakeSourceShakeTrack::SupportsMultipleRows
          (UMovieSceneCameraShakeSourceShakeTrack *this)

{
  return true;
}

// SupportsType @ 1468d10e0

bool __thiscall
UMovieSceneCameraShakeSourceShakeTrack::SupportsType
          (UMovieSceneCameraShakeSourceShakeTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d112a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d112a:
  pUVar5 = Z_Construct_UClass_UMovieSceneCameraShakeSourceShakeSection_NoRegister();
  return pUVar4 == pUVar5;
}

