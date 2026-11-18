// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 55

// StaticClass @ 14c694f40

UClass * __cdecl UMovieSceneSectionExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneSectionExtensions",
               &Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSectionExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton;
}

// UMovieSceneSectionExtensions @ 14c698b60

UMovieSceneSectionExtensions * __thiscall
UMovieSceneSectionExtensions::UMovieSceneSectionExtensions
          (UMovieSceneSectionExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSectionExtensions__6B_;
  return this;
}

// UMovieSceneSectionExtensions @ 14c698b90

UMovieSceneSectionExtensions * __thiscall
UMovieSceneSectionExtensions::UMovieSceneSectionExtensions
          (UMovieSceneSectionExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSectionExtensions__6B_;
  return this;
}

// ~UMovieSceneSectionExtensions @ 14c698f80

void __thiscall
UMovieSceneSectionExtensions::~UMovieSceneSectionExtensions(UMovieSceneSectionExtensions *this)

{
  *(undefined ***)this = &___7UMovieSceneSectionExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetAllChannels @ 14c69cab0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSectionExtensions::GetAllChannels
          (TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,UMovieSceneSection *param_1)

{
  FMovieSceneChannelProxy *this;
  UClass *pUVar1;
  UScriptStruct *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UMovieSceneSection *local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (UMovieSceneSection *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    FFrame::KismetExecutionMessage(L"Cannot get channels for null section",Error,(FName)0x0);
    return __return_storage_ptr__;
  }
  this = UMovieSceneSection::GetChannelProxy(param_1);
  pUVar1 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
  local_res10 = (FWeakObjectPtr)
                UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (FWeakObjectPtr)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneBoolChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneByteChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneFloatChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneDoubleChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneIntegerChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneStringChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneTextChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneEventChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneActorReferenceData::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneObjectPathChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  pUVar2 = FMovieSceneParticleChannel::StaticStruct();
  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar2->_padding_);
  return __return_storage_ptr__;
}

// GetAutoSizeEndFrame @ 14c69ced0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneSectionExtensions::GetAutoSizeEndFrame(UMovieSceneSection *param_1)

{
  FFrameRate FVar1;
  code *pcVar2;
  FFrameRate FVar3;
  bool bVar4;
  int iVar5;
  FFrameNumber FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined4 extraout_var;
  FFrameTime FVar9;
  TRange<FFrameNumber> local_res8;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  char local_28;
  char local_20;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    local_res8.UpperBound.Type.Value = '\0';
    local_res8.UpperBound._1_3_ = 0;
    local_res8.UpperBound.Value.Value = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetAutoSizeEndFrame on a null section",Error,(FName)0x0);
    return -1;
  }
  (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_30);
  if ((local_20 == '\0') || (local_28 == '\x02')) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage(L"Section does not have an AutoSize end frame",Error,(FName)0x0);
  }
  else {
    pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
    if (pUVar8 != (UObject *)0x0) {
      FVar1.Numerator = *(int *)&pUVar8[7].field_0x20;
      FVar1.Denominator = *(int *)&pUVar8[7].field_0x24;
      if (local_20 == '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      FVar6 = UE::MovieScene::DiscreteExclusiveUpper(&local_res8);
      uStackX_1c = 0;
      local_res18 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      FVar3.Denominator = 0;
      FVar3.Numerator = local_res18;
      FVar9 = ConvertFrameTime((FFrameTime)local_38,FVar3,FVar1);
      return *(int *)FVar9;
    }
  }
  return -1;
}

// GetAutoSizeEndFrameSeconds @ 14c69cff0

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(UMovieSceneSection *param_1)

{
  undefined8 uVar1;
  FFrameRate FVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  FFrameNumber FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined4 extraout_var;
  FFrameTime FVar9;
  wchar_t *pwVar10;
  int iVar11;
  float fVar12;
  TRange<FFrameNumber> local_res8;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  float fStack_44;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  char local_30;
  char local_28;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pwVar10 = L"Cannot call GetAutoSizeEndFrameSeconds on a null section";
    local_res8.UpperBound.Type.Value = '\0';
    local_res8.UpperBound._1_3_ = 0;
    local_res8.UpperBound.Value.Value = 0;
  }
  else {
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_38);
    if ((local_28 != '\0') && (local_30 != '\x02')) {
      pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
      if (pUVar8 == (UObject *)0x0) {
        return __real_bf800000;
      }
      uVar1 = *(undefined8 *)(pUVar8 + 8);
      FVar2.Numerator = *(int *)&pUVar8[7].field_0x20;
      FVar2.Denominator = *(int *)&pUVar8[7].field_0x24;
      if ((local_28 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
      FVar6 = UE::MovieScene::DiscreteExclusiveUpper(&local_res8);
      uStackX_1c = 0;
      local_res18 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      FVar4.Denominator = 0;
      FVar4.Numerator = local_res18;
      FVar9 = ConvertFrameTime((FFrameTime)local_40,FVar4,FVar2);
      iVar11 = (int)((ulonglong)uVar1 >> 0x20);
      fStack_44 = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
      return ((float)((longlong)iVar11 * (longlong)(int)*(undefined8 *)FVar9) +
             (float)iVar11 * fStack_44) / (float)(int)uVar1;
    }
    pwVar10 = L"Section does not have an AutoSize end frame";
    local_res20 = 0;
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
  return __real_bf800000;
}

// GetAutoSizeHasEndFrame @ 14c69d160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(UMovieSceneSection *param_1)

{
  undefined1 local_28 [8];
  char local_20;
  char local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetAutoSizeHasEndFrame on a null section",Error,(FName)0x0);
  }
  else {
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_28);
    if ((local_18 != '\0') && (local_20 != '\x02')) {
      return true;
    }
  }
  return false;
}

// GetAutoSizeHasStartFrame @ 14c69d1c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(UMovieSceneSection *param_1)

{
  char local_28 [16];
  char local_18;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call GetAutoSizeHasStartFrame on a null section",Error,(FName)0x0);
  }
  else {
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_28);
    if ((local_18 != '\0') && (local_28[0] != '\x02')) {
      return true;
    }
  }
  return false;
}

// GetAutoSizeStartFrame @ 14c69d220

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneSectionExtensions::GetAutoSizeStartFrame(UMovieSceneSection *param_1)

{
  FFrameRate FVar1;
  code *pcVar2;
  FFrameRate FVar3;
  bool bVar4;
  int iVar5;
  FFrameNumber FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined4 extraout_var;
  FFrameTime FVar9;
  TRange<FFrameNumber> local_res8;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  undefined1 local_38 [8];
  char local_30 [16];
  char local_20;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    local_res8.UpperBound.Type.Value = '\0';
    local_res8.UpperBound._1_3_ = 0;
    local_res8.UpperBound.Value.Value = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetAutoSizeStartFrame on a null section",Error,(FName)0x0);
    return -1;
  }
  (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_30);
  if ((local_20 == '\0') || (local_30[0] == '\x02')) {
    local_res20 = 0;
    FFrame::KismetExecutionMessage
              (L"Section does not have an AutoSize start frame",Error,(FName)0x0);
  }
  else {
    pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
    if (pUVar8 != (UObject *)0x0) {
      FVar1.Numerator = *(int *)&pUVar8[7].field_0x20;
      FVar1.Denominator = *(int *)&pUVar8[7].field_0x24;
      if (local_20 == '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      FVar6 = UE::MovieScene::DiscreteInclusiveLower(&local_res8);
      uStackX_1c = 0;
      local_res18 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      FVar3.Denominator = 0;
      FVar3.Numerator = local_res18;
      FVar9 = ConvertFrameTime((FFrameTime)local_38,FVar3,FVar1);
      return *(int *)FVar9;
    }
  }
  return -1;
}

// GetAutoSizeStartFrameSeconds @ 14c69d340

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl
UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(UMovieSceneSection *param_1)

{
  undefined8 uVar1;
  FFrameRate FVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  FFrameNumber FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined4 extraout_var;
  FFrameTime FVar9;
  wchar_t *pwVar10;
  int iVar11;
  float fVar12;
  TRange<FFrameNumber> local_res8;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined8 local_res20;
  float fStack_44;
  undefined1 local_40 [8];
  char local_38 [16];
  char local_28;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pwVar10 = L"Cannot call GetAutoSizeStartFrameSeconds on a null section";
    local_res8.UpperBound.Type.Value = '\0';
    local_res8.UpperBound._1_3_ = 0;
    local_res8.UpperBound.Value.Value = 0;
  }
  else {
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_38);
    if ((local_28 != '\0') && (local_38[0] != '\x02')) {
      pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
      if (pUVar8 == (UObject *)0x0) {
        return __real_bf800000;
      }
      uVar1 = *(undefined8 *)(pUVar8 + 8);
      FVar2.Numerator = *(int *)&pUVar8[7].field_0x20;
      FVar2.Denominator = *(int *)&pUVar8[7].field_0x24;
      if ((local_28 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        fVar12 = (float)(*pcVar3)();
        return fVar12;
      }
      FVar6 = UE::MovieScene::DiscreteInclusiveLower(&local_res8);
      uStackX_1c = 0;
      local_res18 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
      FVar4.Denominator = 0;
      FVar4.Numerator = local_res18;
      FVar9 = ConvertFrameTime((FFrameTime)local_40,FVar4,FVar2);
      iVar11 = (int)((ulonglong)uVar1 >> 0x20);
      fStack_44 = (float)((ulonglong)*(undefined8 *)FVar9 >> 0x20);
      return ((float)((longlong)iVar11 * (longlong)(int)*(undefined8 *)FVar9) +
             (float)iVar11 * fStack_44) / (float)(int)uVar1;
    }
    pwVar10 = L"Section does not have an AutoSize start frame";
    local_res20 = 0;
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
  return __real_bf800000;
}

// GetChannel @ 14c69d650

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingChannel * __cdecl
UMovieSceneSectionExtensions::GetChannel(UMovieSceneSection *param_1,FName *param_2)

{
  FFrame::KismetExecutionMessage(L"Could not find channel",Error,(FName)0x0);
  return (UMovieSceneScriptingChannel *)0x0;
}

