// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// StaticClass @ 146060030

UClass * __cdecl UMovieSceneSectionAnchorsDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionAnchorsDecoration",
               &Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionAnchorsDecoration,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSectionAnchorsDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionAnchorsDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton;
}

// UMovieSceneSectionAnchorsDecoration @ 146095ba0

UMovieSceneSectionAnchorsDecoration * __thiscall
UMovieSceneSectionAnchorsDecoration::UMovieSceneSectionAnchorsDecoration
          (UMovieSceneSectionAnchorsDecoration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSectionDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneLifetimeDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneScalingDriver__;
  (this->StartAnchor).A = 0;
  (this->StartAnchor).B = 0;
  (this->StartAnchor).C = 0;
  (this->StartAnchor).D = 0;
  return this;
}

// UMovieSceneSectionAnchorsDecoration @ 146095c00

UMovieSceneSectionAnchorsDecoration * __thiscall
UMovieSceneSectionAnchorsDecoration::UMovieSceneSectionAnchorsDecoration
          (UMovieSceneSectionAnchorsDecoration *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneSectionDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneLifetimeDecoration__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneScalingDriver__;
  (this->StartAnchor).A = 0;
  (this->StartAnchor).B = 0;
  (this->StartAnchor).C = 0;
  (this->StartAnchor).D = 0;
  return this;
}

// ~UMovieSceneSectionAnchorsDecoration @ 1460986f0

void __thiscall
UMovieSceneSectionAnchorsDecoration::~UMovieSceneSectionAnchorsDecoration
          (UMovieSceneSectionAnchorsDecoration *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneScalingDriver__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneLifetimeDecoration__6B_;
  this->_padding_ = (longlong)&___7IMovieSceneSectionDecoration__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1460cfc90

UClass * __cdecl UMovieSceneSectionAnchorsDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSectionAnchorsDecoration",
               &Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionAnchorsDecoration,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSectionAnchorsDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionAnchorsDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionAnchorsDecoration.InnerSingleton;
}

// OnDestroy @ 1460db070

void __thiscall
UMovieSceneSectionAnchorsDecoration::OnDestroy
          (UMovieSceneSectionAnchorsDecoration *this,UMovieScene *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  TObjectPtr<UClass>_u_0 local_res10;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  undefined1 local_38 [16];
  FString local_28;
  
  local_res10.DebugPtr = UMovieSceneScalingAnchors::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res10.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
  }
  pUVar2 = FMovieSceneDecorationContainer::FindDecoration
                     ((FMovieSceneDecorationContainer *)&param_1->_padding_,
                      (TSubclassOf<UObject> *)&local_res10.ObjectPtr);
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = UMovieSceneScalingAnchors::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneScalingAnchors>((FString *)local_38);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UObject>(&local_28,pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    plVar5 = &this[-1]._padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (plVar5 == (longlong *)0x0)) {
      local_38._8_8_ = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        local_38._8_8_ = &this->_padding_;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)plVar5);
      local_38._8_8_ = &this->_padding_;
    }
    local_38._0_8_ = plVar5;
    TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::Remove
              ((TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_> *)
               &pUVar2[0xc].field_0x8,(TScriptInterface<IMovieSceneScalingDriver> *)local_38);
    (**(code **)(*(longlong *)(pUVar2 + 3) + 0x58))(pUVar2 + 3);
    iVar1 = *(int *)&pUVar2[0xc].field_0x10;
    pUVar2[0xb].field_0x18 = 0;
    pUVar2[0x12].field_0x20 = 0;
    if (iVar1 == 0) {
      local_res18[0].DebugPtr = UMovieSceneScalingAnchors::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18[0].DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
      }
      local_38._8_8_ = &local_res10;
      local_38._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UMovieSceneDecorationContainerObject::RemoveDecoration'::__l2::<lambda_1>,void,UObject_*>
           ::Call;
      local_res10 = (TObjectPtr<UClass>_u_0)param_1;
      FMovieSceneDecorationContainer::RemoveDecoration
                ((FMovieSceneDecorationContainer *)&param_1->_padding_,
                 (TSubclassOf<UObject> *)&local_res18[0].ObjectPtr,
                 (TFunctionRef<void___cdecl(UObject_*)> *)local_38);
    }
  }
  return;
}

// OnReconstruct @ 1460db300

