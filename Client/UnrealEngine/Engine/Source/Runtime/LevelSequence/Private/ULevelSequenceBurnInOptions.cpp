// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 9

// StaticClass @ 146c45140

UClass * __cdecl ULevelSequenceBurnInOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnInOptions",
               &Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton,
               StaticRegisterNativesULevelSequenceBurnInOptions,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULevelSequenceBurnInOptions>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnInOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton;
}

// ULevelSequenceBurnInOptions @ 146c4e8c0

ULevelSequenceBurnInOptions * __thiscall
ULevelSequenceBurnInOptions::ULevelSequenceBurnInOptions
          (ULevelSequenceBurnInOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULevelSequenceBurnInOptions__6B_;
  *(undefined8 *)&this->BurnInClass = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  (this->Settings).field0_0x0.DebugPtr = (ULevelSequenceBurnInInitSettings *)0x0;
  return this;
}

// ULevelSequenceBurnInOptions @ 146c4e900

ULevelSequenceBurnInOptions * __thiscall
ULevelSequenceBurnInOptions::ULevelSequenceBurnInOptions
          (ULevelSequenceBurnInOptions *this,FObjectInitializer *param_1)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->bUseBurnIn = false;
  this->_padding_ = (longlong)&___7ULevelSequenceBurnInOptions__6B_;
  ::FString::FString(&local_28,L"/Engine/Sequencer/DefaultBurnIn.DefaultBurnIn_C");
  *(undefined8 *)&this->BurnInClass = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x8 = 0;
  *(undefined8 *)&(this->BurnInClass).field_0x10 = 0;
  local_18.Size = local_28.Data.ArrayNum + -1;
  *(undefined8 *)&(this->BurnInClass).field_0x18 = 0;
  if (local_28.Data.ArrayNum == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&this->BurnInClass,&local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->Settings).field0_0x0.DebugPtr = (ULevelSequenceBurnInInitSettings *)0x0;
  return this;
}

// ~ULevelSequenceBurnInOptions @ 146c4f210