// GetChannelsByType @ 14c69d680

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneSectionExtensions::GetChannelsByType
          (TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          ,UMovieSceneSection *param_1,TSubclassOf<UMovieSceneScriptingChannel> param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FMovieSceneChannelProxy *this;
  UClass *pUVar4;
  UClass *pUVar5;
  UScriptStruct *pUVar6;
  UClass *pUVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [2];
  UMovieSceneSection *local_res20;
  
  pUVar7 = (UClass *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UMovieSceneSection *)0x0) {
    this = UMovieSceneSection::GetChannelProxy(param_1);
    pUVar4 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    local_res10[0] =
         (FWeakObjectPtr)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar4);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10[0] != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10[0] != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
    lVar2 = *(longlong *)param_2.Class.field0_0x0;
    pUVar4 = pUVar7;
    if ((lVar2 != 0) &&
       (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
       pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar5 = Z_Construct_UClass_UMovieSceneScriptingBoolChannel_NoRegister();
    local_res20 = param_1;
    if (pUVar4 == pUVar5) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10[0].ObjectIndex = 0;
      local_res10[0].ObjectSerialNumber = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
      pUVar6 = FMovieSceneBoolChannel::StaticStruct();
      FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
    }
    else {
      lVar2 = *(longlong *)param_2.Class.field0_0x0;
      pUVar4 = pUVar7;
      if ((lVar2 != 0) &&
         (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
         pUVar5 != (UClass *)0x0)) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar4 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      pUVar5 = Z_Construct_UClass_UMovieSceneScriptingByteChannel_NoRegister();
      if (pUVar4 == pUVar5) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res10[0].ObjectIndex = 0;
        local_res10[0].ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
        pUVar6 = FMovieSceneByteChannel::StaticStruct();
        FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
      }
      else {
        lVar2 = *(longlong *)param_2.Class.field0_0x0;
        pUVar4 = pUVar7;
        if ((lVar2 != 0) &&
           (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
           pUVar5 != (UClass *)0x0)) {
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar4 = *(UClass **)param_2.Class.field0_0x0;
          }
        }
        pUVar5 = Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister();
        if (pUVar4 == pUVar5) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_res10[0].ObjectIndex = 0;
          local_res10[0].ObjectSerialNumber = 0;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
          pUVar6 = FMovieSceneFloatChannel::StaticStruct();
          FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
        }
        else {
          lVar2 = *(longlong *)param_2.Class.field0_0x0;
          pUVar4 = pUVar7;
          if ((lVar2 != 0) &&
             (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
             pUVar5 != (UClass *)0x0)) {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar2 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pUVar4 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          pUVar5 = Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_NoRegister();
          if (pUVar4 == pUVar5) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_res10[0].ObjectIndex = 0;
            local_res10[0].ObjectSerialNumber = 0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
            pUVar6 = FMovieSceneDoubleChannel::StaticStruct();
            FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
          }
          else {
            lVar2 = *(longlong *)param_2.Class.field0_0x0;
            pUVar4 = pUVar7;
            if ((lVar2 != 0) &&
               (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
               pUVar5 != (UClass *)0x0)) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                pUVar4 = *(UClass **)param_2.Class.field0_0x0;
              }
            }
            pUVar5 = Z_Construct_UClass_UMovieSceneScriptingIntegerChannel_NoRegister();
            if (pUVar4 == pUVar5) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)param_1);
              }
              local_res10[0].ObjectIndex = 0;
              local_res10[0].ObjectSerialNumber = 0;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)param_1);
              }
              FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
              pUVar6 = FMovieSceneIntegerChannel::StaticStruct();
              FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
            }
            else {
              lVar2 = *(longlong *)param_2.Class.field0_0x0;
              pUVar4 = pUVar7;
              if ((lVar2 != 0) &&
                 (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
                 pUVar5 != (UClass *)0x0)) {
                iVar1 = (int)pUVar5->_padding_;
                if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar5->_padding_)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (bVar3) {
                  pUVar4 = *(UClass **)param_2.Class.field0_0x0;
                }
              }
              pUVar5 = UMovieSceneScriptingStringChannel::StaticClass();
              if (pUVar4 == pUVar5) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)param_1);
                }
                local_res10[0].ObjectIndex = 0;
                local_res10[0].ObjectSerialNumber = 0;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)param_1);
                }
                FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
                pUVar6 = FMovieSceneStringChannel::StaticStruct();
                FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
              }
              else {
                lVar2 = *(longlong *)param_2.Class.field0_0x0;
                pUVar4 = pUVar7;
                if ((lVar2 != 0) &&
                   (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
                   pUVar5 != (UClass *)0x0)) {
                  iVar1 = (int)pUVar5->_padding_;
                  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                      &pUVar5->_padding_)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    pUVar4 = *(UClass **)param_2.Class.field0_0x0;
                  }
                }
                pUVar5 = UMovieSceneScriptingTextChannel::StaticClass();
                if (pUVar4 == pUVar5) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)param_1);
                  }
                  local_res10[0].ObjectIndex = 0;
                  local_res10[0].ObjectSerialNumber = 0;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)param_1);
                  }
                  FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
                  pUVar6 = FMovieSceneTextChannel::StaticStruct();
                  FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
                }
                else {
                  lVar2 = *(longlong *)param_2.Class.field0_0x0;
                  pUVar4 = pUVar7;
                  if ((lVar2 != 0) &&
                     (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
                     pUVar5 != (UClass *)0x0)) {
                    iVar1 = (int)pUVar5->_padding_;
                    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                        &pUVar5->_padding_)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      pUVar4 = *(UClass **)param_2.Class.field0_0x0;
                    }
                  }
                  pUVar5 = Z_Construct_UClass_UMovieSceneScriptingEventChannel_NoRegister();
                  if (pUVar4 == pUVar5) {
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)param_1);
                    }
                    local_res10[0].ObjectIndex = 0;
                    local_res10[0].ObjectSerialNumber = 0;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable((UObject *)param_1);
                    }
                    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
                    pUVar6 = FMovieSceneEventChannel::StaticStruct();
                    FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
                  }
                  else {
                    lVar2 = *(longlong *)param_2.Class.field0_0x0;
                    pUVar4 = pUVar7;
                    if ((lVar2 != 0) &&
                       (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
                       pUVar5 != (UClass *)0x0)) {
                      iVar1 = (int)pUVar5->_padding_;
                      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                         ((longlong *)
                          *(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                          &pUVar5->_padding_)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if (bVar3) {
                        pUVar4 = *(UClass **)param_2.Class.field0_0x0;
                      }
                    }
                    pUVar5 = Z_Construct_UClass_UMovieSceneScriptingActorReferenceChannel_NoRegister
                                       ();
                    if (pUVar4 == pUVar5) {
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_1);
                      }
                      local_res10[0].ObjectIndex = 0;
                      local_res10[0].ObjectSerialNumber = 0;
                      if (UE::GC::GIsIncrementalReachabilityPending != false) {
                        UE::GC::MarkAsReachable((UObject *)param_1);
                      }
                      FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
                      pUVar6 = FMovieSceneActorReferenceData::StaticStruct();
                      FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
                    }
                    else {
                      lVar2 = *(longlong *)param_2.Class.field0_0x0;
                      pUVar4 = pUVar7;
                      if ((lVar2 != 0) &&
                         (pUVar5 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
                         pUVar5 != (UClass *)0x0)) {
                        iVar1 = (int)pUVar5->_padding_;
                        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                           ((longlong *)
                            *(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                            &pUVar5->_padding_)) {
                          bVar3 = false;
                        }
                        else {
                          bVar3 = true;
                        }
                        if (bVar3) {
                          pUVar4 = *(UClass **)param_2.Class.field0_0x0;
                        }
                      }
                      pUVar5 = Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_NoRegister()
                      ;
                      if (pUVar4 == pUVar5) {
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)param_1);
                        }
                        local_res10[0].ObjectIndex = 0;
                        local_res10[0].ObjectSerialNumber = 0;
                        if (UE::GC::GIsIncrementalReachabilityPending != false) {
                          UE::GC::MarkAsReachable((UObject *)param_1);
                        }
                        FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
                        pUVar6 = FMovieSceneObjectPathChannel::StaticStruct();
                        FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
                      }
                      else {
                        lVar2 = *(longlong *)param_2.Class.field0_0x0;
                        if ((lVar2 != 0) &&
                           (pUVar4 = Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister(),
                           pUVar4 != (UClass *)0x0)) {
                          iVar1 = (int)pUVar4->_padding_;
                          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
                             ((longlong *)
                              *(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
                              &pUVar4->_padding_)) {
                            bVar3 = false;
                          }
                          else {
                            bVar3 = true;
                          }
                          if (bVar3) {
                            pUVar7 = *(UClass **)param_2.Class.field0_0x0;
                          }
                        }
                        pUVar4 = UMovieSceneScriptingParticleChannel::StaticClass();
                        if (pUVar7 == pUVar4) {
                          if (UE::GC::GIsIncrementalReachabilityPending != false) {
                            UE::GC::MarkAsReachable((UObject *)param_1);
                          }
                          local_res10[0].ObjectIndex = 0;
                          local_res10[0].ObjectSerialNumber = 0;
                          if (UE::GC::GIsIncrementalReachabilityPending != false) {
                            UE::GC::MarkAsReachable((UObject *)param_1);
                          }
                          FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_res20);
                          pUVar6 = FMovieSceneParticleChannel::StaticStruct();
                          FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar6->_padding_);
                        }
                        else {
                          local_res10[0].ObjectIndex = 0;
                          local_res10[0].ObjectSerialNumber = 0;
                          FFrame::KismetExecutionMessage
                                    (L"Unsupported ChannelType for FindChannelsByType!",Error,
                                     (FName)0x0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return __return_storage_ptr__;
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  FFrame::KismetExecutionMessage(L"Cannot get channels for null section",Error,(FName)0x0);
  return __return_storage_ptr__;
}

// GetEndFrame @ 14c69eb10

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneSectionExtensions::GetEndFrame(UMovieSceneSection *param_1)

{
  int iVar1;
  FFrameRate FVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FFrameTime FVar9;
  char cVar10;
  longlong lVar11;
  undefined1 local_res20 [8];
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetEndFrame on a null section",Error,(FName)0x0);
  }
  else {
    if ((param_1->SectionRange).Value.UpperBound.Type.Value == '\x02') {
      FFrame::KismetExecutionMessage(L"Section does not have an end frame",Error,(FName)0x0);
      return -1;
    }
    pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
    if (pUVar8 != (UObject *)0x0) {
      FVar2.Numerator = *(int *)&pUVar8[7].field_0x20;
      FVar2.Denominator = *(int *)&pUVar8[7].field_0x24;
      iVar6 = (param_1->SectionRange).Value.UpperBound.Value.Value;
      cVar10 = (char)*(undefined4 *)&(param_1->SectionRange).Value.UpperBound;
      if (cVar10 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InUpperBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x44,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      lVar11 = 0;
      if (cVar10 == '\x01') {
        lVar11 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar11);
      if (cVar10 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      FVar4.Denominator = 0;
      FVar4.Numerator = iVar6 + iVar1;
      FVar9 = ConvertFrameTime((FFrameTime)local_res20,FVar4,FVar2);
      return *(int *)FVar9;
    }
  }
  return -1;
}

// GetEndFrameSeconds @ 14c69ec80

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UMovieSceneSectionExtensions::GetEndFrameSeconds(UMovieSceneSection *param_1)

{
  int iVar1;
  FFrameRate FVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  FFrameRate FVar6;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FFrameTime FVar10;
  wchar_t *pwVar11;
  char cVar12;
  longlong lVar13;
  float fVar14;
  int iStackX_24;
  float fStack_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pwVar11 = L"Cannot call GetEndFrameSeconds on a null section";
  }
  else {
    if ((param_1->SectionRange).Value.UpperBound.Type.Value != '\x02') {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar8);
      if (pUVar9 == (UObject *)0x0) {
        return __real_bf800000;
      }
      FVar2.Numerator = *(int *)&pUVar9[7].field_0x20;
      FVar2.Denominator = *(int *)&pUVar9[7].field_0x24;
      uVar3 = *(undefined8 *)(pUVar9 + 8);
      local_50 = *(undefined4 *)&(param_1->SectionRange).Value.LowerBound;
      iStack_4c = (param_1->SectionRange).Value.LowerBound.Value.Value;
      uStack_48 = *(undefined4 *)&(param_1->SectionRange).Value.UpperBound;
      iVar5 = (param_1->SectionRange).Value.UpperBound.Value.Value;
      cVar12 = (char)uStack_48;
      iStack_44 = iVar5;
      if ((cVar12 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        fVar14 = (float)(*pcVar4)();
        return fVar14;
      }
      lVar13 = 0;
      if (cVar12 == '\x01') {
        lVar13 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar13);
      if ((cVar12 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        fVar14 = (float)(*pcVar4)();
        return fVar14;
      }
      FVar6.Denominator = 0;
      FVar6.Numerator = iVar5 + iVar1;
      FVar10 = ConvertFrameTime((FFrameTime)&local_50,FVar6,FVar2);
      iStackX_24 = (int)((ulonglong)uVar3 >> 0x20);
      fStack_54 = (float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
      return ((float)((longlong)(int)*(undefined8 *)FVar10 * (longlong)iStackX_24) +
             (float)iStackX_24 * fStack_54) / (float)(int)uVar3;
    }
    pwVar11 = L"Section does not have an end frame";
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
  return __real_bf800000;
}

// GetMovieSceneChannel @ 14c6a04b0

FMovieSceneChannel * __cdecl
UMovieSceneSectionExtensions::GetMovieSceneChannel(UMovieSceneSection *param_1,FName *param_2)

{
  return (FMovieSceneChannel *)0x0;
}

// GetParentSequenceFrame @ 14c6a06f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieSceneSectionExtensions::GetParentSequenceFrame
          (UMovieSceneSubSection *param_1,int param_2,UMovieSceneSequence *param_3)

{
  FFrameRate FVar1;
  undefined8 uVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UMovieSceneSequence *pUVar8;
  longlong lVar9;
  FMovieSceneSequenceTransform *this;
  FMovieSceneInverseSequenceTransform *this_00;
  FFrameTime FVar10;
  FString *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FFrameTime local_res8;
  TArray<UMovieSceneSubSection_*,TSizedDefaultAllocator<32>_> local_b8;
  TOptional<FFrameTime> local_a8;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80;
  FMovieSceneSequenceTransform local_70;
  FMovieSceneInverseSequenceTransform local_50;
  
  uVar13 = 0;
  local_res8 = (FFrameTime)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((param_1 == (UMovieSceneSubSection *)0x0) || (param_3 == (UMovieSceneSequence *)0x0)) {
    if (1 < (byte)LogMovieScene._0_1_) {
      if (param_3 != (UMovieSceneSequence *)0x0) {
        pFVar11 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)param_3,&local_80,(UObject *)0x0,None);
        if ((pFVar11->Data).ArrayNum == 0) {
          uVar13 = 1;
        }
        else {
          uVar13 = 1;
        }
      }
      if (param_1 != (UMovieSceneSubSection *)0x0) {
        uVar13 = (ulonglong)((uint)uVar13 | 2);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_90,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (((uVar13 & 2) != 0) &&
         (uVar13 = (ulonglong)((uint)uVar13 & 0xfffffffd),
         local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (((uVar13 & 1) != 0) &&
         (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    GetSubSectionChain(param_1,param_3,&local_b8);
    pUVar8 = UMovieSceneSubSection::GetSequence(param_1);
    lVar9 = (**(code **)(pUVar8->_padding_ + 0x2f8))(pUVar8);
    FVar1 = *(FFrameRate *)(lVar9 + 0x140);
    pUVar8 = UMovieSceneSubSection::GetSequence(param_1);
    (**(code **)(pUVar8->_padding_ + 0x2f8))(pUVar8);
    FVar4.Denominator = 0;
    FVar4.Numerator = param_2;
    ConvertFrameTime((FFrameTime)&local_res8,FVar4,FVar1);
    uVar14 = uVar13;
    if (0 < local_b8.ArrayNum) {
      do {
        FVar10 = local_res8;
        uVar12 = (uint)uVar13;
        uVar6 = 0;
        if ((int)uVar12 < local_b8.ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
        this = UMovieSceneSubSection::OuterToInnerTransform
                         (*(UMovieSceneSubSection **)(local_b8.AllocatorInstance.Data + uVar14),
                          &local_70);
        this_00 = FMovieSceneSequenceTransform::Inverse(this,&local_50);
        FMovieSceneInverseSequenceTransform::TryTransformTime(this_00,&local_a8,FVar10);
        if (local_50.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.NestedTransforms.AllocatorInstance.Data);
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_70.NestedTransforms.AllocatorInstance.Data,
                   local_70.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)local_70.NestedTransforms.AllocatorInstance.Data
            != (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_70.NestedTransforms.AllocatorInstance.Data);
        }
        local_res8 = FVar10;
        if (local_a8.bIsSet != false) {
          local_res8 = local_a8.TypedValue;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar14 = uVar14 + 8;
      } while ((int)(uVar12 + 1) < local_b8.ArrayNum);
    }
    FVar10 = local_res8;
    (**(code **)(param_3->_padding_ + 0x2f8))(param_3);
    lVar9 = (**(code **)(param_3->_padding_ + 0x2f8))(param_3);
    FVar10 = ConvertFrameTime((FFrameTime)local_98,(FFrameRate)FVar10,*(FFrameRate *)(lVar9 + 0x138)
                             );
    uVar2 = *(undefined8 *)FVar10;
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    param_2 = (int)uVar2;
  }
  return param_2;
}

// GetPrivateStaticClass @ 14c6a2290

UClass * __cdecl UMovieSceneSectionExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneSectionExtensions",
               &Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton,
               StaticRegisterNativesUMovieSceneSectionExtensions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneSectionExtensions>,
               InternalVTableHelperCtorCaller<UMovieSceneSectionExtensions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSectionExtensions.InnerSingleton;
}

// GetStartFrame @ 14c6a2a90

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMovieSceneSectionExtensions::GetStartFrame(UMovieSceneSection *param_1)

{
  int iVar1;
  FFrameRate FVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FFrameTime FVar9;
  char cVar10;
  longlong lVar11;
  undefined1 local_res20 [8];
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call GetStartFrame on a null section",Error,(FName)0x0);
  }
  else {
    if ((param_1->SectionRange).Value.LowerBound.Type.Value == '\x02') {
      FFrame::KismetExecutionMessage(L"Section does not have a start frame",Error,(FName)0x0);
      return -1;
    }
    pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar7);
    if (pUVar8 != (UObject *)0x0) {
      FVar2.Numerator = *(int *)&pUVar8[7].field_0x20;
      FVar2.Denominator = *(int *)&pUVar8[7].field_0x24;
      iVar6 = (param_1->SectionRange).Value.LowerBound.Value.Value;
      cVar10 = (char)*(undefined4 *)&(param_1->SectionRange).Value.LowerBound;
      if (cVar10 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InLowerBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x2c,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      lVar11 = 0;
      if (cVar10 == '\0') {
        lVar11 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar11);
      if (cVar10 == '\x02') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
      }
      FVar4.Denominator = 0;
      FVar4.Numerator = iVar6 + iVar1;
      FVar9 = ConvertFrameTime((FFrameTime)local_res20,FVar4,FVar2);
      return *(int *)FVar9;
    }
  }
  return -1;
}

// GetStartFrameSeconds @ 14c6a2c00

/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UMovieSceneSectionExtensions::GetStartFrameSeconds(UMovieSceneSection *param_1)

{
  int iVar1;
  FFrameRate FVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  FFrameRate FVar6;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FFrameTime FVar10;
  wchar_t *pwVar11;
  char cVar12;
  longlong lVar13;
  float fVar14;
  int iStackX_24;
  float fStack_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    pwVar11 = L"Cannot call GetStartFrameSeconds on a null section";
  }
  else {
    if ((param_1->SectionRange).Value.LowerBound.Type.Value != '\x02') {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar8);
      if (pUVar9 == (UObject *)0x0) {
        return __real_bf800000;
      }
      FVar2.Numerator = *(int *)&pUVar9[7].field_0x20;
      FVar2.Denominator = *(int *)&pUVar9[7].field_0x24;
      uVar3 = *(undefined8 *)(pUVar9 + 8);
      local_50 = *(undefined4 *)&(param_1->SectionRange).Value.LowerBound;
      iVar5 = (param_1->SectionRange).Value.LowerBound.Value.Value;
      uStack_48 = *(undefined4 *)&(param_1->SectionRange).Value.UpperBound;
      iStack_44 = (param_1->SectionRange).Value.UpperBound.Value.Value;
      cVar12 = (char)local_50;
      iStack_4c = iVar5;
      if ((cVar12 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        fVar14 = (float)(*pcVar4)();
        return fVar14;
      }
      lVar13 = 0;
      if (cVar12 == '\0') {
        lVar13 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar13);
      if ((cVar12 == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        fVar14 = (float)(*pcVar4)();
        return fVar14;
      }
      FVar6.Denominator = 0;
      FVar6.Numerator = iVar5 + iVar1;
      FVar10 = ConvertFrameTime((FFrameTime)&local_50,FVar6,FVar2);
      iStackX_24 = (int)((ulonglong)uVar3 >> 0x20);
      fStack_54 = (float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
      return ((float)((longlong)(int)*(undefined8 *)FVar10 * (longlong)iStackX_24) +
             (float)iStackX_24 * fStack_54) / (float)(int)uVar3;
    }
    pwVar11 = L"Section does not have a start frame";
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
  return __real_bf800000;
}

// HasEndFrame @ 14c6a3a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSectionExtensions::HasEndFrame(UMovieSceneSection *param_1)

{
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call HasEndFrame on a null section",Error,(FName)0x0);
    return false;
  }
  return (param_1->SectionRange).Value.UpperBound.Type.Value != '\x02';
}

// HasStartFrame @ 14c6a3a50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UMovieSceneSectionExtensions::HasStartFrame(UMovieSceneSection *param_1)

{
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call HasStartFrame on a null section",Error,(FName)0x0);
    return false;
  }
  return (param_1->SectionRange).Value.LowerBound.Type.Value != '\x02';
}

// SetEndFrame @ 14c6a5440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSectionExtensions::SetEndFrame(UMovieSceneSection *param_1,int param_2)

{
  FFrameRate FVar1;
  code *pcVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FFrameTime FVar5;
  FFrameRate local_res8;
  undefined1 local_res18 [8];
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetEndFrame on a null section",Error,(FName)0x0);
    return;
  }
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
  if (pUVar4 != (UObject *)0x0) {
    FVar1.Numerator = *(int *)&pUVar4[8].field_0x0;
    FVar1.Denominator = *(int *)&pUVar4[8].field_0x4;
    pcVar2 = *(code **)(param_1->_padding_ + 0x2d8);
    local_res8.Denominator = 0;
    local_res8.Numerator = param_2;
    FVar5 = ConvertFrameTime((FFrameTime)local_res18,local_res8,FVar1);
    local_res8 = (FFrameRate)
                 ((ulonglong)CONCAT43(*(undefined4 *)FVar5,(int3)((uint)param_2 >> 8)) << 8);
    (*pcVar2)(param_1,local_res8);
  }
  return;
}

// SetEndFrameBounded @ 14c6a54f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::SetEndFrameBounded(UMovieSceneSection *param_1,bool param_2)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  undefined4 local_res18;
  uint local_res20;
  int iStack_1c;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetEndFrameBounded on a null section",Error,(FName)0x0);
    return;
  }
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
  if (pUVar4 != (UObject *)0x0) {
    iStack_1c = 0;
    if (param_2) {
      if ((char)*(undefined8 *)&pUVar4[7].field_0x18 != '\x02') {
        iStack_1c = (int)((ulonglong)*(undefined8 *)&pUVar4[7].field_0x18 >> 0x20);
      }
      local_res18 = CONCAT31(local_res18._1_3_,1);
      TVar1.Value.Value = iStack_1c;
      TVar1._0_4_ = local_res18;
      (param_1->SectionRange).Value.UpperBound = TVar1;
      return;
    }
    local_res20 = CONCAT31(local_res20._1_3_,2);
    TVar2.Value.Value = 0;
    TVar2._0_4_ = local_res20;
    (param_1->SectionRange).Value.UpperBound = TVar2;
  }
  return;
}

// SetEndFrameSeconds @ 14c6a55b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::SetEndFrameSeconds(UMovieSceneSection *param_1,float param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  int iVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
    if (pUVar2 != (UObject *)0x0) {
      dVar6 = ((double)(int)*(undefined8 *)&pUVar2[7].field_0x20 * (double)param_2) /
              (double)(int)((ulonglong)*(undefined8 *)&pUVar2[7].field_0x20 >> 0x20);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar6;
      auVar5 = roundpd(in_XMM2,auVar5,1);
      dVar4 = auVar5._0_8_;
      dVar6 = dVar6 - dVar4;
      if (__real_41dfffffffc00000 <= dVar4) {
        dVar4 = __real_41dfffffffc00000;
      }
      if (dVar4 <= __real_c1e0000000000000) {
        dVar4 = __real_c1e0000000000000;
      }
      iVar3 = (int)dVar6;
      fVar7 = (float)dVar6 - (float)iVar3;
      fVar8 = fVar7;
      if ((0.0 < fVar7) && (fVar8 = ::FFrameTime::MaxSubframe, fVar7 <= ::FFrameTime::MaxSubframe))
      {
        fVar8 = fVar7;
      }
      fVar7 = ::FFrameTime::MaxSubframe;
      if (fVar8 <= ::FFrameTime::MaxSubframe) {
        fVar7 = fVar8;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      iVar3 = (int)dVar4 + iVar3;
      if (__real_3f000000 <= fVar7) {
        iVar3 = iVar3 + 1;
      }
      local_res8 = CONCAT44(iVar3,(undefined4)local_res8);
      local_res8 = local_res8 & 0xffffffffffffff00;
      (**(code **)(param_1->_padding_ + 0x2d8))(param_1,local_res8);
    }
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Cannot call SetEndFrameSeconds on a null section",Error,(FName)0x0);
  return;
}

// SetRange @ 14c6a60c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::SetRange(UMovieSceneSection *param_1,int param_2,int param_3)

{
  FFrameRate FVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  FFrameTime FVar4;
  FFrameRate local_res8;
  undefined1 local_res20 [8];
  undefined8 local_28;
  longlong local_20;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetRange on a null section",Error,(FName)0x0);
    return;
  }
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    FVar1.Numerator = *(int *)&pUVar3[8].field_0x0;
    FVar1.Denominator = *(int *)&pUVar3[8].field_0x4;
    local_res8.Denominator = 0;
    local_res8.Numerator = param_2;
    FVar4 = ConvertFrameTime((FFrameTime)local_res20,local_res8,FVar1);
    local_res8.Denominator = 0;
    local_res8.Numerator._1_3_ = (uint3)((uint)param_2 >> 8);
    local_res8.Numerator._0_1_ = 1;
    local_28._0_4_ = local_res8.Numerator;
    local_res8.Denominator = 0;
    local_res8.Numerator = param_3;
    local_28._4_4_ = *(undefined4 *)FVar4;
    FVar4 = ConvertFrameTime((FFrameTime)local_res20,local_res8,FVar1);
    local_res8 = (FFrameRate)((ulonglong)CONCAT43(*(int *)FVar4,(int3)((uint)param_3 >> 8)) << 8);
    local_20._0_4_ = local_res8.Numerator;
    local_20._4_4_ = local_res8.Denominator;
    if (((char)local_28 != '\x02') && (*(int *)FVar4 < local_28._4_4_)) {
      FFrame::KismetExecutionMessage(L"Invalid range specified",Error,(FName)0x0);
      return;
    }
    (**(code **)(param_1->_padding_ + 0x2c8))(param_1,&local_28);
  }
  return;
}

