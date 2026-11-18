// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 31

// StaticClass @ 1488a26f0

UClass * __cdecl UTimelineTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimelineTemplate",
               &Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton,
               StaticRegisterNativesUTimelineTemplate,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTimelineTemplate>,
               InternalVTableHelperCtorCaller<UTimelineTemplate>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton;
}

// UTimelineTemplate @ 1488b1810

UTimelineTemplate * __thiscall
UTimelineTemplate::UTimelineTemplate(UTimelineTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTimelineTemplate__6B_;
  (this->EventTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventTracks).ArrayNum = 0;
  (this->EventTracks).ArrayMax = 0;
  (this->FloatTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatTracks).ArrayNum = 0;
  (this->FloatTracks).ArrayMax = 0;
  (this->VectorTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorTracks).ArrayNum = 0;
  (this->VectorTracks).ArrayMax = 0;
  (this->LinearColorTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearColorTracks).ArrayNum = 0;
  (this->LinearColorTracks).ArrayMax = 0;
  (this->MetaDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDataArray).ArrayNum = 0;
  (this->MetaDataArray).ArrayMax = 0;
  (this->TimelineGuid).A = 0;
  (this->TimelineGuid).B = 0;
  (this->TimelineGuid).C = 0;
  (this->TimelineGuid).D = 0;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  (this->DirectionPropertyName).ComparisonIndex = 0;
  (this->DirectionPropertyName).Number = 0;
  (this->UpdateFunctionName).ComparisonIndex = 0;
  (this->UpdateFunctionName).Number = 0;
  (this->FinishedFunctionName).ComparisonIndex = 0;
  (this->FinishedFunctionName).Number = 0;
  return this;
}

// UTimelineTemplate @ 1488b1890

UTimelineTemplate * __thiscall
UTimelineTemplate::UTimelineTemplate(UTimelineTemplate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TimelineLength = 5.0;
  this->_padding_ = (longlong)&___7UTimelineTemplate__6B_;
  this->bReplicated = '\0';
  (this->EventTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventTracks).ArrayNum = 0;
  (this->EventTracks).ArrayMax = 0;
  (this->FloatTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatTracks).ArrayNum = 0;
  (this->FloatTracks).ArrayMax = 0;
  (this->VectorTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VectorTracks).ArrayNum = 0;
  (this->VectorTracks).ArrayMax = 0;
  (this->LinearColorTracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearColorTracks).ArrayNum = 0;
  (this->LinearColorTracks).ArrayMax = 0;
  (this->MetaDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetaDataArray).ArrayNum = 0;
  (this->MetaDataArray).ArrayMax = 0;
  (this->TimelineGuid).A = 0;
  (this->TimelineGuid).B = 0;
  (this->TimelineGuid).C = 0;
  (this->TimelineGuid).D = 0;
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
  (this->DirectionPropertyName).ComparisonIndex = 0;
  (this->DirectionPropertyName).Number = 0;
  (this->UpdateFunctionName).ComparisonIndex = 0;
  (this->UpdateFunctionName).Number = 0;
  (this->FinishedFunctionName).ComparisonIndex = 0;
  (this->FinishedFunctionName).Number = 0;
  return this;
}

// ~UTimelineTemplate @ 1488b2ca0

void __thiscall UTimelineTemplate::~UTimelineTemplate(UTimelineTemplate *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTimelineTemplate__6B_;
  DestructItems<FBPVariableMetaDataEntry,int>
            ((FBPVariableMetaDataEntry *)(this->MetaDataArray).AllocatorInstance.Data,
             (this->MetaDataArray).ArrayNum);
  pFVar1 = (this->MetaDataArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinearColorTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VectorTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FloatTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EventTracks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddDisplayTrack @ 1488b6fa0

void __thiscall UTimelineTemplate::AddDisplayTrack(UTimelineTemplate *this,FTTTrackId param_1)

{
  return;
}

// FindEventTrackIndex @ 1488bfd30

int __thiscall UTimelineTemplate::FindEventTrackIndex(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->EventTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->EventTracks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->EventTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->EventTracks).ArrayNum);
  }
  return -1;
}

