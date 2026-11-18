// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 55

// StaticClass @ 149078760

UClass * __cdecl UNiagaraDataChannelLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelLibrary",
               &Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNiagaraDataChannelLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.InnerSingleton;
}

// UNiagaraDataChannelLibrary @ 1490b2a40

UNiagaraDataChannelLibrary * __thiscall
UNiagaraDataChannelLibrary::UNiagaraDataChannelLibrary
          (UNiagaraDataChannelLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataChannelLibrary__6B_;
  return this;
}

// UNiagaraDataChannelLibrary @ 1490b2a70

UNiagaraDataChannelLibrary * __thiscall
UNiagaraDataChannelLibrary::UNiagaraDataChannelLibrary
          (UNiagaraDataChannelLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UNiagaraDataChannelLibrary__6B_;
  return this;
}

// ~UNiagaraDataChannelLibrary @ 1490b87c0

void __thiscall
UNiagaraDataChannelLibrary::~UNiagaraDataChannelLibrary(UNiagaraDataChannelLibrary *this)

{
  *(undefined ***)this = &___7UNiagaraDataChannelLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateDataChannelReader @ 1490e70a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelReader * __cdecl
UNiagaraDataChannelLibrary::CreateDataChannelReader
          (UObject *param_1,UNiagaraDataChannel *param_2,
          FNiagaraDataChannelSearchParameters *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraDataChannelReader *pUVar3;
  UWorld *pUVar4;
  FNiagaraWorldManager *pFVar5;
  UNiagaraDataChannelHandler *this;
  FNiagaraDataChannelSearchParameters *pFVar6;
  UWorld *pUVar7;
  FNiagaraDataChannelSearchParameters local_38;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                         ,0x142,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNiagaraDataChannelReader *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = (UWorld *)0x0;
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((((param_2 == (UNiagaraDataChannel *)0x0) || (pUVar4 == (UWorld *)0x0)) ||
      (pFVar5 = FNiagaraWorldManager::Get(pUVar4), pFVar5 == (FNiagaraWorldManager *)0x0)) ||
     ((this = FNiagaraDataChannelManager::FindDataChannelHandler
                        ((pFVar5->DataChannelManager).Ptr,param_2),
      this == (UNiagaraDataChannelHandler *)0x0 ||
      (pUVar4 = (UWorld *)UNiagaraDataChannelHandler::GetDataChannelReader(this),
      pUVar4 == (UWorld *)0x0)))) {
    pUVar7 = (UWorld *)0x0;
  }
  else {
    pFVar6 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                       (&local_38,param_3);
    bVar2 = UNiagaraDataChannelReader::InitAccess
                      ((UNiagaraDataChannelReader *)pUVar4,pFVar6,param_4);
    pUVar7 = (UWorld *)0x0;
    if (bVar2) {
      pUVar7 = pUVar4;
    }
  }
  return (UNiagaraDataChannelReader *)pUVar7;
}

// CreateDataChannelReader_WithContext @ 1490e71a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelReader * __cdecl
UNiagaraDataChannelLibrary::CreateDataChannelReader_WithContext
          (UObject *param_1,UNiagaraDataChannel *param_2,FNDCAccessContextInst *param_3,bool param_4
          )

{
  longlong *plVar1;
  ULineBatchComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  UNiagaraDataChannelReader *pUVar5;
  UWorld *pUVar6;
  FNiagaraWorldManager *pFVar7;
  UNiagaraDataChannelHandler *this;
  longlong *plVar8;
  UWorld *pUVar9;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                         ,0x170,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar5 = (UNiagaraDataChannelReader *)(*pcVar3)();
    return pUVar5;
  }
  pUVar6 = (UWorld *)0x0;
  if (param_1 != (UObject *)0x0) {
    pUVar6 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if (((((param_2 == (UNiagaraDataChannel *)0x0) || (pUVar6 == (UWorld *)0x0)) ||
       ((param_3->AccessContext).StructMemory == (uchar *)0x0)) ||
      (((param_3->AccessContext).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0 ||
       (pFVar7 = FNiagaraWorldManager::Get(pUVar6), pFVar7 == (FNiagaraWorldManager *)0x0)))) ||
     ((this = FNiagaraDataChannelManager::FindDataChannelHandler
                        ((pFVar7->DataChannelManager).Ptr,param_2),
      this == (UNiagaraDataChannelHandler *)0x0 ||
      (pUVar6 = (UWorld *)UNiagaraDataChannelHandler::GetDataChannelReader(this),
      pUVar6 == (UWorld *)0x0)))) {
    pUVar9 = (UWorld *)0x0;
  }
  else {
    plVar1 = &pUVar6->_padding_;
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (plVar1 != &local_28) {
      *plVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pUVar6->PersistentLevel,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    *(bool *)&(pUVar6->NetDriver).field0_0x0 = param_4;
    if (((pUVar6->LineBatcher_DEPRECATED).field0_0x0.DebugPtr == (ULineBatchComponent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                           ,0x36,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UNiagaraDataChannelReader *)(*pcVar3)();
      return pUVar5;
    }
    pUVar2 = (pUVar6->LineBatcher_DEPRECATED).field0_0x0.DebugPtr;
    plVar8 = (longlong *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2,local_18,param_3,0);
    if (plVar1 != plVar8) {
      *plVar1 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pUVar6->PersistentLevel,
                 (FSharedReferencer<1> *)(plVar8 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    pUVar9 = (UWorld *)0x0;
    if (pUVar6->_padding_ != 0) {
      pUVar9 = pUVar6;
    }
  }
  return (UNiagaraDataChannelReader *)pUVar9;
}

// CreateDataChannelWriter @ 1490e7350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelWriter * __cdecl
UNiagaraDataChannelLibrary::CreateDataChannelWriter
          (UObject *param_1,UNiagaraDataChannel *param_2,
          FNiagaraDataChannelSearchParameters *param_3,int param_4,bool param_5,bool param_6,
          bool param_7,FString *param_8)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraDataChannelWriter *pUVar3;
  UWorld *pUVar4;
  FNiagaraWorldManager *pFVar5;
  UNiagaraDataChannelHandler *this;
  FNiagaraDataChannelSearchParameters *pFVar6;
  UWorld *pUVar7;
  FNiagaraDataChannelSearchParameters local_38;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                         ,299,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNiagaraDataChannelWriter *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = (UWorld *)0x0;
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((((param_2 == (UNiagaraDataChannel *)0x0) || (pUVar4 == (UWorld *)0x0)) || (param_4 < 1)) ||
     (((pFVar5 = FNiagaraWorldManager::Get(pUVar4), pFVar5 == (FNiagaraWorldManager *)0x0 ||
       (this = FNiagaraDataChannelManager::FindDataChannelHandler
                         ((pFVar5->DataChannelManager).Ptr,param_2),
       this == (UNiagaraDataChannelHandler *)0x0)) ||
      (pUVar4 = (UWorld *)UNiagaraDataChannelHandler::GetDataChannelWriter(this),
      pUVar4 == (UWorld *)0x0)))) {
    pUVar7 = (UWorld *)0x0;
  }
  else {
    pFVar6 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                       (&local_38,param_3);
    bVar2 = UNiagaraDataChannelWriter::InitWrite
                      ((UNiagaraDataChannelWriter *)pUVar4,pFVar6,param_4,param_5,param_6,param_7,
                       param_8);
    pUVar7 = (UWorld *)0x0;
    if (bVar2) {
      pUVar7 = pUVar4;
    }
  }
  return (UNiagaraDataChannelWriter *)pUVar7;
}

// CreateDataChannelWriter_WithContext @ 1490e7490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelWriter * __cdecl
UNiagaraDataChannelLibrary::CreateDataChannelWriter_WithContext
          (UObject *param_1,UNiagaraDataChannel *param_2,FNDCAccessContextInst *param_3,int param_4,
          bool param_5,bool param_6,bool param_7,FString *param_8)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraDataChannelWriter *pUVar3;
  UWorld *pUVar4;
  FNiagaraWorldManager *pFVar5;
  UNiagaraDataChannelHandler *this;
  UWorld *pUVar6;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                         ,0x159,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UNiagaraDataChannelWriter *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = (UWorld *)0x0;
  if (param_1 != (UObject *)0x0) {
    pUVar4 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if (((((param_2 == (UNiagaraDataChannel *)0x0) || (pUVar4 == (UWorld *)0x0)) || (param_4 < 1)) ||
      (((param_3->AccessContext).StructMemory == (uchar *)0x0 ||
       ((param_3->AccessContext).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)))) ||
     ((pFVar5 = FNiagaraWorldManager::Get(pUVar4), pFVar5 == (FNiagaraWorldManager *)0x0 ||
      ((this = FNiagaraDataChannelManager::FindDataChannelHandler
                         ((pFVar5->DataChannelManager).Ptr,param_2),
       this == (UNiagaraDataChannelHandler *)0x0 ||
       (pUVar4 = (UWorld *)UNiagaraDataChannelHandler::GetDataChannelWriter(this),
       pUVar4 == (UWorld *)0x0)))))) {
    pUVar6 = (UWorld *)0x0;
  }
  else {
    bVar2 = UNiagaraDataChannelWriter::BeginWrite
                      ((UNiagaraDataChannelWriter *)pUVar4,param_3,param_4,param_5,param_6,param_7,
                       param_8);
    pUVar6 = (UWorld *)0x0;
    if (bVar2) {
      pUVar6 = pUVar4;
    }
  }
  return (UNiagaraDataChannelWriter *)pUVar6;
}

// FindDataChannelHandler @ 1490f9590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __cdecl
UNiagaraDataChannelLibrary::FindDataChannelHandler(UObject *param_1,UNiagaraDataChannel *param_2)

{
  UWorld *pUVar1;
  FNiagaraWorldManager *pFVar2;
  UNiagaraDataChannelHandler *pUVar3;
  
  if (param_1 == (UObject *)0x0) {
    pUVar1 = (UWorld *)0x0;
  }
  else {
    pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((param_2 != (UNiagaraDataChannel *)0x0) && (pUVar1 != (UWorld *)0x0)) {
    pFVar2 = FNiagaraWorldManager::Get(pUVar1);
    if (pFVar2 != (FNiagaraWorldManager *)0x0) {
      pUVar3 = FNiagaraDataChannelManager::FindDataChannelHandler
                         ((pFVar2->DataChannelManager).Ptr,param_2);
      return pUVar3;
    }
  }
  return (UNiagaraDataChannelHandler *)0x0;
}

// GetDataChannelElementCount @ 149104b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __cdecl
UNiagaraDataChannelLibrary::GetDataChannelElementCount
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,
          FNiagaraDataChannelSearchParameters *param_3,bool param_4)

{
  FNiagaraDataChannelData *pFVar1;
  FNiagaraDataChannelGameData *pFVar2;
  FNiagaraDataChannelSearchParameters *pFVar3;
  UNiagaraDataChannelReader *pUVar4;
  FNiagaraDataChannelSearchParameters local_38;
  
  if ((param_2 != (UNiagaraDataChannelAsset *)0x0) &&
     ((param_2->DataChannel).field0_0x0.DebugPtr != (UNiagaraDataChannel *)0x0)) {
    pFVar3 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                       (&local_38,param_3);
    pUVar4 = CreateDataChannelReader
                       (param_1,(param_2->DataChannel).field0_0x0.DebugPtr,pFVar3,param_4);
    if ((pUVar4 != (UNiagaraDataChannelReader *)0x0) &&
       (pFVar1 = (pUVar4->Data).Object, pFVar1 != (FNiagaraDataChannelData *)0x0)) {
      pFVar2 = (pFVar1->GameData).Object;
      if (pUVar4->bReadingPreviousFrame != false) {
        return pFVar2->PrevNumElements;
      }
      return pFVar2->NumElements;
    }
  }
  return 0;
}

// GetDataChannelElementCount_WithContext @ 149104ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

int __cdecl
UNiagaraDataChannelLibrary::GetDataChannelElementCount_WithContext
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,FNDCAccessContextInst *param_3,
          bool param_4)

{
  UNiagaraDataChannel *pUVar1;
  FNiagaraDataChannelData *pFVar2;
  FNiagaraDataChannelGameData *pFVar3;
  UNiagaraDataChannelReader *pUVar4;
  
  if ((param_2 != (UNiagaraDataChannelAsset *)0x0) &&
     (pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr, pUVar1 != (UNiagaraDataChannel *)0x0)) {
    pUVar4 = CreateDataChannelReader_WithContext(param_1,pUVar1,param_3,param_4);
    if ((pUVar4 != (UNiagaraDataChannelReader *)0x0) &&
       (pFVar2 = (pUVar4->Data).Object, pFVar2 != (FNiagaraDataChannelData *)0x0)) {
      pFVar3 = (pFVar2->GameData).Object;
      if (pUVar4->bReadingPreviousFrame != false) {
        return pFVar3->PrevNumElements;
      }
      return pFVar3->NumElements;
    }
  }
  return 0;
}

// GetMembersInNDCAccessContextInstance @ 149106130

void __cdecl
UNiagaraDataChannelLibrary::GetMembersInNDCAccessContextInstance
          (FNDCAccessContextInst *param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetNiagaraDataChannel @ 149107050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __cdecl
UNiagaraDataChannelLibrary::GetNiagaraDataChannel
          (UObject *param_1,UNiagaraDataChannelAsset *param_2)

{
  UNiagaraDataChannel *pUVar1;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  UNiagaraDataChannelHandler *pUVar4;
  
  pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr;
  if (param_1 == (UObject *)0x0) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((pUVar1 != (UNiagaraDataChannel *)0x0) && (pUVar2 != (UWorld *)0x0)) {
    pFVar3 = FNiagaraWorldManager::Get(pUVar2);
    if (pFVar3 != (FNiagaraWorldManager *)0x0) {
      pUVar4 = FNiagaraDataChannelManager::FindDataChannelHandler
                         ((pFVar3->DataChannelManager).Ptr,pUVar1);
      return pUVar4;
    }
  }
  return (UNiagaraDataChannelHandler *)0x0;
}

// GetPrivateStaticClass @ 149108540

UClass * __cdecl UNiagaraDataChannelLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelLibrary",
               &Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UNiagaraDataChannelLibrary>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.InnerSingleton;
}

// GetSinglePropertyInNDCAccessContextInstance @ 14910a0c0

void __cdecl
UNiagaraDataChannelLibrary::GetSinglePropertyInNDCAccessContextInstance
          (FNDCAccessContextInst *param_1,UScriptStruct *param_2,FName param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x79,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetUsableAccessContextFromNDC @ 14910bf50

FNDCAccessContextInst * __cdecl
UNiagaraDataChannelLibrary::GetUsableAccessContextFromNDC(UNiagaraDataChannelAsset *param_1)

{
  UNiagaraDataChannel *this;
  FNDCAccessContextInst *pFVar1;
  
  if ((param_1 != (UNiagaraDataChannelAsset *)0x0) &&
     (this = (param_1->DataChannel).field0_0x0.DebugPtr, this != (UNiagaraDataChannel *)0x0)) {
    pFVar1 = UNiagaraDataChannel::GetTransientAccessContext(this);
    return pFVar1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
      atexit(`UNiagaraDataChannelLibrary::GetUsableAccessContextFromNDC'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
      return &::Dummy;
    }
  }
  return &::Dummy;
}

// GetUsableAccessContextFromNDCRef @ 14910bff0

FNDCAccessContextInst * __cdecl
UNiagaraDataChannelLibrary::GetUsableAccessContextFromNDCRef(FNiagaraDataChannelReference *param_1)

{
  UNiagaraDataChannelAsset *pUVar1;
  UNiagaraDataChannel *this;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  FInstancedStruct *this_00;
  
  pUVar1 = (param_1->DataChannel).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraDataChannelAsset *)0x0) &&
     (this = (pUVar1->DataChannel).field0_0x0.DebugPtr, this != (UNiagaraDataChannel *)0x0)) {
    FNiagaraDataChannelReference::InitAccessContext(param_1,true);
    this_00 = &UNiagaraDataChannel::GetTransientAccessContext(this)->AccessContext;
    if (param_1->bCustomAccessContext != false) {
      puVar2 = (param_1->AccessContext).AccessContext.StructMemory;
      if (((puVar2 != (uchar *)0x0) &&
          (pUVar3 = (param_1->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
          pUVar3 != (UScriptStruct *)0x0)) && (this_00 != &(param_1->AccessContext).AccessContext))
      {
        FInstancedStruct::InitializeAs(this_00,pUVar3,puVar2);
      }
    }
    return (FNDCAccessContextInst *)this_00;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
      atexit(`FNiagaraDataChannelReference::GetUsableAccessContext'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
      return &::Dummy;
    }
  }
  return &::Dummy;
}

// MakeNDCAccessContextInstance @ 149119050

FNDCAccessContextInst * __cdecl
UNiagaraDataChannelLibrary::MakeNDCAccessContextInstance
          (FNDCAccessContextInst *__return_storage_ptr__,UScriptStruct *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNDCAccessContextInst *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x66,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNDCAccessContextInst *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->AccessContext).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (__return_storage_ptr__->AccessContext).StructMemory = (uchar *)0x0;
  FInstancedStruct::FInstancedStruct(&__return_storage_ptr__->AccessContext);
  return __return_storage_ptr__;
}

// PrepareAccessContextFromNDCRef @ 149124a40

FNDCAccessContextInst * __cdecl
UNiagaraDataChannelLibrary::PrepareAccessContextFromNDCRef(FNiagaraDataChannelReference *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNDCAccessContextInst *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x196,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNDCAccessContextInst *)(*pcVar1)();
    return pFVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
      atexit(`UNiagaraDataChannelLibrary::PrepareAccessContextFromNDCRef'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
      return &::Dummy;
    }
  }
  return &::Dummy;
}

// ReadFromNiagaraDataChannel @ 149125f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelReader * __cdecl
UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannel
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,
          FNiagaraDataChannelSearchParameters *param_3,bool param_4)

{
  UNiagaraDataChannelReader *pUVar1;
  TObjectPtr<USceneComponent>_u_0 local_38;
  double local_30;
  double dStack_28;
  double local_20;
  uint local_18;
  
  local_38.ObjectPtr.field0_0x0 = (FObjectPtr)(param_3->OwningComponent).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_38.DebugPtr != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  local_30 = (param_3->Location).field0_0x0._s_0.X;
  dStack_28 = (param_3->Location).field0_0x0._s_0.Y;
  local_20 = (param_3->Location).field0_0x0._s_0.Z;
  local_18 = local_18 ^ (local_18 ^ param_3->bOverrideLocation) & 1;
  pUVar1 = CreateDataChannelReader
                     (param_1,(param_2->DataChannel).field0_0x0.DebugPtr,
                      (FNiagaraDataChannelSearchParameters *)&local_38.ObjectPtr,param_4);
  return pUVar1;
}

// ReadFromNiagaraDataChannelSingle @ 149126020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannelSingle
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,int param_3,
          FNiagaraDataChannelSearchParameters *param_4,bool param_5,
          ENiagartaDataChannelReadResult *param_6)

{
  return;
}

// ReadFromNiagaraDataChannelSingle_WithContext @ 149126030

void __cdecl
UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannelSingle_WithContext
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,int param_3,
          FNDCAccessContextInst *param_4,bool param_5,ENiagartaDataChannelReadResult *param_6)

{
  return;
}

// ReadFromNiagaraDataChannel_WithContext @ 149126040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraDataChannelReader * __cdecl
UNiagaraDataChannelLibrary::ReadFromNiagaraDataChannel_WithContext
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,FNDCAccessContextInst *param_3,
          bool param_4)

{
  UNiagaraDataChannelReader *pUVar1;
  
  pUVar1 = CreateDataChannelReader_WithContext
                     (param_1,(param_2->DataChannel).field0_0x0.DebugPtr,param_3,param_4);
  return pUVar1;
}

// SetMembersInNDCAccessContextInstance @ 14912e330

void __cdecl
UNiagaraDataChannelLibrary::SetMembersInNDCAccessContextInstance
          (FNDCAccessContextInst *param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x6d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetSinglePropertyInNDCAccessContextInstance @ 149133260

void __cdecl
UNiagaraDataChannelLibrary::SetSinglePropertyInNDCAccessContextInstance
          (FNDCAccessContextInst *param_1,UScriptStruct *param_2,FName param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x7f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// StaticRegisterNativesUNiagaraDataChannelLibrary @ 149139d20

void __cdecl UNiagaraDataChannelLibrary::StaticRegisterNativesUNiagaraDataChannelLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x16;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SubscribeToNiagaraDataChannel @ 14913a590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::SubscribeToNiagaraDataChannel
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,
          FNiagaraDataChannelSearchParameters *param_3,FOnNewNiagaraDataChannelPublish *param_4,
          int *param_5)

{
  UNiagaraDataChannel *pUVar1;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  UNiagaraDataChannelHandler *this;
  FOnNewNiagaraDataChannelPublish local_68;
  FReadAccessScope local_50;
  TObjectPtr<USceneComponent>_u_0 local_38;
  double local_30;
  double dStack_28;
  double local_20;
  uint local_18;
  
  pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr;
  if (param_1 == (UObject *)0x0) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((pUVar1 != (UNiagaraDataChannel *)0x0) && (pUVar2 != (UWorld *)0x0)) {
    pFVar3 = FNiagaraWorldManager::Get(pUVar2);
    if (pFVar3 != (FNiagaraWorldManager *)0x0) {
      this = FNiagaraDataChannelManager::FindDataChannelHandler
                       ((pFVar3->DataChannelManager).Ptr,pUVar1);
      if (this != (UNiagaraDataChannelHandler *)0x0) {
        local_38.ObjectPtr.field0_0x0 = (FObjectPtr)(param_3->OwningComponent).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_38.DebugPtr != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
        }
        local_30 = (param_3->Location).field0_0x0._s_0.X;
        dStack_28 = (param_3->Location).field0_0x0._s_0.Y;
        local_68._0_8_ = 0;
        local_20 = (param_3->Location).field0_0x0._s_0.Z;
        local_18 = local_18 ^ (local_18 ^ param_3->bOverrideLocation) & 1;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_50);
        local_68._8_8_ = *(undefined8 *)&param_4->field_0x8;
        local_68._16_8_ = *(undefined8 *)&param_4->field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates
                  (this,&local_68,(FNiagaraDataChannelSearchParameters *)&local_38.ObjectPtr,param_5
                  );
      }
    }
  }
  return;
}

// SubscribeToNiagaraDataChannel_WithContext @ 14913a6b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::SubscribeToNiagaraDataChannel_WithContext
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,FNDCAccessContextInst *param_3,
          FOnNewNiagaraDataChannelPublish *param_4,int *param_5)

{
  UNiagaraDataChannel *pUVar1;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  UNiagaraDataChannelHandler *this;
  FOnNewNiagaraDataChannelPublish local_38;
  FReadAccessScope local_20;
  
  pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr;
  if (param_1 == (UObject *)0x0) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((pUVar1 != (UNiagaraDataChannel *)0x0) && (pUVar2 != (UWorld *)0x0)) {
    pFVar3 = FNiagaraWorldManager::Get(pUVar2);
    if (pFVar3 != (FNiagaraWorldManager *)0x0) {
      this = FNiagaraDataChannelManager::FindDataChannelHandler
                       ((pFVar3->DataChannelManager).Ptr,pUVar1);
      if (this != (UNiagaraDataChannelHandler *)0x0) {
        local_38._0_8_ = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_20);
        local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
        local_38._16_8_ = *(undefined8 *)&param_4->field_0x10;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates_WithContext
                  (this,&local_38,param_3,param_5);
      }
    }
  }
  return;
}

// UnsubscribeFromNiagaraDataChannel @ 14913ef40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::UnsubscribeFromNiagaraDataChannel
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,int *param_3)

{
  UNiagaraDataChannel *pUVar1;
  UWorld *pUVar2;
  FNiagaraWorldManager *pFVar3;
  UNiagaraDataChannelHandler *this;
  
  pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr;
  if (param_1 == (UObject *)0x0) {
    pUVar2 = (UWorld *)0x0;
  }
  else {
    pUVar2 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((pUVar1 != (UNiagaraDataChannel *)0x0) && (pUVar2 != (UWorld *)0x0)) {
    pFVar3 = FNiagaraWorldManager::Get(pUVar2);
    if (pFVar3 != (FNiagaraWorldManager *)0x0) {
      this = FNiagaraDataChannelManager::FindDataChannelHandler
                       ((pFVar3->DataChannelManager).Ptr,pUVar1);
      if (this != (UNiagaraDataChannelHandler *)0x0) {
        UNiagaraDataChannelHandler::UnsubscribeFromDataChannelUpdates(this,param_3);
      }
    }
  }
  return;
}

// WriteToNiagaraDataChannel @ 14914c290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelWriter * __cdecl
UNiagaraDataChannelLibrary::WriteToNiagaraDataChannel
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,
          FNiagaraDataChannelSearchParameters *param_3,int param_4,bool param_5,bool param_6,
          bool param_7,FString *param_8)

{
  UNiagaraDataChannel *pUVar1;
  code *pcVar2;
  bool bVar3;
  UNiagaraDataChannelWriter *pUVar4;
  UWorld *pUVar5;
  FNiagaraWorldManager *pFVar6;
  UNiagaraDataChannelHandler *this;
  FNiagaraDataChannelSearchParameters *pFVar7;
  TObjectPtr<USceneComponent>_u_0 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  uint local_38;
  FNiagaraDataChannelSearchParameters local_30;
  
  local_58.ObjectPtr.field0_0x0 = (FObjectPtr)(param_3->OwningComponent).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_58.DebugPtr != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
  }
  local_50 = (param_3->Location).field0_0x0._s_0.X;
  dStack_48 = (param_3->Location).field0_0x0._s_0.Y;
  local_40 = (param_3->Location).field0_0x0._s_0.Z;
  local_38 = local_38 ^ (local_38 ^ param_3->bOverrideLocation) & 1;
  pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                         ,299,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UNiagaraDataChannelWriter *)(*pcVar2)();
    return pUVar4;
  }
  if (param_1 == (UObject *)0x0) {
    pUVar5 = (UWorld *)0x0;
  }
  else {
    pUVar5 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((((pUVar1 != (UNiagaraDataChannel *)0x0) && (pUVar5 != (UWorld *)0x0)) && (0 < param_4)) &&
     (((pFVar6 = FNiagaraWorldManager::Get(pUVar5), pFVar6 != (FNiagaraWorldManager *)0x0 &&
       (this = FNiagaraDataChannelManager::FindDataChannelHandler
                         ((pFVar6->DataChannelManager).Ptr,pUVar1),
       this != (UNiagaraDataChannelHandler *)0x0)) &&
      (pUVar4 = UNiagaraDataChannelHandler::GetDataChannelWriter(this),
      pUVar4 != (UNiagaraDataChannelWriter *)0x0)))) {
    pFVar7 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                       (&local_30,(FNiagaraDataChannelSearchParameters *)&local_58.ObjectPtr);
    bVar3 = UNiagaraDataChannelWriter::InitWrite
                      (pUVar4,pFVar7,param_4,param_5,param_6,param_7,param_8);
    if (bVar3) {
      return pUVar4;
    }
  }
  return (UNiagaraDataChannelWriter *)0x0;
}

// WriteToNiagaraDataChannelSingle @ 14914c410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::WriteToNiagaraDataChannelSingle
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,
          FNiagaraDataChannelSearchParameters *param_3,bool param_4,bool param_5,bool param_6)

{
  return;
}

// WriteToNiagaraDataChannelSingle_WithContext @ 14914c420

void __cdecl
UNiagaraDataChannelLibrary::WriteToNiagaraDataChannelSingle_WithContext
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,FNDCAccessContextInst *param_3,
          bool param_4,bool param_5,bool param_6)

{
  return;
}

// WriteToNiagaraDataChannel_WithContext @ 14914c430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelWriter * __cdecl
UNiagaraDataChannelLibrary::WriteToNiagaraDataChannel_WithContext
          (UObject *param_1,UNiagaraDataChannelAsset *param_2,FNDCAccessContextInst *param_3,
          int param_4,bool param_5,bool param_6,bool param_7,FString *param_8)

{
  UNiagaraDataChannel *pUVar1;
  code *pcVar2;
  bool bVar3;
  UNiagaraDataChannelWriter *pUVar4;
  UWorld *pUVar5;
  FNiagaraWorldManager *pFVar6;
  UNiagaraDataChannelHandler *this;
  
  pUVar1 = (param_2->DataChannel).field0_0x0.DebugPtr;
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                         ,0x159,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UNiagaraDataChannelWriter *)(*pcVar2)();
    return pUVar4;
  }
  if (param_1 == (UObject *)0x0) {
    pUVar5 = (UWorld *)0x0;
  }
  else {
    pUVar5 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  }
  if ((((((pUVar1 == (UNiagaraDataChannel *)0x0) || (pUVar5 == (UWorld *)0x0)) || (param_4 < 1)) ||
       (((param_3->AccessContext).StructMemory == (uchar *)0x0 ||
        ((param_3->AccessContext).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)))) ||
      ((pFVar6 = FNiagaraWorldManager::Get(pUVar5), pFVar6 == (FNiagaraWorldManager *)0x0 ||
       ((this = FNiagaraDataChannelManager::FindDataChannelHandler
                          ((pFVar6->DataChannelManager).Ptr,pUVar1),
        this == (UNiagaraDataChannelHandler *)0x0 ||
        (pUVar4 = UNiagaraDataChannelHandler::GetDataChannelWriter(this),
        pUVar4 == (UNiagaraDataChannelWriter *)0x0)))))) ||
     (bVar3 = UNiagaraDataChannelWriter::BeginWrite
                        (pUVar4,param_3,param_4,param_5,param_6,param_7,param_8), !bVar3)) {
    pUVar4 = (UNiagaraDataChannelWriter *)0x0;
  }
  return pUVar4;
}

// execGetDataChannelElementCount @ 14914e5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execGetDataChannelElementCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FNiagaraDataChannelData *pFVar3;
  FNiagaraDataChannelGameData *pFVar4;
  longlong lVar5;
  UObject *pUVar6;
  FNiagaraDataChannelSearchParameters *pFVar7;
  UNiagaraDataChannelReader *pUVar8;
  int iVar9;
  bool bVar10;
  int local_res10 [2];
  longlong local_res18;
  UObject *local_res20;
  USceneComponent *local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  uint local_88;
  TObjectPtr<USceneComponent>_u_0 local_80;
  double local_78;
  double dStack_70;
  double local_68;
  uint local_60;
  FNiagaraDataChannelSearchParameters local_58;
  
  iVar9 = 0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_88 = local_88 & 0xfffffffe;
  local_a8 = (USceneComponent *)0x0;
  local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar10 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80.DebugPtr = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  pUVar6 = local_res20;
  lVar5 = local_res18;
  local_60 = local_60 & 0xfffffffe | local_88 & 1;
  local_68 = local_90;
  local_78 = local_a0;
  dStack_70 = dStack_98;
  if ((local_res18 != 0) && (*(longlong *)(local_res18 + 0x28) != 0)) {
    pFVar7 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                       (&local_58,(FNiagaraDataChannelSearchParameters *)&local_80.ObjectPtr);
    pUVar8 = CreateDataChannelReader(pUVar6,*(UNiagaraDataChannel **)(lVar5 + 0x28),pFVar7,bVar10);
    if ((pUVar8 != (UNiagaraDataChannelReader *)0x0) &&
       (pFVar3 = (pUVar8->Data).Object, iVar9 = 0, pFVar3 != (FNiagaraDataChannelData *)0x0)) {
      pFVar4 = (pFVar3->GameData).Object;
      if (pUVar8->bReadingPreviousFrame == false) {
        iVar9 = pFVar4->NumElements;
      }
      else {
        iVar9 = pFVar4->PrevNumElements;
      }
    }
  }
  *(int *)param_3 = iVar9;
  return;
}

// execGetDataChannelElementCount_WithContext @ 14914e7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execGetDataChannelElementCount_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FNiagaraDataChannelData *pFVar3;
  FNiagaraDataChannelGameData *pFVar4;
  UNiagaraDataChannelReader *pUVar5;
  FInstancedStruct *pFVar6;
  int iVar7;
  int local_res10 [2];
  longlong local_res18;
  UObject *local_res20;
  FInstancedStruct local_38;
  
  iVar7 = 0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FInstancedStruct::FInstancedStruct(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pFVar6 = &local_38;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar6 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 != 0) &&
     (*(UNiagaraDataChannel **)(local_res18 + 0x28) != (UNiagaraDataChannel *)0x0)) {
    pUVar5 = CreateDataChannelReader_WithContext
                       (local_res20,*(UNiagaraDataChannel **)(local_res18 + 0x28),
                        (FNDCAccessContextInst *)pFVar6,local_res10[0] != 0);
    if ((pUVar5 != (UNiagaraDataChannelReader *)0x0) &&
       (pFVar3 = (pUVar5->Data).Object, iVar7 = 0, pFVar3 != (FNiagaraDataChannelData *)0x0)) {
      pFVar4 = (pFVar3->GameData).Object;
      if (pUVar5->bReadingPreviousFrame == false) {
        iVar7 = pFVar4->NumElements;
      }
      else {
        iVar7 = pFVar4->PrevNumElements;
      }
    }
  }
  *(int *)param_3 = iVar7;
  FInstancedStruct::Reset(&local_38);
  return;
}

// execGetMembersInNDCAccessContextInstance @ 14914e9d0

void __cdecl
UNiagaraDataChannelLibrary::execGetMembersInNDCAccessContextInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_res10 [3];
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x73,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FInstancedStruct::Reset(&local_18);
  return;
}

// execGetNiagaraDataChannel @ 149150b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execGetNiagaraDataChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraDataChannel *pUVar2;
  UWorld *pUVar3;
  FNiagaraWorldManager *pFVar4;
  UNiagaraDataChannelHandler *pUVar5;
  UObject *local_res10;
  longlong local_res18 [2];
  
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
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UNiagaraDataChannel **)(local_res18[0] + 0x28);
  if (local_res10 == (UObject *)0x0) {
    pUVar3 = (UWorld *)0x0;
  }
  else {
    pUVar3 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull);
  }
  if ((pUVar2 != (UNiagaraDataChannel *)0x0) && (pUVar3 != (UWorld *)0x0)) {
    pFVar4 = FNiagaraWorldManager::Get(pUVar3);
    if (pFVar4 != (FNiagaraWorldManager *)0x0) {
      pUVar5 = FNiagaraDataChannelManager::FindDataChannelHandler
                         ((pFVar4->DataChannelManager).Ptr,pUVar2);
      *(UNiagaraDataChannelHandler **)param_3 = pUVar5;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSinglePropertyInNDCAccessContextInstance @ 149150c40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execGetSinglePropertyInNDCAccessContextInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  int iVar3;
  uchar *_Dst;
  UScriptStruct *this;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FProperty *pFVar7;
  FText *pFVar8;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  undefined8 uVar12;
  uchar *puVar13;
  FInstancedStruct *pFVar14;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FName local_108;
  longlong local_100;
  FInstancedStruct local_f8;
  FName local_e8;
  FBlueprintExceptionInfo local_e0;
  FBlueprintExceptionInfo local_c8;
  FString local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  FInstancedStruct::FInstancedStruct(&local_f8);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100 = 0;
  pFVar14 = &local_f8;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar14 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar7 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar7->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar7);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  _Dst = param_2->MostRecentPropertyAddress;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (pFVar14->ScriptStruct).field0_0x0.DebugPtr;
  puVar13 = pFVar14->StructMemory;
  if (this == (UScriptStruct *)0x0) {
LAB_149150ffd:
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"NiagaraDataChannels",L"NDC_GetAccessContext_InvalidTypeWarning",
                        L"Invalid Value type for Get Members In Niagara Data Channel Access Context. You must use a child of FNDCAccessContextBase. Possible that calls with Incompatible types have been mixed."
                       );
    local_c8.EventType = NonFatalError;
    local_c8.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_c8.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_c8.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
    }
    local_c8.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if (local_c8.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_c8);
    uVar12 = local_c8.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextBase,(UObject *)pUVar6,
                           L"NDCAccessContextBase");
      if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_149150ffd;
    }
    iVar2 = (int)this->_padding_;
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_
    ;
    if ((iVar2 < iVar3) ||
       ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || (local_100 == 0)) goto LAB_149150ffd;
    if ((iVar2 < *(int *)(local_100 + 0x38)) ||
       (*(longlong *)(this->_padding_ + (longlong)*(int *)(local_100 + 0x38) * 8) !=
        local_100 + 0x30)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_149150ffd;
    pFVar7 = UStruct::FindPropertyByName((UStruct *)this,local_108);
    if (pFVar7 != (FProperty *)0x0) {
      if (pFVar7->ArrayDim < 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (puVar13 == (uchar *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar13 = puVar13 + pFVar7->Offset_Internal;
      if (_Dst != puVar13) {
        if (((uint)(int)pFVar7->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar7->_padding_ + 0xf0))(pFVar7,_Dst,puVar13,pFVar7->ArrayDim);
        }
        else {
          memcpy(_Dst,puVar13,(longlong)pFVar7->ElementSize * (longlong)pFVar7->ArrayDim);
        }
      }
      goto LAB_1491510a1;
    }
    local_e8 = (FName)this->_padding_;
    ::FName::ToString(&local_e8,&local_b0);
    pFVar8 = FText::FromString(&local_70,&local_b0);
    pFVar9 = FText::FromName(&local_60,&local_108);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_90,L"NiagaraDataChannels",
                         L"NDC_AccessContext_MissingSourceProperty_Fmt",
                         L"Cannot read {0} from {1}. Property does not exist on this struct type.");
    pFVar11 = FTextFormat::FTextFormat(&local_50,pFVar10,Default);
    pFVar8 = FText::Format<FText,FText>(&local_a0,pFVar11,pFVar9,pFVar8);
    local_e0.EventType = AbortExecution;
    local_e0.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar8->TextData).Reference;
    if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e0.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_e0.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
    }
    local_e0.Description.field0_0x0.TypedValue.Flags = pFVar8->Flags;
    if (local_e0.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_e0);
    uVar12 = local_e0.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  if ((ITextData *)uVar12 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar12 + 0x10))();
  }
LAB_1491510a1:
  FInstancedStruct::Reset(&local_f8);
  return;
}

// execGetUsableAccessContextFromNDC @ 1491510d0

void __cdecl
UNiagaraDataChannelLibrary::execGetUsableAccessContextFromNDC
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FNDCAccessContextInst *pFVar2;
  longlong local_res10;
  
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
  if ((local_res10 == 0) ||
     (*(UNiagaraDataChannel **)(local_res10 + 0x28) == (UNiagaraDataChannel *)0x0)) {
    pFVar2 = &::Dummy;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
        atexit(`UNiagaraDataChannelLibrary::GetUsableAccessContextFromNDC'::__l2::
               _dynamic_atexit_destructor_for__Dummy__);
        _Init_thread_footer(&::_TSS0);
      }
    }
  }
  else {
    pFVar2 = UNiagaraDataChannel::GetTransientAccessContext
                       (*(UNiagaraDataChannel **)(local_res10 + 0x28));
  }
  if (param_3 != pFVar2) {
    FInstancedStruct::InitializeAs
              (param_3,(pFVar2->AccessContext).ScriptStruct.field0_0x0.DebugPtr,
               (pFVar2->AccessContext).StructMemory);
  }
  return;
}