// SetRangeSeconds @ 14c6a6200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::SetRangeSeconds
          (UMovieSceneSection *param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  undefined1 in_register_00001284 [12];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_res8;
  undefined8 local_68;
  undefined8 local_60;
  
  auVar8._4_12_ = in_register_00001284;
  auVar8._0_4_ = param_3;
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetRangeSeconds on a null section",Error,(FName)0x0);
  }
  else {
    pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
    if (pUVar7 != (UObject *)0x0) {
      dVar3 = (double)(int)*(undefined8 *)&pUVar7[7].field_0x20;
      dVar10 = __real_3ff0000000000000 /
               (double)(int)((ulonglong)*(undefined8 *)&pUVar7[7].field_0x20 >> 0x20);
      dVar9 = (double)param_2 * dVar3 * dVar10;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar9;
      auVar8 = roundpd(auVar8,auVar1,1);
      dVar9 = dVar9 - auVar8._0_8_;
      uVar13 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      uVar12 = auVar8._0_4_;
      uVar15 = auVar8._4_4_;
      if (__real_41dfffffffc00000 <= auVar8._0_8_) {
        uVar12 = SUB84(__real_41dfffffffc00000,0);
        uVar15 = uVar13;
      }
      uVar14 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      if ((double)CONCAT44(uVar15,uVar12) <= __real_c1e0000000000000) {
        uVar12 = SUB84(__real_c1e0000000000000,0);
        uVar15 = uVar14;
      }
      iVar4 = (int)dVar9;
      fVar11 = (float)dVar9 - (float)iVar4;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      local_res8 = CONCAT71(local_res8._1_7_,1);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      iVar4 = (int)(double)CONCAT44(uVar15,uVar12) + iVar4;
      dVar10 = (double)param_3 * dVar3 * dVar10;
      if (__real_3f000000 <= fVar11) {
        iVar4 = iVar4 + 1;
      }
      local_res8 = CONCAT44(iVar4,(undefined4)local_res8);
      local_68 = local_res8;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar10;
      auVar8 = roundpd(auVar8,auVar2,1);
      dVar10 = dVar10 - auVar8._0_8_;
      uVar12 = auVar8._0_4_;
      uVar15 = auVar8._4_4_;
      if (__real_41dfffffffc00000 <= auVar8._0_8_) {
        uVar12 = SUB84(__real_41dfffffffc00000,0);
        uVar15 = uVar13;
      }
      if ((double)CONCAT44(uVar15,uVar12) <= __real_c1e0000000000000) {
        uVar12 = SUB84(__real_c1e0000000000000,0);
        uVar15 = uVar14;
      }
      iVar5 = (int)dVar10;
      fVar11 = (float)dVar10 - (float)iVar5;
      if ((0.0 < fVar11) && (::FFrameTime::MaxSubframe <= fVar11)) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      local_res8 = CONCAT71(local_res8._1_7_,1);
      if (::FFrameTime::MaxSubframe <= fVar11) {
        fVar11 = ::FFrameTime::MaxSubframe;
      }
      iVar5 = (int)(double)CONCAT44(uVar15,uVar12) + iVar5;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (__real_3f000000 <= fVar11) {
        iVar5 = iVar5 + 1;
      }
      local_res8 = CONCAT44(iVar5,(undefined4)local_res8);
      local_60 = local_res8;
      if (iVar5 < iVar4) {
        FFrame::KismetExecutionMessage(L"Invalid range specified",Error,(FName)0x0);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x2c8))(param_1,&local_68);
      }
    }
  }
  return;
}

