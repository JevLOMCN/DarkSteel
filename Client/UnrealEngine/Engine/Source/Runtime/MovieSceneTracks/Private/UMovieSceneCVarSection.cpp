// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 12

// StaticClass @ 1467256c0

UClass * __cdecl UMovieSceneCVarSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarSection",
               &Z_Registration_Info_UClass_UMovieSceneCVarSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCVarSection,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneCVarSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarSection.InnerSingleton;
}

// UMovieSceneCVarSection @ 146762000

UMovieSceneCVarSection * __thiscall
UMovieSceneCVarSection::UMovieSceneCVarSection(UMovieSceneCVarSection *this,FVTableHelper *param_1)

{
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ConsoleVariableCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableCollections).ArrayNum = 0;
  (this->ConsoleVariableCollections).ArrayMax = 0;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar = 0;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar.field_0x8 = 0;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar.field_0x20 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x28 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x34 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar.field_0x40 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x48 = 0;
  return this;
}

// UMovieSceneCVarSection @ 146762090

UMovieSceneCVarSection * __thiscall
UMovieSceneCVarSection::UMovieSceneCVarSection
          (UMovieSceneCVarSection *this,FObjectInitializer *param_1)

{
  FMovieSceneBlendTypeField FVar1;
  bool bVar2;
  undefined7 extraout_var;
  uint local_res8;
  uint local_res18;
  TRange<FFrameNumber> local_18;
  
  UMovieSceneSection::UMovieSceneSection((UMovieSceneSection *)this,param_1);
  local_res8 = CONCAT31(local_res8._1_3_,2);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  local_res18 = CONCAT31(local_res18._1_3_,2);
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  (this->ConsoleVariableCollections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConsoleVariableCollections).ArrayNum = 0;
  (this->ConsoleVariableCollections).ArrayMax = 0;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar = 0;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar.field_0x8 = 0;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar.field_0x20 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x28 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x34 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ConsoleVariables).ValuesByCVar.field_0x40 = 0;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x48 = 0;
  local_18.LowerBound.Value.Value = 0;
  local_18.LowerBound._0_4_ = local_res8;
  local_18.UpperBound.Value.Value = 0;
  local_18.UpperBound._0_4_ = local_res18;
  UMovieSceneSection::SetRange((UMovieSceneSection *)this,&local_18);
  *(undefined2 *)&this->_padding_ = 0x201;
  FVar1 = UMovieSceneSection::GetSupportedBlendTypes((UMovieSceneSection *)this);
  bVar2 = FMovieSceneBlendTypeField::Contains
                    ((FMovieSceneBlendTypeField *)CONCAT71(extraout_var,FVar1.BlendTypeField),
                     Absolute);
  if (bVar2) {
    *(undefined2 *)((longlong)&this->_padding_ + 1) = 0x101;
  }
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UMovieSceneCVarSection @ 146769df0

void __thiscall UMovieSceneCVarSection::~UMovieSceneCVarSection(UMovieSceneCVarSection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneSection__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEntityProvider__;
  *(undefined4 *)&(this->ConsoleVariables).ValuesByCVar.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConsoleVariables).ValuesByCVar.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConsoleVariables);
  pFVar2 = (this->ConsoleVariableCollections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneSection::~UMovieSceneSection((UMovieSceneSection *)this);
  return;
}

// GetPrivateStaticClass @ 1467978a0

UClass * __cdecl UMovieSceneCVarSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCVarSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCVarSection",
               &Z_Registration_Info_UClass_UMovieSceneCVarSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneCVarSection,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneCVarSection>,
               InternalVTableHelperCtorCaller<UMovieSceneCVarSection>,local_res8,
               UMovieSceneSection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCVarSection.InnerSingleton;
}