// execGetUsableAccessContextFromNDCRef @ 1491511e0

void __cdecl
UNiagaraDataChannelLibrary::execGetUsableAccessContextFromNDCRef
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraDataChannel *this;
  UScriptStruct *pUVar2;
  FNDCAccessContextInst *this_00;
  TObjectPtr<UNiagaraDataChannelAsset>_u_0 *this_01;
  TObjectPtr<UNiagaraDataChannelAsset>_u_0 local_28;
  FInstancedStruct local_20;
  undefined1 local_10;
  
  local_28.DebugPtr = (UNiagaraDataChannelAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&local_20);
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this_01 = &local_28;
  if ((TObjectPtr<UNiagaraDataChannelAsset>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UNiagaraDataChannelAsset>_u_0 *)0x0) {
    this_01 = (TObjectPtr<UNiagaraDataChannelAsset>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((this_01->ObjectPtr).field0_0x0.Handle == (UObject *)0x0) ||
     (this = *(UNiagaraDataChannel **)((this_01->ObjectPtr).field0_0x0.Handle + 1),
     this == (UNiagaraDataChannel *)0x0)) {
    this_00 = &::Dummy;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
        atexit(`FNiagaraDataChannelReference::GetUsableAccessContext'::__l2::
               _dynamic_atexit_destructor_for__Dummy__);
        _Init_thread_footer(&::_TSS0);
      }
    }
  }
  else {
    FNiagaraDataChannelReference::InitAccessContext
              ((FNiagaraDataChannelReference *)&this_01->ObjectPtr,true);
    this_00 = UNiagaraDataChannel::GetTransientAccessContext(this);
    if (*(char *)(this_01 + 3) != '\0') {
      if (((this_01[2].DebugPtr != (UNiagaraDataChannelAsset *)0x0) &&
          (pUVar2 = (UScriptStruct *)this_01[1].DebugPtr, pUVar2 != (UScriptStruct *)0x0)) &&
         ((TObjectPtr<UNiagaraDataChannelAsset>_u_0 *)this_00 != this_01 + 1)) {
        FInstancedStruct::InitializeAs(&this_00->AccessContext,pUVar2,(uchar *)this_01[2].DebugPtr);
      }
    }
  }
  if (param_3 != this_00) {
    FInstancedStruct::InitializeAs
              (param_3,(UScriptStruct *)(((FObjectPtr *)this_00)->field0_0x0).Handle,
               (uchar *)((TObjectPtr<UNiagaraDataChannelAsset>_u_0 *)((longlong)this_00 + 8))->
                        DebugPtr);
  }
  FInstancedStruct::Reset(&local_20);
  return;
}

// execMakeNDCAccessContextInstance @ 149151a30

void __cdecl
UNiagaraDataChannelLibrary::execMakeNDCAccessContextInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FText *pFVar7;
  UScriptStruct *pUVar8;
  undefined1 local_res10 [16];
  UScriptStruct *local_res20;
  FText local_48;
  FBlueprintExceptionInfo local_38;
  
  local_res20 = (UScriptStruct *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextBase,(UObject *)pUVar6,
                           L"NDCAccessContextBase");
      if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_149151b6c;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_
    ;
    iVar2 = (int)local_res20->_padding_;
    if ((iVar2 < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res20->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar8 = (UScriptStruct *)0x0;
      if (((iVar2 < iVar1) ||
          ((longlong *)*(undefined1 **)(local_res20->_padding_ + (longlong)iVar1 * 8) !=
           &(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_)) ||
         (pUVar8 = local_res20, local_res20 == (UScriptStruct *)0x0)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AccessContextStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessContext.h"
                           ,0xd2,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FInstancedStruct::InitializeAs(param_3,pUVar8,(uchar *)0x0);
      return;
    }
  }
LAB_149151b6c:
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"NiagaraDataChannels",L"NDC_MakeAccessContext_InvalidTypeWarning",
                      L"Invalid Value type for Make Niagara Data Channel Access Context. You must use a child of FNDCAccessContextBase"
                     );
  local_38.EventType = AbortExecution;
  local_38.Description.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(pFVar7->TextData).Reference;
  if (local_38.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_38.Description.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_38.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
  }
  local_38.Description.field0_0x0.TypedValue.Flags = pFVar7->Flags;
  if (local_38.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_38);
  if (local_38.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_38.Description.field0_0x0.TypedValue.TextData.Reference + 0x10)
    )();
  }
  return;
}

// execPrepareAccessContextFromNDCRef @ 149151cc0

void __cdecl
UNiagaraDataChannelLibrary::execPrepareAccessContextFromNDCRef
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_28;
  FInstancedStruct local_20;
  undefined1 local_10;
  
  local_28 = 0;
  FInstancedStruct::FInstancedStruct(&local_20);
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x196,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FInstancedStruct::FInstancedStruct(&::Dummy.AccessContext);
      atexit(`UNiagaraDataChannelLibrary::PrepareAccessContextFromNDCRef'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_3 != &::Dummy) {
    FInstancedStruct::InitializeAs
              (param_3,(UScriptStruct *)::Dummy.AccessContext.ScriptStruct.field0_0x0,
               ::Dummy.AccessContext.StructMemory);
  }
  FInstancedStruct::Reset(&local_20);
  return;
}

// execReadFromNiagaraDataChannel @ 149152340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *pUVar3;
  USceneComponent *pUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  UNiagaraDataChannelReader *pUVar10;
  uint uVar11;
  bool bVar12;
  int local_res10 [2];
  longlong local_res18;
  UObject *local_res20;
  USceneComponent *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  uint local_70;
  TObjectPtr<USceneComponent>_u_0 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  uint local_48;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  local_70 = local_70 & 0xfffffffe;
  local_90 = (USceneComponent *)0x0;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
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
  pUVar4 = local_90;
  bVar12 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_90);
  }
  dVar9 = local_78;
  pUVar3 = local_res20;
  lVar2 = local_res18;
  uVar5 = (undefined4)local_88;
  uVar6 = local_88._4_4_;
  uVar7 = (undefined4)uStack_80;
  uVar8 = uStack_80._4_4_;
  uVar11 = local_70 & 1;
  local_68.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  local_50 = dVar9;
  local_48 = local_48 ^ (local_48 ^ uVar11) & 1;
  local_60 = uVar5;
  uStack_5c = uVar6;
  uStack_58 = uVar7;
  uStack_54 = uVar8;
  pUVar10 = CreateDataChannelReader
                      (pUVar3,*(UNiagaraDataChannel **)(lVar2 + 0x28),
                       (FNiagaraDataChannelSearchParameters *)&local_68.ObjectPtr,bVar12);
  *(UNiagaraDataChannelReader **)param_3 = pUVar10;
  return;
}