// SetStartFrame @ 14c6a6570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMovieSceneSectionExtensions::SetStartFrame(UMovieSceneSection *param_1,int param_2)

{
  FFrameRate FVar1;
  code *pcVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FFrameTime FVar5;
  FFrameRate local_res8;
  undefined1 local_res18 [8];
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetStartFrame on a null section",Error,(FName)0x0);
    return;
  }
  pUVar3 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar4 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
  if (pUVar4 != (UObject *)0x0) {
    FVar1.Numerator = *(int *)&pUVar4[8].field_0x0;
    FVar1.Denominator = *(int *)&pUVar4[8].field_0x4;
    pcVar2 = *(code **)(param_1->_padding_ + 0x2d0);
    local_res8.Denominator = 0;
    local_res8.Numerator = param_2;
    FVar5 = ConvertFrameTime((FFrameTime)local_res18,local_res8,FVar1);
    local_res8.Denominator = 0;
    local_res8.Numerator._1_3_ = (uint3)((uint)param_2 >> 8);
    local_res8.Numerator._0_1_ = 1;
    local_res8.Denominator = *(undefined4 *)FVar5;
    (*pcVar2)(param_1,local_res8);
  }
  return;
}

// SetStartFrameBounded @ 14c6a6620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::SetStartFrameBounded(UMovieSceneSection *param_1,bool param_2)