void __thiscall
UMovieSceneSectionAnchorsDecoration::OnReconstruct
          (UMovieSceneSectionAnchorsDecoration *this,UMovieScene *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FGuid *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  UMovieScene *local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  ForAnyElementType local_28;
  longlong *local_20;
  FString local_18;
  
  local_res18.DebugPtr = UMovieSceneScalingAnchors::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_20 = (longlong *)&local_res10;
  local_28.Data =
       (FScriptContainerElement *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMovieSceneDecorationContainerObject::GetOrCreateDecoration'::__l2::<lambda_1>,void,UObject_*>
       ::Call;
  local_res10 = param_1;
  pUVar4 = FMovieSceneDecorationContainer::GetOrCreateDecoration
                     ((FMovieSceneDecorationContainer *)&param_1->_padding_,
                      (TSubclassOf<UObject> *)&local_res18.ObjectPtr,(UObject *)param_1,
                      (TFunctionRef<void___cdecl(UObject_*)> *)&local_28);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = UMovieSceneScalingAnchors::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) {
      plVar1 = &this[-1]._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) || (plVar1 == (longlong *)0x0)) {
        local_20 = (longlong *)0x0;
        if (plVar1 != (longlong *)0x0) {
          local_20 = &this->_padding_;
        }
      }
      else {
        UE::GC::MarkAsReachable((UObject *)plVar1);
        local_20 = &this->_padding_;
      }
      local_28.Data = (FScriptContainerElement *)plVar1;
      TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TScriptInterface<IMovieSceneScalingDriver>_const_&>
                ((TArray<TScriptInterface<IMovieSceneScalingDriver>,TSizedDefaultAllocator<32>_> *)
                 &pUVar4[0xc].field_0x8,(TScriptInterface<IMovieSceneScalingDriver> *)&local_28);
      (**(code **)(*(longlong *)(pUVar4 + 3) + 0x58))(pUVar4 + 3);
      pUVar4[0xb].field_0x18 = 0;
      pUVar4[0x12].field_0x20 = 0;
      pFVar6 = FGuid::NewGuid((FGuid *)&local_28);
      lVar3 = *(longlong *)&pFVar6->C;
      this->_padding_ = *(longlong *)pFVar6;
      this->_padding_ = lVar3;
      return;
    }
    pFVar7 = GetTypeName<UMovieSceneScalingAnchors>((FString *)&local_28);
    pwVar8 = L"";
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    pFVar7 = GetFullNameForCastLogError<UObject>(&local_18,pUVar4);
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  pFVar7 = GetTypeName<UMovieSceneScalingAnchors>((FString *)&local_28);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// PopulateAnchors @ 1460de0b0

void __thiscall
UMovieSceneSectionAnchorsDecoration::PopulateAnchors
          (UMovieSceneSectionAnchorsDecoration *this,
          TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
          *param_1)

{
  UClass *pUVar1;
  UObject *this_00;
  longlong *plVar2;
  
  pUVar1 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
  this_00 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1]._padding_,pUVar1);
  if (this_00 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
    }
  }
  return;
}

// PopulateInitialAnchors @ 1460df730

void __thiscall
UMovieSceneSectionAnchorsDecoration::PopulateInitialAnchors
          (UMovieSceneSectionAnchorsDecoration *this,
          TMap<FGuid,FMovieSceneScalingAnchor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneScalingAnchor,0>_>
          *param_1)

{
  UClass *pUVar1;
  UObject *this_00;
  longlong *plVar2;
  
  pUVar1 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
  this_00 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)&this[-1]._padding_,pUVar1);
  if (this_00 != (UObject *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieSceneScalingDriver_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    }
  }
  return;
}

// PostEditImport @ 1460e09b0

void __thiscall
UMovieSceneSectionAnchorsDecoration::PostEditImport(UMovieSceneSectionAnchorsDecoration *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->StartAnchor).A = pFVar4->A;
  (this->StartAnchor).B = uVar1;
  (this->StartAnchor).C = uVar2;
  (this->StartAnchor).D = uVar3;
  return;
}

// StaticRegisterNativesUMovieSceneSectionAnchorsDecoration @ 1460fa2d0

void __cdecl
UMovieSceneSectionAnchorsDecoration::StaticRegisterNativesUMovieSceneSectionAnchorsDecoration(void)

{
  return;
}

// _getUObject @ 1461008b0

UObject * __thiscall
UMovieSceneSectionAnchorsDecoration::_getUObject(UMovieSceneSectionAnchorsDecoration *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 1461008bc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneSectionAnchorsDecoration::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneSectionAnchorsDecoration::_getUObject_adjustor_8__
          (UMovieSceneSectionAnchorsDecoration *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneSectionAnchorsDecoration *)&this[-1].StartAnchor.C);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 1461008cc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMovieSceneSectionAnchorsDecoration::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UMovieSceneSectionAnchorsDecoration::_getUObject_adjustor_16__
          (UMovieSceneSectionAnchorsDecoration *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMovieSceneSectionAnchorsDecoration *)&this[-1].StartAnchor);
  return (UObject *)pUVar1;
}