// execReadFromNiagaraDataChannelSingle @ 149152530

void __cdecl
UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannelSingle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  UObject *local_30;
  double local_28;
  double dStack_20;
  double local_18;
  uint local_10;
  
  local_40 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_38 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
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
  local_10 = local_10 & 0xfffffffe;
  local_30 = (UObject *)0x0;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_48[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  return;
}

// execReadFromNiagaraDataChannelSingle_WithContext @ 149152720

void __cdecl
UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannelSingle_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  FInstancedStruct local_20;
  
  local_30 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_28 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
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
  FInstancedStruct::FInstancedStruct(&local_20);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_38[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::Reset(&local_20);
  return;
}

// execReadFromNiagaraDataChannel_WithContext @ 1491528e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execReadFromNiagaraDataChannel_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraDataChannelReader *pUVar2;
  FInstancedStruct *pFVar3;
  int local_res10 [2];
  longlong local_res18;
  UObject *local_res20;
  FInstancedStruct local_28;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
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
  FInstancedStruct::FInstancedStruct(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  pFVar3 = &local_28;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar3 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = CreateDataChannelReader_WithContext
                     (local_res20,*(UNiagaraDataChannel **)(local_res18 + 0x28),
                      (FNDCAccessContextInst *)pFVar3,local_res10[0] != 0);
  *(UNiagaraDataChannelReader **)param_3 = pUVar2;
  FInstancedStruct::Reset(&local_28);
  return;
}

