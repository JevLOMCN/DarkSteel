// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 15

// StaticClass @ 146062f80

UClass * __cdecl UMovieSceneTimeWarpDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpDecoration,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton;
}

// UMovieSceneTimeWarpDecoration @ 146095d00

UMovieSceneTimeWarpDecoration * __thiscall
UMovieSceneTimeWarpDecoration::UMovieSceneTimeWarpDecoration
          (UMovieSceneTimeWarpDecoration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  return this;
}

// UMovieSceneTimeWarpDecoration @ 146095d40

UMovieSceneTimeWarpDecoration * __thiscall
UMovieSceneTimeWarpDecoration::UMovieSceneTimeWarpDecoration
          (UMovieSceneTimeWarpDecoration *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  return this;
}

// ~UMovieSceneTimeWarpDecoration @ 146098780

void __thiscall
UMovieSceneTimeWarpDecoration::~UMovieSceneTimeWarpDecoration(UMovieSceneTimeWarpDecoration *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddTimeWarpSource @ 1460a9ed0

void __thiscall
UMovieSceneTimeWarpDecoration::AddTimeWarpSource
          (UMovieSceneTimeWarpDecoration *this,TScriptInterface<IMovieSceneTimeWarpSource> *param_1)

{
  TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TScriptInterface<IMovieSceneTimeWarpSource>_const_&>(&this->Sources,param_1);
  return;
}

// GenerateTransform @ 1460c8640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneSequenceTransform * __thiscall
UMovieSceneTimeWarpDecoration::GenerateTransform
          (UMovieSceneTimeWarpDecoration *this,FMovieSceneSequenceTransform *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  double dVar4;
  uchar uVar5;
  FMovieSceneNestedSequenceTransform *pFVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 auStack_d8 [32];
  TLess<void> local_b8 [8];
  undefined8 local_b0;
  FFrameTime local_a8;
  undefined8 local_a0;
  FMovieSceneNestedSequenceTransform local_98;
  FMovieSceneNestedSequenceTransform local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (__return_storage_ptr__->LinearTransform).TimeScale = 1.0;
  (__return_storage_ptr__->LinearTransform).Offset.FrameNumber = 0;
  (__return_storage_ptr__->LinearTransform).Offset.SubFrame = 0.0;
  (__return_storage_ptr__->NestedTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->NestedTransforms).ArrayNum = 0;
  (__return_storage_ptr__->NestedTransforms).ArrayMax = 0;
  AlgoImpl::
  IntroSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_>
            ((TScriptInterface<IMovieSceneTimeWarpSource> *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum,
             (TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const>)
             0x14609da14,local_b8[0]);
  dVar4 = __real_3ff0000000000000;
  iVar1 = (this->Sources).ArrayNum;
  pFVar8 = (this->Sources).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  do {
    if ((this->Sources).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar8 == pFVar9) {
      return __return_storage_ptr__;
    }
    pUVar2 = *(UObject **)pFVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    plVar7 = *(longlong **)(pFVar8 + 8);
    if (pUVar2 == (UObject *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_78);
    local_b0 = 0;
    local_a0 = 0;
    local_a8 = local_78.Offset;
    if ((local_78.Offset.FrameNumber.Value.Value == 0) &&
       (local_a8.SubFrame = local_78.Offset.SubFrame, bVar3 = local_a8.SubFrame == 0.0, bVar3)) {
      if (((ulonglong)local_78.TimeScale.Variant.Data & 0xfff8000000000000) == 0xfff8000000000000) {
        uVar5 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)&local_78);
        if (uVar5 != 0xff) goto LAB_1460c876b;
      }
      dVar10 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&local_78.TimeScale);
      if (dVar10 != dVar4) goto LAB_1460c876b;
    }
    else {
LAB_1460c876b:
      pFVar6 = FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
                         (&local_98,&local_78);
      FMovieSceneSequenceTransform::Add(__return_storage_ptr__,pFVar6);
    }
    FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_78);
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// GetPrivateStaticClass @ 1460cfdf0

UClass * __cdecl UMovieSceneTimeWarpDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneTimeWarpDecoration",
               &Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneTimeWarpDecoration,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneTimeWarpDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneTimeWarpDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTimeWarpDecoration.InnerSingleton;
}

// ImportEntityImpl @ 1460d1e70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneTimeWarpDecoration::ImportEntityImpl
          (UMovieSceneTimeWarpDecoration *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  return;
}

// OnCompiled @ 1460dad80

void __thiscall UMovieSceneTimeWarpDecoration::OnCompiled(UMovieSceneTimeWarpDecoration *this)

{
  return;
}

// PopulateEvaluationFieldImpl @ 1460dedf0

bool __thiscall
UMovieSceneTimeWarpDecoration::PopulateEvaluationFieldImpl
          (UMovieSceneTimeWarpDecoration *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  return true;
}

// RemoveTimeWarpSource @ 1460e8760

void __thiscall
UMovieSceneTimeWarpDecoration::RemoveTimeWarpSource
          (UMovieSceneTimeWarpDecoration *this,TScriptInterface<IMovieSceneTimeWarpSource> *param_1)

{
  TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove
            (&this->Sources,param_1);
  return;
}

// Serialize @ 1460f4280

void __thiscall
UMovieSceneTimeWarpDecoration::Serialize(UMovieSceneTimeWarpDecoration *this,FArchive *param_1)

{
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res10 [3];
  TScriptInterface<IMovieSceneTimeWarpSource> local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    pTVar1 = (TScriptInterface<IMovieSceneTimeWarpSource> *)(this->Sources).AllocatorInstance.Data;
    local_18._0_8_ = 0;
    local_18._8_8_ = 0;
    if ((pTVar1 <= &local_18) && (&local_18 < pTVar1 + (this->Sources).ArrayMax)) {
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
    local_res10[0].Item = &local_18;
    TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&this->Sources,local_res10);
  }
  return;
}

// Serialize @ 1460f4350

void __thiscall
UMovieSceneTimeWarpDecoration::Serialize
          (UMovieSceneTimeWarpDecoration *this,FStructuredArchiveRecord param_1)

{
  TScriptInterface<IMovieSceneTimeWarpSource> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FArchive *pFVar4;
  FSlotBase local_res10;
  <lambda_1> local_res18 [2];
  TScriptInterface<IMovieSceneTimeWarpSource> local_18;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  UObject::Serialize((UObject *)this,pFVar4);
  if ((pFVar4->field_0x28 & 1) != 0) {
    pTVar1 = (TScriptInterface<IMovieSceneTimeWarpSource> *)(this->Sources).AllocatorInstance.Data;
    local_18._0_8_ = 0;
    local_18._8_8_ = 0;
    if ((pTVar1 <= &local_18) && (&local_18 < pTVar1 + (this->Sources).ArrayMax)) {
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
    local_res18[0].Item = &local_18;
    TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<TScriptInterface<IMovieSceneTimeWarpSource>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              (&this->Sources,local_res18);
  }
  return;
}

// StaticRegisterNativesUMovieSceneTimeWarpDecoration @ 1460fa2f0

void __cdecl UMovieSceneTimeWarpDecoration::StaticRegisterNativesUMovieSceneTimeWarpDecoration(void)

{
  return;
}

// _getUObject @ 1461008e0

UObject * __thiscall UMovieSceneTimeWarpDecoration::_getUObject(UMovieSceneTimeWarpDecoration *this)

{
  return (UObject *)&this[-1]._padding_;
}