{
  code *pcVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  int iVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FFrameNumber FVar8;
  undefined4 local_res18;
  uint local_res20;
  
  if (param_1 == (UMovieSceneSection *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetStartFrameBounded on a null section",Error,(FName)0x0);
    return;
  }
  pUVar6 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar7 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
  if (pUVar7 != (UObject *)0x0) {
    if (param_2) {
      iVar4 = *(int *)&pUVar7[7].field_0x14;
      FVar8.Value = 0;
      if (((pUVar7[7].field_0x10 != '\x02') && (FVar8.Value = iVar4, pUVar7[7].field_0x10 == '\x02')
          ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res18 = CONCAT31(local_res18._1_3_,1);
      TVar2.Value.Value = FVar8.Value;
      TVar2._0_4_ = local_res18;
      (param_1->SectionRange).Value.LowerBound = TVar2;
      return;
    }
    local_res20 = CONCAT31(local_res20._1_3_,2);
    TVar3.Value.Value = 0;
    TVar3._0_4_ = local_res20;
    (param_1->SectionRange).Value.LowerBound = TVar3;
  }
  return;
}

// SetStartFrameSeconds @ 14c6a6710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::SetStartFrameSeconds(UMovieSceneSection *param_1,float param_2)

{
  UClass *pUVar1;
  UObject *pUVar2;
  int iVar3;
  double dVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  
  if (param_1 != (UMovieSceneSection *)0x0) {
    pUVar1 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar1);
    if (pUVar2 != (UObject *)0x0) {
      dVar6 = ((double)(int)*(undefined8 *)&pUVar2[7].field_0x20 * (double)param_2) /
              (double)(int)((ulonglong)*(undefined8 *)&pUVar2[7].field_0x20 >> 0x20);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar6;
      auVar5 = roundpd(in_XMM2,auVar5,1);
      dVar4 = auVar5._0_8_;
      dVar6 = dVar6 - dVar4;
      if (__real_41dfffffffc00000 <= dVar4) {
        dVar4 = __real_41dfffffffc00000;
      }
      if (dVar4 <= __real_c1e0000000000000) {
        dVar4 = __real_c1e0000000000000;
      }
      iVar3 = (int)dVar6;
      fVar7 = (float)dVar6 - (float)iVar3;
      fVar8 = fVar7;
      if ((0.0 < fVar7) && (fVar8 = ::FFrameTime::MaxSubframe, fVar7 <= ::FFrameTime::MaxSubframe))
      {
        fVar8 = fVar7;
      }
      fVar7 = ::FFrameTime::MaxSubframe;
      if (fVar8 <= ::FFrameTime::MaxSubframe) {
        fVar7 = fVar8;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      iVar3 = (int)dVar4 + iVar3;
      if (__real_3f000000 <= fVar7) {
        iVar3 = iVar3 + 1;
      }
      local_res8 = CONCAT44(iVar3,(undefined4)local_res8);
      local_res8 = CONCAT71(local_res8._1_7_,1);
      (**(code **)(param_1->_padding_ + 0x2d0))(param_1,local_res8);
    }
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Cannot call SetStartFrameSeconds on a null section",Error,(FName)0x0);
  return;
}

// StaticRegisterNativesUMovieSceneSectionExtensions @ 14c6a7360

void __cdecl UMovieSceneSectionExtensions::StaticRegisterNativesUMovieSceneSectionExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x18;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneSectionExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAllChannels @ 14c6ac3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAllChannels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieSceneSection *this;
  FMovieSceneChannelProxy *this_00;
  UClass *pUVar2;
  UScriptStruct *pUVar3;
  UMovieSceneSection *local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UMovieSceneSection *local_48;
  undefined1 local_40 [24];
  
  local_res10 = (UMovieSceneSection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieSceneSection *)0x0) {
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    FFrame::KismetExecutionMessage(L"Cannot get channels for null section",Error,(FName)0x0);
  }
  else {
    this_00 = UMovieSceneSection::GetChannelProxy(local_res10);
    pUVar2 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    local_res20 = (FWeakObjectPtr)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneBoolChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneByteChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneFloatChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneDoubleChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneIntegerChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneStringChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneTextChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneEventChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneActorReferenceData::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneObjectPathChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
    pUVar3 = FMovieSceneParticleChannel::StaticStruct();
    FMovieSceneChannelProxy::FindEntry(this_00,(FName)pUVar3->_padding_);
  }
  if (param_3 != local_40) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  return;
}

// execGetAutoSizeEndFrame @ 14c6ac820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAutoSizeEndFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  code *pcVar3;
  FFrameRate FVar4;
  TRangeBound<FFrameNumber> this;
  bool bVar5;
  FFrameNumber FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined4 extraout_var;
  FFrameTime FVar9;
  wchar_t *pwVar10;
  TRange<FFrameNumber> local_res10;
  undefined8 local_res20;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  char local_28;
  char local_20;
  
  local_res10.UpperBound.Type.Value = '\0';
  local_res10.UpperBound._1_3_ = 0;
  local_res10.UpperBound.Value.Value = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10.UpperBound,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10.UpperBound);
  }
  this = local_res10.UpperBound;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10.UpperBound == (TRangeBound<FFrameNumber>)0x0) {
    local_res20 = 0;
    pwVar10 = L"Cannot call GetAutoSizeEndFrame on a null section";
  }
  else {
    (**(code **)(*(longlong *)local_res10.UpperBound + 0x2e0))(local_res10.UpperBound,local_30);
    if ((local_20 != '\0') && (local_28 != '\x02')) {
      pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
      if (pUVar8 != (UObject *)0x0) {
        FVar2.Numerator = *(int *)&pUVar8[7].field_0x20;
        FVar2.Denominator = *(int *)&pUVar8[7].field_0x24;
        if (local_20 == '\0') {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar6 = UE::MovieScene::DiscreteExclusiveUpper(&local_res10);
        FVar4.Denominator = 0;
        FVar4.Numerator = *(uint *)CONCAT44(extraout_var,FVar6.Value);
        FVar9 = ConvertFrameTime((FFrameTime)local_38,FVar4,FVar2);
        *(undefined4 *)param_3 = *(undefined4 *)FVar9;
        return;
      }
      goto LAB_14c6ac97f;
    }
    pwVar10 = L"Section does not have an AutoSize end frame";
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
LAB_14c6ac97f:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetAutoSizeEndFrameSeconds @ 14c6ac9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAutoSizeEndFrameSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FFrameRate FVar3;
  code *pcVar4;
  FFrameRate FVar5;
  TRangeBound<FFrameNumber> this;
  bool bVar6;
  FFrameNumber FVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  undefined4 extraout_var;
  FFrameTime FVar10;
  wchar_t *pwVar11;
  int iVar12;
  TRange<FFrameNumber> local_res10;
  undefined8 local_res20;
  float fStack_44;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  char local_30;
  char local_28;
  
  local_res10.UpperBound.Type.Value = '\0';
  local_res10.UpperBound._1_3_ = 0;
  local_res10.UpperBound.Value.Value = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10.UpperBound,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10.UpperBound);
  }
  this = local_res10.UpperBound;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10.UpperBound == (TRangeBound<FFrameNumber>)0x0) {
    local_res20 = 0;
    pwVar11 = L"Cannot call GetAutoSizeEndFrameSeconds on a null section";
  }
  else {
    (**(code **)(*(longlong *)local_res10.UpperBound + 0x2e0))(local_res10.UpperBound,local_38);
    if ((local_28 != '\0') && (local_30 != '\x02')) {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      if (pUVar9 != (UObject *)0x0) {
        uVar2 = *(undefined8 *)(pUVar9 + 8);
        FVar3.Numerator = *(int *)&pUVar9[7].field_0x20;
        FVar3.Denominator = *(int *)&pUVar9[7].field_0x24;
        if (local_28 == '\0') {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar7 = UE::MovieScene::DiscreteExclusiveUpper(&local_res10);
        FVar5.Denominator = 0;
        FVar5.Numerator = *(uint *)CONCAT44(extraout_var,FVar7.Value);
        FVar10 = ConvertFrameTime((FFrameTime)local_40,FVar5,FVar3);
        iVar12 = (int)((ulonglong)uVar2 >> 0x20);
        fStack_44 = (float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
        *(float *)param_3 =
             ((float)iVar12 * fStack_44 +
             (float)((longlong)iVar12 * (longlong)(int)*(undefined8 *)FVar10)) / (float)(int)uVar2;
        return;
      }
      goto LAB_14c6acb5c;
    }
    pwVar11 = L"Section does not have an AutoSize end frame";
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
LAB_14c6acb5c:
  *(undefined4 *)param_3 = __real_bf800000;
  return;
}

// execGetAutoSizeHasEndFrame @ 14c6acb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAutoSizeHasEndFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10;
  longlong *local_res18;
  undefined1 local_28 [8];
  char local_20;
  char local_18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetAutoSizeHasEndFrame on a null section",Error,(FName)0x0);
  }
  else {
    (**(code **)(*local_res10 + 0x2e0))(local_res10,local_28);
    if ((local_18 != '\0') && (local_20 != '\x02')) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetAutoSizeHasStartFrame @ 14c6acc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAutoSizeHasStartFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *local_res10;
  longlong *local_res18;
  char local_28 [16];
  char local_18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetAutoSizeHasStartFrame on a null section",Error,(FName)0x0);
  }
  else {
    (**(code **)(*local_res10 + 0x2e0))(local_res10,local_28);
    if ((local_18 != '\0') && (local_28[0] != '\x02')) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetAutoSizeStartFrame @ 14c6acd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAutoSizeStartFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  code *pcVar3;
  FFrameRate FVar4;
  TRangeBound<FFrameNumber> this;
  bool bVar5;
  FFrameNumber FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined4 extraout_var;
  FFrameTime FVar9;
  wchar_t *pwVar10;
  TRange<FFrameNumber> local_res10;
  undefined8 local_res20;
  undefined1 local_38 [8];
  char local_30 [16];
  char local_20;
  
  local_res10.UpperBound.Type.Value = '\0';
  local_res10.UpperBound._1_3_ = 0;
  local_res10.UpperBound.Value.Value = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10.UpperBound,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10.UpperBound);
  }
  this = local_res10.UpperBound;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10.UpperBound == (TRangeBound<FFrameNumber>)0x0) {
    local_res20 = 0;
    pwVar10 = L"Cannot call GetAutoSizeStartFrame on a null section";
  }
  else {
    (**(code **)(*(longlong *)local_res10.UpperBound + 0x2e0))(local_res10.UpperBound,local_30);
    if ((local_20 != '\0') && (local_30[0] != '\x02')) {
      pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar8 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
      if (pUVar8 != (UObject *)0x0) {
        FVar2.Numerator = *(int *)&pUVar8[7].field_0x20;
        FVar2.Denominator = *(int *)&pUVar8[7].field_0x24;
        if (local_20 == '\0') {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FVar6 = UE::MovieScene::DiscreteInclusiveLower(&local_res10);
        FVar4.Denominator = 0;
        FVar4.Numerator = *(uint *)CONCAT44(extraout_var,FVar6.Value);
        FVar9 = ConvertFrameTime((FFrameTime)local_38,FVar4,FVar2);
        *(undefined4 *)param_3 = *(undefined4 *)FVar9;
        return;
      }
      goto LAB_14c6ace7f;
    }
    pwVar10 = L"Section does not have an AutoSize start frame";
  }
  FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
LAB_14c6ace7f:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetAutoSizeStartFrameSeconds @ 14c6acea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetAutoSizeStartFrameSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FFrameRate FVar3;
  code *pcVar4;
  FFrameRate FVar5;
  TRangeBound<FFrameNumber> this;
  bool bVar6;
  FFrameNumber FVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  undefined4 extraout_var;
  FFrameTime FVar10;
  wchar_t *pwVar11;
  int iVar12;
  TRange<FFrameNumber> local_res10;
  undefined8 local_res20;
  float fStack_44;
  undefined1 local_40 [8];
  char local_38 [16];
  char local_28;
  
  local_res10.UpperBound.Type.Value = '\0';
  local_res10.UpperBound._1_3_ = 0;
  local_res10.UpperBound.Value.Value = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10.UpperBound,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10.UpperBound);
  }
  this = local_res10.UpperBound;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10.UpperBound == (TRangeBound<FFrameNumber>)0x0) {
    local_res20 = 0;
    pwVar11 = L"Cannot call GetAutoSizeStartFrameSeconds on a null section";
  }
  else {
    (**(code **)(*(longlong *)local_res10.UpperBound + 0x2e0))(local_res10.UpperBound,local_38);
    if ((local_28 != '\0') && (local_38[0] != '\x02')) {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
      if (pUVar9 != (UObject *)0x0) {
        uVar2 = *(undefined8 *)(pUVar9 + 8);
        FVar3.Numerator = *(int *)&pUVar9[7].field_0x20;
        FVar3.Denominator = *(int *)&pUVar9[7].field_0x24;
        if (local_28 == '\0') {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar7 = UE::MovieScene::DiscreteInclusiveLower(&local_res10);
        FVar5.Denominator = 0;
        FVar5.Numerator = *(uint *)CONCAT44(extraout_var,FVar7.Value);
        FVar10 = ConvertFrameTime((FFrameTime)local_40,FVar5,FVar3);
        iVar12 = (int)((ulonglong)uVar2 >> 0x20);
        fStack_44 = (float)((ulonglong)*(undefined8 *)FVar10 >> 0x20);
        *(float *)param_3 =
             ((float)iVar12 * fStack_44 +
             (float)((longlong)iVar12 * (longlong)(int)*(undefined8 *)FVar10)) / (float)(int)uVar2;
        return;
      }
      goto LAB_14c6ad05c;
    }
    pwVar11 = L"Section does not have an AutoSize start frame";
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
LAB_14c6ad05c:
  *(undefined4 *)param_3 = __real_bf800000;
  return;
}

// execGetChannel @ 14c6ad500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FFrame::KismetExecutionMessage(L"Could not find channel",Error,(FName)0x0);
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetChannelsByType @ 14c6ad5d0

void __cdecl
UMovieSceneSectionExtensions::execGetChannelsByType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> *pTVar2;
  UObject *local_res10;
  UMovieSceneSection *local_res18;
  UObject *local_res20;
  TArray<UMovieSceneScriptingChannel_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res18 = (UMovieSceneSection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pTVar2 = GetChannelsByType(&local_28,local_res18,
                             (TSubclassOf<UMovieSceneScriptingChannel>)&local_res20);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetEndFrame @ 14c6ae5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetEndFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FFrameRate FVar3;
  code *pcVar4;
  int iVar5;
  FFrameRate FVar6;
  UObjectBaseUtility *this;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FFrameTime FVar10;
  wchar_t *pwVar11;
  char cVar12;
  longlong lVar13;
  UObjectBaseUtility *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  lVar13 = 0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    local_res18 = 0;
    pwVar11 = L"Cannot call GetEndFrame on a null section";
  }
  else {
    if (local_res10[4].field_0x18 != '\x02') {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter(this,pUVar8);
      if (pUVar9 != (UObject *)0x0) {
        FVar3.Numerator = *(int *)&pUVar9[7].field_0x20;
        FVar3.Denominator = *(int *)&pUVar9[7].field_0x24;
        local_50 = *(undefined4 *)&this[4].field_0x10;
        uStack_4c = *(undefined4 *)&this[4].field_0x14;
        uStack_48 = *(undefined4 *)&this[4].field_0x18;
        iVar5 = *(int *)&this[4].field_0x1c;
        cVar12 = (char)uStack_48;
        iStack_44 = iVar5;
        if (cVar12 == '\x02') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (cVar12 == '\x01') {
          lVar13 = 4;
        }
        iVar1 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar13);
        if (cVar12 == '\x02') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar6.Denominator = 0;
        FVar6.Numerator = iVar5 + iVar1;
        FVar10 = ConvertFrameTime((FFrameTime)&local_50,FVar6,FVar3);
        *(undefined4 *)param_3 = *(undefined4 *)FVar10;
        return;
      }
      goto LAB_14c6ae683;
    }
    local_res20 = 0;
    pwVar11 = L"Section does not have an end frame";
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
LAB_14c6ae683:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetEndFrameSeconds @ 14c6ae7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetEndFrameSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FFrameRate FVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  FFrameRate FVar7;
  UObjectBaseUtility *this;
  bool bVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FFrameTime FVar11;
  wchar_t *pwVar12;
  char cVar13;
  longlong lVar14;
  UObjectBaseUtility *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int iStack_5c;
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  lVar14 = 0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    local_res18 = 0;
    pwVar12 = L"Cannot call GetEndFrameSeconds on a null section";
  }
  else {
    if (local_res10[4].field_0x18 != '\x02') {
      pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar10 = UObjectBaseUtility::GetTypedOuter(this,pUVar9);
      if (pUVar10 != (UObject *)0x0) {
        FVar3.Numerator = *(int *)&pUVar10[7].field_0x20;
        FVar3.Denominator = *(int *)&pUVar10[7].field_0x24;
        uVar4 = *(undefined8 *)(pUVar10 + 8);
        local_50 = *(undefined4 *)&this[4].field_0x10;
        uStack_4c = *(undefined4 *)&this[4].field_0x14;
        uStack_48 = *(undefined4 *)&this[4].field_0x18;
        iVar6 = *(int *)&this[4].field_0x1c;
        cVar13 = (char)uStack_48;
        iStack_44 = iVar6;
        if (cVar13 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (cVar13 == '\x01') {
          lVar14 = 4;
        }
        iVar1 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar14);
        if (cVar13 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FVar7.Denominator = 0;
        FVar7.Numerator = iVar6 + iVar1;
        FVar11 = ConvertFrameTime((FFrameTime)&local_50,FVar7,FVar3);
        iStack_5c = (int)((ulonglong)uVar4 >> 0x20);
        fStack_54 = (float)((ulonglong)*(undefined8 *)FVar11 >> 0x20);
        *(float *)param_3 =
             ((float)((longlong)(int)*(undefined8 *)FVar11 * (longlong)iStack_5c) +
             (float)iStack_5c * fStack_54) / (float)(int)uVar4;
        return;
      }
      goto LAB_14c6ae843;
    }
    local_res20 = 0;
    pwVar12 = L"Section does not have an end frame";
  }
  FFrame::KismetExecutionMessage(pwVar12,Error,(FName)0x0);
LAB_14c6ae843:
  *(undefined4 *)param_3 = __real_bf800000;
  return;
}

