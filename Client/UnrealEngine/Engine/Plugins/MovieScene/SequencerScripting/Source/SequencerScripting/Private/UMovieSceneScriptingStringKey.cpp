// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 11

// StaticClass @ 14c693e60

UClass * __cdecl UMovieSceneScriptingStringKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingStringKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingStringKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingStringKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingStringKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton;
}

// UMovieSceneScriptingStringKey @ 14c698a00

UMovieSceneScriptingStringKey * __thiscall
UMovieSceneScriptingStringKey::UMovieSceneScriptingStringKey
          (UMovieSceneScriptingStringKey *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingStringKey__6B_;
  return this;
}

// UMovieSceneScriptingStringKey @ 14c698a30

UMovieSceneScriptingStringKey * __thiscall
UMovieSceneScriptingStringKey::UMovieSceneScriptingStringKey
          (UMovieSceneScriptingStringKey *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingStringKey__6B_;
  return this;
}

// ~UMovieSceneScriptingStringKey @ 14c698e90

void __thiscall
UMovieSceneScriptingStringKey::~UMovieSceneScriptingStringKey(UMovieSceneScriptingStringKey *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingStringKey__6B_;
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

// GetPrivateStaticClass @ 14c6a2050

UClass * __cdecl UMovieSceneScriptingStringKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingStringKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingStringKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingStringKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingStringKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingStringKey.InnerSingleton;
}

// GetTime @ 14c6a3290

/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
UMovieSceneScriptingStringKey::GetTime
          (UMovieSceneScriptingStringKey *this,EMovieSceneTimeUnit param_1)

{
  FKeyHandle FVar1;
  bool bVar2;
  FMovieSceneChannel *this_00;
  UObject *pUVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined7 in_register_00000011;
  FFrameTime FVar6;
  FFrameRate FVar7;
  char in_R8B;
  undefined8 local_res8;
  FWeakObjectPtr local_res10;
  FFrameRate local_res20;
  
  FVar6._1_7_ = in_register_00000011;
  FVar6.FrameNumber.Value._0_1_ = param_1;
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
        pUVar3 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar3 == (UObject *)0x0) {
          local_res20.Numerator = 0;
          local_res20.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
        }
        else {
          (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3);
        }
        FVar7.Numerator = 60000;
        FVar7.Denominator = 1;
        pUVar3 = FWeakObjectPtr::Get(&local_res10);
        if (pUVar3 == (UObject *)0x0) {
          local_res20.Numerator = 0;
          local_res20.Denominator = 0;
          FFrame::KismetExecutionMessage
                    (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
        }
        else {
          lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3);
          if (lVar4 != 0) {
            FVar7 = *(FFrameRate *)(lVar4 + 0x138);
          }
        }
        local_res20 = (FFrameRate)(local_res8 & 0xffffffff);
        ConvertFrameTime((FFrameTime)&local_res20,local_res20,FVar7);
        *(FFrameRate *)FVar6 = local_res20;
        return FVar6;
      }
      *(int *)FVar6 = local_res8._0_4_;
      *(undefined4 *)((longlong)FVar6 + 4) = 0;
      return FVar6;
    }
    pwVar5 = L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to retrieve Time.";
  }
  else {
    pwVar5 = L"GetTime called with an invalid owning sequence.";
  }
  local_res8 = 0;
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
  *(undefined8 *)FVar6 = 0;
  return FVar6;
}

// StaticRegisterNativesUMovieSceneScriptingStringKey @ 14c6a72a0

void __cdecl UMovieSceneScriptingStringKey::StaticRegisterNativesUMovieSceneScriptingStringKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTime @ 14c6b24d0

void __cdecl
UMovieSceneScriptingStringKey::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetValue @ 14c6b2d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingStringKey::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneChannel *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_58;
  TArrayView<FString,int> local_48;
  FMovieSceneChannelData local_38;
  undefined8 *local_20;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
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
              (&local_38,pFVar6,(TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar6 + 1),
               (FKeyHandleLookupTable *)&pFVar6[1].KeyDeletedEvent.field_0x10);
    local_20 = (undefined8 *)&pFVar6[1].KeyAddedEvent.field_0x8;
    if (((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
        (local_20 == (undefined8 *)0x0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Times && Values",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                           ,0x122,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = FMovieSceneChannelData::GetIndex(&local_38,FVar1);
    if (iVar5 != -1) {
      local_48.DataPtr = (FString *)*local_20;
      iVar2 = *(int *)(local_20 + 1);
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_48.ArrayNum = iVar2;
      pFVar7 = TArrayView<FString,int>::operator[](&local_48,iVar5);
      iVar2 = (pFVar7->Data).ArrayNum;
      iVar5 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_58,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar5);
      goto LAB_14c6b2e51;
    }
    pwVar8 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar8,Error,(FName)0x0);
LAB_14c6b2e51:
  if (param_3 != &local_58) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_58.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_58.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTime @ 14c6b92f0

void __cdecl
UMovieSceneScriptingStringKey::execSetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> TVar2;
  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> TVar3;
  int *piVar4;
  EMovieSceneTimeUnit local_res8 [8];
  int local_res10 [2];
  float local_res20 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0.0;
  piVar4 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar4 = (int *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = DisplayRate;
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
  TVar2.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0xc;
  TVar2.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  TVar3.WeakPtr.ObjectIndex = *(int *)&param_1[1].field_0x4;
  TVar3.WeakPtr.ObjectSerialNumber = *(int *)&param_1[1].field_0x8;
  TMovieSceneScriptingKey<FMovieSceneStringChannel,FString>::SetTimeInChannel
            ((TMovieSceneScriptingKey<FMovieSceneStringChannel,FString> *)&param_1[1].field_0x18,
             (FKeyHandle)*(uint *)(param_1 + 1),TVar3,TVar2,(FFrameNumber)*piVar4,local_res8[0],
             local_res20[0]);
  return;
}

// execSetValue @ 14c6b9790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingStringKey::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  FProperty *pFVar2;
  void *_Src;
  bool bVar3;
  FMovieSceneStringChannel *pFVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar6 = (longlong)(int)local_20;
  local_38.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_38,(int)local_20,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  local_res8.ObjectIndex = *(int *)&param_1[1].field_0xc;
  local_res8.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  FVar1.Index = *(uint *)(param_1 + 1);
  pFVar4 = (FMovieSceneStringChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar4 == (FMovieSceneStringChannel *)0x0) {
    pwVar5 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      FWeakObjectPtr::Get(&local_res8);
    }
    bVar3 = UE::MovieScene::AssignValue<FMovieSceneStringChannel,FString_&>(pFVar4,FVar1,&local_38);
    if (bVar3) goto LAB_14c6b98c9;
    pwVar5 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage(pwVar5,Error,(FName)0x0);
LAB_14c6b98c9:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

