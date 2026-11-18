// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc66a70

UClass * __cdecl UMovieGraphGlobalVariable_SequenceName::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_SequenceName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable_SequenceName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_SequenceName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_SequenceName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton;
}

// UMovieGraphGlobalVariable_SequenceName @ 14dc733c0

UMovieGraphGlobalVariable_SequenceName * __thiscall
UMovieGraphGlobalVariable_SequenceName::UMovieGraphGlobalVariable_SequenceName
          (UMovieGraphGlobalVariable_SequenceName *this,FVTableHelper *param_1)

{
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this,param_1);
  this->field_0x70 = 1;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined ***)this = &___7UMovieGraphGlobalVariable_SequenceName__6B_;
  return this;
}

// UMovieGraphGlobalVariable_SequenceName @ 14dc73410

UMovieGraphGlobalVariable_SequenceName * __thiscall
UMovieGraphGlobalVariable_SequenceName::UMovieGraphGlobalVariable_SequenceName
          (UMovieGraphGlobalVariable_SequenceName *this)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString local_18;
  
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  puVar1 = &this->field_0x50;
  *(undefined ***)this = &___7UMovieGraphGlobalVariable_SequenceName__6B_;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  this->field_0x70 = 0;
  pFVar2 = ::FString::FString(&local_18,L"seq_name");
  if ((FString *)puVar1 != pFVar2) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this->field_0x58 = (pFVar2->Data).ArrayNum;
    *(int *)&this->field_0x5c = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UMovieGraphValueContainer::SetValueType((UMovieGraphValueContainer *)this,String,(UObject *)0x0);
  return this;
}

// ~UMovieGraphGlobalVariable_SequenceName @ 14dc74680

void __thiscall
UMovieGraphGlobalVariable_SequenceName::~UMovieGraphGlobalVariable_SequenceName
          (UMovieGraphGlobalVariable_SequenceName *this)

{
  *(undefined ***)this = &___7UMovieGraphVariable__6B_;
  if (*(void **)&this->field_0x78 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x78);
  }
  *(undefined ***)this = &___7UMovieGraphMember__6B_;
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  UMovieGraphValueContainer::~UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  return;
}

// GetPrivateStaticClass @ 14dc81e20

UClass * __cdecl UMovieGraphGlobalVariable_SequenceName::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_SequenceName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable_SequenceName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_SequenceName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_SequenceName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_SequenceName.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphGlobalVariable_SequenceName @ 14dc89bf0

void __cdecl
UMovieGraphGlobalVariable_SequenceName::StaticRegisterNativesUMovieGraphGlobalVariable_SequenceName
          (void)

{
  return;
}

// UpdateValue @ 14dc8def0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
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
UMovieGraphGlobalVariable_SequenceName::UpdateValue
          (UMovieGraphGlobalVariable_SequenceName *this,FMovieGraphTraversalContext *param_1,
          UMovieGraphPipeline *param_2)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FSoftObjectPath::GetAssetName(&((param_1->Job).field0_0x0.DebugPtr)->Sequence,&local_18);
  UMovieGraphValueContainer::SetValueString((UMovieGraphValueContainer *)this,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

