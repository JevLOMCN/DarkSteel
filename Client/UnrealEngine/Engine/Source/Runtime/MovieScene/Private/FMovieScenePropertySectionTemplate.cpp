// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 14

// StaticStruct @ 146162420

UScriptStruct * __cdecl FMovieScenePropertySectionTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
                         (UObject *)pUVar1,L"MovieScenePropertySectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.OuterSingleton;
}

// FMovieScenePropertySectionTemplate @ 146180140

FMovieScenePropertySectionTemplate * __thiscall
FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
          (FMovieScenePropertySectionTemplate *this,FMovieScenePropertySectionTemplate *param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplate__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FMovieScenePropertySectionTemplate__6B_;
  (this->PropertyData).PropertyName = (param_1->PropertyData).PropertyName;
  ::FString::FString(&(this->PropertyData).PropertyPath,&(param_1->PropertyData).PropertyPath);
  return this;
}

// FMovieScenePropertySectionTemplate @ 1461801b0

FMovieScenePropertySectionTemplate * __thiscall
FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
          (FMovieScenePropertySectionTemplate *this,FName param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieScenePropertySectionTemplate__6B_;
  pFVar2 = ::FString::FString(&local_18,param_2);
  (this->PropertyData).PropertyName = param_1;
  (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data =
       (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).PropertyPath.Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->PropertyData).PropertyPath.Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FMovieScenePropertySectionTemplate @ 146180240

FMovieScenePropertySectionTemplate * __thiscall
FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
          (FMovieScenePropertySectionTemplate *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FMovieScenePropertySectionTemplate__6B_;
  *(undefined1 *)&this->_padding_ = 0;
  (this->PropertyData).PropertyName.ComparisonIndex = 0;
  (this->PropertyData).PropertyName.Number = 0;
  (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyData).PropertyPath.Data.ArrayNum = 0;
  (this->PropertyData).PropertyPath.Data.ArrayMax = 0;
  return this;
}

// ~FMovieScenePropertySectionTemplate @ 146185430

void __thiscall
FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate
          (FMovieScenePropertySectionTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMovieScenePropertySectionTemplate__6B_;
  pFVar1 = (this->PropertyData).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// GetColorInterrogationKey @ 1461b0800

FMovieSceneInterrogationKey __cdecl
FMovieScenePropertySectionTemplate::GetColorInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ::TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetFloatInterrogationKey @ 1461b0d80

FMovieSceneInterrogationKey __cdecl
FMovieScenePropertySectionTemplate::GetFloatInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ::TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetInt32InterrogationKey @ 1461b1210

FMovieSceneInterrogationKey __cdecl
FMovieScenePropertySectionTemplate::GetInt32InterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ::TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetPropertyTypeID @ 1461b33c0

FMovieSceneAnimTypeID __thiscall
FMovieScenePropertySectionTemplate::GetPropertyTypeID(FMovieScenePropertySectionTemplate *this)

{
  FString *in_RDX;
  
  TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID(&PropertyTypeIDs,in_RDX);
  return (FMovieSceneAnimTypeID)(ulong64)in_RDX;
}

// GetScriptStructImpl @ 1461b3680

UScriptStruct * __thiscall
FMovieScenePropertySectionTemplate::GetScriptStructImpl(FMovieScenePropertySectionTemplate *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
                         (UObject *)pUVar1,L"MovieScenePropertySectionTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieScenePropertySectionTemplate.OuterSingleton;
}

// GetVector2DInterrogationKey @ 1461b4a20

FMovieSceneInterrogationKey __cdecl
FMovieScenePropertySectionTemplate::GetVector2DInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ::TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetVector4InterrogationKey @ 1461b4ab0

FMovieSceneInterrogationKey __cdecl
FMovieScenePropertySectionTemplate::GetVector4InterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ::TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// GetVectorInterrogationKey @ 1461b4b40

FMovieSceneInterrogationKey __cdecl
FMovieScenePropertySectionTemplate::GetVectorInterrogationKey(void)

{
  FMovieSceneAnimTypeID in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      RunningCount = RunningCount + 1;
      ::TypeID.ID = FMovieSceneAnimTypeID::GenerateHash(&RunningCount,(uint)RunningCount);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(ulong64 *)in_RCX.ID = ::TypeID.ID;
  return (FMovieSceneInterrogationKey)(FMovieSceneAnimTypeID)in_RCX.ID;
}

// Setup @ 1461d3660

void __thiscall
FMovieScenePropertySectionTemplate::Setup
          (FMovieScenePropertySectionTemplate *this,FPersistentEvaluationData *param_1,
          IMovieScenePlayer *param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTrackInstancePropertyBindings *pFVar5;
  FString *pFVar6;
  FMovieSceneAnimTypeID FVar7;
  FTrackInstancePropertyBindings *pFVar8;
  FTrackInstancePropertyBindings *pFVar9;
  TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
  local_res8;
  TRawPtrProxy<FTrackInstancePropertyBindings> local_res20;
  undefined1 local_58 [8];
  FMovieSceneEvaluationKey *local_50;
  TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> **local_48;
  FString local_40;
  
  if ((param_1->EntityData ==
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,300,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = ::operator_new(0x20);
  pFVar8 = (FTrackInstancePropertyBindings *)0x0;
  pFVar9 = pFVar8;
  if (pFVar5 != (FTrackInstancePropertyBindings *)0x0) {
    *(undefined8 *)&(pFVar5->RuntimeObjectToFunctionMap).field_0x8 = 0;
    *(undefined ***)&pFVar5->RuntimeObjectToFunctionMap = &___7FSectionData_PropertyTemplate__6B_;
    *(undefined8 *)&(pFVar5->RuntimeObjectToFunctionMap).field_0x10 = 0;
    if (TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID == 0) {
      TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID =
           FMovieSceneAnimTypeID::GenerateHash
                     (&TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID,0);
    }
    *(ulong64 *)&(pFVar5->RuntimeObjectToFunctionMap).field_0x18 =
         TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID;
    pFVar9 = pFVar5;
  }
  local_50 = &param_1->SectionKey;
  local_48 = &local_res8.Value;
  local_res8.Value =
       (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)pFVar9;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneEvaluationKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
            ((TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
              *)param_1->EntityData,&local_res8,(bool *)&local_50);
  if ((FTrackInstancePropertyBindings *)local_res8.Value != (FTrackInstancePropertyBindings *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  pFVar6 = ::FString::FString(&local_40,&(this->PropertyData).PropertyPath);
  FVar1 = (this->PropertyData).PropertyName;
  FVar7 = TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID
                    (&PropertyTypeIDs,(FString *)local_58);
  *(undefined8 *)&(pFVar9->RuntimeObjectToFunctionMap).field_0x18 = *(undefined8 *)FVar7.ID;
  pFVar5 = ::operator_new(0x70);
  if (pFVar5 != (FTrackInstancePropertyBindings *)0x0) {
    pFVar8 = FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(pFVar5,FVar1,pFVar6);
  }
  local_res20.Object = pFVar8;
  TSharedPtr<FTrackInstancePropertyBindings,1>::operator=<FTrackInstancePropertyBindings>
            ((TSharedPtr<FTrackInstancePropertyBindings,1> *)
             &(pFVar9->RuntimeObjectToFunctionMap).field_0x8,&local_res20);
  pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

