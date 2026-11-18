// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 16

// StaticClass @ 14687f460

UClass * __cdecl UMovieScene3DConstraintTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DConstraintTrack",
               &Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DConstraintTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DConstraintTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DConstraintTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton;
}

// UMovieScene3DConstraintTrack @ 14689c8a0

UMovieScene3DConstraintTrack * __thiscall
UMovieScene3DConstraintTrack::UMovieScene3DConstraintTrack
          (UMovieScene3DConstraintTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->ConstraintSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSections).ArrayNum = 0;
  (this->ConstraintSections).ArrayMax = 0;
  return this;
}

// UMovieScene3DConstraintTrack @ 14689c8f0

UMovieScene3DConstraintTrack * __thiscall
UMovieScene3DConstraintTrack::UMovieScene3DConstraintTrack
          (UMovieScene3DConstraintTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->ConstraintSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintSections).ArrayNum = 0;
  (this->ConstraintSections).ArrayMax = 0;
  return this;
}

// ~UMovieScene3DConstraintTrack @ 1468a01f0

void __thiscall
UMovieScene3DConstraintTrack::~UMovieScene3DConstraintTrack(UMovieScene3DConstraintTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->ConstraintSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// AddConstraint @ 1468a62b0

UMovieSceneSection * __thiscall
UMovieScene3DConstraintTrack::AddConstraint
          (UMovieScene3DConstraintTrack *this,FFrameNumber param_1,int param_2,FName param_3,
          FName param_4,FMovieSceneObjectBindingID *param_5)

{
  return (UMovieSceneSection *)0x0;
}

// AddSection @ 1468a8420

void __thiscall
UMovieScene3DConstraintTrack::AddSection
          (UMovieScene3DConstraintTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 1468ad750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieScene3DConstraintTrack::CreateNewSection(UMovieScene3DConstraintTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
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

// GetAllSections @ 1468b56b0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieScene3DConstraintTrack::GetAllSections(UMovieScene3DConstraintTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->ConstraintSections;
}

// GetPrivateStaticClass @ 1468b6190

UClass * __cdecl UMovieScene3DConstraintTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScene3DConstraintTrack",
               &Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton,
               StaticRegisterNativesUMovieScene3DConstraintTrack,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScene3DConstraintTrack>,
               InternalVTableHelperCtorCaller<UMovieScene3DConstraintTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScene3DConstraintTrack.InnerSingleton;
}

// HasSection @ 1468ba5f0

bool __thiscall
UMovieScene3DConstraintTrack::HasSection
          (UMovieScene3DConstraintTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->ConstraintSections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->ConstraintSections).ArrayNum * 8;
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

// IsEmpty @ 1468bc6d0

bool __thiscall UMovieScene3DConstraintTrack::IsEmpty(UMovieScene3DConstraintTrack *this)

{
  return (this->ConstraintSections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8cc0

void __thiscall
UMovieScene3DConstraintTrack::RemoveAllAnimationData(UMovieScene3DConstraintTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->ConstraintSections).ArrayMax;
  (this->ConstraintSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ConstraintSections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1468c9800

void __thiscall
UMovieScene3DConstraintTrack::RemoveSection
          (UMovieScene3DConstraintTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1468ca210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieScene3DConstraintTrack::RemoveSectionAt(UMovieScene3DConstraintTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieScene3DConstraintTrack @ 1468cff00

void __cdecl UMovieScene3DConstraintTrack::StaticRegisterNativesUMovieScene3DConstraintTrack(void)

{
  return;
}

// SupportsType @ 1468d0cf0

bool __thiscall
UMovieScene3DConstraintTrack::SupportsType
          (UMovieScene3DConstraintTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d0d3a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d0d3a:
  pUVar5 = Z_Construct_UClass_UMovieScene3DConstraintSection_NoRegister();
  return pUVar4 == pUVar5;
}

