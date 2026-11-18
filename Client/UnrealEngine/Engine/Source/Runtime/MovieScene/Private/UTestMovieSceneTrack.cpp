// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 16

// StaticClass @ 146267f90

UClass * __cdecl UTestMovieSceneTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneTrack",
               &Z_Registration_Info_UClass_UTestMovieSceneTrack.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneTrack>,
               InternalVTableHelperCtorCaller<UTestMovieSceneTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneTrack.InnerSingleton;
}

// UTestMovieSceneTrack @ 14629b560

UTestMovieSceneTrack * __thiscall
UTestMovieSceneTrack::UTestMovieSceneTrack(UTestMovieSceneTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UTestMovieSceneTrack__6B_;
  (this->SectionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionArray).ArrayNum = 0;
  (this->SectionArray).ArrayMax = 0;
  return this;
}

// UTestMovieSceneTrack @ 14629b5b0

UTestMovieSceneTrack * __thiscall
UTestMovieSceneTrack::UTestMovieSceneTrack(UTestMovieSceneTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UTestMovieSceneTrack__6B_;
  (this->SectionArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SectionArray).ArrayNum = 0;
  (this->SectionArray).ArrayMax = 0;
  return this;
}

// ~UTestMovieSceneTrack @ 14629c170

void __thiscall UTestMovieSceneTrack::~UTestMovieSceneTrack(UTestMovieSceneTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UTestMovieSceneTrack__6B_;
  pFVar1 = (this->SectionArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTrackTemplateProducer__6B_;
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// AddSection @ 1462a2d80

void __thiscall
UTestMovieSceneTrack::AddSection(UTestMovieSceneTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  longlong *plVar6;
  UMovieSceneSection *local_18 [2];
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar5 = UTestMovieSceneSection::StaticClass();
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

// CreateNewSection @ 1462ab600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UTestMovieSceneTrack::CreateNewSection(UTestMovieSceneTrack *this)

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
  pUVar1 = UTestMovieSceneSection::StaticClass();
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

// CreateTemplateForSection @ 1462ab6e0

FMovieSceneEvalTemplatePtr * __thiscall
UTestMovieSceneTrack::CreateTemplateForSection
          (UTestMovieSceneTrack *this,FMovieSceneEvalTemplatePtr *__return_storage_ptr__,
          UMovieSceneSection *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneEvalTemplatePtr *pFVar3;
  FMovieSceneEvalTemplatePtr *pFVar4;
  
  __return_storage_ptr__->field_0x80 = __return_storage_ptr__->field_0x80 | 3;
  __return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x14 = 0;
  __return_storage_ptr__->field_0x10 = 0;
  *(undefined ***)__return_storage_ptr__ = &___7FTestMovieSceneEvalTemplate__6B_;
  if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = __return_storage_ptr__;
  if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
    pFVar3 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
  }
  if ((__return_storage_ptr__->field_0x80 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = __return_storage_ptr__;
  if ((__return_storage_ptr__->field_0x80 & 2) == 0) {
    pFVar4 = *(FMovieSceneEvalTemplatePtr **)__return_storage_ptr__;
  }
  if (pFVar3 != pFVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMovieSceneEvalTemplatePtr *)(*pcVar1)();
      return pFVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetAllSections @ 1462ae910

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UTestMovieSceneTrack::GetAllSections(UTestMovieSceneTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->SectionArray;
}

// GetPrivateStaticClass @ 1462b0350

UClass * __cdecl UTestMovieSceneTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestMovieSceneTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneTrack",
               &Z_Registration_Info_UClass_UTestMovieSceneTrack.InnerSingleton,
               StaticRegisterNativesUTestMovieSceneTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTestMovieSceneTrack>,
               InternalVTableHelperCtorCaller<UTestMovieSceneTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestMovieSceneTrack.InnerSingleton;
}

// HasSection @ 1462b1670

bool __thiscall
UTestMovieSceneTrack::HasSection(UTestMovieSceneTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  
  pFVar2 = (this->SectionArray).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->SectionArray).ArrayNum * 8;
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

// IsEmpty @ 1462b5500

bool __thiscall UTestMovieSceneTrack::IsEmpty(UTestMovieSceneTrack *this)

{
  return (this->SectionArray).ArrayNum == 0;
}

// RemoveSection @ 1462b8fd0

void __thiscall
UTestMovieSceneTrack::RemoveSection(UTestMovieSceneTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1462b90c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UTestMovieSceneTrack::RemoveSectionAt(UTestMovieSceneTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUTestMovieSceneTrack @ 1462bdf10

void __cdecl UTestMovieSceneTrack::StaticRegisterNativesUTestMovieSceneTrack(void)

{
  return;
}

// SupportsType @ 1462be260

bool __thiscall
UTestMovieSceneTrack::SupportsType
          (UTestMovieSceneTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1462be2aa;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1462be2aa:
  pUVar5 = UTestMovieSceneSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1462bfce0

UObject * __thiscall UTestMovieSceneTrack::_getUObject(UTestMovieSceneTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

