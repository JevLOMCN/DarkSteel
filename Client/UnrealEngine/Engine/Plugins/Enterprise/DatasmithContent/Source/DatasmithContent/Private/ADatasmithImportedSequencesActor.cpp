// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2ee5c0

UClass * __cdecl ADatasmithImportedSequencesActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithImportedSequencesActor",
               &Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton,
               StaticRegisterNativesADatasmithImportedSequencesActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADatasmithImportedSequencesActor>,
               InternalVTableHelperCtorCaller<ADatasmithImportedSequencesActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton;
}

// ADatasmithImportedSequencesActor @ 14e2f3af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADatasmithImportedSequencesActor * __thiscall
ADatasmithImportedSequencesActor::ADatasmithImportedSequencesActor
          (ADatasmithImportedSequencesActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADatasmithImportedSequencesActor__6B_;
  (this->ImportedSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedSequences).ArrayNum = 0;
  (this->ImportedSequences).ArrayMax = 0;
  return this;
}

// ADatasmithImportedSequencesActor @ 14e2f3b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADatasmithImportedSequencesActor * __thiscall
ADatasmithImportedSequencesActor::ADatasmithImportedSequencesActor
          (ADatasmithImportedSequencesActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADatasmithImportedSequencesActor__6B_;
  (this->ImportedSequences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ImportedSequences).ArrayNum = 0;
  (this->ImportedSequences).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,L"SceneComp");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  return this;
}

// ~ADatasmithImportedSequencesActor @ 14e2f5c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADatasmithImportedSequencesActor::~ADatasmithImportedSequencesActor
          (ADatasmithImportedSequencesActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADatasmithImportedSequencesActor__6B_;
  pFVar1 = (this->ImportedSequences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fbad0

UClass * __cdecl ADatasmithImportedSequencesActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithImportedSequencesActor",
               &Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton,
               StaticRegisterNativesADatasmithImportedSequencesActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADatasmithImportedSequencesActor>,
               InternalVTableHelperCtorCaller<ADatasmithImportedSequencesActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithImportedSequencesActor.InnerSingleton;
}

// PlayLevelSequence @ 14e2fe210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADatasmithImportedSequencesActor::PlayLevelSequence
          (ADatasmithImportedSequencesActor *this,ULevelSequence *param_1)

{
  FName local_res10 [3];
  FString local_18;
  
  if ((param_1 != (ULevelSequence *)0x0) && (4 < (byte)LogTemp._0_1_)) {
    local_res10[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesADatasmithImportedSequencesActor @ 14e2febe0

void __cdecl
ADatasmithImportedSequencesActor::StaticRegisterNativesADatasmithImportedSequencesActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADatasmithImportedSequencesActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execPlayLevelSequence @ 14e302ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
ADatasmithImportedSequencesActor::execPlayLevelSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [2];
  FName local_res20;
  FString local_18;
  
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
  if ((local_res10[0] != 0) && (4 < (byte)LogTemp._0_1_)) {
    local_res20 = *(FName *)(local_res10[0] + 0x18);
    ::FName::ToString(&local_res20,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