// execGetParentSequenceFrame @ 14c6afec0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetParentSequenceFrame
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  undefined8 uVar3;
  code *pcVar4;
  FFrameRate FVar5;
  UMovieSceneSequence *pUVar6;
  UMovieSceneSubSection *this;
  bool bVar7;
  uint uVar8;
  UMovieSceneSequence *pUVar9;
  longlong lVar10;
  FMovieSceneSequenceTransform *this_00;
  FMovieSceneInverseSequenceTransform *this_01;
  FFrameTime FVar11;
  FString *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res10 [2];
  FFrameTime local_res18;
  UMovieSceneSequence *local_res20;
  UMovieSceneSubSection *local_d8;
  TArray<UMovieSceneSubSection_*,TSizedDefaultAllocator<32>_> local_d0;
  uint local_c0;
  undefined4 uStack_bc;
  TOptional<FFrameTime> local_b8;
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  FMovieSceneSequenceTransform local_80;
  FMovieSceneInverseSequenceTransform local_60;
  
  uVar14 = 0;
  local_res10[0] = 0;
  local_d8 = (UMovieSceneSubSection *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UMovieSceneSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_d8;
  pUVar6 = local_res20;
  uVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_d8 == (UMovieSceneSubSection *)0x0) || (local_res20 == (UMovieSceneSequence *)0x0)) {
    if (1 < (byte)LogMovieScene._0_1_) {
      if (local_res20 != (UMovieSceneSequence *)0x0) {
        pFVar12 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)local_res20,&local_90,(UObject *)0x0,None);
        if ((pFVar12->Data).ArrayNum == 0) {
          uVar14 = 1;
        }
        else {
          uVar14 = 1;
        }
      }
      if (this != (UMovieSceneSubSection *)0x0) {
        uVar14 = (ulonglong)((uint)uVar14 | 2);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_a0,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (((uVar14 & 2) != 0) &&
         (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffd),
         local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (((uVar14 & 1) != 0) &&
         (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    *(uint *)param_3 = uVar8;
  }
  else {
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    GetSubSectionChain(local_d8,local_res20,&local_d0);
    pUVar9 = UMovieSceneSubSection::GetSequence(this);
    lVar10 = (**(code **)(pUVar9->_padding_ + 0x2f8))(pUVar9);
    FVar2 = *(FFrameRate *)(lVar10 + 0x140);
    pUVar9 = UMovieSceneSubSection::GetSequence(this);
    (**(code **)(pUVar9->_padding_ + 0x2f8))(pUVar9);
    local_c0 = uVar8;
    uStack_bc = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = uVar8;
    ConvertFrameTime((FFrameTime)&local_res18,FVar5,FVar2);
    uVar15 = uVar14;
    if (0 < local_d0.ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar8 = 0;
        if ((int)uVar13 < local_d0.ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = UMovieSceneSubSection::OuterToInnerTransform
                            (*(UMovieSceneSubSection **)(local_d0.AllocatorInstance.Data + uVar15),
                             &local_80);
        this_01 = FMovieSceneSequenceTransform::Inverse(this_00,&local_60);
        FMovieSceneInverseSequenceTransform::TryTransformTime(this_01,&local_b8,local_res18);
        if (local_60.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.NestedTransforms.AllocatorInstance.Data);
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_80.NestedTransforms.AllocatorInstance.Data,
                   local_80.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)local_80.NestedTransforms.AllocatorInstance.Data
            != (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_80.NestedTransforms.AllocatorInstance.Data);
        }
        if (local_b8.bIsSet != false) {
          local_res18 = local_b8.TypedValue;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar13 + 1) < local_d0.ArrayNum);
    }
    (**(code **)(pUVar6->_padding_ + 0x2f8))(pUVar6);
    lVar10 = (**(code **)(pUVar6->_padding_ + 0x2f8))(pUVar6);
    FVar11 = ConvertFrameTime((FFrameTime)local_a8,(FFrameRate)local_res18,
                              *(FFrameRate *)(lVar10 + 0x138));
    uVar3 = *(undefined8 *)FVar11;
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    *(int *)param_3 = (int)uVar3;
  }
  return;
}

