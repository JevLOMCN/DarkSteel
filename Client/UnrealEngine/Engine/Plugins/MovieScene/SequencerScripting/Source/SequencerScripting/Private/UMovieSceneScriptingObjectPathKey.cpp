// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 12

// StaticClass @ 14c6824d0

UClass * __cdecl UMovieSceneScriptingObjectPathKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingObjectPathKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingObjectPathKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingObjectPathKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton;
}

// UMovieSceneScriptingObjectPathKey @ 14c684540

UMovieSceneScriptingObjectPathKey * __thiscall
UMovieSceneScriptingObjectPathKey::UMovieSceneScriptingObjectPathKey
          (UMovieSceneScriptingObjectPathKey *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingObjectPathKey__6B_;
  return this;
}

// UMovieSceneScriptingObjectPathKey @ 14c684570

UMovieSceneScriptingObjectPathKey * __thiscall
UMovieSceneScriptingObjectPathKey::UMovieSceneScriptingObjectPathKey
          (UMovieSceneScriptingObjectPathKey *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingObjectPathKey__6B_;
  return this;
}

// ~UMovieSceneScriptingObjectPathKey @ 14c684880

void __thiscall
UMovieSceneScriptingObjectPathKey::~UMovieSceneScriptingObjectPathKey
          (UMovieSceneScriptingObjectPathKey *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingObjectPathKey__6B_;
  plVar3 = *(longlong **)&this->field_0x48;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  return;
}

// GetPrivateStaticClass @ 14c6897c0

UClass * __cdecl UMovieSceneScriptingObjectPathKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingObjectPathKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingObjectPathKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingObjectPathKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingObjectPathKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingObjectPathKey.InnerSingleton;
}

// GetTime @ 14c689f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameTime __thiscall
UMovieSceneScriptingObjectPathKey::GetTime
          (UMovieSceneScriptingObjectPathKey *this,EMovieSceneTimeUnit param_1)

{
  FKeyHandle FVar1;
  bool bVar2;
  FMovieSceneChannel *this_00;
  FFrameRate FVar3;
  wchar_t *pwVar4;
  undefined7 in_register_00000011;
  FFrameTime FVar5;
  char in_R8B;
  undefined8 local_res8;
  FWeakObjectPtr local_res10;
  int local_res20;
  undefined4 uStackX_24;
  undefined1 local_28 [16];
  
  FVar5._1_7_ = in_register_00000011;
  FVar5.FrameNumber.Value._0_1_ = param_1;
  local_res10.ObjectIndex = *(int *)&this->field_0x2c;
  local_res10.ObjectSerialNumber = *(int *)&this->field_0x30;
  FVar1.Index = *(uint *)&this->field_0x28;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    this_00 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->field_0x40);
    if (this_00 != (FMovieSceneChannel *)0x0) {
      local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
      FMovieSceneChannel::GetKeyTime(this_00,FVar1,(FFrameNumber *)&local_res8);
      if (in_R8B == '\0') {
        FWeakObjectPtr::Get(&local_res10);
        UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)local_28);
        FWeakObjectPtr::Get(&local_res10);
        FVar3 = UMovieSceneSequenceExtensions::GetTickResolution
                          ((UMovieSceneSequence *)(local_28 + 8));
        local_res20 = local_res8._0_4_;
        uStackX_24 = 0;
        ConvertFrameTime((FFrameTime)&local_res20,(FFrameRate)(local_res8 & 0xffffffff),
                         *(FFrameRate *)FVar3);
        *(ulonglong *)FVar5 = CONCAT44(uStackX_24,local_res20);
        return FVar5;
      }
      *(int *)FVar5 = local_res8._0_4_;
      *(undefined4 *)((longlong)FVar5 + 4) = 0;
      return FVar5;
    }
    pwVar4 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  else {
    pwVar4 = L"GetTime called with an invalid owning sequence.";
  }
  local_res8 = 0;
  FFrame::KismetExecutionMessage(pwVar4,Error,(FName)0x0);
  *(undefined8 *)FVar5 = 0;
  return FVar5;
}