// GetString @ 14679b890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UMovieSceneCVarSection::GetString(UMovieSceneCVarSection *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [8];
  FString local_290;
  FName local_280;
  FString *local_278;
  TStringBuilderWithBuffer<wchar_t,256> local_268;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_268._padding_ = (longlong)local_268.StringBuffer;
  local_268._padding_ = (longlong)local_48;
  pwVar6 = local_268.StringBuffer;
  iVar2 = (this->ConsoleVariableCollections).ArrayNum;
  pFVar8 = (this->ConsoleVariableCollections).AllocatorInstance.Data;
  local_268._padding_._0_2_ = 0;
  pFVar1 = pFVar8 + (longlong)iVar2 * 0x18;
  local_278 = __return_storage_ptr__;
  local_268._padding_ = (longlong)pwVar6;
  while( true ) {
    if ((this->ConsoleVariableCollections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneConsoleVariableCollection_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_298);
      pwVar6 = (wchar_t *)local_268._padding_;
    }
    if (pFVar8 == pFVar1) break;
    lVar3 = *(longlong *)pFVar8;
    if (lVar3 != 0) {
      if ((int)((longlong)pwVar6 - local_268._padding_ >> 1) != 0) {
        if ((ulonglong)local_268._padding_ < pwVar6 + 2) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_268,2);
          pwVar6 = (wchar_t *)local_268._padding_;
        }
        pvVar5 = FGenericPlatformString::Memcpy(pwVar6,L", ",4);
        local_268._padding_ = (longlong)pvVar5 + 4;
      }
      local_280 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_280,&local_290);
      FVar4.Data = local_290.Data.AllocatorInstance.Data;
      iVar9 = local_290.Data.ArrayNum + -1;
      if (local_290.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      uVar7 = (ulong64)iVar9;
      if ((ulonglong)local_268._padding_ < (wchar_t *)(local_268._padding_ + uVar7 * 2)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_268,uVar7);
      }
      if (iVar9 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy((void *)local_268._padding_,FVar4.Data,uVar7 * 2);
        local_268._padding_ = (longlong)pvVar5 + uVar7 * 2;
      }
      pwVar6 = (wchar_t *)local_268._padding_;
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
        pwVar6 = (wchar_t *)local_268._padding_;
      }
    }
    pFVar8 = pFVar8 + 0x18;
  }
  FMovieSceneCVarOverrides::GetString(&this->ConsoleVariables,&local_268);
  if ((ulonglong)local_268._padding_ < (wchar_t *)(local_268._padding_ + 2)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_268,1);
  }
  *(wchar_t *)local_268._padding_ = L'\0';
  ::FString::FString(local_278,(wchar_t *)local_268._padding_);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_268);
  return local_278;
}

// ImportEntityImpl @ 14679d070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCVarSection::ImportEntityImpl
          (UMovieSceneCVarSection *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  FBuiltInComponentTypes *pFVar4;
  TComponentTypeID<FMovieSceneTrackInstanceComponent> local_68;
  TObjectPtr<UMovieSceneSection>_u_0 local_60;
  TObjectPtr<UClass>_u_0 local_58;
  bool local_50;
  undefined **local_48;
  ushort local_40;
  TAdd<FMovieSceneTrackInstanceComponent> local_38;
  undefined1 local_18;
  
  plVar1 = &this[-1]._padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  TVar3.DebugPtr = Z_Construct_UClass_UMovieSceneCVarTrackInstance_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  uVar2 = (pFVar4->Tags).Root.Value;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_68 = pFVar4->TrackInstance;
  local_60 = (TObjectPtr<UMovieSceneSection>_u_0)plVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)plVar1);
  }
  local_58.DebugPtr = TVar3.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
  }
  local_50 = true;
  local_48 = &
             ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__UFAdd_MovieScene_UE__U__TAdd_UFMovieSceneTrackInstanceComponent___34__MovieScene_UE__6B_
  ;
  local_40 = uVar2;
  UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>::TAdd<FMovieSceneTrackInstanceComponent>
            (&local_38,(TAdd<FMovieSceneTrackInstanceComponent> *)&local_68);
  local_18 = 0;
  local_48 = &
             ___7__TEntityBuilder_UFAdd_MovieScene_UE__U__TAdd_UFMovieSceneTrackInstanceComponent___23__MovieScene_UE__6B_
  ;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::FAdd,UE::MovieScene::TAdd<FMovieSceneTrackInstanceComponent>_>
                      *)&local_48);
  return;
}

// SetFromString @ 1467c1e60

void __thiscall UMovieSceneCVarSection::SetFromString(UMovieSceneCVarSection *this,FString *param_1)

{
  FMovieSceneCVarOverrides::SetFromString(&this->ConsoleVariables,param_1);
  return;
}

// StaticRegisterNativesUMovieSceneCVarSection @ 1467c2690

void __cdecl UMovieSceneCVarSection::StaticRegisterNativesUMovieSceneCVarSection(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCVarSection_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 1467ca6c0

UObject * __thiscall UMovieSceneCVarSection::_getUObject(UMovieSceneCVarSection *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execGetString @ 1467cbc60

void __cdecl UMovieSceneCVarSection::execGetString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetString((UMovieSceneCVarSection *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetFromString @ 1467cca10

void __cdecl
UMovieSceneCVarSection::execSetFromString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMovieSceneCVarOverrides::SetFromString
            ((FMovieSceneCVarOverrides *)&param_1[7].field_0x10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