// execSetMembersInNDCAccessContextInstance @ 149153d20

void __cdecl
UNiagaraDataChannelLibrary::execSetMembersInNDCAccessContextInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_res10 [3];
  FInstancedStruct local_18;
  
  FInstancedStruct::FInstancedStruct(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                     ,0x6d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FInstancedStruct::Reset(&local_18);
  return;
}

// execSetSinglePropertyInNDCAccessContextInstance @ 149156ca0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execSetSinglePropertyInNDCAccessContextInstance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *this;
  uchar *_Src;
  code *pcVar7;
  bool bVar8;
  UPackage *pUVar9;
  FProperty *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  uchar *puVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  FProperty *pFVar18;
  FInstancedStruct *pFVar19;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  FName local_188;
  longlong local_180;
  FInstancedStruct local_178;
  undefined1 local_168 [4];
  FName local_164;
  FString local_158;
  FBlueprintExceptionInfo local_148;
  FBlueprintExceptionInfo local_130;
  FBlueprintExceptionInfo local_118;
  FString local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FTextFormat local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  FInstancedStruct::FInstancedStruct(&local_178);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar18 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar18->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar18);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_180 = 0;
  pFVar19 = &local_178;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar19 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar18 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar18->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar18);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar18 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar18->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar18);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  FProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar18 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar18->_padding_;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar18);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar18 = param_2->MostRecentProperty;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar18 == (FProperty *)0x0) || ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0xf & 1) == 0)) {
    pFVar18 = (FProperty *)0x0;
  }
  this = (pFVar19->ScriptStruct).field0_0x0.DebugPtr;
  _Src = param_2->MostRecentPropertyAddress;
  puVar15 = pFVar19->StructMemory;
  if (this == (UScriptStruct *)0x0) {
LAB_1491572e4:
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_b0,L"NiagaraDataChannels",L"NDC_SetAccessContext_InvalidTypeWarning"
                         ,
                         L"Invalid Value type for Set Niagara Data Channel Access Context Members. You must use a child of FNDCAccessContextBase"
                        );
    local_118.EventType = AbortExecution;
    local_118.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
    if (local_118.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_118.Description.field0_0x0.TypedValue.TextData.Reference + 8)
      )(local_118.Description.field0_0x0.TypedValue.TextData.Reference,local_168);
    }
    local_118.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
    if (local_118.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (local_b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
    }
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_118);
    uVar16 = local_118.Description.field0_0x0.TypedValue.TextData.Reference;
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_Niagara();
      Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNDCAccessContextBase,(UObject *)pUVar9,
                           L"NDCAccessContextBase");
      if (Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1491572e4;
    }
    iVar6 = (int)this->_padding_;
    iVar5 = (int)(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_
    ;
    if ((iVar6 < iVar5) ||
       ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar5 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FNDCAccessContextBase.OuterSingleton)->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((!bVar8) || (local_180 == 0)) goto LAB_1491572e4;
    if ((iVar6 < *(int *)(local_180 + 0x38)) ||
       (*(longlong *)(this->_padding_ + (longlong)*(int *)(local_180 + 0x38) * 8) !=
        local_180 + 0x30)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_1491572e4;
    pFVar10 = UStruct::FindPropertyByName((UStruct *)this,local_188);
    if (pFVar10 == (FProperty *)0x0) {
      local_164 = (FName)this->_padding_;
      ::FName::ToString(&local_164,&local_100);
      pFVar11 = FText::FromString(&local_70,&local_100);
      pFVar12 = FText::FromName(&local_60,&local_188);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_c0,L"NiagaraDataChannels",
                           L"NDC_AccessContext_MissingDestProperty_Fmt",
                           L"Cannot write {0} to {1}. Property does not exist on this struct type.")
      ;
      pFVar14 = FTextFormat::FTextFormat(&local_50,pFVar13,Default);
      pFVar11 = FText::Format<FText,FText>(&local_d0,pFVar14,pFVar12,pFVar11);
      local_130.EventType = AbortExecution;
      local_130.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
      if (local_130.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_130.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_130.Description.field0_0x0.TypedValue.TextData.Reference,local_res20);
      }
      local_130.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
      if (local_130.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
      }
      if (local_c0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_130);
      uVar16 = local_130.Description.field0_0x0.TypedValue.TextData.Reference;
    }
    else {
      if ((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x11 & 1) == 0) {
        if (pFVar10->ArrayDim < 1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (puVar15 == (uchar *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        puVar15 = puVar15 + pFVar10->Offset_Internal;
        if (puVar15 != _Src) {
          if (((uint)(int)pFVar10->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar10->_padding_ + 0xf0))(pFVar10,puVar15,_Src,pFVar10->ArrayDim);
          }
          else {
            memcpy(puVar15,_Src,(longlong)pFVar10->ElementSize * (longlong)pFVar10->ArrayDim);
          }
        }
        goto LAB_149157389;
      }
      if ((pFVar18 != (FProperty *)0x0) && ((*(uint *)(pFVar18->_padding_ + 0x18) >> 0x11 & 1) != 0)
         ) {
        if ((char)pFVar18[1]._padding_ == '\0') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa4b,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        bVar2 = _Src[*(byte *)((longlong)&pFVar18[1]._padding_ + 1)];
        bVar3 = *(byte *)((longlong)&pFVar18[1]._padding_ + 3);
        if (pFVar10->ArrayDim < 1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (puVar15 == (uchar *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar6 = pFVar10->Offset_Internal;
        if ((char)pFVar10[1]._padding_ == '\0') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldSize != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0xa61,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar17 = (ulonglong)*(byte *)((longlong)&pFVar10[1]._padding_ + 1);
        bVar4 = *(byte *)((longlong)&pFVar10[1]._padding_ + 3);
        if ((bVar2 & bVar3) == 0) {
          puVar15[uVar17 + (longlong)iVar6] = ~bVar4 & puVar15[uVar17 + (longlong)iVar6];
        }
        else {
          puVar15[uVar17 + (longlong)iVar6] =
               ~bVar4 & puVar15[uVar17 + (longlong)iVar6] |
               *(byte *)((longlong)&pFVar10[1]._padding_ + 2);
        }
        goto LAB_149157389;
      }
      bVar8 = IsThisNotNull(pFVar10,"FField::GetName");
      if (bVar8) {
        ::FName::ToString((FName *)&pFVar10->_padding_,&local_158);
      }
      else {
        ::FString::FString(&local_158,L"None");
      }
      pFVar11 = FText::FromString(&local_a0,&local_158);
      pFVar12 = FText::FromName(&local_90,&local_188);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_e0,L"NiagaraDataChannels",
                           L"NDC_AccessContext_MismatchedPropertyTypes_Fmt",
                           L"Cannot write {0} to {1}. Property types do not match.");
      pFVar14 = FTextFormat::FTextFormat(&local_80,pFVar13,Default);
      pFVar11 = FText::Format<FText,FText>(&local_f0,pFVar14,pFVar12,pFVar11);
      local_148.EventType = AbortExecution;
      local_148.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(pFVar11->TextData).Reference;
      if (local_148.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_148.Description.field0_0x0.TypedValue.TextData.Reference +
                    8))(local_148.Description.field0_0x0.TypedValue.TextData.Reference,local_res10);
      }
      local_148.Description.field0_0x0.TypedValue.Flags = pFVar11->Flags;
      if (local_148.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
      }
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_148);
      uVar16 = local_148.Description.field0_0x0.TypedValue.TextData.Reference;
    }
  }
  if ((ITextData *)uVar16 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)uVar16 + 0x10))();
  }
