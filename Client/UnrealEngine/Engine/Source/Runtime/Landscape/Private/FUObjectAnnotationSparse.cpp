// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// AddAnnotation @ 145f088c0

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::AddAnnotation
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this,UObjectBase *param_1,
          FMeshMapBuildLegacyData *param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TPairInitializer<UObjectBase_const_*_const_&,FMeshMapBuildLegacyData_const_&> local_res10;
  FMeshMapBuildLegacyData local_38;
  FMeshMapBuildLegacyData **local_28;
  FMeshMapBuildLegacyData *local_20;
  
  local_res10.Value = (FMeshMapBuildLegacyData *)param_1;
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_38.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (param_2->Data).ArrayNum;
  local_38.Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  if (local_38.Data.ArrayNum == 0) {
    RemoveAnnotation(this,(UObjectBase *)local_res10.Value);
  }
  else {
    SRWLock = &this->AnnotationMapCritical;
    if (SRWLock == (FPlatformRWLock *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    iVar1 = *(int *)&(this->AnnotationMap).field_0x34;
    iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
    local_28 = &local_res10.Value;
    local_20 = &local_38;
    TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FMeshMapBuildLegacyData_const_&>_>
              ((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,&local_res10,(bool *)&local_28);
    SetAnnotationCacheKeyAndValue(this,(UObjectBase *)local_res10.Value,&local_38);
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    if (iVar2 == iVar1) {
      ProcessRegistration(this);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessRegistration @ 145f17d50

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  if (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34) {
    if (this->bRegistered != false) {
      FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
      this->bRegistered = false;
    }
  }
  else if (this->bRegistered == false) {
    FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
    this->bRegistered = true;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
                    /* WARNING: Could not recover jumptable at 0x000145f17e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAnnotation @ 145f1a1c0

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FMeshMapBuildLegacyData local_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  SRWLock = &this->AnnotationMapCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  local_res8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 145f1dcc0

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this,UObjectBase *param_1,
          FMeshMapBuildLegacyData *param_2)

{
  FPlatformRWLock *SRWLock;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMeshMapBuildLegacyData *pFVar4;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  pFVar4 = &this->AnnotationCacheValue;
  if (pFVar4 != param_2) {
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar4->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->AnnotationCacheValue).Data.ArrayNum = (param_2->Data).ArrayNum;
    (this->AnnotationCacheValue).Data.ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000145f1dd61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

