// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 143

// `dynamic_initializer_for_'AwayText'' @ 14144ece0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__AwayText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&AwayText,L"OnlinePresence",L"Away",L"Away");
  atexit(_dynamic_atexit_destructor_for__AwayText__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultPatchBufferSize'' @ 14144ed20

void __cdecl _dynamic_initializer_for__CVarDefaultPatchBufferSize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultPatchBufferSize,L"voice.DefaultPatchBufferSize",&DefaultPatchBufferSizeCVar
             ,L"Changes the amount of audio we buffer for VOIP patching, in samples.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultPatchBufferSize__);
  return;
}

// `dynamic_initializer_for_'CVarDefaultPatchGain'' @ 14144ed70

void __cdecl _dynamic_initializer_for__CVarDefaultPatchGain__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDefaultPatchGain,L"voice.DefaultPatchGain",&DefaultPatchGainCVar,
             L"Changes the default gain of audio patches, in linear gain.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarDefaultPatchGain__);
  return;
}

// `dynamic_initializer_for_'CVarMuteAudioEngineOutput'' @ 14144edc0

void __cdecl _dynamic_initializer_for__CVarMuteAudioEngineOutput__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMuteAudioEngineOutput,L"voice.MuteAudioEngineOutput",&MuteAudioEngineOutputCVar,
             L"When set to a nonzero value, the output for the audio engine will be muted..\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarMuteAudioEngineOutput__);
  return;
}

// `dynamic_initializer_for_'CVarResyncThreshold'' @ 14144ee10

void __cdecl _dynamic_initializer_for__CVarResyncThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarResyncThreshold,L"voice.playback.ResyncThreshold",&ResyncThresholdCVar,
             L"If the amount of audio we have buffered is greater than this value, we drop the oldest audio we have and sync to have voice.JitterDelay worth of buffered audio.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarResyncThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarShouldResync'' @ 14144ee60

void __cdecl _dynamic_initializer_for__CVarShouldResync__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarShouldResync,L"voice.playback.ShouldResync",&ShouldResyncCVar,
             L"If set to 1, we will resync VOIP audio once it\'s latency goes beyond voice.playback.ResyncThreshold.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarShouldResync__);
  return;
}

// `dynamic_initializer_for_'ChatText'' @ 14144eeb0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__ChatText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&ChatText,L"OnlinePresence",L"Chat",L"Chat");
  atexit(_dynamic_atexit_destructor_for__ChatText__);
  return;
}

// `dynamic_initializer_for_'DoNotDisturbText'' @ 14144eef0

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__DoNotDisturbText__(void)

{
  FText::AsLocalizable_Advanced_LocText
            (&DoNotDisturbText,L"OnlinePresence",L"DoNotDisturb",L"Do Not Disturb");
  atexit(_dynamic_atexit_destructor_for__DoNotDisturbText__);
  return;
}

// `dynamic_initializer_for_'NAME_Unset'' @ 14144ef30

void __cdecl _dynamic_initializer_for__NAME_Unset__(void)

{
  FName::FName(&NAME_Unset,L"UNSET");
  return;
}

// `dynamic_initializer_for_'OfflineText'' @ 14144ef50

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__OfflineText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&OfflineText,L"OnlinePresence",L"Offline",L"Offline");
  atexit(_dynamic_atexit_destructor_for__OfflineText__);
  return;
}

// `dynamic_initializer_for_'OnlineText'' @ 14144ef90

void __cdecl EOnlinePresenceState::_dynamic_initializer_for__OnlineText__(void)

{
  FText::AsLocalizable_Advanced_LocText(&OnlineText,L"OnlinePresence",L"Online",L"Online");
  atexit(_dynamic_atexit_destructor_for__OnlineText__);
  return;
}

// `dynamic_initializer_for_'TestAttributeList'' @ 14144efd0

void __cdecl _dynamic_initializer_for__TestAttributeList__(void)

{
  ForAnyElementType FVar1;
  int iVar2;
  FString local_38;
  FVariantData local_28;
  
  local_28.Type = Empty;
  local_28.CachedEstimatedMaxEscapedStringSize = 0;
  local_28.Value.AsInt64 = 0;
  local_28.Value._8_8_ = 0;
  FVariantData::SetValue(&local_28,0x200);
  FString::FString(&local_38,"INTValue");
  iVar2 = local_38.Data.ArrayNum;
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  TestAttributeList[0].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TestAttributeList[0].Name.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    TestAttributeList[0].Name.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)TestAttributeList,
               local_38.Data.ArrayNum,&TestAttributeList[0].Name.Data.ArrayMax);
    memcpy(TestAttributeList[0].Name.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  FVariantData::FVariantData(&TestAttributeList[0].Value,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVariantData::Empty(&local_28);
  local_28.Type = Empty;
  local_28.Value.AsInt64 = 0;
  local_28.Value._8_8_ = 0;
  local_28.CachedEstimatedMaxEscapedStringSize = 0;
  FVariantData::SetValue(&local_28,__real_44000000);
  FString::FString(&local_38,"FLOATValue");
  iVar2 = local_38.Data.ArrayNum;
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  TestAttributeList[1].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TestAttributeList[1].Name.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    TestAttributeList[1].Name.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)(TestAttributeList + 1),
               local_38.Data.ArrayNum,&TestAttributeList[1].Name.Data.ArrayMax);
    memcpy(TestAttributeList[1].Name.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  FVariantData::FVariantData(&TestAttributeList[1].Value,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVariantData::Empty(&local_28);
  local_28.Type = Empty;
  local_28.CachedEstimatedMaxEscapedStringSize = 0;
  local_28.Value.AsInt64 = 0;
  local_28.Value._8_8_ = 0;
  FVariantData::SetValue(&local_28,0x200);
  FString::FString(&local_38,"QWORDValue");
  iVar2 = local_38.Data.ArrayNum;
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  TestAttributeList[2].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TestAttributeList[2].Name.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    TestAttributeList[2].Name.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)(TestAttributeList + 2),
               local_38.Data.ArrayNum,&TestAttributeList[2].Name.Data.ArrayMax);
    memcpy(TestAttributeList[2].Name.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  FVariantData::FVariantData(&TestAttributeList[2].Value,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVariantData::Empty(&local_28);
  local_28.Type = Empty;
  local_28.Value.AsInt64 = 0;
  local_28.Value._8_8_ = 0;
  local_28.CachedEstimatedMaxEscapedStringSize = 0;
  FVariantData::SetValue(&local_28,__real_411f400000000000);
  FString::FString(&local_38,"DOUBLEValue");
  iVar2 = local_38.Data.ArrayNum;
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  TestAttributeList[3].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TestAttributeList[3].Name.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    TestAttributeList[3].Name.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)(TestAttributeList + 3),
               local_38.Data.ArrayNum,&TestAttributeList[3].Name.Data.ArrayMax);
    memcpy(TestAttributeList[3].Name.Data.AllocatorInstance.Data,FVar1.Data,(longlong)iVar2 * 2);
  }
  FVariantData::FVariantData(&TestAttributeList[3].Value,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVariantData::Empty(&local_28);
  local_28.Type = Empty;
  local_28.CachedEstimatedMaxEscapedStringSize = 0;
  local_28.Value.AsInt64 = 0;
  local_28.Value._8_8_ = 0;
  FVariantData::SetValue(&local_28,L"This Is A Test!");
  FString::FString(&local_38,"STRINGValue");
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  TestAttributeList[4].Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TestAttributeList[4].Name.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    TestAttributeList[4].Name.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)(TestAttributeList + 4),
               local_38.Data.ArrayNum,&TestAttributeList[4].Name.Data.ArrayMax);
    memcpy(TestAttributeList[4].Name.Data.AllocatorInstance.Data,FVar1.Data,
           (longlong)local_38.Data.ArrayNum * 2);
  }
  FVariantData::FVariantData(&TestAttributeList[4].Value,&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVariantData::Empty(&local_28);
  atexit(_dynamic_atexit_destructor_for__TestAttributeList__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h__Script_OnlineSubsystemUtils_2873168073'' @ 14144f3b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h__Script_OnlineSubsystemUtils_2873168073__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h__Script_OnlineSubsystemUtils_1303416737'' @ 14144f3f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h__Script_OnlineSubsystemUtils_1303416737__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OnlineSubsystemUtils",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_VoipListenerSynthComponent_h__Script_OnlineSubsystemUtils_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UTurnBasedBlueprintLibrary @ 14ecd4040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTurnBasedBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.OuterSingleton;
}

// NewProp_bIsMyTurn_SetBit @ 14ecd4080

void __cdecl
Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::NewProp_bIsMyTurn_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn @ 14ecd4090

UFunction * __cdecl Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetIsMyTurn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex @ 14ecd40d0

UFunction * __cdecl Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName @ 14ecd4110

UFunction * __cdecl Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject @ 14ecd4150

UFunction * __cdecl
Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UVoipListenerSynthComponent @ 14ecd4250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVoipListenerSynthComponent(void)

{
  if (Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton,
               &Z_Construct_UClass_UVoipListenerSynthComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVoipListenerSynthComponent.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14ecd4290

void __cdecl
Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling @ 14ecd42a0

UFunction * __cdecl Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVoipListenerSynthComponent_IsIdling_Statics::FuncParams);
  }
  return ReturnFunction;
}

// ConstructItems<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUniqueNetId_const_,1>,int> @ 14ecd5410

void __cdecl
ConstructItems<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUniqueNetId_const_,1>,int>
          (void *param_1,TSharedRef<FUniqueNetId_const_,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FUniqueNetId **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FSortedVoicePacketNode,int> @ 14ecd5630

void __cdecl DefaultConstructItems<FSortedVoicePacketNode,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined4 *)(lVar1 + 0x14) = 0xffffffff;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      lVar1 = lVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOnlineUserStatsPair<FOnlineStatUpdate>,int> @ 14ecd5830

void __cdecl
DestructItems<FOnlineUserStatsPair<FOnlineStatUpdate>,int>
          (FOnlineUserStatsPair<FOnlineStatUpdate> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Stats).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FOnlineStatUpdate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)puVar1[-9]);
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOnlineStatusUpdate,int> @ 14ecd58a0

void __cdecl DestructItems<FOnlineStatusUpdate,int>(FOnlineStatusUpdate *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->TaggedFriends;
    do {
      DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
                ((TSharedRef<FUniqueNetId_const_,1> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(void **)((longlong)(pTVar2 + -2) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -2) + 8));
      }
      if (*(void **)((longlong)(pTVar2 + -3) + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)(pTVar2 + -3) + 8));
      }
      pTVar2 = pTVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRemoteTalker,int> @ 14ecd5910

void __cdecl DestructItems<FRemoteTalker,int>(FRemoteTalker *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->TalkerId).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSortedVoicePacketNode,int> @ 14ecd5950