LAB_149157389:
  FInstancedStruct::Reset(&local_178);
  return;
}

// execSubscribeToNiagaraDataChannel @ 149157730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execSubscribeToNiagaraDataChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar2;
  FProperty *pFVar3;
  UNiagaraDataChannel *pUVar4;
  USceneComponent *pUVar5;
  UWorld *pUVar6;
  FNiagaraWorldManager *pFVar7;
  UNiagaraDataChannelHandler *this;
  uint uVar8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  int *piVar9;
  int local_res10 [2];
  UObject *local_res20;
  longlong local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  atomic<unsigned___int64> local_c0;
  atomic<unsigned___int64> local_b8;
  USceneComponent *local_b0;
  double local_a8;
  FMRSWRecursiveAccessDetector *pFStack_a0;
  double local_98;
  uint local_90;
  double local_88;
  undefined1 local_80 [24];
  double local_68;
  FMRSWRecursiveAccessDetector *pFStack_60;
  TObjectPtr<USceneComponent>_u_0 local_50;
  double local_48;
  FMRSWRecursiveAccessDetector *pFStack_40;
  double local_38;
  uint local_30;
  
  pUVar6 = (UWorld *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_e8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_90 = local_90 & 0xfffffffe;
  local_b0 = (USceneComponent *)0x0;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFStack_a0 = (FMRSWRecursiveAccessDetector *)
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d8 = 0;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  pTVar2 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_e0;
  if (pTVar2 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this_00 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  piVar9 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar9 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this_00,(FReadAccessScope *)local_80);
  local_c0 = this_00[1].AccessDetector.State;
  local_b8 = this_00[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_80);
  pUVar5 = local_b0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  uVar8 = local_90 & 1;
  local_68 = local_a8;
  pFStack_60 = pFStack_a0;
  pUVar4 = *(UNiagaraDataChannel **)(local_e8 + 0x28);
  local_88 = local_98;
  if (local_res20 != (UObject *)0x0) {
    pUVar6 = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
  }
  if ((((pUVar4 != (UNiagaraDataChannel *)0x0) && (pUVar6 != (UWorld *)0x0)) &&
      (pFVar7 = FNiagaraWorldManager::Get(pUVar6), pFVar7 != (FNiagaraWorldManager *)0x0)) &&
     (this = FNiagaraDataChannelManager::FindDataChannelHandler
                       ((pFVar7->DataChannelManager).Ptr,pUVar4),
     this != (UNiagaraDataChannelHandler *)0x0)) {
    local_50.DebugPtr = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_80._0_8_ = 0;
    local_38 = local_88;
    local_30 = local_30 ^ (local_30 ^ uVar8) & 1;
    local_48 = local_68;
    pFStack_40 = pFStack_60;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_c8,(FReadAccessScope *)&local_68);
    local_80._8_8_ = local_c0;
    local_80._16_8_ = local_b8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_68);
    UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates
              (this,(FOnNewNiagaraDataChannelPublish *)local_80,
               (FNiagaraDataChannelSearchParameters *)&local_50.ObjectPtr,piVar9);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  return;
}

