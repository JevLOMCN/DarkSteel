// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dc669b0

UClass * __cdecl UMovieGraphGlobalVariable_ShotName::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_ShotName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable_ShotName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_ShotName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_ShotName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton;
}

// UMovieGraphGlobalVariable_ShotName @ 14dc734e0

UMovieGraphGlobalVariable_ShotName * __thiscall
UMovieGraphGlobalVariable_ShotName::UMovieGraphGlobalVariable_ShotName
          (UMovieGraphGlobalVariable_ShotName *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UMovieGraphGlobalVariable_ShotName__6B_;
  return this;
}

// UMovieGraphGlobalVariable_ShotName @ 14dc73530

UMovieGraphGlobalVariable_ShotName * __thiscall
UMovieGraphGlobalVariable_ShotName::UMovieGraphGlobalVariable_ShotName
          (UMovieGraphGlobalVariable_ShotName *this)

{
  undefined1 *puVar1;
  FString *pFVar2;
  FString local_18;
  
  UMovieGraphValueContainer::UMovieGraphValueContainer((UMovieGraphValueContainer *)this);
  puVar1 = &this->field_0x50;
  *(undefined ***)this = &___7UMovieGraphGlobalVariable_ShotName__6B_;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  this->field_0x70 = 0;
  pFVar2 = ::FString::FString(&local_18,L"shot_name");
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

// ~UMovieGraphGlobalVariable_ShotName @ 14dc746e0

void __thiscall
UMovieGraphGlobalVariable_ShotName::~UMovieGraphGlobalVariable_ShotName
          (UMovieGraphGlobalVariable_ShotName *this)

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

// GetPrivateStaticClass @ 14dc81ee0

UClass * __cdecl UMovieGraphGlobalVariable_ShotName::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphGlobalVariable_ShotName",
               &Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton,
               StaticRegisterNativesUMovieGraphGlobalVariable_ShotName,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphGlobalVariable_ShotName>,
               InternalVTableHelperCtorCaller<UMovieGraphGlobalVariable_ShotName>,local_res8,
               UMovieGraphGlobalVariable::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphGlobalVariable_ShotName.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphGlobalVariable_ShotName @ 14dc89c00

void __cdecl
UMovieGraphGlobalVariable_ShotName::StaticRegisterNativesUMovieGraphGlobalVariable_ShotName(void)

{
  return;
}

// UpdateValue @ 14dc8df40

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
UMovieGraphGlobalVariable_ShotName::UpdateValue
          (UMovieGraphGlobalVariable_ShotName *this,FMovieGraphTraversalContext *param_1,
          UMovieGraphPipeline *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  iVar1 = param_1->ShotIndex;
  if ((-1 < iVar1) && (iVar1 < (param_2->ActiveShotList).ArrayNum)) {
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)((param_2->ActiveShotList).AllocatorInstance.Data + (longlong)iVar1 * 8);
    if (lVar2 != 0) {
      UMovieGraphValueContainer::SetValueString
                ((UMovieGraphValueContainer *)this,(FString *)(lVar2 + 0x30));
    }
  }
  return;
}

