// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc66b30

UClass * __cdecl UMovieGraphGlobalVariable_FrameNumber::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_FrameNumber",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable_FrameNumber,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_FrameNumber>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_FrameNumber>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton;
}

// UMovieGraphGlobalVariable_FrameNumber @ 14dc732a0

UMovieGraphGlobalVariable_FrameNumber * __thiscall
UMovieGraphGlobalVariable_FrameNumber::UMovieGraphGlobalVariable_FrameNumber
          (UMovieGraphGlobalVariable_FrameNumber *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UMovieGraphGlobalVariable_FrameNumber__6B_;
  return this;
}

// UMovieGraphGlobalVariable_FrameNumber @ 14dc732f0

UMovieGraphGlobalVariable_FrameNumber * __thiscall
UMovieGraphGlobalVariable_FrameNumber::UMovieGraphGlobalVariable_FrameNumber
          (UMovieGraphGlobalVariable_FrameNumber *this)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString local_18;
  
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  puVar1 = &this->field_0x50;
  *(undefined ***)this = &___7UMovieGraphGlobalVariable_FrameNumber__6B_;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  this->field_0x70 = 0;
  pFVar2 = ::FString::FString(&local_18,L"frame_num");
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
  UMovieGraphValueContainer::SetValueType((UMovieGraphValueContainer *)this,Int32,(UObject *)0x0);
  return this;
}

// ~UMovieGraphGlobalVariable_FrameNumber @ 14dc74620

void __thiscall
UMovieGraphGlobalVariable_FrameNumber::~UMovieGraphGlobalVariable_FrameNumber
          (UMovieGraphGlobalVariable_FrameNumber *this)

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

// GetPrivateStaticClass @ 14dc81d60

UClass * __cdecl UMovieGraphGlobalVariable_FrameNumber::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_FrameNumber",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable_FrameNumber,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_FrameNumber>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_FrameNumber>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_FrameNumber.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphGlobalVariable_FrameNumber @ 14dc89be0

void __cdecl
UMovieGraphGlobalVariable_FrameNumber::StaticRegisterNativesUMovieGraphGlobalVariable_FrameNumber
          (void)

{
  return;
}

// UpdateValue @ 14dc8ded0

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
UMovieGraphGlobalVariable_FrameNumber::UpdateValue
          (UMovieGraphGlobalVariable_FrameNumber *this,FMovieGraphTraversalContext *param_1,
          UMovieGraphPipeline *param_2)

{
  UMovieGraphValueContainer::SetValueInt32
            ((UMovieGraphValueContainer *)this,(param_1->Time).ShotFrameNumber.Value);
  return;
}

