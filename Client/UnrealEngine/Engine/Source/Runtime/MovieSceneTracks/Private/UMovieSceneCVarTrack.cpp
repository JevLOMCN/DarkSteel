// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 17

// StaticClass @ 14687fc00

UClass * __cdecl UMovieSceneCVarTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarTrack",
               &Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCVarTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneCVarTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton;
}

// UMovieSceneCVarTrack @ 14689cee0

UMovieSceneCVarTrack * __thiscall
UMovieSceneCVarTrack::UMovieSceneCVarTrack(UMovieSceneCVarTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff3;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieSceneCVarTrack @ 14689cf30

UMovieSceneCVarTrack * __thiscall
UMovieSceneCVarTrack::UMovieSceneCVarTrack(UMovieSceneCVarTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneCVarTrack @ 1468a0430

void __thiscall UMovieSceneCVarTrack::~UMovieSceneCVarTrack(UMovieSceneCVarTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddSection @ 1468a8600

void __thiscall
UMovieSceneCVarTrack::AddSection(UMovieSceneCVarTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UMovieSceneSection *local_18 [2];
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar5 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      plVar6 = &this->_padding_;
      local_18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if ((((UMovieSceneSection **)*plVar6 <= local_18) &&
          (local_18 < (UMovieSceneSection **)*plVar6 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar6,piVar1);
      }
      *(int *)&this->_padding_ = iVar4 + 1;
      *(UMovieSceneSection **)(*plVar6 + (longlong)iVar4 * 8) = local_18[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UMovieSceneSection *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
    }
  }
  return;
}

// CreateNewSection @ 1468adc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneCVarTrack::CreateNewSection(UMovieSceneCVarTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
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

// GetAllSections @ 1468b56d0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCVarTrack::GetAllSections(UMovieSceneCVarTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b66d0

UClass * __cdecl UMovieSceneCVarTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarTrack",
               &Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCVarTrack,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneCVarTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarTrack>,local_res8,
               UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarTrack.InnerSingleton;
}

// HasSection @ 1468ba690

bool __thiscall
UMovieSceneCVarTrack::HasSection(UMovieSceneCVarTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
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

// IsEmpty @ 1468bc710

bool __thiscall UMovieSceneCVarTrack::IsEmpty(UMovieSceneCVarTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8d40

void __thiscall UMovieSceneCVarTrack::RemoveAllAnimationData(UMovieSceneCVarTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1468c98a0

void __thiscall
UMovieSceneCVarTrack::RemoveSection(UMovieSceneCVarTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1468ca250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMovieSceneCVarTrack::RemoveSectionAt(UMovieSceneCVarTrack *this,int param_1)

{
  longlong *this_00;
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 local_res10 [8];
  
  this_00 = &this->_padding_;
  iVar8 = 0;
  uVar5 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)this_00,param_1,
             Default);
  lVar6 = *this_00;
  iVar2 = (int)this->_padding_;
  lVar1 = lVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    lVar6 = lVar6 + 8;
  }
  MovieSceneHelpers::SortConsecutiveSections
            ((TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)this_00);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (puVar7 = (undefined8 *)*this_00, 0 < (int)this->_padding_)) {
    do {
      if ((UObject *)*puVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable((UObject *)*puVar7);
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < (int)this->_padding_);
  }
  return;
}

// StaticRegisterNativesUMovieSceneCVarTrack @ 1468cff70

void __cdecl UMovieSceneCVarTrack::StaticRegisterNativesUMovieSceneCVarTrack(void)

{
  return;
}

// SupportsEasing @ 1468d0300

EMovieSceneTrackEasingSupportFlags __thiscall
UMovieSceneCVarTrack::SupportsEasing
          (UMovieSceneCVarTrack *this,FMovieSceneSupportsEasingParams *param_1)

{
  return None;
}

// SupportsMultipleRows @ 1468d0bd0

bool __thiscall UMovieSceneCVarTrack::SupportsMultipleRows(UMovieSceneCVarTrack *this)

{
  return true;
}

// SupportsType @ 1468d1000

bool __thiscall
UMovieSceneCVarTrack::SupportsType
          (UMovieSceneCVarTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d104a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d104a:
  pUVar5 = Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
  return pUVar4 == pUVar5;
}