// FindFloatTrackIndex @ 1488bfde0

int __thiscall UTimelineTemplate::FindFloatTrackIndex(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->FloatTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->FloatTracks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->FloatTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->FloatTracks).ArrayNum);
  }
  return -1;
}

// FindLinearColorTrackIndex @ 1488bfe90

int __thiscall UTimelineTemplate::FindLinearColorTrackIndex(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->LinearColorTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->LinearColorTracks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->LinearColorTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->LinearColorTracks).ArrayNum);
  }
  return -1;
}

// FindMetaDataEntryIndexForKey @ 1488bff40

int __thiscall
UTimelineTemplate::FindMetaDataEntryIndexForKey(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->MetaDataArray).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->MetaDataArray).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->MetaDataArray).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((int)uVar6 < (this->MetaDataArray).ArrayNum);
  }
  return -1;
}

// FindVectorTrackIndex @ 1488c00e0

int __thiscall UTimelineTemplate::FindVectorTrackIndex(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->VectorTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->VectorTracks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->VectorTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->VectorTracks).ArrayNum);
  }
  return -1;
}

// GetAllCurves @ 1488c2010

void __thiscall
UTimelineTemplate::GetAllCurves
          (UTimelineTemplate *this,
          TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 local_res8;
  UCurveBase *local_res18;
  
  iVar2 = (this->EventTracks).ArrayNum;
  pFVar3 = (this->EventTracks).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->EventTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTTEventTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8 = *(undefined8 *)(pFVar3 + 0x20);
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar3 = pFVar3 + 0x28;
  }
  iVar2 = (this->FloatTracks).ArrayNum;
  pFVar3 = (this->FloatTracks).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->FloatTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTTFloatTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8 = *(undefined8 *)(pFVar3 + 0x20);
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar3 = pFVar3 + 0x28;
  }
  iVar2 = (this->VectorTracks).ArrayNum;
  pFVar3 = (this->VectorTracks).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->VectorTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTTVectorTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8 = *(undefined8 *)(pFVar3 + 0x20);
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar3 = pFVar3 + 0x28;
  }
  iVar2 = (this->LinearColorTracks).ArrayNum;
  pFVar3 = (this->LinearColorTracks).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->LinearColorTracks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTTLinearColorTrack_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8 = *(undefined8 *)(pFVar3 + 0x20);
    TSet<UCurveBase_*,DefaultKeyFuncs<UCurveBase_*,0>,FDefaultSetAllocator>::Emplace<UCurveBase_*>
              (param_1,&local_res18,(bool *)&local_res8);
    pFVar3 = pFVar3 + 0x28;
  }
  return;
}

// GetDisplayTrackId @ 1488c2c50

FTTTrackId __thiscall UTimelineTemplate::GetDisplayTrackId(UTimelineTemplate *this,int param_1)

{
  FTTTrackId FVar1;
  int in_register_00000014;
  
  *(undefined8 *)CONCAT44(in_register_00000014,param_1) = 0xffffffffffffffff;
  FVar1.TrackIndex = in_register_00000014;
  FVar1.TrackType = param_1;
  return FVar1;
}

// GetMetaData @ 1488c3520

FString * __thiscall UTimelineTemplate::GetMetaData(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  
  uVar3 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar3 == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntryIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TimelineTemplate.cpp"
                       ,0xab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->MetaDataArray).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FString *)((this->MetaDataArray).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 8)
  ;
}

// GetNumDisplayTracks @ 1488c3680

int __thiscall UTimelineTemplate::GetNumDisplayTracks(UTimelineTemplate *this)

{
  return 0;
}

// GetPrivateStaticClass @ 1488c42c0

UClass * __cdecl UTimelineTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TimelineTemplate",
               &Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton,
               StaticRegisterNativesUTimelineTemplate,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTimelineTemplate>,
               InternalVTableHelperCtorCaller<UTimelineTemplate>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimelineTemplate.InnerSingleton;
}

