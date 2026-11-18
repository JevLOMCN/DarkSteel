// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 11

// StaticClass @ 14687b7b0

UClass * __cdecl UMovieSceneEnumTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEnumTrack",
               &Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneEnumTrack,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEnumTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEnumTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton;
}

// UMovieSceneEnumTrack @ 14689dcb0

UMovieSceneEnumTrack * __thiscall
UMovieSceneEnumTrack::UMovieSceneEnumTrack(UMovieSceneEnumTrack *this,FVTableHelper *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// UMovieSceneEnumTrack @ 14689dd20

UMovieSceneEnumTrack * __thiscall
UMovieSceneEnumTrack::UMovieSceneEnumTrack(UMovieSceneEnumTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneNameableTrack::UMovieSceneNameableTrack((UMovieSceneNameableTrack *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x11;
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// ~UMovieSceneEnumTrack @ 1468a0930

void __thiscall UMovieSceneEnumTrack::~UMovieSceneEnumTrack(UMovieSceneEnumTrack *this)

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

// CreateNewSection @ 1468ae680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall UMovieSceneEnumTrack::CreateNewSection(UMovieSceneEnumTrack *this)

{
  UEnum *pUVar1;
  UClass *pUVar2;
  UMovieSceneSection *pUVar3;
  longlong *plVar4;
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
  pUVar2 = Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar3 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pUVar1 = (this->Enum).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UEnum **)&pUVar3[1].Easing.EaseOut.field_0x8 = pUVar1;
  return pUVar3;
}

// GetEnum @ 1468b5aa0

UEnum * __thiscall UMovieSceneEnumTrack::GetEnum(UMovieSceneEnumTrack *this)

{
  return (this->Enum).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1468b7380

UClass * __cdecl UMovieSceneEnumTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneEnumTrack",
               &Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneEnumTrack,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneEnumTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneEnumTrack>,local_res8,
               UMovieScenePropertyTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEnumTrack.InnerSingleton;
}

// PostLoad @ 1468c5aa0

void __thiscall UMovieSceneEnumTrack::PostLoad(UMovieSceneEnumTrack *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  UEnum *pUVar4;
  longlong lVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  UMovieSceneTrack::PostLoad((UMovieSceneTrack *)this);
  pUVar4 = (this->Enum).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Enum).field0_0x0.DebugPtr = pUVar4;
  plVar7 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      pUVar6 = Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar6->_padding_)) {
        pUVar4 = (this->Enum).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        *(UEnum **)(lVar5 + 0x1b0) = pUVar4;
      }
    }
    plVar7 = plVar7 + 1;
  }
  return;
}

// SetEnum @ 1468ceaf0

void __thiscall UMovieSceneEnumTrack::SetEnum(UMovieSceneEnumTrack *this,UEnum *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UEnum *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Enum).field0_0x0.DebugPtr = param_1;
  plVar7 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      pUVar6 = Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8)
          == &pUVar6->_padding_)) {
        pUVar5 = (this->Enum).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        *(UEnum **)(lVar4 + 0x1b0) = pUVar5;
      }
    }
    plVar7 = plVar7 + 1;
  }
  return;
}

// StaticRegisterNativesUMovieSceneEnumTrack @ 1468d0080

void __cdecl UMovieSceneEnumTrack::StaticRegisterNativesUMovieSceneEnumTrack(void)

{
  return;
}

// SupportsType @ 1468d1540

bool __thiscall
UMovieSceneEnumTrack::SupportsType
          (UMovieSceneEnumTrack *this,TSubclassOf<UMovieSceneSection> param_1)

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
        goto LAB_1468d158a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1468d158a:
  pUVar5 = Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
  return pUVar4 == pUVar5;
}

