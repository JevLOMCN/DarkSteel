// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 23

// StaticClass @ 146264b70

UClass * __cdecl UMovieSceneTimeWarpTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpTrack",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTimeWarpTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.InnerSingleton;
}

// UMovieSceneTimeWarpTrack @ 14629b140

UMovieSceneTimeWarpTrack * __thiscall
UMovieSceneTimeWarpTrack::UMovieSceneTimeWarpTrack
          (UMovieSceneTimeWarpTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->bIsActiveTimeWarp = true;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneTimeWarpTrack__6B_;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieSceneTimeWarpTrack @ 14629b1a0

UMovieSceneTimeWarpTrack * __thiscall
UMovieSceneTimeWarpTrack::UMovieSceneTimeWarpTrack
          (UMovieSceneTimeWarpTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->bIsActiveTimeWarp = true;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneTimeWarpTrack__6B_;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneTimeWarpTrack @ 14629bf60

void __thiscall UMovieSceneTimeWarpTrack::~UMovieSceneTimeWarpTrack(UMovieSceneTimeWarpTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneTimeWarpTrack__6B_;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneTimeWarpSource__6B_;
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// AddSection @ 1462a2c00

void __thiscall
UMovieSceneTimeWarpTrack::AddSection(UMovieSceneTimeWarpTrack *this,UMovieSceneSection *param_1)

{
  TObjectPtr<UMovieSceneSection>_u_0 local_res8 [4];
  
  local_res8[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UMovieSceneSection>_>
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (TObjectPtr<UMovieSceneSection> *)&local_res8[0].ObjectPtr);
  return;
}

// CreateNewSection @ 1462ab440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneTimeWarpTrack::CreateNewSection(UMovieSceneTimeWarpTrack *this)

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
  pUVar1 = UMovieSceneTimeWarpSection::StaticClass();
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

// GenerateTimeWarpTransform @ 1462adb10

FMovieSceneNestedSequenceTransform * __thiscall
UMovieSceneTimeWarpTrack::GenerateTimeWarpTransform
          (UMovieSceneTimeWarpTrack *this,FMovieSceneNestedSequenceTransform *__return_storage_ptr__
          )

{
  (**(code **)(this[-1]._padding_ + 0x380))();
  return __return_storage_ptr__;
}

// GenerateTransform @ 1462adc30

FMovieSceneNestedSequenceTransform * __thiscall
UMovieSceneTimeWarpTrack::GenerateTransform
          (UMovieSceneTimeWarpTrack *this,FMovieSceneNestedSequenceTransform *__return_storage_ptr__
          )

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  FFrameTime FVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  UClass *pUVar9;
  longlong *plVar10;
  undefined1 local_48 [8];
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  FWeakObjectPtr FStack_30;
  
  bVar6 = UMovieSceneTrack::IsEvalDisabled((UMovieSceneTrack *)this,true);
  if (!bVar6) {
    plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x360))(this);
    plVar10 = (longlong *)*plVar8;
    lVar5 = plVar8[1];
    plVar1 = plVar10 + (int)lVar5;
    while( true ) {
      if ((int)plVar8[1] != (int)lVar5) {
        local_48[0] = 0;
        `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_48);
      }
      if (plVar10 == plVar1) break;
      lVar3 = *plVar10;
      if (lVar3 != 0) {
        pUVar9 = UMovieSceneTimeWarpSection::StaticClass();
        iVar2 = (int)pUVar9->_padding_;
        if ((((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar9->_padding_)) && ((*(byte *)(lVar3 + 0xd8) & 1) != 0)) &&
           (bVar6 = UMovieSceneTrack::IsRowEvalDisabled
                              ((UMovieSceneTrack *)this,*(int *)(lVar3 + 0xd0),true), !bVar6)) {
          cVar7 = (char)*(undefined8 *)(lVar3 + 0xb0);
          local_40 = 0;
          if ((cVar7 != '\x02') &&
             (local_40 = (uint)((ulonglong)*(undefined8 *)(lVar3 + 0xb0) >> 0x20), cVar7 != '\x01'))
          {
            local_40 = local_40 + 1;
          }
          FStack_30 = *(FWeakObjectPtr *)(lVar3 + 0x118);
          local_38 = *(undefined8 *)(lVar3 + 0x110);
          uStack_3c = 0;
          FVar4.SubFrame = 0.0;
          FVar4.FrameNumber.Value = local_40;
          __return_storage_ptr__->Offset = FVar4;
          *(undefined8 *)(__return_storage_ptr__->TimeScale).Variant.Data = local_38;
          (__return_storage_ptr__->TimeScale).Variant.WeakCustomGetter.WeakPtr = FStack_30;
          (__return_storage_ptr__->Warping).Start = 0;
          (__return_storage_ptr__->Warping).End = 0;
          FMovieSceneNumericVariant::MakeWeakUnsafe
                    ((FMovieSceneNumericVariant *)__return_storage_ptr__);
          return __return_storage_ptr__;
        }
      }
      plVar10 = plVar10 + 1;
    }
  }
  FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAllSections @ 1462ae8e0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneTimeWarpTrack::GetAllSections(UMovieSceneTimeWarpTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1462afd60

UClass * __cdecl UMovieSceneTimeWarpTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpTrack",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpTrack,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneTimeWarpTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpTrack.InnerSingleton;
}

// GetTimeWarpSortOrder @ 1462b0c70

int __thiscall UMovieSceneTimeWarpTrack::GetTimeWarpSortOrder(UMovieSceneTimeWarpTrack *this)

{
  return 0;
}

// HasSection @ 1462b15d0

bool __thiscall
UMovieSceneTimeWarpTrack::HasSection(UMovieSceneTimeWarpTrack *this,UMovieSceneSection *param_1)

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

// IsEmpty @ 1462b54c0

bool __thiscall UMovieSceneTimeWarpTrack::IsEmpty(UMovieSceneTimeWarpTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// IsTimeWarpActive @ 1462b57a0

bool __thiscall UMovieSceneTimeWarpTrack::IsTimeWarpActive(UMovieSceneTimeWarpTrack *this)

{
  bool bVar1;
  
  if ((char)this->_padding_ != '\0') {
    bVar1 = UMovieSceneTrack::IsEvalDisabled((UMovieSceneTrack *)&this[-1]._padding_,true);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// OnAddedToMovieSceneImpl @ 1462b5d60

void __thiscall
UMovieSceneTimeWarpTrack::OnAddedToMovieSceneImpl
          (UMovieSceneTimeWarpTrack *this,UMovieScene *param_1)

{
  int iVar1;
  UMovieSceneTimeWarpDecoration *this_00;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  undefined1 local_28 [16];
  FString local_18;
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18[0].DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  this_00 = (UMovieSceneTimeWarpDecoration *)
            UMovieSceneDecorationContainerObject::GetOrCreateDecoration
                      ((UMovieSceneDecorationContainerObject *)param_1,
                       (TSubclassOf<UObject> *)&local_res18[0].ObjectPtr);
  if (this_00 != (UMovieSceneTimeWarpDecoration *)0x0) {
    pUVar2 = Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (this == (UMovieSceneTimeWarpTrack *)0x0)) {
        local_28._8_8_ = this;
        if (this != (UMovieSceneTimeWarpTrack *)0x0) {
          local_28._8_8_ = &this->_padding_;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)this);
        local_28._8_8_ = &this->_padding_;
      }
      local_28._0_8_ = this;
      UMovieSceneTimeWarpDecoration::AddTimeWarpSource
                (this_00,(TScriptInterface<IMovieSceneTimeWarpSource> *)local_28);
      return;
    }
    pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>((FString *)local_28);
    pwVar4 = L"";
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)this_00);
    if ((pFVar3->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar4,pwVar5);
  }
  pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>((FString *)local_28);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar4);
}

// OnRemovedFromMovieSceneImpl @ 1462b5ee0

void __thiscall
UMovieSceneTimeWarpTrack::OnRemovedFromMovieSceneImpl(UMovieSceneTimeWarpTrack *this)

{
  int iVar1;
  UClass *pUVar2;
  UMovieSceneDecorationContainerObject *this_00;
  UMovieSceneTimeWarpDecoration *this_01;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  TObjectPtr<UClass>_u_0 local_res10;
  undefined1 local_28 [16];
  FString local_18;
  
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  this_00 = (UMovieSceneDecorationContainerObject *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (this_00 != (UMovieSceneDecorationContainerObject *)0x0) {
    local_res10.DebugPtr = Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    this_01 = (UMovieSceneTimeWarpDecoration *)
              FMovieSceneDecorationContainer::FindDecoration
                        (&this_00->Decorations,(TSubclassOf<UObject> *)&local_res10.ObjectPtr);
    if (this_01 != (UMovieSceneTimeWarpDecoration *)0x0) {
      pUVar2 = Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pFVar3 = GetTypeName<UMovieSceneTimeWarpDecoration>((FString *)local_28);
        pwVar4 = L"";
        if ((pFVar3->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        }
        pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)this_01);
        if ((pFVar3->Data).ArrayNum != 0) {
          pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar4,pwVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (this == (UMovieSceneTimeWarpTrack *)0x0)) {
        local_28._8_8_ = this;
        if (this != (UMovieSceneTimeWarpTrack *)0x0) {
          local_28._8_8_ = &this->_padding_;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)this);
        local_28._8_8_ = &this->_padding_;
      }
      local_28._0_8_ = this;
      UMovieSceneTimeWarpDecoration::RemoveTimeWarpSource
                (this_01,(TScriptInterface<IMovieSceneTimeWarpSource> *)local_28);
      if ((this_01->Sources).ArrayNum == 0) {
        local_res10.DebugPtr = Z_Construct_UClass_UMovieSceneTimeWarpDecoration_NoRegister();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res10.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        UMovieSceneDecorationContainerObject::RemoveDecoration
                  (this_00,(TSubclassOf<UObject> *)&local_res10.ObjectPtr);
      }
    }
  }
  return;
}

// RemoveAllAnimationData @ 1462b8a90

void __thiscall UMovieSceneTimeWarpTrack::RemoveAllAnimationData(UMovieSceneTimeWarpTrack *this)

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

// RemoveSection @ 1462b8f30

void __thiscall
UMovieSceneTimeWarpTrack::RemoveSection(UMovieSceneTimeWarpTrack *this,UMovieSceneSection *param_1)

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

// RemoveSectionAt @ 1462b9080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneTimeWarpTrack::RemoveSectionAt(UMovieSceneTimeWarpTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// SetIsTimeWarpActive @ 1462bd1d0

void __thiscall
UMovieSceneTimeWarpTrack::SetIsTimeWarpActive(UMovieSceneTimeWarpTrack *this,bool param_1)

{
  *(bool *)&this->_padding_ = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneTimeWarpTrack @ 1462bde90

void __cdecl UMovieSceneTimeWarpTrack::StaticRegisterNativesUMovieSceneTimeWarpTrack(void)

{
  return;
}

// SupportsType @ 1462be180

bool __thiscall
UMovieSceneTimeWarpTrack::SupportsType
          (UMovieSceneTimeWarpTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1462be1ca;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1462be1ca:
  pUVar5 = UMovieSceneTimeWarpSection::StaticClass();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1462bfcd0

UObject * __thiscall UMovieSceneTimeWarpTrack::_getUObject(UMovieSceneTimeWarpTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