// IsNewTrackNameValid @ 1488cd090

bool __thiscall UTimelineTemplate::IsNewTrackNameValid(UTimelineTemplate *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_1 == (FName)0x0) {
    return false;
  }
  uVar6 = 0;
  if (0 < (this->FloatTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->FloatTracks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->FloatTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        if (uVar6 != 0xffffffff) {
          return false;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->FloatTracks).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->VectorTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->VectorTracks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->VectorTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        if (uVar6 != 0xffffffff) {
          return false;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->VectorTracks).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->EventTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->EventTracks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->EventTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        if (uVar6 != 0xffffffff) {
          return false;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->EventTracks).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->LinearColorTracks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->LinearColorTracks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(FName *)((this->LinearColorTracks).AllocatorInstance.Data + lVar5 + 8) == param_1) {
        if (uVar6 == 0xffffffff) {
          return true;
        }
        return false;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while ((int)uVar6 < (this->LinearColorTracks).ArrayNum);
  }
  return true;
}

// MakeUniqueCurveName @ 1488ce520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __cdecl
UTimelineTemplate::MakeUniqueCurveName
          (FString *__return_storage_ptr__,UObject *param_1,UObject *param_2)

{
  UObject *pUVar1;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res10.Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(&local_res10,&local_18);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  pUVar1 = StaticFindObjectFast((UClass *)0x0,param_2,local_res8,None,RF_NoFlags,Borrowed);
  while (pUVar1 != (UObject *)0x0) {
    pFVar4 = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      pFVar4 = local_18.Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res10,(wchar_t *)pFVar4,local_res8.Number + 1);
    local_res8 = *pFVar2;
    pUVar1 = StaticFindObjectFast((UClass *)0x0,param_2,local_res8,None,RF_NoFlags,Borrowed);
  }
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// MoveDisplayTrack @ 1488ce690

void __thiscall UTimelineTemplate::MoveDisplayTrack(UTimelineTemplate *this,int param_1,int param_2)

{
  return;
}

// PostDuplicate @ 1488d0a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTimelineTemplate::PostDuplicate(UTimelineTemplate *this,bool param_1)

{
  int iVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  UPackage *pUVar11;
  UPackage *pUVar12;
  longlong lVar13;
  UClass *pUVar14;
  FString *pFVar15;
  FName *pFVar16;
  UObject *pUVar17;
  FGuid *pFVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  FNameEntryId FVar21;
  int iVar22;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  ForAnyElementType local_48;
  
  pUVar2 = (UObject *)this->_padding_;
  pUVar11 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  pUVar12 = GetTransientPackage();
  if (pUVar11 != pUVar12) {
    bVar10 = FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
    bVar6 = true;
    if (!bVar10) goto LAB_1488d0a4d;
  }
  bVar6 = false;
LAB_1488d0a4d:
  local_res18 = (FName)((ulonglong)local_res18.Number << 0x20);
  for (iVar22 = 0; (-1 < iVar22 && (iVar22 < (this->FloatTracks).ArrayNum)); iVar22 = iVar22 + 1) {
    lVar13 = (longlong)iVar22;
    pFVar3 = (this->FloatTracks).AllocatorInstance.Data;
    if (*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) == 0) {
      if (2 < (byte)LogBlueprint._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_78,(UObject *)0x0);
        }
        local_res20 = *(FName *)(pFVar3 + lVar13 * 0x28 + 8);
        ::FName::ToString(&local_res20,(FString *)&local_48);
        local_88 = this->VariableName;
        ::FName::ToString(&local_88,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FVar19.Data = local_78.Data.AllocatorInstance.Data;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
          FVar19.Data = local_78.Data.AllocatorInstance.Data;
        }
LAB_1488d0c1d:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
    else if ((bVar6) && (pFVar3[lVar13 * 0x28 + 0x10] == (FScriptContainerElement)0x0)) {
      lVar4 = *(longlong *)(*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) + 0x20);
      pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar1 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar14->_padding_)) {
        pFVar15 = MakeUniqueCurveName(&local_68,*(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20),pUVar2)
        ;
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar16 = ::FName::FName(&local_80,pwVar20);
        pUVar17 = *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20);
        FVar5 = *pFVar16;
        pUVar14 = Z_Construct_UClass_UCurveFloat_NoRegister();
        pUVar17 = DuplicateObject_Internal(pUVar14,pUVar17,pUVar2,FVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar17);
        }
        *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20) = pUVar17;
        FVar19.Data = local_68.Data.AllocatorInstance.Data;
        goto LAB_1488d0c1d;
      }
    }
  }
  for (iVar22 = 0; (-1 < iVar22 && (iVar22 < (this->EventTracks).ArrayNum)); iVar22 = iVar22 + 1) {
    lVar13 = (longlong)iVar22;
    pFVar3 = (this->EventTracks).AllocatorInstance.Data;
    if (*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) == 0) {
      if (2 < (byte)LogBlueprint._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_78,(UObject *)0x0);
        }
        local_res20 = *(FName *)(pFVar3 + lVar13 * 0x28 + 8);
        ::FName::ToString(&local_res20,&local_68);
        local_88 = this->VariableName;
        ::FName::ToString(&local_88,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FVar19.Data = local_78.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          FVar19.Data = local_78.Data.AllocatorInstance.Data;
        }