// GetValue @ 14c68a2c0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UMovieSceneScriptingObjectPathKey::GetValue(UMovieSceneScriptingObjectPathKey *this)

{
  FKeyHandle FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneChannel *pFVar6;
  UObject *pUVar7;
  FMovieSceneObjectPathChannelKeyValue *pFVar8;
  wchar_t *pwVar9;
  TArrayView<FMovieSceneObjectPathChannelKeyValue,int> local_68;
  FMovieSceneChannelData local_58;
  undefined8 *local_40;
  undefined1 local_38 [16];
  FName local_28;
  FUtf8String local_20;
  TObjectPtr<UObject>_u_0 local_10;
  
  FVar1.Index = *(uint *)&this->field_0x28;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_38._8_4_ = 0;
  local_38._12_4_ = 0;
  FUtf8String::Reset(&local_20,0);
  local_10.DebugPtr = (UObject *)0x0;
  pFVar6 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&this->field_0x40);
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    pwVar9 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_58,pFVar6,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar6[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar6[1].KeyMovedEvent.field_0x10);
    local_40 = (undefined8 *)&pFVar6[1].KeyAddedEvent.field_0x10;
    if ((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (local_40 == (undefined8 *)0x0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UObject *)(*pcVar3)();
        return pUVar7;
      }
    }
    iVar5 = FMovieSceneChannelData::GetIndex(&local_58,FVar1);
    if (iVar5 != -1) {
      local_68.DataPtr = (FMovieSceneObjectPathChannelKeyValue *)*local_40;
      iVar2 = *(int *)(local_40 + 1);
      if (iVar2 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UObject *)(*pcVar3)();
          return pUVar7;
        }
      }
      local_68.ArrayNum = iVar2;
      pFVar8 = TArrayView<FMovieSceneObjectPathChannelKeyValue,int>::operator[](&local_68,iVar5);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)local_38,
                 (TPersistentObjectPtr<FSoftObjectPath> *)pFVar8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 = (pFVar8->HardPtr).field0_0x0.DebugPtr, pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_10 = (pFVar8->HardPtr).field0_0x0;
      goto LAB_14c68a423;
    }
    pwVar9 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar9,Error,(FName)0x0);
LAB_14c68a423:
  pUVar7 = FMovieSceneObjectPathChannelKeyValue::Get
                     ((FMovieSceneObjectPathChannelKeyValue *)local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return pUVar7;
}

// StaticRegisterNativesUMovieSceneScriptingObjectPathKey @ 14c68c660

void __cdecl
UMovieSceneScriptingObjectPathKey::StaticRegisterNativesUMovieSceneScriptingObjectPathKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTime @ 14c68f0d0

void __cdecl
UMovieSceneScriptingObjectPathKey::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res10,local_res8[0]);
  *(undefined8 *)param_3 = *puVar2;
  return;
}

// execGetValue @ 14c68f390