void __cdecl DestructItems<FSortedVoicePacketNode,int>(FSortedVoicePacketNode *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AudioBufferMem).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_>,int> @ 14ecd5990

void __cdecl
DestructItems<TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_>,int>
          (TUniquePtr<FVoiceEndpoint,TDefaultDelete<FVoiceEndpoint>_> *param_1,int param_2)

{
  FVoiceEndpoint *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FVoiceEndpoint *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FOnlineStoreCategory,int> @ 14ecd59d0

void __cdecl DestructItems<FOnlineStoreCategory,int>(FOnlineStoreCategory *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FText *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->Description;
    do {
      TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_>::
      ~TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_>
                ((TArray<FOnlineStoreCategory,TSizedDefaultAllocator<32>_> *)(pFVar3 + 1));
      pIVar1 = (pFVar3->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (((FOnlineStoreCategory *)(pFVar3 + -1))->Id).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = pFVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<USoundBase> @ 14ecd6970

FString * __cdecl
GetFullNameForCastLogError<USoundBase>(FString *__return_storage_ptr__,USoundBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<USoundWaveProcedural> @ 14ecd69a0

FString * __cdecl GetTypeName<USoundWaveProcedural>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_USoundWaveProcedural_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UTurnBasedBlueprintLibrary> @ 14ecd69e0

void __cdecl InternalConstructor<UTurnBasedBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UTurnBasedBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UVoipListenerSynthComponent> @ 14ecd6a10

void __cdecl InternalConstructor<UVoipListenerSynthComponent>(FObjectInitializer *param_1)

{
  USynthComponent *this;
  
  this = (USynthComponent *)param_1->Obj;
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UVoipListenerSynthComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UVoipListenerSynthComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UVoipListenerSynthComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
                    /* WARNING: Could not recover jumptable at 0x00014ecd6a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTurnBasedBlueprintLibrary> @ 14ecd6a90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTurnBasedBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTurnBasedBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTurnBasedBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVoipListenerSynthComponent> @ 14ecd6b40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVoipListenerSynthComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USynthComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVoipListenerSynthComponent::GetPrivateStaticClass();
  this = (USynthComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USynthComponent *)0x0) {
    USynthComponent::USynthComponent(this,param_1);
    this->_padding_ = (longlong)&UVoipListenerSynthComponent::_vftable__for__UObject__;
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UVoipListenerSynthComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UVoipListenerSynthComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1]._padding_,4000);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// TestLeaderboardRead @ 14ecd9ab0

TestLeaderboardRead * __thiscall
TestLeaderboardRead::TestLeaderboardRead
          (TestLeaderboardRead *this,FString *param_1,FString *param_2,
          TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
          *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  ForAnyElementType *pFVar4;
  ulonglong uVar5;
  int iVar6;
  code *pcVar7;
  ForAnyElementType _Src;
  undefined1 uVar8;
  TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
  *pTVar9;
  bool bVar10;
  TestLeaderboardRead *pTVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  FString *pFVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_c8 [8];
  TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  FString local_88;
  undefined1 local_78;
  TMap<FString,EOnlineKeyValuePairDataType::Type,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EOnlineKeyValuePairDataType::Type,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  puVar1 = &this->field_0x20;
  iVar18 = 0;
  *(undefined4 *)&this->field_0x2c = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  ::FString::operator=((FString *)this,param_1);
  ::FString::operator=((FString *)&this->field_0x10,param_2);
  iVar6 = *(int *)&param_3->field_0x28;
  puVar2 = &param_3->field_0x10;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = local_a0;
  if (iVar6 != 0) {
    puVar20 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar20 = (uint *)puVar2;
    }
    uVar17 = *puVar20;
    local_a0 = 0;
    iVar18 = 0;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      local_a0 = local_a0 + 0x20;
      iVar18 = iVar18 + 1;
      iStack_a4 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14ecd9b9d;
      uVar17 = puVar20[lVar13 + 1];
    }
    uStack_b4 = -uVar17 & uVar17;
    uVar5 = (ulonglong)uStack_b4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_90 = (int)lVar13;
    iStack_a4 = local_a0 + -1 + local_90;
    if (iVar6 < iStack_a4) {
      iStack_a4 = iVar6;
    }
  }
LAB_14ecd9b9d:
  uVar17 = *(uint *)&param_3->field_0x28;
  iStack_98 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_b4,iVar18);
  uStack_a8 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_a4;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_68._28_4_ = iStack_a4;
  TStack_68.BaseBitIndex = local_a0;
  uStack_48 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_3;
  iStack_b8 = iVar18;
  local_b0 = puVar2;
  iStack_9c = iStack_a4;
  local_70 = param_3;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar17 < 0) || (iVar6 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar11 = (TestLeaderboardRead *)(*pcVar7)();
    return pTVar11;
  }
  uVar12 = *(uint *)&param_3->field_0x28;
  if (uVar17 != uVar12) {
    puVar19 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar19 = puVar2;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14ecd9ca0;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_8c = (int)lVar13;
    uVar17 = local_8c + -1 + uVar16;
    if ((int)uVar12 < (int)uVar17) {
      uVar17 = uVar12;
    }
  }
LAB_14ecd9ca0:
  while( true ) {
    pTVar9 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_c8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,enum_EOnlineKeyValuePairDataType::Type>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (((TStack_68.CurrentBitIndex == uVar17) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == param_3))
    {
      return this;
    }
    pFVar15 = (FString *)(*(longlong *)pTVar9 + (longlong)TStack_68.CurrentBitIndex * 0x20);
    ::FString::FString(&local_88,pFVar15);
    local_78 = *(undefined1 *)&pFVar15[1].Data.AllocatorInstance.Data;
    uVar16 = *(uint *)&this->field_0x28;
    if (uVar16 == *(uint *)&this->field_0x2c) {
      uVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)puVar1,(int *)&this->field_0x2c);
    }
    *(uint *)&this->field_0x28 = uVar16 + 1;
    uVar12 = 0;
    if ((int)uVar16 < (int)(uVar16 + 1)) {
      uVar12 = ~uVar16 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    uVar8 = local_78;
    _Src.Data = local_88.Data.AllocatorInstance.Data;
    pFVar4 = (ForAnyElementType *)(*(longlong *)puVar1 + (longlong)(int)uVar16 * 0x18);
    if (pFVar4 != (ForAnyElementType *)0x0) {
      piVar3 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      lVar13 = (longlong)local_88.Data.ArrayNum;
      *(int *)&pFVar4[1].Data = local_88.Data.ArrayNum;
      if (local_88.Data.ArrayNum == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,pFVar4,local_88.Data.ArrayNum,piVar3);
        memcpy(pFVar4->Data,_Src.Data,lVar13 * 2);
      }
      *(undefined1 *)&pFVar4[2].Data = uVar8;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar7 = (code *)swi(3);
  pTVar11 = (TestLeaderboardRead *)(*pcVar7)();
  return pTVar11;
}

// TestLeaderboardWrite @ 14ecd9e20

TestLeaderboardWrite * __thiscall
TestLeaderboardWrite::TestLeaderboardWrite(TestLeaderboardWrite *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TestLeaderboardWrite *pTVar5;
  uint uVar6;
  FString *pFVar7;
  FString local_18;
  
  puVar1 = &this->field_0x78;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x34 = 0x80;
  *(undefined4 *)&this->field_0x38 = 0xffffffff;
  *(undefined4 *)&this->field_0x3c = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7TestLeaderboardWrite__6B_;
  *(undefined4 *)&this->field_0x74 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  uVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,(ForAnyElementType *)&this->field_0x68,(int *)&this->field_0x74);
  *(uint *)&this->field_0x70 = uVar4 + 1;
  uVar6 = 0;
  if ((int)uVar4 < (int)(uVar4 + 1)) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TestLeaderboardWrite *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (FString *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&this->field_0x68);
  if (pFVar7 != (FString *)0x0) {
    ::FString::FString(pFVar7,"TestLeaderboard");
  }
  pFVar7 = ::FString::FString(&local_18,"TestIntStat1");
  if ((FString *)puVar1 != pFVar7) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this->field_0x80 = (pFVar7->Data).ArrayNum;
    *(int *)&this->field_0x84 = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x58 = 2;
  return this;
}

// TestOnlineGameSettings @ 14ecd9f90

TestOnlineGameSettings * __thiscall
TestOnlineGameSettings::TestOnlineGameSettings
          (TestOnlineGameSettings *this,bool param_1,FOnlineSessionSettings *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  FName *pFVar7;
  FString *pFVar8;
  longlong *plVar9;
  FVariantData *pFVar10;
  undefined1 *puVar11;
  FVariantData *pFVar12;
  int iVar13;
  uint uVar14;
  FVariantData *pFVar15;
  uint *puVar16;
  FVariantData *pFVar17;
  FName local_res8;
  float local_res10 [2];
  undefined1 local_88 [12];
  uint uStack_7c;
  undefined1 *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  FOnlineKeyValuePairs<FName,FOnlineSessionSetting> *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  
  FOnlineSessionSettings::FOnlineSessionSettings((FOnlineSessionSettings *)this);
  *(undefined8 *)&this->field_0x8 = 10;
  *(undefined ***)this = &___7TestOnlineGameSettings__6B_;
  this->field_0x12 = param_1;
  pFVar17 = (FVariantData *)0x0;
  *(undefined2 *)&this->field_0x10 = 0x101;
  this->field_0x15 = 1;
  *(undefined2 *)&this->field_0x17 = 1;
  local_res10[0] = 7.00649e-45;
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING1");
  uVar14 = 0;
  FOnlineSessionSettings::Set<int>
            ((FOnlineSessionSettings *)this,*pFVar7,(int *)local_res10,ViaOnlineService,0);
  local_res10[0] = 5.0;
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING2");
  uVar5 = 1;
  FOnlineSessionSettings::Set<float>
            ((FOnlineSessionSettings *)this,*pFVar7,local_res10,ViaOnlineService,1);
  pFVar8 = ::FString::FString((FString *)local_88,L"Hello");
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING3");
  FOnlineSessionSettings::Set<FString>
            ((FOnlineSessionSettings *)this,*pFVar7,pFVar8,ViaOnlineService,2);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  pFVar8 = ::FString::FString((FString *)local_88,L"Test4");
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING4");
  FOnlineSessionSettings::Set<FString>((FOnlineSessionSettings *)this,*pFVar7,pFVar8,ViaPingOnly);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  pFVar8 = ::FString::FString((FString *)local_88,L"Test5");
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING5");
  FOnlineSessionSettings::Set<FString>((FOnlineSessionSettings *)this,*pFVar7,pFVar8,ViaPingOnly);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  pFVar8 = ::FString::FString((FString *)local_88,L"CustomData123");
  pFVar7 = ::FName::FName(&local_res8,L"CUSTOM");
  FOnlineSessionSettings::Set<FString>
            ((FOnlineSessionSettings *)this,*pFVar7,pFVar8,ViaOnlineService);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  local_88._0_8_ = &param_2->Settings;
  uVar2 = *(uint *)&(param_2->Settings).field_0x28;
  local_78 = &(param_2->Settings).field_0x10;
  local_40 = 0;
  pFVar12 = pFVar17;
  if (uVar2 != 0) {
    puVar16 = *(uint **)&(param_2->Settings).field_0x20;
    pFVar12 = (FVariantData *)(ulonglong)uVar2;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_78;
    }
    uVar6 = *puVar16;
    pFVar10 = pFVar17;
    pFVar15 = pFVar17;
    local_40 = 0;
    uVar14 = 0;
    while (uVar6 == 0) {
      iVar13 = (int)pFVar10;
      local_40 = (int)pFVar15 + 0x20;
      pFVar15 = (FVariantData *)(ulonglong)local_40;
      uVar14 = iVar13 + 1;
      pFVar10 = (FVariantData *)(ulonglong)uVar14;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14ecda1db;
      uVar6 = puVar16[(longlong)iVar13 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar6 = (local_40 - 1) + (int)lVar4;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
    pFVar12 = (FVariantData *)(ulonglong)uVar6;
  }
LAB_14ecda1db:
  uStack_48 = 0xffffffff;
  uStack_44 = (uint)pFVar12;
  uStack_3c = uStack_6c;
  uStack_7c = uVar5;
  local_88._8_4_ = uVar14;
  uStack_70 = 0xffffffff;
  local_68 = CONCAT44(uStack_6c,local_40);
  local_60 = (FOnlineKeyValuePairs<FName,FOnlineSessionSetting> *)local_88._0_8_;
  uStack_58 = uVar14;
  uStack_54 = uVar5;
  local_50 = local_78;
  uStack_6c = uStack_44;
  if ((int)uStack_44 < (int)uVar2) {
    do {
      lVar4 = *(longlong *)local_88._0_8_;
      lVar3 = *(longlong *)((longlong)(int)pFVar12 * 0x38 + lVar4);
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (*(int *)&this->field_0x40 != *(int *)&this->field_0x6c) {
        puVar11 = &this->field_0x70;
        if (*(undefined1 **)&this->field_0x78 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&this->field_0x78;
        }
        iVar13 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&this->field_0x80 - 1U & (int)((ulonglong)lVar3 >> 0x20) + uVar14)
                         * 4);
        if (iVar13 != -1) {
          do {
            plVar9 = (longlong *)((longlong)iVar13 * 0x38 + *(longlong *)&this->field_0x38);
            if (*plVar9 == lVar3) {
              pFVar10 = (FVariantData *)(plVar9 + 1);
              if (plVar9 == (longlong *)0x0) {
                pFVar10 = pFVar17;
              }
              if (pFVar10 != (FVariantData *)0x0) {
                FVariantData::operator=
                          (pFVar10,(FVariantData *)((longlong)(int)pFVar12 * 0x38 + lVar4 + 8));
              }
              break;
            }
            iVar13 = (int)plVar9[6];
          } while (iVar13 != -1);
        }
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
      pFVar12 = (FVariantData *)(ulonglong)uStack_6c;
    } while ((int)uStack_6c < *(int *)(local_78 + 0x18));
  }
  return this;
}

// TestOnlineSearchSettings @ 14ecda310

TestOnlineSearchSettings * __thiscall
TestOnlineSearchSettings::TestOnlineSearchSettings
          (TestOnlineSearchSettings *this,bool param_1,FOnlineSessionSettings *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  FName *pFVar7;
  FString *pFVar8;
  longlong *plVar9;
  FVariantData *pFVar10;
  undefined1 *puVar11;
  FVariantData *pFVar12;
  int iVar13;
  uint uVar14;
  FVariantData *pFVar15;
  uint *puVar16;
  FVariantData *pFVar17;
  FName local_res8;
  float local_res10 [2];
  undefined1 local_88 [12];
  uint uStack_7c;
  undefined1 *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  FOnlineKeyValuePairs<FName,FOnlineSessionSetting> *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  
  pFVar17 = (FVariantData *)0x0;
  local_res10[0] = 7.00649e-45;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)&this->field_0x20 = &___7FOnlineSearchSettings__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  uVar14 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0x80;
  *(undefined4 *)&this->field_0x58 = 0xffffffff;
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  this->field_0x78 = param_1;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined ***)this = &___7TestOnlineSearchSettings__6B_;
  *(undefined4 *)&this->field_0x1c = 10;
  *(undefined4 *)&this->field_0x7c = 0x32;
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING1");
  FOnlineSearchSettings::Set<int>
            ((FOnlineSearchSettings *)&this->field_0x20,*pFVar7,(int *)local_res10,Equals,0);
  local_res10[0] = 5.0;
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING2");
  uVar5 = 1;
  FOnlineSearchSettings::Set<float>
            ((FOnlineSearchSettings *)&this->field_0x20,*pFVar7,local_res10,Equals,1);
  pFVar8 = ::FString::FString((FString *)local_88,L"Hello");
  pFVar7 = ::FName::FName(&local_res8,L"TESTSETTING3");
  FOnlineSearchSettings::Set<FString>
            ((FOnlineSearchSettings *)&this->field_0x20,*pFVar7,pFVar8,Equals,2);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  local_88._0_8_ = &param_2->Settings;
  uVar2 = *(uint *)&(param_2->Settings).field_0x28;
  local_78 = &(param_2->Settings).field_0x10;
  local_40 = 0;
  pFVar12 = pFVar17;
  if (uVar2 != 0) {
    puVar16 = *(uint **)&(param_2->Settings).field_0x20;
    pFVar12 = (FVariantData *)(ulonglong)uVar2;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)local_78;
    }
    uVar6 = *puVar16;
    pFVar10 = pFVar17;
    pFVar15 = pFVar17;
    local_40 = 0;
    uVar14 = 0;
    while (uVar6 == 0) {
      iVar13 = (int)pFVar10;
      local_40 = (int)pFVar15 + 0x20;
      pFVar15 = (FVariantData *)(ulonglong)local_40;
      uVar14 = iVar13 + 1;
      pFVar10 = (FVariantData *)(ulonglong)uVar14;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14ecda4ca;
      uVar6 = puVar16[(longlong)iVar13 + 1];
    }
    uVar5 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar6 = (int)lVar4 + -1 + local_40;
    if ((int)uVar2 < (int)uVar6) {
      uVar6 = uVar2;
    }
    pFVar12 = (FVariantData *)(ulonglong)uVar6;
  }
LAB_14ecda4ca:
  uStack_48 = 0xffffffff;
  uStack_44 = (uint)pFVar12;
  uStack_3c = uStack_6c;
  uStack_7c = uVar5;
  local_88._8_4_ = uVar14;
  uStack_70 = 0xffffffff;
  local_68 = CONCAT44(uStack_6c,local_40);
  local_60 = (FOnlineKeyValuePairs<FName,FOnlineSessionSetting> *)local_88._0_8_;
  uStack_58 = uVar14;
  uStack_54 = uVar5;
  local_50 = local_78;
  uStack_6c = uStack_44;
  if ((int)uStack_44 < (int)uVar2) {
    do {
      lVar4 = *(longlong *)local_88._0_8_;
      lVar3 = *(longlong *)((longlong)(int)pFVar12 * 0x38 + lVar4);
      uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      if (*(int *)&this->field_0x30 != *(int *)&this->field_0x5c) {
        puVar11 = &this->field_0x60;
        if (*(undefined1 **)&this->field_0x68 != (undefined1 *)0x0) {
          puVar11 = *(undefined1 **)&this->field_0x68;
        }
        iVar13 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&this->field_0x70 - 1U & (int)((ulonglong)lVar3 >> 0x20) + uVar14)
                         * 4);
        if (iVar13 != -1) {
          do {
            plVar9 = (longlong *)((longlong)iVar13 * 0x38 + *(longlong *)&this->field_0x28);
            if (*plVar9 == lVar3) {
              pFVar10 = (FVariantData *)(plVar9 + 1);
              if (plVar9 == (longlong *)0x0) {
                pFVar10 = pFVar17;
              }
              if (pFVar10 != (FVariantData *)0x0) {
                FVariantData::operator=
                          (pFVar10,(FVariantData *)((longlong)(int)pFVar12 * 0x38 + lVar4 + 8));
              }
              break;
            }
            iVar13 = (int)plVar9[6];
          } while (iVar13 != -1);
        }
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
      pFVar12 = (FVariantData *)(ulonglong)uStack_6c;
    } while ((int)uStack_6c < *(int *)(local_78 + 0x18));
  }
  return this;
}

// ~TestAttribute @ 14ecdbd70

void __thiscall TestAttribute::~TestAttribute(TestAttribute *this)

{
  FScriptContainerElement *pFVar1;
  
  FVariantData::Empty(&this->Value);
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TestOnlineGameSettings @ 14ecdbda0

void __thiscall TestOnlineGameSettings::~TestOnlineGameSettings(TestOnlineGameSettings *this)

{
  *(undefined ***)this = &___7TestOnlineGameSettings__6B_;
  FOnlineSessionSettings::~FOnlineSessionSettings((FOnlineSessionSettings *)this);
  return;
}

// ~TestOnlineSearchSettings @ 14ecdbdc0

void __thiscall TestOnlineSearchSettings::~TestOnlineSearchSettings(TestOnlineSearchSettings *this)

{
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FOnlineSessionSearch__6B_;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  DestructItems<FOnlineSessionSearchResult,int>
            (*(FOnlineSessionSearchResult **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14ecdc45c

/* [thunk]:public: virtual void * __ptr64 __cdecl FTestVoice::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FTestVoice::_vector_deleting_destructor__adjustor_24__(FTestVoice *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FTestVoice *)&this[-1].MaxRemainderSize,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ecdc46c

/* [thunk]:public: virtual void * __ptr64 __cdecl FVoiceEngineImpl::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FVoiceEngineImpl::_vector_deleting_destructor__adjustor_8__(FVoiceEngineImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FVoiceEngineImpl *)&this[-1].ExternalEndpoints.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14ecdc47c

/* [thunk]:public: virtual void * __ptr64 __cdecl UVoipListenerSynthComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UVoipListenerSynthComponent::_vector_deleting_destructor__adjustor_40__
          (UVoipListenerSynthComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UVoipListenerSynthComponent *)
                      (this[-1].PacketBufferCriticalSection.CriticalSection.Opaque3 + 1),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ecdc490

void * __thiscall
IBaseDelegateInstance<void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc4c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc4f0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc520

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc550

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc580

void * __thiscall
IBaseDelegateInstance<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc5b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc5e0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc610

void * __thiscall
IBaseDelegateInstance<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc640

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc670

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc6a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy,`FTestStatsInterface::WriteStats'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc6d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestLeaderboardInterface,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestLeaderboardInterface,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc700

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestLeaderboardInterface,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestLeaderboardInterface,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc730

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestMessageInterface,void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestMessageInterface,void___cdecl(int,bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc760

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestMessageInterface,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestMessageInterface,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPresenceInterface,void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc8b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPurchaseInterface,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPurchaseInterface,void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc8e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestPurchaseInterface,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestPurchaseInterface,void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(int,bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdc9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdca00

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(FName,enum_EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdca30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(FName,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdca60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdca90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSessionInterface,void___cdecl(bool,int,TSharedPtr<FUniqueNetId_const_,1>,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcac0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestSharingInterface,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestSharingInterface,void___cdecl(int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcaf0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestStatsInterface,void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestStatsInterface,void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcb20

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestStatsInterface,void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestStatsInterface,void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcb50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestStoreInterface,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestStoreInterface,void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcb80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestTimeInterface,void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestTimeInterface,void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcbb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestTitleFileInterface,void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestTitleFileInterface,void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcbe0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestUserInterface,void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestUserInterface,void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcc10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTestVoice,void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTestVoice,void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcc40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FVoiceEngineImpl,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FVoiceEngineImpl,void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcc70

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UVOIPTalker,void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcca0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TArray<TSharedRef<FOnlineUserStatsPair<FVariantData>_const_,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdccd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FOnlineError_const_&,TSharedPtr<FOnlineUserStatsPair<FVariantData>_const_,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcd00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FUniqueNetId_const_&,TSharedRef<FOnlineUserPresence,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcd30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcd60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcd90

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool,FOnlineSessionSearchResult_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcdc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(USoundWaveProcedural_*,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcdf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UAudioComponent_const_*,float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdce20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FName,TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_>_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdce50

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdce80

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdceb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TestOnlineSearchSettings,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TestOnlineSearchSettings,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcef0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FVoiceEngineImpl,SharedPointerInternals::DefaultDeleter<FVoiceEngineImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FVoiceEngineImpl,SharedPointerInternals::DefaultDeleter<FVoiceEngineImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcf30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FVoicePacketImpl,SharedPointerInternals::DefaultDeleter<FVoicePacketImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FVoicePacketImpl,SharedPointerInternals::DefaultDeleter<FVoicePacketImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcf70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TestLeaderboardRead,SharedPointerInternals::DefaultDeleter<TestLeaderboardRead>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TestLeaderboardRead,SharedPointerInternals::DefaultDeleter<TestLeaderboardRead>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcfb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TestOnlineGameSettings,SharedPointerInternals::DefaultDeleter<TestOnlineGameSettings>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TestOnlineGameSettings,SharedPointerInternals::DefaultDeleter<TestOnlineGameSettings>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdcff0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TestOnlineSearchSettings,SharedPointerInternals::DefaultDeleter<TestOnlineSearchSettings>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TestOnlineSearchSettings,SharedPointerInternals::DefaultDeleter<TestOnlineSearchSettings>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd030

void * __thiscall
FOnlineVoiceImpl::_scalar_deleting_destructor_(FOnlineVoiceImpl *this,uint param_1)

{
  ~FOnlineVoiceImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd070

void * __thiscall
FTestLeaderboardInterface::_scalar_deleting_destructor_
          (FTestLeaderboardInterface *this,uint param_1)

{
  ~FTestLeaderboardInterface(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x188);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd0b0

void * __thiscall
FTestStatsInterface::_scalar_deleting_destructor_(FTestStatsInterface *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FTestStatsInterface__6B_;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Stats != (TSharedPtr<IOnlineStats,1> *)&local_18) {
    (this->Stats).Object = (IOnlineStats *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Stats).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Stats).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserId).SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)(this->StatsToRead).AllocatorInstance.Data,(this->StatsToRead).ArrayNum);
  pFVar1 = (this->StatsToRead).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Subsystem).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd170

void * __thiscall FTestVoice::_scalar_deleting_destructor_(FTestVoice *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FTSTickerObjectBase__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  Shutdown(this);
  pFVar1 = (this->Remainder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UncompressedDataQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->QueueLock);
  pFVar1 = (this->UncompressedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CompressedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RawCaptureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceDecoder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceEncoder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VoiceCapture).SharedReferenceCount.ReferenceController);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x140);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd270

void * __thiscall FVoiceEndpoint::_scalar_deleting_destructor_(FVoiceEndpoint *this,uint param_1)

{
  IAudioMixerPlatformInterface *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FVoiceEndpoint__6B_;
  pIVar1 = (this->PlatformEndpoint).Ptr;
  if (pIVar1 != (IAudioMixerPlatformInterface *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0xa8))();
    (**(code **)(((this->PlatformEndpoint).Ptr)->_padding_ + 0x98))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutputPatchCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputPatch).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->PlatformDeviceInfo).OutputChannelArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlatformDeviceInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlatformDeviceInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->OpenParams).AudioDeviceId.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar1 = (this->PlatformEndpoint).Ptr;
  if (pIVar1 != (IAudioMixerPlatformInterface *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,1);
  }
  pFVar2 = (this->DownmixBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd350

void * __thiscall
FVoiceEngineImpl::_scalar_deleting_destructor_(FVoiceEngineImpl *this,uint param_1)

{
  ~FVoiceEngineImpl(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd390

void * __thiscall FVoicePacket::_scalar_deleting_destructor_(FVoicePacket *this,uint param_1)

{
  *this = (FVoicePacket)&___7FVoicePacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd3d0

void * __thiscall
FVoicePacketImpl::_scalar_deleting_destructor_(FVoicePacketImpl *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVoicePacketImpl__6B_;
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Sender).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FVoicePacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd440

void * __thiscall
FVoiceEngineImpl::FVoiceSerializeHelper::_scalar_deleting_destructor_
          (FVoiceSerializeHelper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd490

void * __thiscall IOnlineVoice::_scalar_deleting_destructor_(IOnlineVoice *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineVoice__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlayerTalkingStateChangedDelegates).field_0x8,
             *(int *)&(this->OnPlayerTalkingStateChangedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnPlayerTalkingStateChangedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayerTalkingStateChangedDelegates);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd500

void * __thiscall IVoiceEngine::_scalar_deleting_destructor_(IVoiceEngine *this,uint param_1)

{
  *this = (IVoiceEngine)&___7IVoiceEngine__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd540

void * __thiscall
TestLeaderboardWrite::_scalar_deleting_destructor_(TestLeaderboardWrite *this,uint param_1)

{
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  DestructItems<FString,int>(*(FString **)&this->field_0x68,*(int *)&this->field_0x70);
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined ***)this = &___7FOnlineStats__6B_;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd5d0

void * __thiscall
TestOnlineGameSettings::_scalar_deleting_destructor_(TestOnlineGameSettings *this,uint param_1)

{
  *(undefined ***)this = &___7TestOnlineGameSettings__6B_;
  FOnlineSessionSettings::~FOnlineSessionSettings((FOnlineSessionSettings *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd620

void * __thiscall
TestOnlineSearchSettings::_scalar_deleting_destructor_(TestOnlineSearchSettings *this,uint param_1)

{
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FOnlineSessionSearch__6B_;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  DestructItems<FOnlineSessionSearchResult,int>
            (*(FOnlineSessionSearchResult **)&this->field_0x8,*(int *)&this->field_0x10);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd6b0

void * __thiscall
UTurnBasedBlueprintLibrary::_scalar_deleting_destructor_
          (UTurnBasedBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UTurnBasedBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ecdd710

void * __thiscall
UVoipListenerSynthComponent::_scalar_deleting_destructor_
          (UVoipListenerSynthComponent *this,uint param_1)

{
  FVoicePacketBuffer *pFVar1;
  TNode *pTVar2;
  FScriptContainerElement *pFVar3;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  ClosePacketStream(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PacketBufferCriticalSection);
  pFVar1 = (this->PacketBuffer).Ptr;
  if (pFVar1 != (FVoicePacketBuffer *)0x0) {
    pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
    while (pTVar2 != (TNode *)0x0) {
      (pFVar1->FreedIndicesQueue).Tail = pTVar2->NextNode;
      ::operator_delete(pTVar2,0x10);
      pTVar2 = (pFVar1->FreedIndicesQueue).Tail;
    }
    DestructItems<FSortedVoicePacketNode,int>
              ((FSortedVoicePacketNode *)(pFVar1->PacketBuffer).AllocatorInstance.Data,
               (pFVar1->PacketBuffer).ArrayNum);
    pFVar3 = (pFVar1->PacketBuffer).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x50);
  }
  Audio::FPatchInput::~FPatchInput(&this->ExternalSend);
  USynthComponent::~USynthComponent((USynthComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x920);
  }
  return this;
}

// AddWorldSettings @ 14ecddbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TestOnlineGameSettings::AddWorldSettings(TestOnlineGameSettings *this,UWorld *param_1)

{
  int iVar1;
  AGameModeBase *pAVar2;
  FName *pFVar3;
  UClass *pUVar4;
  AGameModeBase *pAVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UWorld *)0x0) {
    return;
  }
  UWorld::GetMapName(param_1,&local_18);
  pFVar3 = ::FName::FName(&local_res10,L"MAPNAME");
  FOnlineSessionSettings::Set<FString>
            ((FOnlineSessionSettings *)this,*pFVar3,&local_18,ViaOnlineService);
  pAVar2 = (param_1->AuthorityGameMode).field0_0x0.DebugPtr;
  if (pAVar2 == (AGameModeBase *)0x0) {
LAB_14ecddc58:
    pAVar5 = (AGameModeBase *)0x0;
    if (pAVar2 == (AGameModeBase *)0x0) goto LAB_14ecddcd9;
  }
  else {
    pUVar4 = Z_Construct_UClass_AGameMode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
       (pAVar5 = pAVar2,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar4->_padding_)) goto LAB_14ecddc58;
  }
  local_res10 = *(FName *)(pAVar2->_padding_ + 0x18);
  ::FName::ToString(&local_res10,&local_28);
  pFVar3 = ::FName::FName(&local_res10,L"GAMEMODE");
  FOnlineSessionSettings::Set<FString>
            ((FOnlineSessionSettings *)this,*pFVar3,&local_28,ViaOnlineService);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (pAVar5 != (AGameModeBase *)0x0) {
    pFVar3 = ::FName::FName(&local_res10,L"NUMBOTS");
    FOnlineSessionSettings::Set<int>
              ((FOnlineSessionSettings *)this,*pFVar3,(int *)((longlong)&pAVar5[1]._padding_ + 4),
               ViaOnlineService);
  }
LAB_14ecddcd9:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DownmixBuffer @ 14ece2800

void __cdecl
VoiceEngineUtilities::DownmixBuffer
          (float *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar15 = (longlong)param_4;
  fVar30 = (float)param_5 / (float)param_4;
  if (__real_3f800000 <= (float)param_5 / (float)param_4) {
    fVar30 = __real_3f800000;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if (0 < param_3) {
    pfVar13 = param_1 + 1;
    uVar19 = 0;
    uVar12 = (ulonglong)(uint)param_3;
    pfVar9 = param_2;
    uVar14 = (longlong)param_5;
    uVar20 = uVar19;
    do {
      if (0 < (int)uVar14) {
        uVar18 = param_4 - 1;
        uVar14 = uVar14 & 0xffffffff;
        pfVar17 = pfVar9;
        do {
          lVar16 = 1;
          fVar21 = pfVar13[-1];
          *pfVar17 = fVar30 * fVar21;
          if (((1 < param_4) && (7 < uVar18)) &&
             ((param_1 + (int)(uVar18 + (int)uVar20) < param_2 + 1 ||
              (param_2 + (int)uVar18 < pfVar13)))) {
            fVar22 = 0.0;
            fVar23 = 0.0;
            fVar24 = 0.0;
            fVar25 = 0.0;
            fVar26 = 0.0;
            fVar27 = 0.0;
            fVar28 = 0.0;
            fVar29 = 0.0;
            uVar11 = uVar18 & 0x80000007;
            if ((int)uVar11 < 0) {
              uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
            }
            pfVar10 = pfVar13;
            do {
              fVar2 = *pfVar10;
              pfVar3 = pfVar10 + 1;
              pfVar4 = pfVar10 + 2;
              pfVar5 = pfVar10 + 3;
              lVar16 = lVar16 + 8;
              pfVar1 = pfVar10 + 4;
              pfVar6 = pfVar10 + 5;
              pfVar7 = pfVar10 + 6;
              pfVar8 = pfVar10 + 7;
              pfVar10 = pfVar10 + 8;
              fVar22 = fVar22 + fVar30 * fVar2;
              fVar23 = fVar23 + fVar30 * *pfVar3;
              fVar24 = fVar24 + fVar30 * *pfVar4;
              fVar25 = fVar25 + fVar30 * *pfVar5;
              fVar26 = fVar26 + *pfVar1 * fVar30;
              fVar27 = fVar27 + *pfVar6 * fVar30;
              fVar28 = fVar28 + *pfVar7 * fVar30;
              fVar29 = fVar29 + *pfVar8 * fVar30;
            } while (lVar16 < (int)(param_4 - uVar11));
            *pfVar17 = fVar30 * fVar21 +
                       fVar28 + fVar24 + fVar26 + fVar22 + fVar29 + fVar25 + fVar27 + fVar23;
          }
          if (lVar16 < lVar15) {
            fVar21 = *pfVar17;
            pfVar10 = param_1 + uVar19 + lVar16;
            lVar16 = lVar15 - lVar16;
            do {
              fVar22 = *pfVar10;
              pfVar10 = pfVar10 + 1;
              fVar21 = fVar21 + fVar30 * fVar22;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            *pfVar17 = fVar21;
          }
          pfVar17 = pfVar17 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        uVar14 = (ulonglong)(uint)param_5;
      }
      pfVar9 = pfVar9 + param_5;
      uVar20 = (ulonglong)(uint)((int)uVar20 + param_4);
      uVar19 = uVar19 + lVar15;
      pfVar13 = pfVar13 + lVar15;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// DumpReceiptInfo @ 14ece2b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DumpReceiptInfo(TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FJsonSerializable *this;
  FJsonSerializable *pFVar2;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  if (4 < (byte)LogOnlinePurchase._0_1_) {
    FString::PrintfImpl(&local_28,L"Receipts=[%d]");
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_1->ArrayNum;
  this = (FJsonSerializable *)(param_1->AllocatorInstance).Data;
  pFVar2 = this + (longlong)iVar1 * 6;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPurchaseReceipt_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this == pFVar2) break;
    if (4 < (byte)LogOnlinePurchase._0_1_) {
      FJsonSerializable::ToJson(this,&local_18,true);
      FString::PrintfImpl(&local_28,L"%s");
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogOnlinePurchase);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    this = this + 6;
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeTurnBasedBlueprintLibrary @ 14ece2c70

void __cdecl EmptyLinkFunctionForGeneratedCodeTurnBasedBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVoipListenerSynthComponent @ 14ece2c80

void __cdecl EmptyLinkFunctionForGeneratedCodeVoipListenerSynthComponent(void)

{
  return;
}

// OnEnumerateMessagesComplete @ 14ecec130

/* WARNING: Removing unreachable block (ram,0x00014ecec314) */
/* WARNING: Removing unreachable block (ram,0x00014ecec31f) */
/* WARNING: Removing unreachable block (ram,0x00014ecec322) */
/* WARNING: Removing unreachable block (ram,0x00014ecec326) */
/* WARNING: Removing unreachable block (ram,0x00014ecec35b) */
/* WARNING: Removing unreachable block (ram,0x00014ecec35c) */
/* WARNING: Removing unreachable block (ram,0x00014ecec372) */
/* WARNING: Removing unreachable block (ram,0x00014ecec38b) */
/* WARNING: Removing unreachable block (ram,0x00014ecec386) */
/* WARNING: Removing unreachable block (ram,0x00014ecec38e) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3b3) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3b8) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3cd) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3d2) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3db) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3e0) */
/* WARNING: Removing unreachable block (ram,0x00014ecec3ed) */
/* WARNING: Removing unreachable block (ram,0x00014ecec405) */
/* WARNING: Removing unreachable block (ram,0x00014ecec400) */
/* WARNING: Removing unreachable block (ram,0x00014ecec408) */
/* WARNING: Removing unreachable block (ram,0x00014ecec42d) */
/* WARNING: Removing unreachable block (ram,0x00014ecec432) */
/* WARNING: Removing unreachable block (ram,0x00014ecec447) */
/* WARNING: Removing unreachable block (ram,0x00014ecec44c) */
/* WARNING: Removing unreachable block (ram,0x00014ecec455) */
/* WARNING: Removing unreachable block (ram,0x00014ecec45a) */
/* WARNING: Removing unreachable block (ram,0x00014ecec467) */
/* WARNING: Removing unreachable block (ram,0x00014ecec473) */
/* WARNING: Removing unreachable block (ram,0x00014ecec46d) */
/* WARNING: Removing unreachable block (ram,0x00014ecec476) */
/* WARNING: Removing unreachable block (ram,0x00014ecec49b) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4a0) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4b5) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4ba) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4c7) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4d3) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4cd) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4d6) */
/* WARNING: Removing unreachable block (ram,0x00014ecec4fb) */
/* WARNING: Removing unreachable block (ram,0x00014ecec500) */
/* WARNING: Removing unreachable block (ram,0x00014ecec515) */
/* WARNING: Removing unreachable block (ram,0x00014ecec51a) */
/* WARNING: Removing unreachable block (ram,0x00014ecec523) */
/* WARNING: Removing unreachable block (ram,0x00014ecec52f) */
/* WARNING: Removing unreachable block (ram,0x00014ecec529) */
/* WARNING: Removing unreachable block (ram,0x00014ecec532) */
/* WARNING: Removing unreachable block (ram,0x00014ecec557) */
/* WARNING: Removing unreachable block (ram,0x00014ecec55c) */
/* WARNING: Removing unreachable block (ram,0x00014ecec571) */
/* WARNING: Removing unreachable block (ram,0x00014ecec576) */
/* WARNING: Removing unreachable block (ram,0x00014ecec5a0) */
/* WARNING: Removing unreachable block (ram,0x00014ecec622) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestMessageInterface::OnEnumerateMessagesComplete
          (FTestMessageInterface *this,int param_1,bool param_2,FString *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  FString local_d8;
  FString local_c8 [6];
  FString local_68;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  if (4 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl(&local_d8,L"EnumerateMessages() for player (%d) was success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xc0))(this->OnlineSub,local_58);
    if ((*plVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x30))((longlong *)*plVar5,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    if (cVar4 == '\0') {
      if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(&local_68,L"GetMessageHeaders(%d) failed");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (4 < (byte)LogOnline._0_1_) {
        ::FString::PrintfImpl(local_c8,L"GetMessageHeaders(%d) returned %d message headers");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
        }
      }
      DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
                ((TSharedRef<FUniqueNetId_const_,1> *)(this->MessagesToRead).AllocatorInstance.Data,
                 (this->MessagesToRead).ArrayNum);
      piVar1 = &(this->MessagesToRead).ArrayMax;
      (this->MessagesToRead).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->MessagesToRead).AllocatorInstance,0,piVar1);
      }
      DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
                ((TSharedRef<FUniqueNetId_const_,1> *)
                 (this->MessagesToDelete).AllocatorInstance.Data,(this->MessagesToDelete).ArrayNum);
      piVar1 = &(this->MessagesToDelete).ArrayMax;
      (this->MessagesToDelete).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->MessagesToDelete).AllocatorInstance,0,piVar1);
      }
    }
    DestructItems<TSharedRef<FOnlineMessageHeader,1>,int>
              ((TSharedRef<FOnlineMessageHeader,1> *)0x0,0);
  }
  this->bEnumerateMessages = false;
  StartNextTest(this);
  return;
}

// TestKeyValuePairs @ 14ed02020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl TestKeyValuePairs(void)

{
  FName FVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FName *pFVar10;
  FVariantData *pFVar11;
  FVariantData *pFVar12;
  FVariantData *pFVar13;
  FVariantData *pFVar14;
  FVariantData *pFVar15;
  FVariantData *pFVar16;
  ForAnyElementType FVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  undefined1 auStackY_998 [32];
  FScriptContainerElement local_948 [8];
  undefined1 local_940 [8];
  ValueUnion local_938;
  int local_928;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_920;
  float local_910 [2];
  FVariantData local_908;
  int local_8e8 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_8e0;
  int local_8d0;
  uint uStack_8cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8c8;
  undefined4 local_8c0;
  int iStack_8bc;
  int iStack_8b8;
  undefined4 uStack_8b4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_8b0;
  FString local_8a0;
  double local_890;
  ulong64 local_888;
  FString local_880;
  longlong *local_870;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_868;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_840;
  undefined1 local_820 [8];
  undefined1 local_818 [8];
  TPairInitializer<FName_&&,FVariantData_&&> local_810;
  undefined4 local_800;
  FName local_7fc;
  undefined1 local_7f4 [20];
  FName local_7e0;
  FName local_7d8;
  FName local_7d0;
  FName local_7c8 [2];
  longlong *local_7b8;
  undefined1 auStack_7b0 [16];
  uint uStack_7a0;
  uint uStack_79c;
  longlong local_798;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *pTStack_790;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *local_788;
  undefined2 local_780;
  longlong *local_778;
  undefined1 auStack_770 [16];
  uint uStack_760;
  uint uStack_75c;
  longlong local_758;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *pTStack_750;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *local_748;
  undefined2 local_740;
  longlong *local_738;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_730;
  FName local_710;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  longlong *local_538;
  undefined1 auStack_530 [16];
  uint uStack_520;
  uint uStack_51c;
  longlong local_518;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *pTStack_510;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *local_508;
  undefined2 local_500;
  FName *local_4f8;
  FVariantData *local_4f0;
  undefined1 *local_4e8;
  FVariantData *local_4e0;
  undefined1 *local_4d8;
  FVariantData *local_4d0;
  FName *local_4c8;
  FVariantData *local_4c0;
  FName *local_4b8;
  FVariantData *local_4b0;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FVariantData local_468;
  FVariantData local_448;
  FVariantData local_428;
  FVariantData local_408;
  FVariantData local_3e8;
  FVariantData local_3c8;
  FName *local_3a8;
  FVariantData *local_3a0;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FName local_2a8;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FName local_1d0;
  FName local_1c8;
  FString local_1c0;
  FName local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FString local_128;
  undefined1 local_118 [32];
  longlong local_f8;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *pTStack_f0;
  undefined1 local_e8 [32];
  longlong local_c8;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *pTStack_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  *pTStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_998;
  local_910[0] = 0.0;
  local_8e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8e0.ArrayNum = 0;
  local_8e0.ArrayMax = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x101,&local_8e0.AllocatorInstance,&local_8e0.ArrayMax);
  local_468.Type = Empty;
  local_468.CachedEstimatedMaxEscapedStringSize = 0;
  local_8e0.ArrayNum = iVar8 + 1;
  local_468.Value.AsInt64 = 0;
  local_468.Value._8_8_ = 0;
  local_8e0.AllocatorInstance.Data[iVar8] = (FScriptContainerElement)0xc8;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  FVariantData::SetValue(&local_468,0x200);
  FName::FName(&local_7fc,L"INTValue");
  local_3a8 = &local_7fc;
  local_3a0 = &local_468;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
            ((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FName_&&,FVariantData_&&> *)local_820,(bool *)&local_3a8)
  ;
  FVariantData::Empty(&local_468);
  local_448.Type = Empty;
  local_448.Value.AsInt64 = 0;
  local_448.Value._8_8_ = 0;
  local_448.CachedEstimatedMaxEscapedStringSize = 0;
  FVariantData::SetValue(&local_448,__real_44000000);
  FName::FName(&local_710,L"FLOATValue");
  local_4f8 = &local_710;
  local_4f0 = &local_448;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
            ((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FName_&&,FVariantData_&&> *)(local_820 + 4),
             (bool *)&local_4f8);
  FVariantData::Empty(&local_448);
  local_428.Type = Empty;
  local_428.CachedEstimatedMaxEscapedStringSize = 0;
  local_428.Value.AsInt64 = 0;
  local_428.Value._8_8_ = 0;
  FVariantData::SetValue(&local_428,0x200);
  FName::FName((FName *)(local_7f4 + 4),L"QWORDValue");
  local_4e8 = local_7f4 + 4;
  local_4e0 = &local_428;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
            ((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FName_&&,FVariantData_&&> *)local_818,(bool *)&local_4e8)
  ;
  FVariantData::Empty(&local_428);
  local_408.Type = Empty;
  local_408.Value.AsInt64 = 0;
  local_408.Value._8_8_ = 0;
  local_408.CachedEstimatedMaxEscapedStringSize = 0;
  FVariantData::SetValue(&local_408,__real_411f400000000000);
  FName::FName((FName *)(local_7f4 + 0xc),L"DOUBLEValue");
  local_4d8 = local_7f4 + 0xc;
  local_4d0 = &local_408;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
            ((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FName_&&,FVariantData_&&> *)(local_818 + 4),
             (bool *)&local_4d8);
  FVariantData::Empty(&local_408);
  local_3e8.Type = Empty;
  local_3e8.CachedEstimatedMaxEscapedStringSize = 0;
  local_3e8.Value.AsInt64 = 0;
  local_3e8.Value._8_8_ = 0;
  FVariantData::SetValue(&local_3e8,L"This Is A Test!");
  FName::FName(&local_7e0,L"STRINGValue");
  local_4c8 = &local_7e0;
  local_4c0 = &local_3e8;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
            ((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88,&local_810,(bool *)&local_4c8);
  FVariantData::Empty(&local_3e8);
  local_3c8.Type = Empty;
  local_3c8.CachedEstimatedMaxEscapedStringSize = 0;
  local_3c8.Value.AsInt64 = 0;
  local_3c8.Value._8_8_ = 0;
  FVariantData::SetValue(&local_3c8,&local_8e0);
  FName::FName(&local_7d8,L"BLOBValue");
  local_4b8 = &local_7d8;
  local_4b0 = &local_3c8;
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,FVariantData_&&>_>
            ((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88,(TPairInitializer<FName_&&,FVariantData_&&> *)local_7f4,(bool *)&local_4b8)
  ;
  FVariantData::Empty(&local_3c8);
  if (3 < (byte)LogOnline._0_1_) {
    FString::PrintfImpl(&local_708,L"ConstIterator");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
  }
  local_840.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_840._padding_._4_4_ = 1;
  local_840._padding_._0_4_ = 0;
  local_840.UnvisitedBitMask = 0xffffffff;
  local_840.CurrentBitIndex = 0;
  local_840.BaseBitIndex = 0;
  if (local_60 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_840);
  }
  local_870 = (longlong *)local_88;
  TStack_868._padding_._0_4_ = (int)local_840._padding_;
  TStack_868._padding_._4_4_ = local_840._padding_._4_4_;
  TStack_868.Array = local_840.Array;
  TStack_868.UnvisitedBitMask = local_840.UnvisitedBitMask;
  TStack_868.UnvisitedBitMask = local_840.UnvisitedBitMask;
  TStack_868.CurrentBitIndex = local_840.CurrentBitIndex;
  TStack_868._28_4_ = local_840._28_4_;
  TStack_868.BaseBitIndex = local_840.BaseBitIndex;
  TStack_730._padding_._0_4_ = (int)local_840._padding_;
  TStack_730._padding_._4_4_ = local_840._padding_._4_4_;
  TStack_730.Array = local_840.Array;
  TStack_730.UnvisitedBitMask = local_840.UnvisitedBitMask;
  TStack_730.CurrentBitIndex = local_840.CurrentBitIndex;
  TStack_730.BaseBitIndex = local_840.BaseBitIndex;
  TStack_730._28_4_ = local_840._28_4_;
  local_738 = local_870;
  if (local_840.CurrentBitIndex < (local_840.Array)->NumBits) {
    do {
      plVar4 = local_738;
      if (3 < (byte)LogOnline._0_1_) {
        lVar9 = (longlong)TStack_730.CurrentBitIndex;
        FVariantData::ToString((FVariantData *)(*local_738 + 8 + lVar9 * 0x30),&local_198);
        FName::ToString((FName *)(*plVar4 + lVar9 * 0x30),&local_1a8);
        FString::PrintfImpl(&local_6f8,L"%s = %s");
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
        }
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      TStack_730.UnvisitedBitMask = TStack_730.UnvisitedBitMask & ~TStack_730._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_730);
    } while (TStack_730.CurrentBitIndex < (TStack_730.Array)->NumBits);
  }
  if (3 < (byte)LogOnline._0_1_) {
    FString::PrintfImpl(&local_6e8,L"Iterator");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
    }
  }
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_118,
             (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88);
  local_748 = (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
               *)local_88;
  local_740 = 0;
  stack0xfffffffffffff898 = local_118._16_16_;
  local_778 = (longlong *)local_118._0_8_;
  auStack_770._0_8_ = local_118._8_8_;
  local_758 = local_f8;
  pTStack_750 = pTStack_f0;
  uVar19 = local_118._24_8_ >> 0x20;
  if (local_118._28_4_ < *(int *)(local_118._16_8_ + 0x18)) {
    do {
      plVar4 = local_778;
      if (3 < (byte)LogOnline._0_1_) {
        lVar9 = (longlong)(int)uVar19 * 0x30;
        FVariantData::ToString((FVariantData *)(*local_778 + 8 + lVar9),&local_178);
        FName::ToString((FName *)(*plVar4 + lVar9),&local_188);
        FString::PrintfImpl(&local_6d8,L"Iterator %s = %s");
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
      uStack_760 = uStack_760 & ~auStack_770._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_770);
      uVar19 = (ulonglong)uStack_75c;
    } while ((int)uStack_75c < *(int *)(auStack_770._8_8_ + 0x18));
    if (((char)local_740 != '\0') && (local_740._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_748->Elements).field_0x8 - *(int *)&(local_748->Elements).field_0x34;
      if (uVar20 < 4) {
        iVar8 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_810.Key._4_4_ = (undefined4)lVar9;
        iVar8 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_748->HashSize < iVar8)) || (iVar8 < local_748->HashSize)) {
        local_748->HashSize = iVar8;
        TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
        ::Rehash(local_748);
      }
    }
  }
  if (3 < (byte)LogOnline._0_1_) {
    FString::PrintfImpl(&local_6c8,L"Finding all elements");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FName::FName(&local_130,L"INTValue");
  pFVar11 = TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            ::Find((TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
                    *)local_88,*pFVar10);
  pFVar10 = FName::FName(&local_138,L"FLOATValue");
  pFVar12 = TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            ::Find((TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
                    *)local_88,*pFVar10);
  pFVar10 = FName::FName(&local_140,L"QWORDValue");
  pFVar13 = TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            ::Find((TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
                    *)local_88,*pFVar10);
  pFVar10 = FName::FName(&local_148,L"DOUBLEValue");
  pFVar14 = TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            ::Find((TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
                    *)local_88,*pFVar10);
  pFVar10 = FName::FName(&local_1b0,L"STRINGValue");
  pFVar15 = TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            ::Find((TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
                    *)local_88,*pFVar10);
  pFVar10 = FName::FName(&local_1c8,L"BLOBValue");
  pFVar16 = TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
            ::Find((TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
                    *)local_88,*pFVar10);
  if ((pFVar16 == (FVariantData *)0x0 ||
       (pFVar15 == (FVariantData *)0x0 ||
       (pFVar14 == (FVariantData *)0x0 ||
       (pFVar13 == (FVariantData *)0x0 ||
       (pFVar12 == (FVariantData *)0x0 || pFVar11 == (FVariantData *)0x0))))) &&
     (3 < (byte)LogOnline._0_1_)) {
    FString::PrintfImpl(&local_6b8,L"Not all elements found!");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = FName::FName(&local_1d0,L"INTValue");
  FVar1 = *pFVar10;
  local_7d0 = FVar1;
  if (local_88._8_4_ != local_54) {
    uVar20 = GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
                         *)local_88,FVar1.Number + uVar20,&local_7d0);
  }
  pFVar10 = FName::FName(&local_2a8,L"BLOBValue");
  FVar1 = *pFVar10;
  local_7c8[0] = FVar1;
  if (local_88._8_4_ != local_54) {
    uVar20 = GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
                         *)local_88,FVar1.Number + uVar20,local_7c8);
  }
  if (3 < (byte)LogOnline._0_1_) {
    FString::PrintfImpl(&local_6a8,L"Iterator AFTER removing int32 and Blob elements");
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u__s_s_153088948,(FLogCategoryBase *)&LogOnline);
    if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
    }
  }
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_e8,
             (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88);
  local_788 = (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
               *)local_88;
  local_780 = 0;
  stack0xfffffffffffff858 = local_e8._16_16_;
  local_7b8 = (longlong *)local_e8._0_8_;
  auStack_7b0._0_8_ = local_e8._8_8_;
  local_798 = local_c8;
  pTStack_790 = pTStack_c0;
  uVar19 = local_e8._24_8_ >> 0x20;
  if (local_e8._28_4_ < *(int *)(local_e8._16_8_ + 0x18)) {
    do {
      plVar4 = local_7b8;
      if (3 < (byte)LogOnline._0_1_) {
        lVar9 = (longlong)(int)uVar19 * 0x30;
        FVariantData::ToString((FVariantData *)(*local_7b8 + 8 + lVar9),&local_158);
        FName::ToString((FName *)(*plVar4 + lVar9),&local_168);
        FString::PrintfImpl(&local_698,L"Iterator %s = %s");
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_698.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
      }
      uStack_7a0 = uStack_7a0 & ~auStack_7b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_7b0);
      uVar19 = (ulonglong)uStack_79c;
    } while ((int)uStack_79c < *(int *)(auStack_7b0._8_8_ + 0x18));
    if (((char)local_780 != '\0') && (local_780._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_788->Elements).field_0x8 - *(int *)&(local_788->Elements).field_0x34;
      if (uVar20 < 4) {
        iVar8 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_810.Value._0_4_ = (undefined4)lVar9;
        iVar8 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_788->HashSize < iVar8)) || (iVar8 < local_788->HashSize)) {
        local_788->HashSize = iVar8;
        TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
        ::Rehash(local_788);
      }
    }
  }
  bVar6 = 1 < local_40;
  if (!bVar6) {
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
                      *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar8 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (bVar6) {
    local_40 = 1;
    if (((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4),
       (ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0)) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
    }
    FVar17.Data = (FScriptContainerElement *)local_50;
    if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
      FVar17.Data = local_48.Data;
    }
    *(undefined4 *)FVar17.Data = 0xffffffff;
    if (local_40 != 0) {
      pTStack_8c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uStack_8cc = 1;
      local_8d0 = 0;
      iStack_8bc = 0;
      iStack_8b8 = 0;
      if (local_60 != 0) {
        puVar21 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar21 = local_68;
        }
        uVar20 = *puVar21;
        iStack_8b8 = 0;
        local_8d0 = 0;
        while (uVar20 == 0) {
          iStack_8b8 = iStack_8b8 + 0x20;
          lVar9 = (longlong)local_8d0;
          local_8d0 = local_8d0 + 1;
          if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < local_8d0)
          goto LAB_14ed02e80;
          uVar20 = (puVar21 + 1)[lVar9];
        }
        uStack_8cc = -uVar20 & uVar20;
        uVar19 = (ulonglong)uStack_8cc * 2 + 1;
        lVar9 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_810.Value._4_4_ = (int)lVar9;
        iStack_8bc = local_810.Value._4_4_ + -1 + iStack_8b8;
        if (local_60 < iStack_8bc) {
LAB_14ed02e80:
          iStack_8bc = local_60;
        }
      }
      local_8c0 = 0xffffffff;
      local_870 = (longlong *)local_88;
      TStack_868._padding_._0_4_ = local_8d0;
      TStack_868._padding_._4_4_ = uStack_8cc;
      TStack_868._28_4_ = uStack_8b4;
      TStack_868.BaseBitIndex = iStack_8b8;
      TStack_868.UnvisitedBitMask = 0xffffffff;
      TStack_868.CurrentBitIndex = iStack_8bc;
      TStack_868.Array = pTStack_8c8;
      if (iStack_8bc < local_60) {
        do {
          iVar8 = TStack_868.CurrentBitIndex;
          lVar9 = *local_870;
          lVar18 = (longlong)TStack_868.CurrentBitIndex;
          uVar2 = *(undefined8 *)(lVar9 + lVar18 * 0x30);
          uVar20 = GetTypeHash((FNameEntryId)(uint)uVar2);
          uVar20 = local_40 - 1U & uVar20 + (int)((ulonglong)uVar2 >> 0x20);
          *(uint *)(lVar9 + 0x2c + lVar18 * 0x30) = uVar20;
          FVar17.Data = (FScriptContainerElement *)local_50;
          if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
            FVar17.Data = local_48.Data;
          }
          uVar19 = (longlong)local_40 - 1U & (longlong)(int)uVar20;
          *(undefined4 *)(lVar9 + 0x28 + lVar18 * 0x30) =
               *(undefined4 *)((longlong)FVar17.Data + uVar19 * 4);
          *(int *)((longlong)FVar17.Data + uVar19 * 4) = iVar8;
          TStack_868.UnvisitedBitMask = TStack_868.UnvisitedBitMask & ~TStack_868._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_868);
        } while (TStack_868.CurrentBitIndex < (TStack_868.Array)->NumBits);
      }
    }
  }
  lVar9 = 0x200;
  if (3 < (byte)LogOnline._0_1_) {
    FString::PrintfImpl(&local_688,L"Iterator AFTER emptying structure");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
  }
  TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_b8,
             (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
              *)local_88);
  local_508 = (TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
               *)local_88;
  local_500 = 0;
  stack0xfffffffffffffad8 = local_b8._16_16_;
  local_538 = (longlong *)local_b8._0_8_;
  auStack_530._0_8_ = local_b8._8_8_;
  local_518 = local_98;
  pTStack_510 = pTStack_90;
  uVar19 = local_b8._24_8_ >> 0x20;
  if (local_b8._28_4_ < *(int *)(local_b8._16_8_ + 0x18)) {
    do {
      plVar4 = local_538;
      if (3 < (byte)LogOnline._0_1_) {
        lVar18 = (longlong)(int)uVar19 * 0x30;
        FVariantData::ToString((FVariantData *)(*local_538 + 8 + lVar18),&local_398);
        FName::ToString((FName *)(*plVar4 + lVar18),&local_128);
        FString::PrintfImpl(&local_678,L"Iterator %s = %s");
        UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
        if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_678.Data.AllocatorInstance.Data);
        }
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.Data.AllocatorInstance.Data);
        }
      }
      uStack_520 = uStack_520 & ~auStack_530._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_530);
      uVar19 = (ulonglong)uStack_51c;
    } while ((int)uStack_51c < *(int *)(auStack_530._8_8_ + 0x18));
    if (((char)local_500 != '\0') && (local_500._1_1_ != '\0')) {
      uVar20 = *(int *)&(local_508->Elements).field_0x8 - *(int *)&(local_508->Elements).field_0x34;
      if (uVar20 < 4) {
        iVar8 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_800 = (undefined4)lVar18;
        iVar8 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar20) && (local_508->HashSize < iVar8)) || (iVar8 < local_508->HashSize)) {
        local_508->HashSize = iVar8;
        TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
        ::Rehash(local_508);
      }
    }
  }
  iVar8 = local_54;
  uVar5 = local_88._8_4_;
  local_928 = 0;
  local_908.Type = Empty;
  local_938.AsInt64 = 0;
  local_938._8_8_ = 0;
  local_908.CachedEstimatedMaxEscapedStringSize = 0;
  local_908.Value.AsInt64 = 0;
  local_908.Value._8_8_ = 0;
  local_8e8[0] = 0;
  local_940[0] = Empty;
  FVariantData::SetValue((FVariantData *)local_940,5);
  FVariantData::GetValue((FVariantData *)local_940,local_8e8);
  if ((uVar5 == iVar8) && (local_8e8[0] == 5)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FVariantData::operator=(&local_908,(FVariantData *)local_940);
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_378);
    FVariantData::ToString((FVariantData *)local_940,&local_388);
    FString::PrintfImpl(&local_668,L"int32 Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Int32) {
    local_938.AsInt = local_938.AsInt + 1;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_368);
    FString::PrintfImpl(&local_658,L"+1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_658.Data.AllocatorInstance.Data);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Int32) {
    local_938.AsInt = local_938.AsInt + -1;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_358);
    FString::PrintfImpl(&local_648,L"-1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = false;
  if ((bVar6) &&
     (bVar6 = FVariantData::operator==((FVariantData *)local_940,&local_908), bVar7 = false, bVar6))
  {
    FString::FString(&local_4a8,L"5");
    bVar7 = true;
    bVar6 = FVariantData::FromString((FVariantData *)local_940,&local_4a8);
    if (!bVar6) goto LAB_14ed03410;
    bVar6 = true;
  }
  else {
LAB_14ed03410:
    bVar6 = false;
  }
  if ((bVar7) && (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  bVar7 = false;
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_338);
    FVariantData::ToString((FVariantData *)local_940,&local_348);
    FString::PrintfImpl(&local_638,L"int32 Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_348.Data.AllocatorInstance.Data);
    }
    if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data.AllocatorInstance.Data);
    }
  }
  local_910[0] = 0.0;
  FVariantData::SetValue((FVariantData *)local_940,__real_40a00000);
  FVariantData::GetValue((FVariantData *)local_940,local_910);
  if ((bVar6) && (local_910[0] == __real_40a00000)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FVariantData::operator=(&local_908,(FVariantData *)local_940);
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_318);
    FVariantData::ToString((FVariantData *)local_940,&local_328);
    FString::PrintfImpl(&local_628,L"float Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.Data.AllocatorInstance.Data);
    }
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Float) {
    local_938.AsFloat = local_938.AsFloat + __real_3f800000;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_308);
    FString::PrintfImpl(&local_618,L"+1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.Data.AllocatorInstance.Data);
    }
    if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Float) {
    local_938.AsFloat = local_938.AsFloat + __real_bf800000;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_2f8);
    FString::PrintfImpl(&local_608,L"-1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_608.Data.AllocatorInstance.Data);
    }
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar6) && (bVar6 = FVariantData::operator==((FVariantData *)local_940,&local_908), bVar6)) {
    FString::FString(&local_498,L"5.0");
    bVar7 = true;
    bVar6 = FVariantData::FromString((FVariantData *)local_940,&local_498);
    if (!bVar6) goto LAB_14ed0377f;
    bVar6 = true;
  }
  else {
LAB_14ed0377f:
    bVar6 = false;
  }
  if ((bVar7) && (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  bVar7 = false;
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_2d8);
    FVariantData::ToString((FVariantData *)local_940,&local_2e8);
    FString::PrintfImpl(&local_5f8,L"float Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  local_890 = 0.0;
  FVariantData::SetValue((FVariantData *)local_940,__real_4014000000000000);
  FVariantData::GetValue((FVariantData *)local_940,&local_890);
  if ((bVar6) && (local_890 == __real_4014000000000000)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FVariantData::operator=(&local_908,(FVariantData *)local_940);
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_2b8);
    FVariantData::ToString((FVariantData *)local_940,&local_2c8);
    FString::PrintfImpl(&local_5e8,L"double Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Double) {
    local_938.AsDouble = local_938.AsDouble + __real_3ff0000000000000;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_1c0);
    FString::PrintfImpl(&local_5d8,L"+1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Double) {
    local_938.AsDouble = local_938.AsDouble + __real_bff0000000000000;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_2a0);
    FString::PrintfImpl(&local_5c8,L"-1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
    }
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar6) && (bVar6 = FVariantData::operator==((FVariantData *)local_940,&local_908), bVar6)) {
    FString::FString(&local_488,L"5.0");
    bVar7 = true;
    bVar6 = FVariantData::FromString((FVariantData *)local_940,&local_488);
    if (!bVar6) goto LAB_14ed03af5;
    bVar6 = true;
  }
  else {
LAB_14ed03af5:
    bVar6 = false;
  }
  if ((bVar7) && (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  bVar7 = false;
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_280);
    FVariantData::ToString((FVariantData *)local_940,&local_290);
    FString::PrintfImpl(&local_5b8,L"double Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
    }
    if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data.AllocatorInstance.Data);
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
  }
  local_888 = 0;
  FVariantData::SetValue((FVariantData *)local_940,0x80000);
  FVariantData::GetValue((FVariantData *)local_940,&local_888);
  if ((bVar6) && (local_888 == 0x80000)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FVariantData::operator=(&local_908,(FVariantData *)local_940);
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_260);
    FVariantData::ToString((FVariantData *)local_940,&local_270);
    FString::PrintfImpl(&local_5a8,L"uint64 Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
    }
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Int64) {
    local_938.AsTCHAR = (wchar_t *)(local_938.AsInt64 + 1);
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_250);
    FString::PrintfImpl(&local_598,L"+1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_598.Data.AllocatorInstance.Data);
    }
    if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
  }
  if (local_940[0] == Int64) {
    local_938.AsTCHAR = (wchar_t *)(local_938.AsInt64 + -1);
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString((FVariantData *)local_940,&local_240);
    FString::PrintfImpl(&local_588,L"-1 Now is %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar6) && (bVar6 = FVariantData::operator==((FVariantData *)local_940,&local_908), bVar6)) {
    FString::FString(&local_478,L"524288");
    bVar7 = true;
    bVar6 = FVariantData::FromString((FVariantData *)local_940,&local_478);
    if (!bVar6) goto LAB_14ed03e41;
    bVar6 = true;
  }
  else {
LAB_14ed03e41:
    bVar6 = false;
  }
  if ((bVar7) && (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_220);
    FVariantData::ToString((FVariantData *)local_940,&local_230);
    FString::PrintfImpl(&local_578,L"uint64 Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_578.Data.AllocatorInstance.Data);
    }
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
  local_8a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8a0.Data.ArrayNum = 0;
  local_8a0.Data.ArrayMax = 0;
  FString::FString(&local_880,L"This is a test!");
  FVariantData::SetValue((FVariantData *)local_940,&local_880);
  FVariantData::GetValue((FVariantData *)local_940,&local_8a0);
  if (bVar6) {
    if (local_8a0.Data.ArrayNum == local_880.Data.ArrayNum) {
      if (1 < local_8a0.Data.ArrayNum) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_8a0.Data.AllocatorInstance.Data,
                           (wchar_t *)local_880.Data.AllocatorInstance.Data);
        bVar6 = iVar8 == 0;
        goto LAB_14ed03f76;
      }
    }
    else {
      bVar6 = local_8a0.Data.ArrayNum + local_880.Data.ArrayNum == 1;
LAB_14ed03f76:
      if (!bVar6) goto LAB_14ed03fa3;
    }
    FVariantData::operator=(&local_908,(FVariantData *)local_940);
    bVar6 = FVariantData::operator==((FVariantData *)local_940,&local_908);
    if (!bVar6) goto LAB_14ed03fb1;
    bVar6 = true;
  }
  else {
LAB_14ed03fa3:
    FVariantData::operator=(&local_908,(FVariantData *)local_940);
LAB_14ed03fb1:
    bVar6 = false;
  }
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_200);
    FVariantData::ToString((FVariantData *)local_940,&local_210);
    FString::PrintfImpl(&local_568,L"STRING Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_568.Data.AllocatorInstance.Data);
    }
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
  }
  local_8b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b0.ArrayNum = 0;
  local_8b0.ArrayMax = 0;
  local_920.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_920.ArrayNum = 0;
  local_920.ArrayMax = 0;
  do {
    iVar8 = rand();
    local_948[0] = (FScriptContainerElement)
                   ((((char)(iVar8 / 0xff) + (char)(iVar8 >> 0x1f)) -
                    (char)((longlong)iVar8 * 0x80808081 >> 0x3f)) + (char)iVar8);
    if (((local_920.AllocatorInstance.Data <= local_948) &&
        (local_948 < local_920.AllocatorInstance.Data + local_920.ArrayMax)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_920.ArrayNum == local_920.ArrayMax) {
      local_920.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_920.AllocatorInstance,&local_920.ArrayMax);
    }
    iVar8 = local_920.ArrayNum + 1;
    local_920.AllocatorInstance.Data[local_920.ArrayNum] = local_948[0];
    lVar9 = lVar9 + -1;
    local_920.ArrayNum = iVar8;
  } while (lVar9 != 0);
  FVariantData::SetValue((FVariantData *)local_940,&local_920);
  FVariantData::GetValue((FVariantData *)local_940,&local_8b0);
  if (bVar6) {
    if ((local_8b0.ArrayNum == local_920.ArrayNum) &&
       ((local_8b0.ArrayNum == 0 ||
        (iVar8 = memcmp(local_8b0.AllocatorInstance.Data,local_920.AllocatorInstance.Data,
                        (longlong)local_8b0.ArrayNum), iVar8 == 0)))) {
      FVariantData::operator=(&local_908,(FVariantData *)local_940);
      FVariantData::operator==((FVariantData *)local_940,&local_908);
      goto LAB_14ed041e4;
    }
  }
  FVariantData::operator=(&local_908,(FVariantData *)local_940);
LAB_14ed041e4:
  if (3 < (byte)LogOnline._0_1_) {
    FVariantData::ToString(&local_908,&local_1e0);
    FVariantData::ToString((FVariantData *)local_940,&local_1f0);
    FString::PrintfImpl(&local_558,L"BLOB Test %s == %s");
    UE::Logging::Private::BasicLog<4>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.Data.AllocatorInstance.Data);
    }
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
  }
  if (local_920.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_920.AllocatorInstance.Data);
  }
  if (local_8b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b0.AllocatorInstance.Data);
  }
  if (2 < (byte)LogOnline._0_1_) {
    FString::PrintfImpl(&local_548,L"KeyValuePairTest: %s!");
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogOnline);
    if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_548.Data.AllocatorInstance.Data);
    }
  }
  FVariantData::Empty(&local_908);
  FVariantData::Empty((FVariantData *)local_940);
  local_40 = 0;
  if ((ForElementType<FSetElementId>)local_48.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  if (local_8e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister @ 14ed09ec0

UClass * __cdecl Z_Construct_UClass_UTurnBasedBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"TurnBasedBlueprintLibrary",
               &Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton,
               UTurnBasedBlueprintLibrary::StaticRegisterNativesUTurnBasedBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UTurnBasedBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTurnBasedBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTurnBasedBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister @ 14ed09f80

UClass * __cdecl Z_Construct_UClass_UVoipListenerSynthComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"VoipListenerSynthComponent",
               &Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton,
               UVoipListenerSynthComponent::StaticRegisterNativesUVoipListenerSynthComponent,0x920,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UVoipListenerSynthComponent>,
               InternalVTableHelperCtorCaller<UVoipListenerSynthComponent>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoipListenerSynthComponent.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'AwayText'' @ 150470c40

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__AwayText__(void)

{
  if (AwayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*AwayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultPatchBufferSize'' @ 150470c60

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultPatchBufferSize__(void)

{
  CVarDefaultPatchBufferSize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultPatchBufferSize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDefaultPatchGain'' @ 150470c80

void __cdecl _dynamic_atexit_destructor_for__CVarDefaultPatchGain__(void)

{
  CVarDefaultPatchGain._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDefaultPatchGain);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMuteAudioEngineOutput'' @ 150470ca0

void __cdecl _dynamic_atexit_destructor_for__CVarMuteAudioEngineOutput__(void)

{
  CVarMuteAudioEngineOutput._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMuteAudioEngineOutput);
  return;
}

// `dynamic_atexit_destructor_for_'CVarResyncThreshold'' @ 150470cc0

void __cdecl _dynamic_atexit_destructor_for__CVarResyncThreshold__(void)

{
  CVarResyncThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarResyncThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarShouldResync'' @ 150470ce0

void __cdecl _dynamic_atexit_destructor_for__CVarShouldResync__(void)

{
  CVarShouldResync._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarShouldResync);
  return;
}

// `dynamic_atexit_destructor_for_'ChatText'' @ 150470d00

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__ChatText__(void)

{
  if (ChatText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*ChatText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DoNotDisturbText'' @ 150470d20

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__DoNotDisturbText__(void)

{
  if (DoNotDisturbText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470d2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DoNotDisturbText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OfflineText'' @ 150470d40

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__OfflineText__(void)

{
  if (OfflineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OfflineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnlineText'' @ 150470d60

void __cdecl EOnlinePresenceState::_dynamic_atexit_destructor_for__OnlineText__(void)

{
  if (OnlineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150470d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OnlineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'TestAttributeList'' @ 150470d80

void __cdecl _dynamic_atexit_destructor_for__TestAttributeList__(void)

{
  ITextData *pIVar1;
  longlong lVar2;
  FText *pFVar3;
  
  lVar2 = 5;
  pFVar3 = &EOnlinePresenceState::OnlineText;
  do {
    lVar2 = lVar2 + -1;
    FVariantData::Empty((FVariantData *)(pFVar3 + -2));
    pIVar1 = pFVar3[-3].TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      FMemory::Free(pIVar1);
    }
    pFVar3 = pFVar3 + -3;
  } while (lVar2 != 0);
  return;
}