LAB_1488d0ded:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
    else if ((bVar6) && (pFVar3[lVar13 * 0x28 + 0x10] == (FScriptContainerElement)0x0)) {
      lVar4 = *(longlong *)(*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) + 0x20);
      pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar1 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar14->_padding_)) {
        pFVar15 = MakeUniqueCurveName((FString *)&local_48,
                                      *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20),pUVar2);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar16 = ::FName::FName(&local_80,pwVar20);
        pUVar17 = *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20);
        FVar5 = *pFVar16;
        pUVar14 = Z_Construct_UClass_UCurveFloat_NoRegister();
        pUVar17 = DuplicateObject_Internal(pUVar14,pUVar17,pUVar2,FVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar17);
        }
        *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20) = pUVar17;
        FVar19.Data = local_48.Data;
        goto LAB_1488d0ded;
      }
    }
  }
  for (iVar22 = 0; (-1 < iVar22 && (iVar22 < (this->VectorTracks).ArrayNum)); iVar22 = iVar22 + 1) {
    lVar13 = (longlong)iVar22;
    pFVar3 = (this->VectorTracks).AllocatorInstance.Data;
    if (*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) == 0) {
      if (2 < (byte)LogBlueprint._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_78,(UObject *)0x0);
        }
        local_res20 = *(FName *)(pFVar3 + lVar13 * 0x28 + 8);
        ::FName::ToString(&local_res20,&local_68);
        local_88 = this->VariableName;
        ::FName::ToString(&local_88,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FVar19.Data = local_78.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          FVar19.Data = local_78.Data.AllocatorInstance.Data;
        }