void __cdecl
UMovieSceneScriptingObjectPathKey::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetValue((UMovieSceneScriptingObjectPathKey *)param_1);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execSetTime @ 14c690760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingObjectPathKey::execSetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FKeyHandle FVar2;
  FProperty *pFVar3;
  char cVar4;
  float fVar5;
  bool bVar6;
  FFrameRate FVar7;
  FMovieSceneChannel *this;
  wchar_t *pwVar8;
  FFrameNumber FVar9;
  int *piVar10;
  float fVar11;
  char local_res8 [8];
  int local_res10 [4];
  float local_res20 [2];
  FWeakObjectPtr local_98;
  FFrameRate local_90;
  FWeakObjectPtr local_88 [10];
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  piVar10 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar10 = (int *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  fVar5 = local_res20[0];
  cVar4 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88[0].ObjectIndex = *(int *)&param_1[1].field_0xc;
  local_88[0].ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  FVar9.Value = *piVar10;
  FVar2.Index = *(uint *)(param_1 + 1);
  local_98.ObjectIndex = *(int *)&param_1[1].field_0x4;
  local_98.ObjectSerialNumber = *(int *)&param_1[1].field_0x8;
  bVar6 = FWeakObjectPtr::IsValid(&local_98);
  if (bVar6) {
    fVar11 = ::FFrameTime::MaxSubframe;
    if (fVar5 <= ::FFrameTime::MaxSubframe) {
      fVar11 = fVar5;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if ((cVar4 != '\x01') || (fVar11 <= 0.0)) {
      if (cVar4 == '\0') {
        FWeakObjectPtr::Get(&local_98);
        UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)(local_88 + 1));
        FWeakObjectPtr::Get(&local_98);
        FVar7 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_88 + 2))
        ;
        local_90.Denominator = (int)::FFrameTime::MaxSubframe;
        if (fVar11 <= ::FFrameTime::MaxSubframe) {
          local_90.Denominator = (int)fVar11;
        }
        if ((float)local_90.Denominator <= 0.0) {
          local_90.Denominator = 0;
        }
        local_90.Numerator = FVar9.Value;
        ConvertFrameTime((FFrameTime)&local_90,local_90,*(FFrameRate *)FVar7);
        FVar9.Value = local_90.Numerator;
        if (__real_3f000000 <= (float)local_90.Denominator) {
          FVar9.Value = local_90.Numerator + 1;
        }
      }
    }
    else {
      local_90.Numerator = 0;
      local_90.Denominator = 0;
      FFrame::KismetExecutionMessage
                (L"SetTime called with a SubFrame specified for a Tick Resolution type time! SubFrames are only allowed for Display Rate types, ignoring..."
                 ,Error,(FName)0x0);
    }
    this = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
    if (this != (FMovieSceneChannel *)0x0) {
      bVar6 = FWeakObjectPtr::IsValid(local_88);
      if (bVar6) {
        FWeakObjectPtr::Get(local_88);
      }
      FMovieSceneChannel::SetKeyTime(this,FVar2,FVar9);
      return;
    }
    pwVar8 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set Time.";
  }
  else {
    pwVar8 = L"SetTime called with an invalid owning sequence.";
  }
  local_90.Numerator = 0;
  local_90.Denominator = 0;
  FFrame::KismetExecutionMessage(pwVar8,Error,(FName)0x0);
  return;
}

// execSetValue @ 14c690c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingObjectPathKey::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  FProperty *pFVar2;
  bool bVar3;
  FMovieSceneObjectPathChannel *pFVar4;
  wchar_t *pwVar5;
  UObject *local_res8;
  FWeakObjectPtr local_res10 [2];
  undefined8 local_res20;
  undefined1 local_78 [40];
  TObjectPtr<UObject>_u_0 local_50;
  undefined1 local_48 [40];
  TObjectPtr<UObject>_u_0 local_20;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMovieSceneObjectPathChannelKeyValue::FMovieSceneObjectPathChannelKeyValue
            ((FMovieSceneObjectPathChannelKeyValue *)local_48,local_res8);
  TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
            ((TPersistentObjectPtr<FSoftObjectPath> *)local_78,
             (TPersistentObjectPtr<FSoftObjectPath> *)local_48);
  local_50.DebugPtr = local_20.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20.DebugPtr != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_20.DebugPtr);
  }
  local_res10[0].ObjectIndex = *(int *)&param_1[1].field_0xc;
  local_res10[0].ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  FVar1.Index = *(uint *)(param_1 + 1);
  pFVar4 = (FMovieSceneObjectPathChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar4 == (FMovieSceneObjectPathChannel *)0x0) {
    pwVar5 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(local_res10);
    if (bVar3) {
      FWeakObjectPtr::Get(local_res10);
    }
    bVar3 = UE::MovieScene::
            AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&>
                      (pFVar4,FVar1,(FMovieSceneObjectPathChannelKeyValue *)local_78);
    if (bVar3) goto LAB_14c690da0;
    pwVar5 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  local_res20 = 0;
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
LAB_14c690da0:
  if ((FScriptContainerElement *)local_78._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._24_8_);
  }
  if ((FScriptContainerElement *)local_48._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._24_8_);
  }
  return;
}