// execGetStartFrame @ 14c6b1f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetStartFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FFrameRate FVar3;
  code *pcVar4;
  int iVar5;
  FFrameRate FVar6;
  UObjectBaseUtility *this;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FFrameTime FVar10;
  wchar_t *pwVar11;
  char cVar12;
  longlong lVar13;
  UObjectBaseUtility *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar13 = 0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    local_res18 = 0;
    pwVar11 = L"Cannot call GetStartFrame on a null section";
  }
  else {
    if (local_res10[4].field_0x10 != '\x02') {
      pUVar8 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar9 = UObjectBaseUtility::GetTypedOuter(this,pUVar8);
      if (pUVar9 != (UObject *)0x0) {
        FVar3.Numerator = *(int *)&pUVar9[7].field_0x20;
        FVar3.Denominator = *(int *)&pUVar9[7].field_0x24;
        local_50 = *(undefined4 *)&this[4].field_0x10;
        iVar5 = *(int *)&this[4].field_0x14;
        uStack_48 = *(undefined4 *)&this[4].field_0x18;
        uStack_44 = *(undefined4 *)&this[4].field_0x1c;
        cVar12 = (char)local_50;
        iStack_4c = iVar5;
        if (cVar12 == '\x02') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (cVar12 == '\0') {
          lVar13 = 4;
        }
        iVar1 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar13);
        if (cVar12 == '\x02') {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar6.Denominator = 0;
        FVar6.Numerator = iVar5 + iVar1;
        FVar10 = ConvertFrameTime((FFrameTime)&local_50,FVar6,FVar3);
        *(undefined4 *)param_3 = *(undefined4 *)FVar10;
        return;
      }
      goto LAB_14c6b2003;
    }
    local_res20 = 0;
    pwVar11 = L"Section does not have a start frame";
  }
  FFrame::KismetExecutionMessage(pwVar11,Error,(FName)0x0);
LAB_14c6b2003:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetStartFrameSeconds @ 14c6b2130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execGetStartFrameSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FFrameRate FVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  FFrameRate FVar7;
  UObjectBaseUtility *this;
  bool bVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FFrameTime FVar11;
  wchar_t *pwVar12;
  char cVar13;
  longlong lVar14;
  UObjectBaseUtility *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int iStack_5c;
  float fStack_54;
  undefined4 local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar14 = 0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObjectBaseUtility *)0x0) {
    local_res18 = 0;
    pwVar12 = L"Cannot call GetStartFrameSeconds on a null section";
  }
  else {
    if (local_res10[4].field_0x10 != '\x02') {
      pUVar9 = Z_Construct_UClass_UMovieScene_NoRegister();
      pUVar10 = UObjectBaseUtility::GetTypedOuter(this,pUVar9);
      if (pUVar10 != (UObject *)0x0) {
        FVar3.Numerator = *(int *)&pUVar10[7].field_0x20;
        FVar3.Denominator = *(int *)&pUVar10[7].field_0x24;
        uVar4 = *(undefined8 *)(pUVar10 + 8);
        local_50 = *(undefined4 *)&this[4].field_0x10;
        iVar6 = *(int *)&this[4].field_0x14;
        uStack_48 = *(undefined4 *)&this[4].field_0x18;
        uStack_44 = *(undefined4 *)&this[4].field_0x1c;
        cVar13 = (char)local_50;
        iStack_4c = iVar6;
        if (cVar13 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (cVar13 == '\0') {
          lVar14 = 4;
        }
        iVar1 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar14);
        if (cVar13 == '\x02') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FVar7.Denominator = 0;
        FVar7.Numerator = iVar6 + iVar1;
        FVar11 = ConvertFrameTime((FFrameTime)&local_50,FVar7,FVar3);
        iStack_5c = (int)((ulonglong)uVar4 >> 0x20);
        fStack_54 = (float)((ulonglong)*(undefined8 *)FVar11 >> 0x20);
        *(float *)param_3 =
             ((float)((longlong)(int)*(undefined8 *)FVar11 * (longlong)iStack_5c) +
             (float)iStack_5c * fStack_54) / (float)(int)uVar4;
        return;
      }
      goto LAB_14c6b21c3;
    }
    local_res20 = 0;
    pwVar12 = L"Section does not have a start frame";
  }
  FFrame::KismetExecutionMessage(pwVar12,Error,(FName)0x0);
LAB_14c6b21c3:
  *(undefined4 *)param_3 = __real_bf800000;
  return;
}

// execHasEndFrame @ 14c6b3530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execHasEndFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  longlong local_res18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call HasEndFrame on a null section",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(bool *)param_3 = *(char *)(local_res10 + 0xb8) != '\x02';
  return;
}

// execHasStartFrame @ 14c6b35f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execHasStartFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
  longlong local_res18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    local_res18 = local_res10;
    FFrame::KismetExecutionMessage(L"Cannot call HasStartFrame on a null section",Error,(FName)0x0);
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(bool *)param_3 = *(char *)(local_res10 + 0xb0) != '\x02';
  return;
}

// execSetEndFrame @ 14c6b61f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetEndFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  code *pcVar3;
  UObjectBaseUtility *this;
  UClass *pUVar4;
  UObject *pUVar5;
  FFrameTime FVar6;
  uint local_res10 [4];
  UObjectBaseUtility *local_res20;
  FFrameRate local_28;
  undefined1 local_20 [8];
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  local_28.Numerator = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetEndFrame on a null section",Error,(FName)0x0);
    return;
  }
  pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter(this,pUVar4);
  if (pUVar5 != (UObject *)0x0) {
    FVar2.Numerator = *(int *)&pUVar5[8].field_0x0;
    FVar2.Denominator = *(int *)&pUVar5[8].field_0x4;
    pcVar3 = *(code **)(*(longlong *)this + 0x2d8);
    local_28.Denominator = 0;
    FVar6 = ConvertFrameTime((FFrameTime)local_20,local_28,FVar2);
    local_28 = (FFrameRate)
               ((ulonglong)CONCAT43(*(undefined4 *)FVar6,(int3)((uint)local_28.Numerator >> 8)) << 8
               );
    (*pcVar3)(this,local_28);
  }
  return;
}

// execSetEndFrameBounded @ 14c6b6330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetEndFrameBounded(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  UObject *pUVar3;
  ulonglong uVar4;
  bool bVar5;
  int local_res10 [2];
  UObjectBaseUtility *local_res20;
  undefined4 local_40;
  uint local_38;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  bVar5 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetEndFrameBounded on a null section",Error,(FName)0x0);
    return;
  }
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter(this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    if (bVar5) {
      local_38 = CONCAT31(local_38._1_3_,2);
      uVar4 = (ulonglong)local_38;
    }
    else {
      if ((char)*(undefined8 *)&pUVar3[7].field_0x18 != '\x02') {
        uStack_24 = (undefined4)((ulonglong)*(undefined8 *)&pUVar3[7].field_0x18 >> 0x20);
      }
      local_40 = CONCAT31(local_40._1_3_,1);
      uVar4 = CONCAT44(uStack_24,local_40);
    }
    *(ulonglong *)&this[4].field_0x18 = uVar4;
  }
  return;
}