// execSubscribeToNiagaraDataChannel_WithContext @ 149157a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execSubscribeToNiagaraDataChannel_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar2;
  FProperty *pFVar3;
  UNiagaraDataChannel *pUVar4;
  UWorld *pUVar5;
  FNiagaraWorldManager *pFVar6;
  UNiagaraDataChannelHandler *this;
  int *piVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  FInstancedStruct *pFVar8;
  int local_res10 [2];
  UObject *local_res20;
  longlong local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  undefined8 local_98;
  undefined8 local_90;
  FInstancedStruct local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  atomic<unsigned___int64> local_70;
  atomic<unsigned___int64> local_68;
  undefined1 local_60 [24];
  FReadAccessScope local_48;
  
  pUVar5 = (UWorld *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_a8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FInstancedStruct::FInstancedStruct(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_98 = 0;
  pFVar8 = &local_88;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar8 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  local_90 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  pTVar2 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_00 = &local_a0;
  if (pTVar2 != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this_00 = pTVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  piVar7 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (this_00,(FReadAccessScope *)local_60);
  local_70 = this_00[1].AccessDetector.State;
  local_68 = this_00[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_60);
  pUVar4 = *(UNiagaraDataChannel **)(local_a8 + 0x28);
  if (local_res20 != (UObject *)0x0) {
    pUVar5 = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
  }
  if ((((pUVar4 != (UNiagaraDataChannel *)0x0) && (pUVar5 != (UWorld *)0x0)) &&
      (pFVar6 = FNiagaraWorldManager::Get(pUVar5), pFVar6 != (FNiagaraWorldManager *)0x0)) &&
     (this = FNiagaraDataChannelManager::FindDataChannelHandler
                       ((pFVar6->DataChannelManager).Ptr,pUVar4),
     this != (UNiagaraDataChannelHandler *)0x0)) {
    local_60._0_8_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_78,&local_48);
    local_60._8_8_ = local_70;
    local_60._16_8_ = local_68;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates_WithContext
              (this,(FOnNewNiagaraDataChannelPublish *)local_60,(FNDCAccessContextInst *)pFVar8,
               piVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  FInstancedStruct::Reset(&local_88);
  return;
}

// execUnsubscribeFromNiagaraDataChannel @ 149157d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execUnsubscribeFromNiagaraDataChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UNiagaraDataChannel *pUVar3;
  UWorld *pUVar4;
  FNiagaraWorldManager *pFVar5;
  UNiagaraDataChannelHandler *this;
  int *piVar6;
  int local_res10 [4];
  UObject *local_res20;
  longlong local_28 [2];
  
  pUVar4 = (UWorld *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar6 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar6 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = *(UNiagaraDataChannel **)(local_28[0] + 0x28);
  if (local_res20 != (UObject *)0x0) {
    pUVar4 = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
  }
  if ((pUVar3 != (UNiagaraDataChannel *)0x0) && (pUVar4 != (UWorld *)0x0)) {
    pFVar5 = FNiagaraWorldManager::Get(pUVar4);
    if (pFVar5 != (FNiagaraWorldManager *)0x0) {
      this = FNiagaraDataChannelManager::FindDataChannelHandler
                       ((pFVar5->DataChannelManager).Ptr,pUVar3);
      if (this != (UNiagaraDataChannelHandler *)0x0) {
        UNiagaraDataChannelHandler::UnsubscribeFromDataChannelUpdates(this,piVar6);
      }
    }
  }
  return;
}

// execWriteToNiagaraDataChannel @ 149158e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar1;
  int iVar2;
  FProperty *pFVar3;
  UNiagaraDataChannel *pUVar4;
  FNiagaraDataChannelGameData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  void *_Src;
  USceneComponent *pUVar10;
  bool bVar11;
  bool bVar12;
  UWorld *pUVar13;
  FNiagaraWorldManager *pFVar14;
  UNiagaraDataChannelHandler *pUVar15;
  UNiagaraDataChannelWriter *this;
  FNiagaraDataChannelSearchParameters *pFVar16;
  FString *pFVar17;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  FString local_178;
  longlong local_168;
  UObject *local_160;
  void *local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  FString local_138;
  USceneComponent *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  FScriptContainerElement *local_110;
  uint local_108;
  TObjectPtr<USceneComponent>_u_0 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  uint local_e0;
  USceneComponent *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  uint local_b8;
  FString local_b0;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  FNiagaraDataChannelSearchParameters local_68;
  
  pUVar13 = (UWorld *)0x0;
  local_160 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_168 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_108 = local_108 & 0xfffffffe;
  local_128 = (USceneComponent *)0x0;
  local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_110 = (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_17c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_17c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_17c);
  }
  local_188 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  bVar22 = local_188 != 0;
  local_184 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  bVar23 = local_184 != 0;
  local_180 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  bVar24 = local_180 != 0;
  local_158 = (void *)0x0;
  local_150 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  pUVar10 = local_128;
  iVar8 = local_17c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (USceneComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_128);
  }
  pUVar9 = local_160;
  lVar20 = local_168;
  uVar19 = local_108 & 1;
  local_178.Data.AllocatorInstance.Data = local_110;
  local_78 = local_110;
  local_100.DebugPtr = pUVar10;
  local_148 = (undefined4)local_120;
  uStack_144 = local_120._4_4_;
  uStack_140 = (undefined4)uStack_118;
  uStack_13c = uStack_118._4_4_;
  local_88 = (undefined4)local_120;
  uStack_84 = local_120._4_4_;
  uStack_80 = (undefined4)uStack_118;
  uStack_7c = uStack_118._4_4_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar4 = *(UNiagaraDataChannel **)(lVar20 + 0x28);
  local_e0 = local_e0 ^ (uVar19 ^ local_e0) & 1;
  local_f8 = local_148;
  uStack_f4 = uStack_144;
  uStack_f0 = uStack_140;
  uStack_ec = uStack_13c;
  local_e8 = local_178.Data.AllocatorInstance.Data;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                          ,299,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = true;
  bVar11 = false;
  if (pUVar9 != (UObject *)0x0) {
    pUVar13 = UEngine::GetWorldFromContextObject(GEngine,pUVar9,LogAndReturnNull);
  }
  if (((((pUVar4 != (UNiagaraDataChannel *)0x0) && (pUVar13 != (UWorld *)0x0)) && (0 < iVar8)) &&
      ((pFVar14 = FNiagaraWorldManager::Get(pUVar13), pFVar14 != (FNiagaraWorldManager *)0x0 &&
       (pUVar15 = FNiagaraDataChannelManager::FindDataChannelHandler
                            ((pFVar14->DataChannelManager).Ptr,pUVar4),
       pUVar15 != (UNiagaraDataChannelHandler *)0x0)))) &&
     (this = UNiagaraDataChannelHandler::GetDataChannelWriter(pUVar15),
     this != (UNiagaraDataChannelWriter *)0x0)) {
    pFVar16 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                        (&local_68,(FNiagaraDataChannelSearchParameters *)&local_100.ObjectPtr);
    bVar12 = IsInGameThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                            ,0xad,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (((this->Owner).field0_0x0.DebugPtr == (UNiagaraDataChannelHandler *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                            ,0xb5,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar15 = (this->Owner).field0_0x0.DebugPtr;
    local_d8 = (pFVar16->OwningComponent).field0_0x0.DebugPtr;
    pcVar6 = *(code **)(pUVar15->_padding_ + 0x2e0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (USceneComponent *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_d8);
    }
    local_d0 = *(undefined4 *)&(pFVar16->Location).field0_0x0;
    uStack_cc = *(undefined4 *)((longlong)&(pFVar16->Location).field0_0x0 + 4);
    uStack_c8 = *(undefined4 *)((longlong)&(pFVar16->Location).field0_0x0 + 8);
    uStack_c4 = *(undefined4 *)((longlong)&(pFVar16->Location).field0_0x0 + 0xc);
    local_c0 = (pFVar16->Location).field0_0x0._s_0.Z;
    local_b8 = local_b8 ^ (local_b8 ^ pFVar16->bOverrideLocation) & 1;
    (*pcVar6)(pUVar15,&local_148);
    _Src = local_158;
    if (CONCAT44(uStack_144,local_148) != 0) {
      lVar20 = (longlong)(int)local_150;
      local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
      if ((int)local_150 < 2) {
        pFVar17 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this,&local_b0,(UObject *)0x0);
      }
      else {
        bVar7 = false;
        bVar11 = true;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = (int)local_150;
        if ((int)local_150 == 0) {
          local_178.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_150,0,(ForAnyElementType *)&local_178,(int)local_150,
                     &local_178.Data.ArrayMax);
          memcpy(local_178.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
        }
        pFVar17 = &local_178;
      }
      iVar2 = (pFVar17->Data).ArrayNum;
      iVar21 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar21 = 0;
      }
      ::FString::AssignRange(&local_138,(wchar_t *)(pFVar17->Data).AllocatorInstance.Data,iVar21);
      if ((bVar11) && (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if ((bVar7) && (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if ((CONCAT44(uStack_144,local_148) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar18 = FNiagaraDataChannelData::GetGameDataForWriteGT
                          ((FNiagaraDataChannelData *)CONCAT44(uStack_144,local_148),&local_a0,iVar8
                           ,bVar22,bVar23,bVar24,&local_138);
      pTVar1 = &this->Data;
      if (pTVar1 != pTVar18) {
        pTVar1->Object = pTVar18->Object;
        pTVar18->Object = (FNiagaraDataChannelGameData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Data).SharedReferenceCount,&pTVar18->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.SharedReferenceCount.ReferenceController);
      if ((pTVar1->Object == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = pTVar1->Object;
      this->StartIndex = pFVar5->NumElements;
      if ((pFVar5 == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FNiagaraDataChannelGameData::SetNum(pTVar1->Object,this->StartIndex + iVar8);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)CONCAT44(uStack_13c,uStack_140));
      goto LAB_14915946a;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)CONCAT44(uStack_13c,uStack_140));
  }
  this = (UNiagaraDataChannelWriter *)0x0;
LAB_14915946a:
  *(UNiagaraDataChannelWriter **)param_3 = this;
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  return;
}

// execWriteToNiagaraDataChannelSingle @ 1491594b0

void __cdecl
UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannelSingle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  UObject *local_30;
  double local_28;
  double dStack_20;
  double local_18;
  uint local_10;
  
  local_40 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_38 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_10 = local_10 & 0xfffffffe;
  local_30 = (UObject *)0x0;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
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
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_48[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  return;
}

// execWriteToNiagaraDataChannelSingle_WithContext @ 1491596a0

void __cdecl
UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannelSingle_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  FInstancedStruct local_20;
  
  local_30 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_28 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FInstancedStruct::FInstancedStruct(&local_20);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
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
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_38[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedStruct::Reset(&local_20);
  return;
}

// execWriteToNiagaraDataChannel_WithContext @ 149159860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelLibrary::execWriteToNiagaraDataChannel_WithContext
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar1;
  FField **ppFVar2;
  int iVar3;
  FProperty *pFVar4;
  UNiagaraDataChannel *pUVar5;
  FNiagaraDataChannelGameData *pFVar6;
  code *pcVar7;
  int iVar8;
  UObject *pUVar9;
  void *_Src;
  bool bVar10;
  UWorld *pUVar11;
  FNiagaraWorldManager *pFVar12;
  UNiagaraDataChannelHandler *pUVar13;
  UNiagaraDataChannelWriter *this;
  FString *pFVar14;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar15;
  UNiagaraDataChannelWriter *pUVar16;
  int iVar17;
  FInstancedStruct *pFVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  int local_res20 [2];
  int local_c8;
  int local_c4;
  int local_c0 [2];
  UObject *local_b8;
  longlong local_b0;
  void *local_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  FNiagaraDataChannelData *local_78;
  TReferenceControllerBase<1> *local_70;
  FInstancedStruct local_68;
  FString local_58;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_48;
  
  local_b8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  FInstancedStruct::FInstancedStruct(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_c0[0] = 0;
  pFVar18 = &local_68;
  if ((FInstancedStruct *)param_2->MostRecentPropertyAddress != (FInstancedStruct *)0x0) {
    pFVar18 = (FInstancedStruct *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c0);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar20 = local_res20[0] != 0;
  local_c8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  bVar21 = local_c8 != 0;
  local_c4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  bVar22 = local_c4 != 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar9 = local_b8;
  iVar8 = local_c0[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = *(UNiagaraDataChannel **)(local_b0 + 0x28);
  bVar10 = IsInGameThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelFunctionLibrary.cpp"
                          ,0x159,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pUVar9 == (UObject *)0x0) {
    pUVar11 = (UWorld *)0x0;
  }
  else {
    pUVar11 = UEngine::GetWorldFromContextObject(GEngine,pUVar9,LogAndReturnNull);
  }
  pUVar16 = (UNiagaraDataChannelWriter *)0x0;
  if (((((pUVar5 != (UNiagaraDataChannel *)0x0) && (pUVar11 != (UWorld *)0x0)) && (0 < iVar8)) &&
      ((pFVar18->StructMemory != (uchar *)0x0 &&
       ((pFVar18->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0)))) &&
     ((pFVar12 = FNiagaraWorldManager::Get(pUVar11), pFVar12 != (FNiagaraWorldManager *)0x0 &&
      ((pUVar13 = FNiagaraDataChannelManager::FindDataChannelHandler
                            ((pFVar12->DataChannelManager).Ptr,pUVar5),
       pUVar13 != (UNiagaraDataChannelHandler *)0x0 &&
       (this = UNiagaraDataChannelHandler::GetDataChannelWriter(pUVar13),
       this != (UNiagaraDataChannelWriter *)0x0)))))) {
    bVar10 = IsInGameThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                            ,0xca,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((this->Owner).field0_0x0.DebugPtr == (UNiagaraDataChannelHandler *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Owner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                            ,0xd2,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar13 = (this->Owner).field0_0x0.DebugPtr;
    (**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13,&local_78);
    _Src = local_a8;
    if (local_78 == (FNiagaraDataChannelData *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    }
    else {
      lVar19 = (longlong)(int)local_a0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      bVar10 = 1 < (int)local_a0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar16;
      if (bVar10) {
        local_98.Data.ArrayNum = (int)local_a0;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar16;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_a0,0,(ForAnyElementType *)&local_98,(int)local_a0,
                   &local_98.Data.ArrayMax);
        memcpy(local_98.Data.AllocatorInstance.Data,_Src,lVar19 * 2);
        pFVar14 = &local_98;
      }
      else {
        pFVar14 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
      }
      iVar3 = (pFVar14->Data).ArrayNum;
      iVar17 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar17 = 0;
      }
      ::FString::AssignRange(&local_88,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar17);
      if ((bVar10) &&
         ((UNiagaraDataChannelWriter *)local_98.Data.AllocatorInstance.Data !=
          (UNiagaraDataChannelWriter *)0x0)) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if ((!bVar10) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((local_78 == (FNiagaraDataChannelData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar15 = FNiagaraDataChannelData::GetGameDataForWriteGT
                          (local_78,&local_48,iVar8,bVar20,bVar21,bVar22,&local_88);
      pTVar1 = &this->Data;
      if (pTVar1 != pTVar15) {
        pTVar1->Object = pTVar15->Object;
        pTVar15->Object = (FNiagaraDataChannelGameData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Data).SharedReferenceCount,&pTVar15->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if ((pTVar1->Object == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = pTVar1->Object;
      this->StartIndex = pFVar6->NumElements;
      if ((pFVar6 == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FNiagaraDataChannelGameData::SetNum(pTVar1->Object,this->StartIndex + iVar8);
      if ((UNiagaraDataChannelWriter *)local_88.Data.AllocatorInstance.Data !=
          (UNiagaraDataChannelWriter *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
      pUVar16 = this;
    }
  }
  *(UNiagaraDataChannelWriter **)param_3 = pUVar16;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  FInstancedStruct::Reset(&local_68);
  return;
}

