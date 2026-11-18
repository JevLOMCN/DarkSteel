// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 11

// StaticClass @ 14c695540

UClass * __cdecl UMovieSceneScriptingTextKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingTextKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingTextKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingTextKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingTextKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton;
}

// UMovieSceneScriptingTextKey @ 14c698b00

UMovieSceneScriptingTextKey * __thiscall
UMovieSceneScriptingTextKey::UMovieSceneScriptingTextKey
          (UMovieSceneScriptingTextKey *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingTextKey__6B_;
  return this;
}

// UMovieSceneScriptingTextKey @ 14c698b30

UMovieSceneScriptingTextKey * __thiscall
UMovieSceneScriptingTextKey::UMovieSceneScriptingTextKey
          (UMovieSceneScriptingTextKey *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  FMovieSceneChannelHandle::FMovieSceneChannelHandle((FMovieSceneChannelHandle *)&this->field_0x40);
  *(undefined ***)this = &___7UMovieSceneScriptingTextKey__6B_;
  return this;
}

// ~UMovieSceneScriptingTextKey @ 14c698f30

void __thiscall
UMovieSceneScriptingTextKey::~UMovieSceneScriptingTextKey(UMovieSceneScriptingTextKey *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UMovieSceneScriptingTextKey__6B_;
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

// GetPrivateStaticClass @ 14c6a21d0

UClass * __cdecl UMovieSceneScriptingTextKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingTextKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingTextKey,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneScriptingTextKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingTextKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingTextKey.InnerSingleton;
}

// GetTime @ 14c6a3420

/* WARNING: Enum "Type": Some values do not have unique names */

FFrameTime __thiscall
UMovieSceneScriptingTextKey::GetTime(UMovieSceneScriptingTextKey *this,EMovieSceneTimeUnit param_1)

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

// StaticRegisterNativesUMovieSceneScriptingTextKey @ 14c6a7320

void __cdecl UMovieSceneScriptingTextKey::StaticRegisterNativesUMovieSceneScriptingTextKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingTextKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTime @ 14c6b2570

void __cdecl
UMovieSceneScriptingTextKey::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetValue @ 14c6b2ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingTextKey::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  int iVar2;
  ITextData *pIVar3;
  code *pcVar4;
  TRefCountPtr<ITextData> TVar5;
  bool bVar6;
  int iVar7;
  FMovieSceneChannel *pFVar8;
  FText *pFVar9;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FText local_58;
  TArrayView<FText,int> local_48;
  FMovieSceneChannelData local_38;
  undefined8 *local_20;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.Index = *(uint *)(param_1 + 1);
  FText::FText(&local_58);
  pFVar8 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar8 == (FMovieSceneChannel *)0x0) {
    pwVar10 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_38,pFVar8,(TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
               (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
    local_20 = (undefined8 *)&pFVar8[1].KeyAddedEvent.field_0x8;
    if ((local_38.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (local_20 == (undefined8 *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = FMovieSceneChannelData::GetIndex(&local_38,FVar1);
    if (iVar7 != -1) {
      local_48.DataPtr = (FText *)*local_20;
      iVar2 = *(int *)(local_20 + 1);
      if (iVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_48.ArrayNum = iVar2;
      pFVar9 = TArrayView<FText,int>::operator[](&local_48,iVar7);
      TVar5.Reference = local_58.TextData.Reference;
      pIVar3 = (pFVar9->TextData).Reference;
      if (local_58.TextData.Reference != pIVar3) {
        local_58.TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
        }
        if (TVar5.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
        }
      }
      local_58.Flags = pFVar9->Flags;
      goto LAB_14c6b302f;
    }
    local_res10 = 0;
    pwVar10 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to get value. Did you forget to create the key through the channel?"
    ;
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
LAB_14c6b302f:
  FText::operator=(param_3,&local_58);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTime @ 14c6b9430

void __cdecl
UMovieSceneScriptingTextKey::execSetTime(UObject *param_1,FFrame *param_2,void *param_3)

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
  TMovieSceneScriptingKey<FMovieSceneTextChannel,FText>::SetTimeInChannel
            ((TMovieSceneScriptingKey<FMovieSceneTextChannel,FText> *)&param_1[1].field_0x18,
             (FKeyHandle)*(uint *)(param_1 + 1),TVar3,TVar2,(FFrameNumber)*piVar4,local_res8[0],
             local_res20[0]);
  return;
}

// execSetValue @ 14c6b9900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneScriptingTextKey::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FKeyHandle FVar1;
  FProperty *pFVar2;
  ITextData *pIVar3;
  bool bVar4;
  FMovieSceneTextChannel *pFVar5;
  wchar_t *pwVar6;
  FText *pFVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FText local_38;
  FText local_28;
  
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar7 = &local_38;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar7 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = (pFVar7->TextData).Reference;
  local_28.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
  }
  local_28.Flags = pFVar7->Flags;
  FVar1.Index = *(uint *)(param_1 + 1);
  local_res8.ObjectIndex = *(int *)&param_1[1].field_0xc;
  local_res8.ObjectSerialNumber = *(int *)&param_1[1].field_0x10;
  pFVar5 = (FMovieSceneTextChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)&param_1[1].field_0x18);
  if (pFVar5 == (FMovieSceneTextChannel *)0x0) {
    pwVar6 = 
    L"Invalid ChannelHandle for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  else {
    bVar4 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar4) {
      FWeakObjectPtr::Get(&local_res8);
    }
    bVar4 = UE::MovieScene::AssignValue<FMovieSceneTextChannel,FText_&>(pFVar5,FVar1,&local_28);
    if (bVar4) goto LAB_14c6b9a0f;
    pwVar6 = 
    L"Invalid KeyIndex for MovieSceneScriptingKey, failed to set value. Did you forget to create the key through the channel?"
    ;
  }
  local_res10 = 0;
  FFrame::KismetExecutionMessage(pwVar6,Error,(FName)0x0);
LAB_14c6b9a0f:
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