// execSetEndFrameSeconds @ 14c6b64a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetEndFrameSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float local_res10 [4];
  UObjectBaseUtility *local_res20;
  undefined8 local_38;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  fVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetEndFrameSeconds on a null section",Error,(FName)0x0);
    return;
  }
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter(this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    dVar7 = ((double)(int)*(undefined8 *)&pUVar3[7].field_0x20 * (double)fVar8) /
            (double)(int)((ulonglong)*(undefined8 *)&pUVar3[7].field_0x20 >> 0x20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7;
    auVar6 = roundpd(in_XMM2,auVar6,1);
    dVar5 = auVar6._0_8_;
    dVar7 = dVar7 - dVar5;
    if (__real_41dfffffffc00000 <= dVar5) {
      dVar5 = __real_41dfffffffc00000;
    }
    if (dVar5 <= __real_c1e0000000000000) {
      dVar5 = __real_c1e0000000000000;
    }
    iVar4 = (int)dVar7;
    fVar8 = (float)dVar7 - (float)iVar4;
    if ((0.0 < fVar8) && (::FFrameTime::MaxSubframe <= fVar8)) {
      fVar8 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar8) {
      fVar8 = ::FFrameTime::MaxSubframe;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    iVar4 = (int)dVar5 + iVar4;
    if (__real_3f000000 <= fVar8) {
      iVar4 = iVar4 + 1;
    }
    local_38 = CONCAT44(iVar4,(undefined4)local_38);
    local_38 = local_38 & 0xffffffffffffff00;
    (**(code **)(*(longlong *)this + 0x2d8))(this,local_38);
  }
  return;
}

// execSetRange @ 14c6b8120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  uint uVar3;
  uint uVar4;
  UObjectBaseUtility *this;
  UClass *pUVar5;
  UObject *pUVar6;
  FFrameTime FVar7;
  uint local_res10 [4];
  uint local_res20 [2];
  UObjectBaseUtility *local_58;
  FFrameRate local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_58 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_58;
  uVar4 = local_res20[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 == (UObjectBaseUtility *)0x0) {
    local_50.Numerator = 0;
    local_50.Denominator = 0;
    FFrame::KismetExecutionMessage(L"Cannot call SetRange on a null section",Error,(FName)0x0);
    return;
  }
  pUVar5 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter(this,pUVar5);
  if (pUVar6 != (UObject *)0x0) {
    FVar2.Numerator = *(int *)&pUVar6[8].field_0x0;
    FVar2.Denominator = *(int *)&pUVar6[8].field_0x4;
    local_50.Denominator = 0;
    local_50.Numerator = uVar4;
    FVar7 = ConvertFrameTime((FFrameTime)local_48,local_50,FVar2);
    local_50.Numerator._0_1_ = 1;
    local_40._0_4_ = local_50.Numerator;
    local_50.Denominator = 0;
    local_50.Numerator = uVar3;
    local_40._4_4_ = *(undefined4 *)FVar7;
    FVar7 = ConvertFrameTime((FFrameTime)local_48,local_50,FVar2);
    local_50 = (FFrameRate)(CONCAT44(*(int *)FVar7,local_50.Numerator) & 0xffffffffffffff00);
    local_38._0_4_ = local_50.Numerator;
    local_38._4_4_ = local_50.Denominator;
    if (((char)local_40 == '\x02') || (local_40._4_4_ <= *(int *)FVar7)) {
      (**(code **)(*(longlong *)this + 0x2c8))(this,&local_40);
    }
    else {
      local_50.Numerator = 0;
      local_50.Denominator = 0;
      FFrame::KismetExecutionMessage(L"Invalid range specified",Error,(FName)0x0);
    }
  }
  return;
}

// execSetRangeSeconds @ 14c6b8340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetRangeSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined1 auVar3 [16];
  double dVar4;
  UObjectBaseUtility *this;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float local_res10 [4];
  float local_res20 [2];
  UObjectBaseUtility *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_88 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_88;
  fVar12 = local_res20[0];
  fVar13 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88 == (UObjectBaseUtility *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call SetRangeSeconds on a null section",Error,(FName)0x0);
  }
  else {
    pUVar7 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar8 = UObjectBaseUtility::GetTypedOuter(this,pUVar7);
    if (pUVar8 != (UObject *)0x0) {
      dVar4 = (double)(int)*(undefined8 *)&pUVar8[7].field_0x20;
      dVar11 = __real_3ff0000000000000 /
               (double)(int)((ulonglong)*(undefined8 *)&pUVar8[7].field_0x20 >> 0x20);
      dVar10 = (double)fVar12 * dVar4 * dVar11;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar10;
      auVar9 = roundpd(in_XMM2,auVar9,1);
      dVar10 = dVar10 - auVar9._0_8_;
      uVar15 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
      uVar14 = auVar9._0_4_;
      uVar17 = auVar9._4_4_;
      if (__real_41dfffffffc00000 <= auVar9._0_8_) {
        uVar14 = SUB84(__real_41dfffffffc00000,0);
        uVar17 = uVar15;
      }
      uVar16 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
      if ((double)CONCAT44(uVar17,uVar14) <= __real_c1e0000000000000) {
        uVar14 = SUB84(__real_c1e0000000000000,0);
        uVar17 = uVar16;
      }
      iVar5 = (int)dVar10;
      fVar12 = (float)dVar10 - (float)iVar5;
      if ((0.0 < fVar12) && (::FFrameTime::MaxSubframe <= fVar12)) {
        fVar12 = ::FFrameTime::MaxSubframe;
      }
      local_80 = CONCAT71(local_80._1_7_,1);
      iVar5 = (int)(double)CONCAT44(uVar17,uVar14) + iVar5;
      if (::FFrameTime::MaxSubframe <= fVar12) {
        fVar12 = ::FFrameTime::MaxSubframe;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      dVar11 = (double)fVar13 * dVar4 * dVar11;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar11;
      auVar9 = roundpd(auVar9,auVar3,1);
      if (__real_3f000000 <= fVar12) {
        iVar5 = iVar5 + 1;
      }
      dVar11 = dVar11 - auVar9._0_8_;
      local_80 = CONCAT44(iVar5,(undefined4)local_80);
      uVar14 = auVar9._0_4_;
      uVar17 = auVar9._4_4_;
      if (__real_41dfffffffc00000 <= auVar9._0_8_) {
        uVar14 = SUB84(__real_41dfffffffc00000,0);
        uVar17 = uVar15;
      }
      local_78 = local_80;
      if ((double)CONCAT44(uVar17,uVar14) <= __real_c1e0000000000000) {
        uVar14 = SUB84(__real_c1e0000000000000,0);
        uVar17 = uVar16;
      }
      iVar6 = (int)dVar11;
      fVar13 = (float)dVar11 - (float)iVar6;
      if ((0.0 < fVar13) && (::FFrameTime::MaxSubframe <= fVar13)) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar13) {
        fVar13 = ::FFrameTime::MaxSubframe;
      }
      local_80 = CONCAT71(local_80._1_7_,1);
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      iVar6 = (int)(double)CONCAT44(uVar17,uVar14) + iVar6;
      if (__real_3f000000 <= fVar13) {
        iVar6 = iVar6 + 1;
      }
      local_80 = CONCAT44(iVar6,(undefined4)local_80);
      local_70 = local_80;
      if (iVar6 < iVar5) {
        local_80 = 0;
        FFrame::KismetExecutionMessage(L"Invalid range specified",Error,(FName)0x0);
      }
      else {
        (**(code **)(*(longlong *)this + 0x2c8))(this,&local_78);
      }
    }
  }
  return;
}

// execSetStartFrame @ 14c6b8b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetStartFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  code *pcVar3;
  UObjectBaseUtility *this;
  UClass *pUVar4;
  UObject *pUVar5;
  FFrameTime FVar6;
  uint local_res10 [4];
  UObjectBaseUtility *local_res20;
  FFrameRate local_28;
  undefined1 local_20 [8];
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  local_28.Numerator = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    FFrame::KismetExecutionMessage(L"Cannot call SetStartFrame on a null section",Error,(FName)0x0);
    return;
  }
  pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar5 = UObjectBaseUtility::GetTypedOuter(this,pUVar4);
  if (pUVar5 != (UObject *)0x0) {
    FVar2.Numerator = *(int *)&pUVar5[8].field_0x0;
    FVar2.Denominator = *(int *)&pUVar5[8].field_0x4;
    pcVar3 = *(code **)(*(longlong *)this + 0x2d0);
    local_28.Denominator = 0;
    FVar6 = ConvertFrameTime((FFrameTime)local_20,local_28,FVar2);
    local_28.Denominator = 0;
    local_28.Numerator._1_3_ = (uint3)((uint)local_28.Numerator >> 8);
    local_28.Numerator._0_1_ = 1;
    local_28.Denominator = *(undefined4 *)FVar6;
    (*pcVar3)(this,local_28);
  }
  return;
}

// execSetStartFrameBounded @ 14c6b8c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetStartFrameBounded
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  UObjectBaseUtility *this;
  UClass *pUVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  bool bVar8;
  int local_res10 [2];
  UObjectBaseUtility *local_res20;
  undefined4 local_40;
  uint local_38;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  bVar8 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_UMovieScene_NoRegister();
    pUVar5 = UObjectBaseUtility::GetTypedOuter(this,pUVar4);
    if (pUVar5 != (UObject *)0x0) {
      if (bVar8) {
        local_38 = CONCAT31(local_38._1_3_,2);
        uVar6 = (ulonglong)local_38;
      }
      else {
        uVar3 = *(undefined4 *)&pUVar5[7].field_0x14;
        uVar7 = 0;
        if (((pUVar5[7].field_0x10 != '\x02') && (uVar7 = uVar3, pUVar5[7].field_0x10 == '\x02')) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Type != ERangeBoundTypes::Open",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                               ,99,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_40 = CONCAT31(local_40._1_3_,1);
        uVar6 = CONCAT44(uVar7,local_40);
      }
      *(ulonglong *)&this[4].field_0x10 = uVar6;
    }
    return;
  }
  FFrame::KismetExecutionMessage
            (L"Cannot call SetStartFrameBounded on a null section",Error,(FName)0x0);
  return;
}

// execSetStartFrameSeconds @ 14c6b8de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieSceneSectionExtensions::execSetStartFrameSeconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  UObject *pUVar3;
  int iVar4;
  double dVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float fVar8;
  float local_res10 [4];
  UObjectBaseUtility *local_res20;
  undefined8 local_38;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  fVar8 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObjectBaseUtility *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot call SetStartFrameSeconds on a null section",Error,(FName)0x0);
    return;
  }
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter(this,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    dVar7 = ((double)(int)*(undefined8 *)&pUVar3[7].field_0x20 * (double)fVar8) /
            (double)(int)((ulonglong)*(undefined8 *)&pUVar3[7].field_0x20 >> 0x20);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7;
    auVar6 = roundpd(in_XMM2,auVar6,1);
    dVar5 = auVar6._0_8_;
    dVar7 = dVar7 - dVar5;
    if (__real_41dfffffffc00000 <= dVar5) {
      dVar5 = __real_41dfffffffc00000;
    }
    if (dVar5 <= __real_c1e0000000000000) {
      dVar5 = __real_c1e0000000000000;
    }
    iVar4 = (int)dVar7;
    fVar8 = (float)dVar7 - (float)iVar4;
    if ((0.0 < fVar8) && (::FFrameTime::MaxSubframe <= fVar8)) {
      fVar8 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar8) {
      fVar8 = ::FFrameTime::MaxSubframe;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    iVar4 = (int)dVar5 + iVar4;
    if (__real_3f000000 <= fVar8) {
      iVar4 = iVar4 + 1;
    }
    local_38 = CONCAT44(iVar4,(undefined4)local_38);
    local_38 = CONCAT71(local_38._1_7_,1);
    (**(code **)(*(longlong *)this + 0x2d0))(this,local_38);
  }
  return;
}

