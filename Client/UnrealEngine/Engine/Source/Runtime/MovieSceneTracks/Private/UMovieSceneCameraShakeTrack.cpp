// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 14687da50

UClass * __cdecl UMovieSceneCameraShakeTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton;
}

// UMovieSceneCameraShakeTrack @ 14689d2e0

UMovieSceneCameraShakeTrack * __thiscall
UMovieSceneCameraShakeTrack::UMovieSceneCameraShakeTrack
          (UMovieSceneCameraShakeTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->CameraShakeSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraShakeSections).ArrayNum = 0;
  (this->CameraShakeSections).ArrayMax = 0;
  return this;
}

// UMovieSceneCameraShakeTrack @ 14689d330

UMovieSceneCameraShakeTrack * __thiscall
UMovieSceneCameraShakeTrack::UMovieSceneCameraShakeTrack
          (UMovieSceneCameraShakeTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->CameraShakeSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraShakeSections).ArrayNum = 0;
  (this->CameraShakeSections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneCameraShakeTrack @ 1468a0610

void __thiscall
UMovieSceneCameraShakeTrack::~UMovieSceneCameraShakeTrack(UMovieSceneCameraShakeTrack *this)

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

// AddNewCameraShake @ 1468a6fc0

UMovieSceneSection * __thiscall
UMovieSceneCameraShakeTrack::AddNewCameraShake
          (UMovieSceneCameraShakeTrack *this,FFrameNumber param_1,
          TSubclassOf<UCameraShakeBase> param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  UMovieSceneSection *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  double dVar7;
  double dVar8;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar9 [16];
  double dVar10;
  
  pUVar4 = (UMovieSceneSection *)(**(code **)(this->_padding_ + 0x358))();
  if (pUVar4 != (UMovieSceneSection *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
      pcVar2 = *(code **)(pUVar4->_padding_ + 0x328);
      dVar10 = ((double)(int)*(undefined8 *)&pUVar6[7].field_0x20 * __real_4014000000000000) /
               (double)(int)((ulonglong)*(undefined8 *)&pUVar6[7].field_0x20 >> 0x20);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar10;
      auVar9 = roundpd(unaff_XMM6,auVar9,1);
      uVar3 = (**(code **)(this->_padding_ + 800))(this);
      dVar7 = auVar9._0_8_;
      dVar8 = dVar7;
      if (__real_41dfffffffc00000 <= dVar7) {
        dVar8 = __real_41dfffffffc00000;
      }
      if (dVar8 <= __real_c1e0000000000000) {
        dVar8 = __real_c1e0000000000000;
      }
      (*pcVar2)(pUVar4,&this->CameraShakeSections,param_1.Value,(int)(dVar10 - dVar7) + (int)dVar8,
                uVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
      }
      pUVar4[1]._padding_ = *(longlong *)param_2.Class.field0_0x0;
      (**(code **)this->_padding_)(&this->_padding_,pUVar4);
      return pUVar4;
    }
  }
  return (UMovieSceneSection *)0x0;
}

// AddSection @ 1468a8a40

void __thiscall
UMovieSceneCameraShakeTrack::AddSection
          (UMovieSceneCameraShakeTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 1468adf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCameraShakeTrack::CreateNewSection(UMovieSceneCameraShakeTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
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

// GetAllSections @ 1468b5710

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCameraShakeTrack::GetAllSections(UMovieSceneCameraShakeTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->CameraShakeSections;
}

// GetPrivateStaticClass @ 1468b6b50

UClass * __cdecl UMovieSceneCameraShakeTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeTrack.InnerSingleton;
}

// HasSection @ 1468ba7c0

bool __thiscall
UMovieSceneCameraShakeTrack::HasSection
          (UMovieSceneCameraShakeTrack *this,UMovieSceneSection *param_1)

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

// IsEmpty @ 1468bc790

bool __thiscall UMovieSceneCameraShakeTrack::IsEmpty(UMovieSceneCameraShakeTrack *this)

{
  return (this->CameraShakeSections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8e40

void __thiscall
UMovieSceneCameraShakeTrack::RemoveAllAnimationData(UMovieSceneCameraShakeTrack *this)

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

// RemoveSection @ 1468c9b20

void __thiscall
UMovieSceneCameraShakeTrack::RemoveSection
          (UMovieSceneCameraShakeTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1468ca490

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeTrack::RemoveSectionAt(UMovieSceneCameraShakeTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeTrack @ 1468cffd0

void __cdecl UMovieSceneCameraShakeTrack::StaticRegisterNativesUMovieSceneCameraShakeTrack(void)

{
  return;
}

// SupportsMultipleRows @ 1468d0c00

bool __thiscall UMovieSceneCameraShakeTrack::SupportsMultipleRows(UMovieSceneCameraShakeTrack *this)

{
  return true;
}

// SupportsType @ 1468d11c0

bool __thiscall
UMovieSceneCameraShakeTrack::SupportsType
          (UMovieSceneCameraShakeTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d120a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d120a:
  pUVar5 = Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
  return pUVar4 == pUVar5;
}

