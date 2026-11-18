// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 14

// StaticClass @ 146881fe0

UClass * __cdecl UMovieSceneStringTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneStringTrack",
               &Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneStringTrack,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneStringTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneStringTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton;
}

// UMovieSceneStringTrack @ 14689f000

UMovieSceneStringTrack * __thiscall
UMovieSceneStringTrack::UMovieSceneStringTrack(UMovieSceneStringTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x138 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined ***)this = &_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IMovieSceneTrackVirtualAPI__;
  return this;
}

// ~UMovieSceneStringTrack @ 1468a1020

void __thiscall UMovieSceneStringTrack::~UMovieSceneStringTrack(UMovieSceneStringTrack *this)

{
  *(undefined ***)this =
       &UMovieScenePropertyTrack::_vftable__for__UMovieSceneDecorationContainerObject__;
  *(undefined ***)&this->field_0x70 =
       &UMovieScenePropertyTrack::_vftable__for__IMovieSceneTrackVirtualAPI__;
  if (*(void **)&this->field_0x138 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x138);
  }
  UMovieSceneNameableTrack::~UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this);
  return;
}

// AddSection @ 1468a9650

void __thiscall
UMovieSceneStringTrack::AddSection(UMovieSceneStringTrack *this,UMovieSceneSection *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UMovieSceneSection *local_18 [2];
  
  puVar1 = &this->field_0xc8;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if ((*(UMovieSceneSection ***)puVar1 <= local_18) &&
     (local_18 < *(UMovieSceneSection ***)puVar1 + *(int *)&this->field_0xd4)) {
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
  iVar4 = *(int *)&this->field_0xd0;
  if (iVar4 == *(int *)&this->field_0xd4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar1,(int *)&this->field_0xd4);
  }
  *(int *)&this->field_0xd0 = iVar4 + 1;
  *(UMovieSceneSection **)(*(longlong *)puVar1 + (longlong)iVar4 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CreateNewSection @ 1468af390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneStringTrack::CreateNewSection(UMovieSceneStringTrack *this)

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
  pUVar1 = Z_Construct_UClass_UMovieSceneStringSection_NoRegister();
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

// GetAllSections @ 1468b57c0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneStringTrack::GetAllSections(UMovieSceneStringTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->field_0x138;
}

// GetPrivateStaticClass @ 1468b8570

UClass * __cdecl UMovieSceneStringTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneStringTrack",
               &Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneStringTrack,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneStringTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneStringTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneStringTrack.InnerSingleton;
}

// HasSection @ 1468bab30

bool __thiscall
UMovieSceneStringTrack::HasSection(UMovieSceneStringTrack *this,UMovieSceneSection *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = *(longlong **)&this->field_0x138;
  plVar1 = plVar2 + *(int *)&this->field_0x140;
  while( true ) {
    if (plVar2 == plVar1) {
      return false;
    }
    if ((UMovieSceneSection *)*plVar2 == (UMovieSceneSection *)0x0) {
      bVar3 = param_1 == (UMovieSceneSection *)0x0;
    }
    else {
      bVar3 = (UMovieSceneSection *)*plVar2 == param_1;
    }
    if (bVar3) break;
    plVar2 = plVar2 + 1;
  }
  return true;
}

// IsEmpty @ 1468bc8f0

bool __thiscall UMovieSceneStringTrack::IsEmpty(UMovieSceneStringTrack *this)

{
  return *(int *)&this->field_0x140 == 0;
}

// RemoveAllAnimationData @ 1468c90e0

void __thiscall UMovieSceneStringTrack::RemoveAllAnimationData(UMovieSceneStringTrack *this)

{
  *(undefined4 *)&this->field_0x140 = 0;
  if (*(int *)&this->field_0x144 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x138,0,(int *)&this->field_0x144);
  }
  return;
}

// RemoveSection @ 1468ca170

void __thiscall
UMovieSceneStringTrack::RemoveSection(UMovieSceneStringTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->field_0xc8
             ,(TObjectPtr<UMovieSceneSection> *)&local_res8[0].ObjectPtr);
  return;
}

// RemoveSectionAt @ 1468caa00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMovieSceneStringTrack::RemoveSectionAt(UMovieSceneStringTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->field_0xc8
             ,param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneStringTrack @ 1468d0260

void __cdecl UMovieSceneStringTrack::StaticRegisterNativesUMovieSceneStringTrack(void)

{
  return;
}

// SupportsType @ 1468d1d00

bool __thiscall
UMovieSceneStringTrack::SupportsType
          (UMovieSceneStringTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d1d4a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d1d4a:
  pUVar5 = Z_Construct_UClass_UMovieSceneStringSection_NoRegister();
  return pUVar4 == pUVar5;
}

