// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 15

// StaticClass @ 146878b60

UClass * __cdecl UMovieSceneCameraShakeSourceTriggerTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceTriggerTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerTrack,0x128,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceTriggerTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton;
}

// UMovieSceneCameraShakeSourceTriggerTrack @ 14689d240

UMovieSceneCameraShakeSourceTriggerTrack * __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::UMovieSceneCameraShakeSourceTriggerTrack
          (UMovieSceneCameraShakeSourceTriggerTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieSceneCameraShakeSourceTriggerTrack @ 14689d290

UMovieSceneCameraShakeSourceTriggerTrack * __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::UMovieSceneCameraShakeSourceTriggerTrack
          (UMovieSceneCameraShakeSourceTriggerTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneCameraShakeSourceTriggerTrack @ 1468a05c0

void __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::~UMovieSceneCameraShakeSourceTriggerTrack
          (UMovieSceneCameraShakeSourceTriggerTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// AddSection @ 1468a8950

void __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::AddSection
          (UMovieSceneCameraShakeSourceTriggerTrack *this,UMovieSceneSection *param_1)

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

// CreateNewSection @ 1468ade50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::CreateNewSection
          (UMovieSceneCameraShakeSourceTriggerTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister();
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

// GetAllSections @ 1468b5700

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::GetAllSections
          (UMovieSceneCameraShakeSourceTriggerTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1468b6a90

UClass * __cdecl UMovieSceneCameraShakeSourceTriggerTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeSourceTriggerTrack",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerTrack,0x128,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraShakeSourceTriggerTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeSourceTriggerTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerTrack.InnerSingleton;
}

// HasSection @ 1468ba780

bool __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::HasSection
          (UMovieSceneCameraShakeSourceTriggerTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
    if (*(UMovieSceneSection **)pFVar2 == param_1) goto LAB_1468ba7a7;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_1468ba7a7:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// IsEmpty @ 1468bc770

bool __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::IsEmpty(UMovieSceneCameraShakeSourceTriggerTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// RemoveAllAnimationData @ 1468c8e00

void __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::RemoveAllAnimationData
          (UMovieSceneCameraShakeSourceTriggerTrack *this)

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

// RemoveSection @ 1468c9a20

void __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::RemoveSection
          (UMovieSceneCameraShakeSourceTriggerTrack *this,UMovieSceneSection *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    iVar6 = 0;
    plVar2 = (longlong *)this->_padding_;
    bVar7 = (UMovieSceneSection *)*plVar2 != param_1;
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar5 = iVar4;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar5 + 1;
        if (iVar1 <= lVar3) break;
      } while (bVar7 == ((UMovieSceneSection *)plVar2[lVar3] != param_1));
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          memmove(plVar2 + iVar6,plVar2 + iVar4,(longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < iVar1);
    *(int *)&this->_padding_ = iVar6;
  }
  return;
}

// RemoveSectionAt @ 1468ca470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::RemoveSectionAt
          (UMovieSceneCameraShakeSourceTriggerTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerTrack @ 1468cffc0

void __cdecl
UMovieSceneCameraShakeSourceTriggerTrack::
StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerTrack(void)

{
  return;
}

// SupportsType @ 1468d1150

bool __thiscall
UMovieSceneCameraShakeSourceTriggerTrack::SupportsType
          (UMovieSceneCameraShakeSourceTriggerTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d119a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d119a:
  pUVar5 = Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister();
  return pUVar4 == pUVar5;
}