LAB_1488d0fbd:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
    else if ((bVar6) && (pFVar3[lVar13 * 0x28 + 0x10] == (FScriptContainerElement)0x0)) {
      lVar4 = *(longlong *)(*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) + 0x20);
      pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar1 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar14->_padding_)) {
        pFVar15 = MakeUniqueCurveName((FString *)&local_48,
                                      *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20),pUVar2);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar16 = ::FName::FName(&local_80,pwVar20);
        pUVar17 = *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20);
        FVar5 = *pFVar16;
        pUVar14 = Z_Construct_UClass_UCurveVector_NoRegister();
        pUVar17 = DuplicateObject_Internal(pUVar14,pUVar17,pUVar2,FVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar17);
        }
        *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20) = pUVar17;
        FVar19.Data = local_48.Data;
        goto LAB_1488d0fbd;
      }
    }
  }
  FVar21.Value = local_res18.ComparisonIndex.Value;
  do {
    if (((int)FVar21.Value < 0) || ((this->LinearColorTracks).ArrayNum <= (int)FVar21.Value)) {
      pFVar18 = FGuid::NewGuid((FGuid *)&local_48);
      uVar7 = pFVar18->B;
      uVar8 = pFVar18->C;
      uVar9 = pFVar18->D;
      (this->TimelineGuid).A = pFVar18->A;
      (this->TimelineGuid).B = uVar7;
      (this->TimelineGuid).C = uVar8;
      (this->TimelineGuid).D = uVar9;
      UpdateCachedNames(this);
      return;
    }
    lVar13 = (longlong)(int)FVar21.Value;
    pFVar3 = (this->LinearColorTracks).AllocatorInstance.Data;
    if (*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) == 0) {
      if (2 < (byte)LogBlueprint._0_1_) {
        if ((UObjectBaseUtility *)this->_padding_ == (UObjectBaseUtility *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->_padding_,&local_78,(UObject *)0x0);
        }
        local_res18 = *(FName *)(pFVar3 + lVar13 * 0x28 + 8);
        ::FName::ToString(&local_res18,&local_68);
        local_res20 = this->VariableName;
        ::FName::ToString(&local_res20,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprint);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        FVar19.Data = local_78.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          FVar19.Data = local_78.Data.AllocatorInstance.Data;
        }
LAB_1488d118e:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
    else if ((bVar6) && (pFVar3[lVar13 * 0x28 + 0x10] == (FScriptContainerElement)0x0)) {
      lVar4 = *(longlong *)(*(longlong *)(pFVar3 + lVar13 * 0x28 + 0x20) + 0x20);
      pUVar14 = Z_Construct_UClass_UPackage_NoRegister();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar22 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar22) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar22 * 8) !=
          &pUVar14->_padding_)) {
        pFVar15 = MakeUniqueCurveName((FString *)&local_48,
                                      *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20),pUVar2);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        pFVar16 = ::FName::FName(&local_80,pwVar20);
        pUVar17 = *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20);
        FVar5 = *pFVar16;
        pUVar14 = Z_Construct_UClass_UCurveLinearColor_NoRegister();
        pUVar17 = DuplicateObject_Internal(pUVar14,pUVar17,pUVar2,FVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar17);
        }
        *(UObject **)(pFVar3 + lVar13 * 0x28 + 0x20) = pUVar17;
        FVar19.Data = local_48.Data;
        goto LAB_1488d118e;
      }
    }
    FVar21.Value = FVar21.Value + 1;
  } while( true );
}

// PostEditImport @ 1488d11e0

void __thiscall UTimelineTemplate::PostEditImport(UTimelineTemplate *this)

