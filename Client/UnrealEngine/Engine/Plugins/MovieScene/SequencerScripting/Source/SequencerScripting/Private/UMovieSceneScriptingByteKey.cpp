// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 11

// StaticClass @ 14c6733e0

UClass * __cdecl UMovieSceneScriptingByteKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingByteKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingByteKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingByteKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingByteKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.InnerSingleton;
}

// UMovieSceneScriptingByteKey @ 14c675980

UMovieSceneScriptingByteKey * __thiscall
UMovieSceneScriptingByteKey::UMovieSceneScriptingByteKey
          (UMovieSceneScriptingByteKey *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingKey__6B_;
  FKeyHandle::FKeyHandle((FKeyHandle *)&this->field_0x28);
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x34 = 0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingByteKey__6B_;
  return this;
}

// UMovieSceneScriptingByteKey @ 14c6759d0

UMovieSceneScriptingByteKey * __thiscall
UMovieSceneScriptingByteKey::UMovieSceneScriptingByteKey
          (UMovieSceneScriptingByteKey *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingKey__6B_;
  FKeyHandle::FKeyHandle((FKeyHandle *)&this->field_0x28);
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x34 = 0;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingByteKey__6B_;
  return this;
}

// ~UMovieSceneScriptingByteKey @ 14c675e20

void __thiscall
UMovieSceneScriptingByteKey::~UMovieSceneScriptingByteKey(UMovieSceneScriptingByteKey *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingByteKey__6B_;
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
  *(undefined ***)this = &___7UMovieSceneScriptingKey__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14c679440

UClass * __cdecl UMovieSceneScriptingByteKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingByteKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingByteKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingByteKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingByteKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingByteKey.InnerSingleton;
}

// GetTime @ 14c679a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameTime __thiscall
UMovieSceneScriptingByteKey::GetTime(UMovieSceneScriptingByteKey *this,EMovieSceneTimeUnit param_1)

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

// StaticRegisterNativesUMovieSceneScriptingByteKey @ 14c67aa20

void __cdecl UMovieSceneScriptingByteKey::StaticRegisterNativesUMovieSceneScriptingByteKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTime @ 14c67d540

void __cdecl
UMovieSceneScriptingByteKey::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetValue @ 14c67d910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteKey::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneChannel *pFVar6;
  uchar *puVar7;
  wchar_t *pwVar8;
  TArrayView<unsigned_char,int> local_48;
  FMovieSceneChannelData local_38;
  undefined8 *local_20;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.Index = *(uint *)(param_1 + 1);
  pFVar6 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar6 == (FMovieSceneChannel *)0x0) {
    pwVar8 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,pFVar6,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar6[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar6[1].KeyDeletedEvent.field_0x10);
    local_20 = (undefined8 *)&pFVar6[1].KeyAddedEvent.field_0x18;
    if ((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (local_20 == (undefined8 *)0x0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = FMovieSceneChannelData::GetIndex(&local_38,FVar1);
    if (iVar5 != -1) {
      local_48.DataPtr = (uchar *)*local_20;
      iVar2 = *(int *)(local_20 + 1);
      if (iVar2 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_48.ArrayNum = iVar2;
      puVar7 = TArrayView<unsigned_char,int>::operator[](&local_48,iVar5);
      *(uchar *)param_3 = *puVar7;
      return;
    }
    pwVar8 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar8,Error,(FName)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetTime @ 14c67f530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteKey::execSetTime(UObject *param_1,FFrame *param_2,void *param_3)

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

// execSetValue @ 14c67fc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingByteKey::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  FProperty *pFVar2;
  bool bVar3;
  FMovieSceneByteChannel *pFVar4;
  wchar_t *pwVar5;
  undefined1 local_res8 [8];
  uchar local_res10 [16];
  FWeakObjectPtr local_res20;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.Index = *(uint *)(param_1 + 1);
  local_res10[0] = local_res8[0];
  local_res20.ObjectIndex = *(int *)&param_1[1].field_0xc;
  local_res20.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  pFVar4 = (FMovieSceneByteChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar4 == (FMovieSceneByteChannel *)0x0) {
    pwVar5 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar3) {
      FWeakObjectPtr::Get(&local_res20);
    }
    bVar3 = UE::MovieScene::AssignValue<FMovieSceneByteChannel,unsigned_char_&>
                      (pFVar4,FVar1,local_res10);
    if (bVar3) {
      return;
    }
    pwVar5 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
  return;
}