void __thiscall
ULevelSequenceBurnInOptions::~ULevelSequenceBurnInOptions(ULevelSequenceBurnInOptions *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULevelSequenceBurnInOptions__6B_;
  pvVar1 = *(void **)&(this->BurnInClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146c55a50

UClass * __cdecl ULevelSequenceBurnInOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnInOptions",
               &Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton,
               StaticRegisterNativesULevelSequenceBurnInOptions,0x58,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<ULevelSequenceBurnInOptions>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnInOptions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnInOptions.InnerSingleton;
}

// ResetSettings @ 146c59190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ULevelSequenceBurnInOptions::ResetSettings(ULevelSequenceBurnInOptions *this)

{
  int iVar1;
  ULevelSequenceBurnInInitSettings *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UFunction *this_00;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  FString *pFVar10;
  UObjectBase *this_01;
  longlong *plVar11;
  wchar_t *pwVar12;
  TObjectPtr<UObject>_u_0 TVar13;
  TObjectPtr<UObject>_u_0 TVar14;
  TObjectPtr<UObject>_u_0 TVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  TObjectPtr<UObject>_u_0 local_d8;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar6 = FSoftClassPath::TryLoadClass<ULevelSequenceBurnIn>(&this->BurnInClass);
  if (pUVar6 == (UClass *)0x0) {
    (this->Settings).field0_0x0.DebugPtr = (ULevelSequenceBurnInInitSettings *)0x0;
    return;
  }
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  TVar13 = (TObjectPtr<UObject>_u_0)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  TVar15.DebugPtr = (UObject *)0x0;
  if ((FName)TVar13.DebugPtr == (FName)0x0) {
LAB_146c59215:
    TVar13.DebugPtr = TVar15.DebugPtr;
  }
  else {
    pUVar6 = ULevelSequenceBurnIn::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&(TVar13.DebugPtr)->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar13.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_146c59215;
  }
  this_00 = UObject::FindFunctionChecked(TVar13.DebugPtr,NAME_ULevelSequenceBurnIn_GetSettingsClass)
  ;
  pUVar6 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar6->ClassFlags >> 7 & 1) == 0) {
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    (**(code **)(*(longlong *)TVar13.DebugPtr + 0x260))(TVar13.DebugPtr,this_00,&local_d0);
    local_d8.DebugPtr = (UObject *)local_d0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_d0 == (FName)0x0) goto LAB_146c594e5;
      UE::GC::MarkAsReachable((UObject *)local_d0);
    }
  }
  else {
    (**(code **)(*(longlong *)TVar13.DebugPtr + 0x4e0))(TVar13.DebugPtr,&local_d8);
  }
  TVar13 = local_d8;
  if (((FName)local_d8.DebugPtr == (FName)0x0) ||
     (pUVar6 = ULevelSequenceBurnInInitSettings::StaticClass(), TVar14 = local_d8,
     pUVar6 == (UClass *)0x0)) {
LAB_146c594e5:
    (this->Settings).field0_0x0.DebugPtr = (ULevelSequenceBurnInInitSettings *)0x0;
    return;
  }
  iVar1 = (int)pUVar6->_padding_;
  if (((int)*(longlong *)&TVar13.DebugPtr[1].field_0x10 < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&TVar13.DebugPtr[1].field_0x8 + (longlong)iVar1 * 8)
      != &pUVar6->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) || ((FName)local_d8.DebugPtr == (FName)0x0)) goto LAB_146c594e5;
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar2 != (ULevelSequenceBurnInInitSettings *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_d8.DebugPtr);
    }
    if (((FName)TVar14.DebugPtr == (FName)0x0) ||
       (pUVar6 = ULevelSequenceBurnInInitSettings::StaticClass(), pUVar6 == (UClass *)0x0)) {
LAB_146c59324:
      TVar14.DebugPtr = TVar15.DebugPtr;
    }
    else {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)*(longlong *)&TVar14.DebugPtr[1].field_0x10 < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)&TVar14.DebugPtr[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_146c59324;
    }
    lVar3 = *(longlong *)&pUVar2->field_0x10;
    if ((*(int *)&TVar14.DebugPtr[1].field_0x10 <= *(int *)(lVar3 + 0x38)) &&
       (*(undefined1 **)
         (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)&TVar14.DebugPtr[1].field_0x10 * 8) ==
        &TVar14.DebugPtr[1].field_0x8)) {
      return;
    }
  }
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar2 != (ULevelSequenceBurnInInitSettings *)0x0) {
    pcVar4 = *(code **)(*(longlong *)pUVar2 + 0x170);
    pFVar7 = ::FName::FName(&local_d0,"Settings_EXPIRED");
    FVar9 = *pFVar7;
    FVar8 = (FName)ULevelSequenceBurnInInitSettings::StaticClass();
    local_e8 = 0;
    FVar9 = MakeUniqueObjectName
                      ((UObject *)local_c8,(UClass *)this,FVar8,FVar9.ComparisonIndex.Value.Value);
    pFVar10 = ::FName::ToString((FName *)FVar9,&local_c0);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    (*pcVar4)(pUVar2,pwVar12,0,0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = ::FName::FName((FName *)local_c8,"Settings");
  TVar13 = local_d8;
  FVar9 = *pFVar7;
  if (((FName)local_d8.DebugPtr != (FName)0x0) &&
     (pUVar6 = ULevelSequenceBurnInInitSettings::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)*(longlong *)&TVar13.DebugPtr[1].field_0x10 < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)&TVar13.DebugPtr[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    TVar13 = local_d8;
    if (bVar5) goto LAB_146c59420;
  }
  TVar13.DebugPtr = TVar15.DebugPtr;
LAB_146c59420:
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = ULevelSequenceBurnInInitSettings::StaticClass();
  CheckIsClassChildOf_Internal(pUVar6,(UClass *)TVar13.DebugPtr);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,(UClass *)TVar13.DebugPtr);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = this;
  local_a8._16_8_ = FVar9;
  this_01 = (UObjectBase *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UObjectBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->Settings).field0_0x0.DebugPtr = (ULevelSequenceBurnInInitSettings *)this_01;
  UObjectBase::AtomicallySetFlags
            (this_01,(EObjectFlags)this->_padding_ &
                     (RF_Transient|RF_ArchetypeObject|RF_Transactional|RF_Public));
  return;
}

// SetBurnIn @ 146c5b480

void __thiscall
ULevelSequenceBurnInOptions::SetBurnIn(ULevelSequenceBurnInOptions *this,FSoftClassPath *param_1)

{
  FSoftObjectPath::operator=((FSoftObjectPath *)&this->BurnInClass,(FSoftObjectPath *)param_1);
  ResetSettings(this);
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return;
}

// StaticRegisterNativesULevelSequenceBurnInOptions @ 146c5c600

void __cdecl ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetBurnIn @ 146c61810

void __cdecl
ULevelSequenceBurnInOptions::execSetBurnIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  size_t _Size;
  FName local_48;
  FName FStack_40;
  void *local_38;
  undefined8 local_30;
  FSoftObjectPath local_28;
  
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_38;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_30;
  local_28.SubPathString.Data.ArrayNum = (int)local_30;
  local_28.AssetPath.PackageName = local_48;
  local_28.AssetPath.AssetName = FStack_40;
  if ((int)local_30 == 0) {
    local_28.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_30,0,(ForAnyElementType *)&local_28.SubPathString,(int)local_30,
               &local_28.SubPathString.Data.ArrayMax);
    memcpy(local_28.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  FSoftObjectPath::operator=((FSoftObjectPath *)&param_1[1].field_0x8,&local_28);
  ResetSettings((ULevelSequenceBurnInOptions *)param_1);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