{
  FScriptContainerElement *pFVar1;
  FTTPropertyTrack *pFVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  FTTPropertyTrack *pFVar5;
  int iVar6;
  FName FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  
  FStackX_8 = (FName)this->_padding_;
  ::FName::ToString(&FStackX_8,&FStack_78);
  iVar6 = TemplatePostfix.Data.ArrayNum + -1;
  FVar3 = TemplatePostfix.Data.AllocatorInstance;
  if (TemplatePostfix.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&FStack_78,(wchar_t *)FVar3.Data,iVar6,IgnoreCase);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (FStack_78.Data.ArrayNum != 0) {
    FVar3.Data = FStack_78.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&FStackX_8,(wchar_t *)FVar3.Data);
  this->VariableName = FStackX_8;
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.Data.ArrayNum = 0;
  FStack_68.Data.ArrayMax = 0;
  FGuid::AppendString(&this->TimelineGuid,&FStack_68,Digits);
  ::FString::PrintfImpl(&FStack_58,L"%s__Direction_%s");
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  ::`anonymous_namespace'::SanitizePropertyName(&FStack_58);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (FStack_58.Data.ArrayNum != 0) {
    FVar3.Data = FStack_58.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&FStackX_8,(wchar_t *)FVar3.Data);
  this->DirectionPropertyName = FStackX_8;
  ::FString::PrintfImpl(&FStack_68,L"%s__UpdateFunc");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (FStack_68.Data.ArrayNum != 0) {
    FVar3.Data = FStack_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&FStackX_8,(wchar_t *)FVar3.Data);
  this->UpdateFunctionName = FStackX_8;
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&FStack_68,L"%s__FinishedFunc");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (FStack_68.Data.ArrayNum != 0) {
    FVar3.Data = FStack_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&FStackX_8,(wchar_t *)FVar3.Data);
  this->FinishedFunctionName = FStackX_8;
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  iVar6 = (this->EventTracks).ArrayNum;
  pFVar4 = (this->EventTracks).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar6 * 0x28;
  while( true ) {
    if ((this->EventTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTEventTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&FStackX_8);
    }
    if (pFVar4 == pFVar1) break;
    FStackX_8 = *(FName *)(pFVar4 + 8);
    *(FName *)(pFVar4 + 8) = FStackX_8;
    ::FName::ToString(&FStackX_8,&FStack_38);
    FStackX_10 = this->VariableName;
    ::FName::ToString(&FStackX_10,&FStack_48);
    ::FString::PrintfImpl(&FStack_68,L"%s__%s__EventFunc");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (FStack_68.Data.ArrayNum != 0) {
      FVar3.Data = FStack_68.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&FStackX_18,(wchar_t *)FVar3.Data);
    *(FName *)(pFVar4 + 0x18) = FStackX_18;
    if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
    }
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 0x28;
  }
  iVar6 = (this->FloatTracks).ArrayNum;
  pFVar5 = (FTTPropertyTrack *)(this->FloatTracks).AllocatorInstance.Data;
  pFVar2 = (FTTPropertyTrack *)((longlong)pFVar5 + (longlong)iVar6 * 0x28);
  while( true ) {
    if ((this->FloatTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTFloatTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&FStackX_8);
    }
    if (pFVar5 == pFVar2) break;
    FTTPropertyTrack::SetTrackName(pFVar5,(FName)pFVar5->_padding_,this);
    pFVar5 = (FTTPropertyTrack *)&pFVar5[1]._padding_;
  }
  iVar6 = (this->VectorTracks).ArrayNum;
  pFVar5 = (FTTPropertyTrack *)(this->VectorTracks).AllocatorInstance.Data;
  pFVar2 = (FTTPropertyTrack *)((longlong)pFVar5 + (longlong)iVar6 * 0x28);
  while( true ) {
    if ((this->VectorTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTVectorTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&FStackX_8);
    }
    if (pFVar5 == pFVar2) break;
    FTTPropertyTrack::SetTrackName(pFVar5,(FName)pFVar5->_padding_,this);
    pFVar5 = (FTTPropertyTrack *)&pFVar5[1]._padding_;
  }
  iVar6 = (this->LinearColorTracks).ArrayNum;
  pFVar5 = (FTTPropertyTrack *)(this->LinearColorTracks).AllocatorInstance.Data;
  pFVar2 = (FTTPropertyTrack *)((longlong)pFVar5 + (longlong)iVar6 * 0x28);
  while( true ) {
    if ((this->LinearColorTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTLinearColorTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&FStackX_8);
    }
    if (pFVar5 == pFVar2) break;
    FTTPropertyTrack::SetTrackName(pFVar5,(FName)pFVar5->_padding_,this);
    pFVar5 = (FTTPropertyTrack *)&pFVar5[1]._padding_;
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// PostInitProperties @ 1488d1210

void __thiscall UTimelineTemplate::PostInitProperties(UTimelineTemplate *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x410) == 0) {
    pFVar4 = FGuid::NewGuid(&local_18);
    uVar1 = pFVar4->B;
    uVar2 = pFVar4->C;
    uVar3 = pFVar4->D;
    (this->TimelineGuid).A = pFVar4->A;
    (this->TimelineGuid).B = uVar1;
    (this->TimelineGuid).C = uVar2;
    (this->TimelineGuid).D = uVar3;
    UpdateCachedNames(this);
    return;
  }
  return;
}

// PostLoad @ 1488d1330

void __thiscall UTimelineTemplate::PostLoad(UTimelineTemplate *this)

{
  int iVar1;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FFortniteMainBranchObjectVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 0x14) {
    UpdateCachedNames(this);
    return;
  }
  return;
}

// RemoveDisplayTrack @ 1488d7460

void __thiscall UTimelineTemplate::RemoveDisplayTrack(UTimelineTemplate *this,int param_1)

{
  return;
}

// RemoveMetaData @ 1488d7860

void __thiscall UTimelineTemplate::RemoveMetaData(UTimelineTemplate *this,FName param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar6 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar6 < (this->MetaDataArray).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (this->MetaDataArray).AllocatorInstance.Data;
    _Dst = pFVar2 + (longlong)(int)uVar6 * 0x18;
    pvVar3 = *(void **)(pFVar2 + (longlong)(int)uVar6 * 0x18 + 8);
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    iVar8 = (this->MetaDataArray).ArrayNum + ~uVar6;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + 0x18,(longlong)iVar8 * 0x18);
    }
    piVar1 = &(this->MetaDataArray).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&(this->MetaDataArray).AllocatorInstance,(this->MetaDataArray).ArrayNum,
               &(this->MetaDataArray).ArrayMax);
  }
  return;
}

// Rename @ 1488d8440

bool __thiscall
UTimelineTemplate::Rename(UTimelineTemplate *this,wchar_t *param_1,UObject *param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = this->_padding_;
  bVar2 = UObject::Rename((UObject *)this,param_1,param_2,param_3);
  if (lVar1 != this->_padding_) {
    UpdateCachedNames(this);
  }
  return bVar2;
}

// Serialize @ 1488dd840

void __thiscall UTimelineTemplate::Serialize(UTimelineTemplate *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001488dd860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// Serialize @ 1488dd870

void __thiscall
UTimelineTemplate::Serialize(UTimelineTemplate *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// SetMetaData @ 1488dde40

void __thiscall
UTimelineTemplate::SetMetaData(UTimelineTemplate *this,FName param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  uVar8 = FindMetaDataEntryIndexForKey(this,param_1);
  if (uVar8 == 0xffffffff) {
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    piVar1 = &(this->MetaDataArray).ArrayMax;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (param_2->Data).ArrayMax;
    iVar4 = (param_2->Data).ArrayNum;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    iVar10 = (this->MetaDataArray).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&(this->MetaDataArray).AllocatorInstance,piVar1);
    }
    lVar11 = (longlong)iVar10;
    (this->MetaDataArray).ArrayNum = iVar10 + 1;
    pFVar5 = (this->MetaDataArray).AllocatorInstance.Data;
    *(FName *)(pFVar5 + lVar11 * 0x18) = param_1;
    *(FScriptContainerElement **)(pFVar5 + lVar11 * 0x18 + 8) = pFVar2;
    *(int *)(pFVar5 + lVar11 * 0x18 + 0x10) = iVar4;
    *(int *)(pFVar5 + lVar11 * 0x18 + 0x14) = iVar3;
  }
  else {
    uVar9 = 0;
    if ((int)uVar8 < (this->MetaDataArray).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (this->MetaDataArray).AllocatorInstance.Data + ((longlong)(int)uVar8 * 3 + 1) * 8;
    if (pFVar2 != (FScriptContainerElement *)param_2) {
      if (*(void **)&pFVar2->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar2->field_0x0);
      }
      *(FScriptContainerElement **)&pFVar2->field_0x0 = (param_2->Data).AllocatorInstance.Data;
      (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar2 + 8) = (param_2->Data).ArrayNum;
      *(int *)(pFVar2 + 0xc) = (param_2->Data).ArrayMax;
      (param_2->Data).ArrayNum = 0;
      (param_2->Data).ArrayMax = 0;
    }
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// StaticRegisterNativesUTimelineTemplate @ 1488e22d0

void __cdecl UTimelineTemplate::StaticRegisterNativesUTimelineTemplate(void)

{
  return;
}

// TimelineVariableNameToTemplateName @ 1488e40a0

FString * __cdecl
UTimelineTemplate::TimelineVariableNameToTemplateName(FString *__return_storage_ptr__,FName param_1)

{
  FString *pFVar1;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"_Template");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// UpdateCachedNames @ 1488ea1e0

void __thiscall UTimelineTemplate::UpdateCachedNames(UTimelineTemplate *this)

{
  FScriptContainerElement *pFVar1;
  FTTPropertyTrack *pFVar2;
  ForAnyElementType FVar3;
  FScriptContainerElement *pFVar4;
  FTTPropertyTrack *pFVar5;
  int iVar6;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  iVar6 = TemplatePostfix.Data.ArrayNum + -1;
  FVar3 = TemplatePostfix.Data.AllocatorInstance;
  if (TemplatePostfix.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  ::FString::RemoveFromEnd(&local_78,(wchar_t *)FVar3.Data,iVar6,IgnoreCase);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar3.Data = local_78.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  this->VariableName = local_res8;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  FGuid::AppendString(&this->TimelineGuid,&local_68,Digits);
  ::FString::PrintfImpl(&local_58,L"%s__Direction_%s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::`anonymous_namespace'::SanitizePropertyName(&local_58);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar3.Data = local_58.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  this->DirectionPropertyName = local_res8;
  ::FString::PrintfImpl(&local_68,L"%s__UpdateFunc");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar3.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  this->UpdateFunctionName = local_res8;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_68,L"%s__FinishedFunc");
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar3.Data = local_68.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar3.Data);
  this->FinishedFunctionName = local_res8;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  iVar6 = (this->EventTracks).ArrayNum;
  pFVar4 = (this->EventTracks).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar6 * 0x28;
  while( true ) {
    if ((this->EventTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTEventTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    local_res8 = *(FName *)(pFVar4 + 8);
    *(FName *)(pFVar4 + 8) = local_res8;
    ::FName::ToString(&local_res8,&local_38);
    local_res10 = this->VariableName;
    ::FName::ToString(&local_res10,&local_48);
    ::FString::PrintfImpl(&local_68,L"%s__%s__EventFunc");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar3.Data = local_68.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res18,(wchar_t *)FVar3.Data);
    *(FName *)(pFVar4 + 0x18) = local_res18;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar4 = pFVar4 + 0x28;
  }
  iVar6 = (this->FloatTracks).ArrayNum;
  pFVar5 = (FTTPropertyTrack *)(this->FloatTracks).AllocatorInstance.Data;
  pFVar2 = (FTTPropertyTrack *)((longlong)pFVar5 + (longlong)iVar6 * 0x28);
  while( true ) {
    if ((this->FloatTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTFloatTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar2) break;
    FTTPropertyTrack::SetTrackName(pFVar5,(FName)pFVar5->_padding_,this);
    pFVar5 = (FTTPropertyTrack *)&pFVar5[1]._padding_;
  }
  iVar6 = (this->VectorTracks).ArrayNum;
  pFVar5 = (FTTPropertyTrack *)(this->VectorTracks).AllocatorInstance.Data;
  pFVar2 = (FTTPropertyTrack *)((longlong)pFVar5 + (longlong)iVar6 * 0x28);
  while( true ) {
    if ((this->VectorTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTVectorTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar2) break;
    FTTPropertyTrack::SetTrackName(pFVar5,(FName)pFVar5->_padding_,this);
    pFVar5 = (FTTPropertyTrack *)&pFVar5[1]._padding_;
  }
  iVar6 = (this->LinearColorTracks).ArrayNum;
  pFVar5 = (FTTPropertyTrack *)(this->LinearColorTracks).AllocatorInstance.Data;
  pFVar2 = (FTTPropertyTrack *)((longlong)pFVar5 + (longlong)iVar6 * 0x28);
  while( true ) {
    if ((this->LinearColorTracks).ArrayNum != iVar6) {
      `TCheckedPointerIterator<FTTLinearColorTrack,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar5 == pFVar2) break;
    FTTPropertyTrack::SetTrackName(pFVar5,(FName)pFVar5->_padding_,this);
    pFVar5 = (FTTPropertyTrack *)&pFVar5[1]._padding_;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

