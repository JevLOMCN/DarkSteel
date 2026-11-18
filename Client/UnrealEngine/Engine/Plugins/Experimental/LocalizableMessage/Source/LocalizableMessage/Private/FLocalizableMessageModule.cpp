// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 3

// StartupModule @ 14e9bc780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall FLocalizableMessageModule::StartupModule(FLocalizableMessageModule *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FLocalizableMessageProcessor *this_01;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  FName local_58 [2];
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar2 = ::FName::FName(local_58,L"LocalizableMessage");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  this_01 = (FLocalizableMessageProcessor *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterInt__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = (undefined ***)0x0;
  local_30 = LocalizableMessageTypes::Int_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>
            (this_01,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&)>
                      *)local_48,&LocalizableMessageTypes::RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterFloat__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = LocalizableMessageTypes::Float_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>
            (this_01,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&)>
                      *)local_48,&LocalizableMessageTypes::RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterString__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = LocalizableMessageTypes::String_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>
            (this_01,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&)>
                      *)local_48,&LocalizableMessageTypes::RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  local_20 = (undefined ***)0x0;
  local_38 = &
             ___7__TFunction_OwnedObject_P6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterMessage__AEBUFLocalizationContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_30 = LocalizableMessageTypes::Message_LocalizeValue;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<FFormatArgumentValue_(__cdecl*)(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&),FFormatArgumentValue,FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&>
                ::Call;
  FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>
            (this_01,(TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&)>
                      *)local_48,&LocalizableMessageTypes::RegisteredLocalizationTypes);
  if (local_48[0] != (code *)0x0) {
    pppuVar4 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar4 = local_20;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// ShutdownModule @ 14e9bc950

void __thiscall FLocalizableMessageModule::ShutdownModule(FLocalizableMessageModule *this)

{
  FName FVar1;
  int iVar2;
  uint uVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
  *this_01;
  ForAnyElementType FVar6;
  FName local_res10;
  
  pFVar4 = ::FName::FName(&local_res10,L"LocalizableMessage");
  FVar1 = *pFVar4;
  this_00 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  this_01 = (TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
             *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
  iVar2 = LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.ArrayNum;
  pFVar4 = (FName *)(LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.
                     AllocatorInstance.Data +
                    (longlong)
                    LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.ArrayNum * 8)
  ;
  FVar6 = LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.AllocatorInstance;
  while( true ) {
    if (LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res10)
      ;
    }
    if ((FName *)FVar6.Data == pFVar4) break;
    FVar1 = *(FName *)FVar6.Data;
    local_res10 = FVar1;
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>(this_01,FVar1.Number + uVar3,&local_res10);
    }
    FVar6.Data = FVar6.Data + 8;
  }
  LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.ArrayNum = 0;
  if (LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&LocalizableMessageTypes::RegisteredLocalizationTypes,0,
               &LocalizableMessageTypes::RegisteredLocalizationTypes.Registrations.ArrayMax);
  }
  return;
}

// GetLocalizableMessageProcessor @ 14e9bca60

FLocalizableMessageProcessor * __thiscall
FLocalizableMessageModule::GetLocalizableMessageProcessor(FLocalizableMessageModule *this)

{
  return &this->LocalizableMessageProcessor;
}

