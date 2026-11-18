// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 77

// AddAnnotation @ 1478b1d60

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::AddAnnotation
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this,UObjectBase *param_1,
          FLightComponentLegacyMapBuildData *param_2)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  FLightComponentLegacyMapBuildData *pFVar6;
  bool bVar7;
  TPairInitializer<UObjectBase_const_*_const_&,FLightComponentLegacyMapBuildData_const_&>
  local_res10;
  FLightComponentLegacyMapBuildData **local_58;
  uint *local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FLightComponentMapBuildData *local_38;
  
  local_res10.Value = (FLightComponentLegacyMapBuildData *)param_1;
  if (param_1 == (UObjectBase *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_48 = (param_2->Id).A;
  uStack_44 = (param_2->Id).B;
  uStack_40 = (param_2->Id).C;
  uStack_3c = (param_2->Id).D;
  uVar3 = (param_2->Id).C;
  uVar4 = (param_2->Id).D;
  local_38 = param_2->Data;
  if (((uStack_44 == 0 && uVar4 == 0) && uVar3 == 0) && local_48 == 0) {
    RemoveAnnotation(this,(UObjectBase *)local_res10.Value);
    return;
  }
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x34;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  local_58 = &local_res10.Value;
  local_50 = &local_48;
  TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UObjectBase_const_*_const_&,FLightComponentLegacyMapBuildData_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap,&local_res10,(bool *)&local_58);
  pFVar6 = local_res10.Value;
  SRWLock_00 = &this->AnnotationCacheCritical;
  if (SRWLock_00 == (FPlatformRWLock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
  this->AnnotationCacheKey = (UObjectBase *)pFVar6;
  (this->AnnotationCacheValue).Id.A = local_48;
  (this->AnnotationCacheValue).Id.B = uStack_44;
  (this->AnnotationCacheValue).Id.C = uStack_40;
  (this->AnnotationCacheValue).Id.D = uStack_3c;
  (this->AnnotationCacheValue).Data = local_38;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (iVar2 == iVar1) {
    ProcessRegistration(this);
  }
  return;
}

// ProcessRegistration @ 1478e8470

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x0001478e8526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAnnotation @ 1478ea400

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FLightComponentLegacyMapBuildData local_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Id.A = 0;
  local_28.Id.B = 0;
  local_28.Id.C = 0;
  local_28.Id.D = 0;
  local_28.Data = (FLightComponentMapBuildData *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
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
      TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 1478ef800

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this,UObjectBase *param_1,
          FLightComponentLegacyMapBuildData *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  uVar2 = (param_2->Id).B;
  uVar3 = (param_2->Id).C;
  uVar4 = (param_2->Id).D;
  (this->AnnotationCacheValue).Id.A = (param_2->Id).A;
  (this->AnnotationCacheValue).Id.B = uVar2;
  (this->AnnotationCacheValue).Id.C = uVar3;
  (this->AnnotationCacheValue).Id.D = uVar4;
  (this->AnnotationCacheValue).Data = param_2->Data;
                    /* WARNING: Could not recover jumptable at 0x0001478ef884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// ProcessRegistration @ 14795d820

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014795d8d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAnnotation @ 147962670

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this,
          UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FReflectionCaptureMapBuildLegacyData local_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.MapBuildData = (FReflectionCaptureMapBuildData *)0x0;
  local_28.Id.A = 0;
  local_28.Id.B = 0;
  local_28.Id.C = 0;
  local_28.Id.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
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
      TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 1479671d0

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this,
          UObjectBase *param_1,FReflectionCaptureMapBuildLegacyData *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  uVar2 = (param_2->Id).B;
  uVar3 = (param_2->Id).C;
  uVar4 = (param_2->Id).D;
  (this->AnnotationCacheValue).Id.A = (param_2->Id).A;
  (this->AnnotationCacheValue).Id.B = uVar2;
  (this->AnnotationCacheValue).Id.C = uVar3;
  (this->AnnotationCacheValue).Id.D = uVar4;
  (this->AnnotationCacheValue).MapBuildData = param_2->MapBuildData;
                    /* WARNING: Could not recover jumptable at 0x000147967254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// NotifyUObjectDeleted @ 147e44970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FLevelAnnotation *pFVar3;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pFVar3 = TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
                   *)&this->AnnotationMap,param_1);
  if (pFVar3 != (FLevelAnnotation *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AnnotationMap.Find(Object)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e44a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 147e44a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 147e44a50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::GetAllocatedSize
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x18;
}

// ~FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> @ 147e56680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::
~FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationSparse_UFLevelAnnotation_ULevelStreaming___0A___6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// AddAnnotation @ 147e5ac00

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::AddAnnotation
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this,UObjectBase *param_1,
          FLevelLegacyMapBuildData *param_2)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  FLevelLegacyMapBuildData *pFVar6;
  bool bVar7;
  TPairInitializer<UObjectBase_const_*_const_&,FLevelLegacyMapBuildData_const_&> local_res10;
  FLevelLegacyMapBuildData **local_58;
  uint *local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  FPrecomputedLightVolumeData *local_38;
  
  local_res10.Value = (FLevelLegacyMapBuildData *)param_1;
  if (param_1 == (UObjectBase *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_48 = (param_2->Id).A;
  uStack_44 = (param_2->Id).B;
  uStack_40 = (param_2->Id).C;
  uStack_3c = (param_2->Id).D;
  uVar3 = (param_2->Id).C;
  uVar4 = (param_2->Id).D;
  local_38 = param_2->Data;
  if (((uStack_44 == 0 && uVar4 == 0) && uVar3 == 0) && local_48 == 0) {
    RemoveAnnotation(this,(UObjectBase *)local_res10.Value);
    return;
  }
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x34;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  local_58 = &local_res10.Value;
  local_50 = &local_48;
  TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FLevelLegacyMapBuildData_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap,&local_res10,(bool *)&local_58);
  pFVar6 = local_res10.Value;
  SRWLock_00 = &this->AnnotationCacheCritical;
  if (SRWLock_00 == (FPlatformRWLock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
  this->AnnotationCacheKey = (UObjectBase *)pFVar6;
  (this->AnnotationCacheValue).Id.A = local_48;
  (this->AnnotationCacheValue).Id.B = uStack_44;
  (this->AnnotationCacheValue).Id.C = uStack_40;
  (this->AnnotationCacheValue).Id.D = uStack_3c;
  (this->AnnotationCacheValue).Data = local_38;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (iVar2 == iVar1) {
    ProcessRegistration(this);
  }
  return;
}

// ProcessRegistration @ 147e75f40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::ProcessRegistration
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000147e75fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// ProcessRegistration @ 147e76000

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000147e760b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 147e79970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FLevelAnnotation local_res8;
  
  local_res8.LevelStreaming = (ULevelStreaming *)0x0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_res8);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 147e79aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::RemoveAnnotation
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLevelAnnotation local_res8;
  UObjectBase *local_res10;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0xda,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res8.LevelStreaming = (ULevelStreaming *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_res8);
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
  iVar1 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x34;
  local_res10 = param_1;
  if (iVar1 != iVar2) {
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>,FDefaultSetAllocator>
                *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res10);
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e79ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// RemoveAnnotation @ 147e79bc0

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FLevelLegacyMapBuildData local_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.Id.A = 0;
  local_28.Id.B = 0;
  local_28.Id.C = 0;
  local_28.Id.D = 0;
  local_28.Data = (FPrecomputedLightVolumeData *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
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
      TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 147e7e010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0> *this,UObjectBase *param_1,
          FLevelAnnotation *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).LevelStreaming = param_2->LevelStreaming;
                    /* WARNING: Could not recover jumptable at 0x000147e7e087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 147e7e0a0

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this,UObjectBase *param_1,
          FLevelLegacyMapBuildData *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  uVar2 = (param_2->Id).B;
  uVar3 = (param_2->Id).C;
  uVar4 = (param_2->Id).D;
  (this->AnnotationCacheValue).Id.A = (param_2->Id).A;
  (this->AnnotationCacheValue).Id.B = uVar2;
  (this->AnnotationCacheValue).Id.C = uVar3;
  (this->AnnotationCacheValue).Id.D = uVar4;
  (this->AnnotationCacheValue).Data = param_2->Data;
                    /* WARNING: Could not recover jumptable at 0x000147e7e124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// NotifyUObjectDeleted @ 147e8c940

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FLightComponentLegacyMapBuildData FStack_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_28.Id.A = 0;
  FStack_28.Id.B = 0;
  FStack_28.Id.C = 0;
  FStack_28.Id.D = 0;
  FStack_28.Data = (FLightComponentMapBuildData *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_28);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 147e8c950

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 147e8ca60

ulong64 __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x28;
}

// NotifyUObjectDeleted @ 147e8d6f0

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this,
          UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FReflectionCaptureMapBuildLegacyData FStack_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_28.MapBuildData = (FReflectionCaptureMapBuildData *)0x0;
  FStack_28.Id.A = 0;
  FStack_28.Id.B = 0;
  FStack_28.Id.C = 0;
  FStack_28.Id.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_28);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 147e8d700

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 147e8d730

ulong64 __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x28;
}

// NotifyUObjectDeleted @ 147e8dc10

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FMeshMapBuildLegacyData FStack_18;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_18);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 147e8dc20

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 147e8dca0

ulong64 __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (longlong)iVar3 * 0x20 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + lVar7;
}

// NotifyUObjectDeleted @ 147e8e6f0

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FLevelLegacyMapBuildData FStack_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_28.Id.A = 0;
  FStack_28.Id.B = 0;
  FStack_28.Id.C = 0;
  FStack_28.Id.D = 0;
  FStack_28.Data = (FPrecomputedLightVolumeData *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_28);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 147e8e700

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 147e8e730

ulong64 __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x28;
}

// ~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> @ 147ea7720

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::
~FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationSparse_UFPlayerState_FLockedViewState___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// ~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> @ 147ea7800

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::
~FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_VFLevelLegacyMapBuildData___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// ~FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> @ 147ea78e0

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::
~FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationSparse_VFLightComponentLegacyMapBuildData___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// ~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> @ 147ea79c0

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::
~FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_VFMeshMapBuildLegacyData___00__6B_;
  RemoveAllAnnotations(this);
  pFVar1 = (this->AnnotationCacheValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// ~FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> @ 147ea7ab0

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::
~FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ =
       (longlong)&___7__FUObjectAnnotationSparse_VFReflectionCaptureMapBuildLegacyData___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAllocatedSize @ 147ebe9e0

ulong64 __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (longlong)iVar3 * 0x50 + lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2);
}

// GetAndRemoveAnnotation @ 147ebead0

FLevelLegacyMapBuildData * __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::GetAndRemoveAnnotation
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this,
          FLevelLegacyMapBuildData *__return_storage_ptr__,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FLevelLegacyMapBuildData *pFVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  FLevelLegacyMapBuildData local_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xb5,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FLevelLegacyMapBuildData *)(*pcVar4)();
    return pFVar8;
  }
  (__return_storage_ptr__->Id).A = 0;
  (__return_storage_ptr__->Id).B = 0;
  (__return_storage_ptr__->Id).C = 0;
  (__return_storage_ptr__->Id).D = 0;
  __return_storage_ptr__->Data = (FPrecomputedLightVolumeData *)0x0;
  local_28.Id.A = 0;
  local_28.Id.B = 0;
  local_28.Id.C = 0;
  local_28.Id.D = 0;
  local_28.Data = (FPrecomputedLightVolumeData *)0x0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
  SRWLock = &this->AnnotationMapCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FLevelLegacyMapBuildData *)(*pcVar4)();
    return pFVar8;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (iVar2 != iVar3) {
    puVar11 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->AnnotationMap).field_0x38;
    }
    iVar10 = *(int *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->AnnotationMap).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4)
    ;
    if (iVar10 != -1) {
      do {
        lVar1 = *(longlong *)&this->AnnotationMap + (longlong)iVar10 * 0x28;
        if (*(UObjectBase **)(*(longlong *)&this->AnnotationMap + (longlong)iVar10 * 0x28) ==
            param_1) {
          uVar5 = *(undefined8 *)(lVar1 + 8);
          uVar6 = *(undefined8 *)(lVar1 + 0x10);
          (__return_storage_ptr__->Id).A = (int)uVar5;
          (__return_storage_ptr__->Id).B = (int)((ulonglong)uVar5 >> 0x20);
          (__return_storage_ptr__->Id).C = (int)uVar6;
          (__return_storage_ptr__->Id).D = (int)((ulonglong)uVar6 >> 0x20);
          __return_storage_ptr__->Data = *(FPrecomputedLightVolumeData **)(lVar1 + 0x18);
          TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar10);
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x20);
      } while (iVar10 != -1);
    }
    if ((0 < iVar2 - iVar3) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return __return_storage_ptr__;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return __return_storage_ptr__;
}

// GetAnnotation @ 147ebec70

FPlayerState * __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::GetAnnotation
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this,
          FPlayerState *__return_storage_ptr__,UObjectBase *param_1)

{
  FPlatformRWLock *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined3 uVar15;
  bool bVar16;
  FPlayerState *pFVar17;
  double *pdVar18;
  TVector<double>_u_0 *pTVar19;
  TVector<double>_u_0 local_118;
  undefined4 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined4 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined1 local_a0;
  TVector<double>_u_0 local_98;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  undefined8 uStack_20;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                        ,0x11d,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FPlayerState *)(*pcVar2)();
      return pFVar17;
    }
  }
  pFVar1 = &this->AnnotationCacheCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mutex",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                        ,0xa2,L"");
    if (bVar16) {
      pcVar2 = (code *)swi(3);
      pFVar17 = (FPlayerState *)(*pcVar2)();
      return pFVar17;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  if (param_1 == this->AnnotationCacheKey) {
    dVar11 = (this->AnnotationCacheValue).ViewPoint.Location.field0_0x0._s_0.Y;
    dVar12 = (this->AnnotationCacheValue).ViewPoint.Location.field0_0x0._s_0.Z;
    fVar14 = (this->AnnotationCacheValue).ViewPoint.FOV;
    uVar7 = *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.field_0x1c;
    (__return_storage_ptr__->ViewPoint).Location.field0_0x0._s_0.X =
         (this->AnnotationCacheValue).ViewPoint.Location.field0_0x0._s_0.X;
    (__return_storage_ptr__->ViewPoint).Location.field0_0x0._s_0.Y = dVar11;
    uVar3 = *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.Rotation.Pitch;
    uVar4 = *(undefined4 *)((longlong)&(this->AnnotationCacheValue).ViewPoint.Rotation.Pitch + 4);
    uVar5 = *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.Rotation.Yaw;
    uVar6 = *(undefined4 *)((longlong)&(this->AnnotationCacheValue).ViewPoint.Rotation.Yaw + 4);
    (__return_storage_ptr__->ViewPoint).Location.field0_0x0._s_0.Z = dVar12;
    (__return_storage_ptr__->ViewPoint).FOV = fVar14;
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).field_0x1c = uVar7;
    uVar7 = *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.Rotation.Roll;
    uVar8 = *(undefined4 *)((longlong)&(this->AnnotationCacheValue).ViewPoint.Rotation.Roll + 4);
    bVar16 = (this->AnnotationCacheValue).bLocked;
    uVar15 = *(undefined3 *)&(this->AnnotationCacheValue).field_0x39;
    uVar9 = *(undefined4 *)&(this->AnnotationCacheValue).field_0x3c;
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).Rotation.Pitch = uVar3;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewPoint).Rotation.Pitch + 4) = uVar4;
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).Rotation.Yaw = uVar5;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewPoint).Rotation.Yaw + 4) = uVar6;
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).Rotation.Roll = uVar7;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewPoint).Rotation.Roll + 4) = uVar8;
    __return_storage_ptr__->bLocked = bVar16;
    *(undefined3 *)&__return_storage_ptr__->field_0x39 = uVar15;
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = uVar9;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    pFVar1 = &this->AnnotationMapCritical;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0xa2,L"");
      if (bVar16) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FPlayerState *)(*pcVar2)();
        return pFVar17;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    pFVar17 = TMapBase<UObjectBase_const_*,FLockedViewState::FPlayerState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>_>
              ::Find((TMapBase<UObjectBase_const_*,FLockedViewState::FPlayerState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>_>
                      *)&this->AnnotationMap,param_1);
    if (pFVar17 == (FPlayerState *)0x0) {
      local_100 = 0x42b40000;
      pTVar19 = &local_118;
      local_e0 = 0;
      local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_f8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_f0 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    }
    else {
      local_98._s_0.X = (pFVar17->ViewPoint).Location.field0_0x0._s_0.X;
      local_98._s_0.Y = (pFVar17->ViewPoint).Location.field0_0x0._s_0.Y;
      pTVar19 = &local_98;
      local_98._s_0.Z = (pFVar17->ViewPoint).Location.field0_0x0._s_0.Z;
      uStack_80 = *(undefined8 *)&(pFVar17->ViewPoint).FOV;
      local_78 = (pFVar17->ViewPoint).Rotation.Pitch;
      dStack_70 = (pFVar17->ViewPoint).Rotation.Yaw;
      local_68 = (pFVar17->ViewPoint).Rotation.Roll;
      uStack_60 = *(undefined8 *)&pFVar17->bLocked;
    }
    SetAnnotationCacheKeyAndValue(this,param_1,(FPlayerState *)&pTVar19->_s_0);
    if (pFVar17 == (FPlayerState *)0x0) {
      local_c0 = 0x42b40000;
      pdVar18 = &local_d8;
      local_a0 = 0;
      local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_a8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_b8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_b0 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    }
    else {
      pdVar18 = &local_58;
      local_58 = (pFVar17->ViewPoint).Location.field0_0x0._s_0.X;
      dStack_50 = (pFVar17->ViewPoint).Location.field0_0x0._s_0.Y;
      local_48 = (pFVar17->ViewPoint).Location.field0_0x0._s_0.Z;
      uStack_40 = *(undefined8 *)&(pFVar17->ViewPoint).FOV;
      local_38 = (pFVar17->ViewPoint).Rotation.Pitch;
      dStack_30 = (pFVar17->ViewPoint).Rotation.Yaw;
      local_28 = (pFVar17->ViewPoint).Rotation.Roll;
      uStack_20 = *(undefined8 *)&pFVar17->bLocked;
    }
    dVar11 = pdVar18[1];
    dVar12 = pdVar18[2];
    dVar13 = pdVar18[3];
    (__return_storage_ptr__->ViewPoint).Location.field0_0x0._s_0.X = *pdVar18;
    (__return_storage_ptr__->ViewPoint).Location.field0_0x0._s_0.Y = dVar11;
    uVar3 = *(undefined4 *)(pdVar18 + 4);
    uVar4 = *(undefined4 *)((longlong)pdVar18 + 0x24);
    uVar5 = *(undefined4 *)(pdVar18 + 5);
    uVar6 = *(undefined4 *)((longlong)pdVar18 + 0x2c);
    (__return_storage_ptr__->ViewPoint).Location.field0_0x0._s_0.Z = dVar12;
    *(double *)&(__return_storage_ptr__->ViewPoint).FOV = dVar13;
    uVar7 = *(undefined4 *)(pdVar18 + 6);
    uVar8 = *(undefined4 *)((longlong)pdVar18 + 0x34);
    uVar9 = *(undefined4 *)(pdVar18 + 7);
    uVar10 = *(undefined4 *)((longlong)pdVar18 + 0x3c);
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).Rotation.Pitch = uVar3;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewPoint).Rotation.Pitch + 4) = uVar4;
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).Rotation.Yaw = uVar5;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewPoint).Rotation.Yaw + 4) = uVar6;
    *(undefined4 *)&(__return_storage_ptr__->ViewPoint).Rotation.Roll = uVar7;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->ViewPoint).Rotation.Roll + 4) = uVar8;
    *(undefined4 *)&__return_storage_ptr__->bLocked = uVar9;
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = uVar10;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  return __return_storage_ptr__;
}

// NotifyUObjectDeleted @ 147ecff30

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this,UObjectBase *param_1,
          int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  TVector<double>_u_0 TStack_48;
  undefined4 uStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  undefined1 uStack_10;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_30 = 0x42b40000;
  TStack_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  TStack_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_10 = 0;
  TStack_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dStack_28 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_20 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  SetAnnotationCacheKeyAndValue(this,param_1,(FPlayerState *)&TStack_48._s_0);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 147ed0b80

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// ProcessRegistration @ 147ed4410

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000147ed44c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 147ed7760

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double>_u_0 local_58;
  undefined4 local_40;
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_20;
  
  local_40 = 0x42b40000;
  local_58._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_58._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_20 = 0;
  local_58._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_28 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_38 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_30 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,(FPlayerState *)&local_58._s_0);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAllAnnotations @ 147ed78d0

void __thiscall
FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FLevelLegacyMapBuildData,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FLevelLegacyMapBuildData local_38;
  
  local_38.Id.A = 0;
  local_38.Id.B = 0;
  local_38.Id.C = 0;
  local_38.Id.D = 0;
  local_38.Data = (FPrecomputedLightVolumeData *)0x0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_38);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FLevelLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelLegacyMapBuildData,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAllAnnotations @ 147ed7a10

void __thiscall
FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FLightComponentLegacyMapBuildData local_38;
  
  local_38.Id.A = 0;
  local_38.Id.B = 0;
  local_38.Id.C = 0;
  local_38.Id.D = 0;
  local_38.Data = (FLightComponentMapBuildData *)0x0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_38);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAllAnnotations @ 147ed7b50

void __thiscall
FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FMeshMapBuildLegacyData local_28;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->AnnotationMap,0,*(int *)&(this->AnnotationMap).field_0x8);
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FMeshMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMeshMapBuildLegacyData,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAllAnnotations @ 147ed7ca0

void __thiscall
FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FReflectionCaptureMapBuildLegacyData,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FReflectionCaptureMapBuildLegacyData local_38;
  
  local_38.MapBuildData = (FReflectionCaptureMapBuildData *)0x0;
  local_38.Id.A = 0;
  local_38.Id.B = 0;
  local_38.Id.C = 0;
  local_38.Id.D = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_38);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FReflectionCaptureMapBuildLegacyData,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 147ed7de0

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  TVector<double>_u_0 local_48;
  undefined4 local_30;
  double local_28;
  double dStack_20;
  double local_18;
  undefined1 local_10;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_30 = 0x42b40000;
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_10 = 0;
  local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_28 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_20 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  SetAnnotationCacheKeyAndValue(this,param_1,(FPlayerState *)&local_48._s_0);
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
      TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 147edbe60

void __thiscall
FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FLockedViewState::FPlayerState,1> *this,UObjectBase *param_1,
          FPlayerState *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  float fVar6;
  undefined3 uVar7;
  bool bVar8;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  dVar5 = (param_2->ViewPoint).Location.field0_0x0._s_0.Y;
  (this->AnnotationCacheValue).ViewPoint.Location.field0_0x0._s_0.X =
       (param_2->ViewPoint).Location.field0_0x0._s_0.X;
  (this->AnnotationCacheValue).ViewPoint.Location.field0_0x0._s_0.Y = dVar5;
  fVar6 = (param_2->ViewPoint).FOV;
  uVar2 = *(undefined4 *)&(param_2->ViewPoint).field_0x1c;
  (this->AnnotationCacheValue).ViewPoint.Location.field0_0x0._s_0.Z =
       (param_2->ViewPoint).Location.field0_0x0._s_0.Z;
  (this->AnnotationCacheValue).ViewPoint.FOV = fVar6;
  *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.field_0x1c = uVar2;
  uVar2 = *(undefined4 *)((longlong)&(param_2->ViewPoint).Rotation.Pitch + 4);
  uVar3 = *(undefined4 *)&(param_2->ViewPoint).Rotation.Yaw;
  uVar4 = *(undefined4 *)((longlong)&(param_2->ViewPoint).Rotation.Yaw + 4);
  *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.Rotation.Pitch =
       *(undefined4 *)&(param_2->ViewPoint).Rotation.Pitch;
  *(undefined4 *)((longlong)&(this->AnnotationCacheValue).ViewPoint.Rotation.Pitch + 4) = uVar2;
  *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.Rotation.Yaw = uVar3;
  *(undefined4 *)((longlong)&(this->AnnotationCacheValue).ViewPoint.Rotation.Yaw + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&(param_2->ViewPoint).Rotation.Roll + 4);
  bVar8 = param_2->bLocked;
  uVar7 = *(undefined3 *)&param_2->field_0x39;
  uVar3 = *(undefined4 *)&param_2->field_0x3c;
  *(undefined4 *)&(this->AnnotationCacheValue).ViewPoint.Rotation.Roll =
       *(undefined4 *)&(param_2->ViewPoint).Rotation.Roll;
  *(undefined4 *)((longlong)&(this->AnnotationCacheValue).ViewPoint.Rotation.Roll + 4) = uVar2;
  (this->AnnotationCacheValue).bLocked = bVar8;
  *(undefined3 *)&(this->AnnotationCacheValue).field_0x39 = uVar7;
  *(undefined4 *)&(this->AnnotationCacheValue).field_0x3c = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000147edbef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// NotifyUObjectDeleted @ 1480771a0

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FObjectIdAnnotation FStackX_8;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStackX_8.Id = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStackX_8);
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
  if (iVar1 != iVar2) {
    puVar7 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AnnotationMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                              (longlong)*(int *)&(this->AnnotationMap).field_0x48 - 1U) * 4);
    if (iVar6 != -1) {
      do {
        if (*(UObjectBase **)(*(longlong *)&this->AnnotationMap + (longlong)iVar6 * 0x18) == param_1
           ) {
          TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar6);
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->AnnotationMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 1480771b0

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 148077320

ulong64 __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x18;
}

// ~FUObjectAnnotationSparse<FObjectIdAnnotation,1> @ 14808ca00

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::~FUObjectAnnotationSparse<FObjectIdAnnotation,1>
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFObjectIdAnnotation___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectIdAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectIdAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectIdAnnotation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// GetAndRemoveAnnotation @ 1480a3d80

FObjectIdAnnotation __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAndRemoveAnnotation
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FObjectIdAnnotation FVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  UObjectBase *in_R8;
  FObjectIdAnnotation local_res8;
  
  if ((in_R8 == (UObjectBase *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xb5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar6.Id = (*pcVar4)();
    return (FObjectIdAnnotation)FVar6.Id;
  }
  param_1->_padding_ = 0;
  local_res8.Id = 0;
  SetAnnotationCacheKeyAndValue(this,in_R8,&local_res8);
  SRWLock = &this->AnnotationMapCritical;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar6.Id = (*pcVar4)();
    return (FObjectIdAnnotation)FVar6.Id;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  uVar7 = ((uint)((ulonglong)in_R8 >> 0x14) & 0xffff ^ (uint)((ulonglong)in_R8 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (iVar2 != iVar3) {
    puVar9 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->AnnotationMap).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->AnnotationMap).field_0x48 - 1U &
                              (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar8 != -1) {
      do {
        lVar1 = *(longlong *)&this->AnnotationMap + (longlong)iVar8 * 0x18;
        if (*(UObjectBase **)(*(longlong *)&this->AnnotationMap + (longlong)iVar8 * 0x18) == in_R8)
        {
          param_1->_padding_ = *(longlong *)(lVar1 + 8);
          TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar8);
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
    if ((0 < iVar2 - iVar3) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return (FObjectIdAnnotation)(ulong64)param_1;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return (FObjectIdAnnotation)(ulong64)param_1;
}

// GetAnnotation @ 1480a3ef0

FObjectIdAnnotation __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::GetAnnotation
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *pFVar1;
  code *pcVar2;
  bool bVar3;
  FObjectIdAnnotation FVar4;
  FObjectIdAnnotation *pFVar5;
  ulong64 uVar6;
  UObjectBase *in_R8;
  FObjectIdAnnotation local_res18;
  FObjectIdAnnotation local_res20;
  
  if (in_R8 == (UObjectBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Id = (*pcVar2)();
      return (FObjectIdAnnotation)FVar4.Id;
    }
  }
  pFVar1 = &this->AnnotationCacheCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Id = (*pcVar2)();
      return (FObjectIdAnnotation)FVar4.Id;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  if (in_R8 == this->AnnotationCacheKey) {
    param_1->_padding_ = (this->AnnotationCacheValue).Id;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    return (FObjectIdAnnotation)(ulong64)param_1;
  }
  ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  pFVar1 = &this->AnnotationMapCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Id = (*pcVar2)();
      return (FObjectIdAnnotation)FVar4.Id;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  pFVar5 = TMapBase<UObjectBase_const_*,FObjectIdAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FObjectIdAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>_>
                   *)&this->AnnotationMap,in_R8);
  if (pFVar5 == (FObjectIdAnnotation *)0x0) {
    uVar6 = 0;
    local_res20.Id = 0;
    SetAnnotationCacheKeyAndValue(this,in_R8,&local_res20);
  }
  else {
    local_res18.Id = pFVar5->Id;
    SetAnnotationCacheKeyAndValue(this,in_R8,&local_res18);
    uVar6 = pFVar5->Id;
  }
  param_1->_padding_ = uVar6;
  ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  return (FObjectIdAnnotation)(ulong64)param_1;
}

// ProcessRegistration @ 1480bf490

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x0001480bf53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 1480c92d0

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FObjectIdAnnotation local_res8;
  
  local_res8.Id = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_res8);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 1480c96a0

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  FObjectIdAnnotation local_res8;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res8.Id = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_res8);
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
  if (iVar1 != iVar2) {
    puVar7 = *(undefined1 **)&(this->AnnotationMap).field_0x40;
    uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->AnnotationMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                              (longlong)*(int *)&(this->AnnotationMap).field_0x48 - 1U) * 4);
    if (iVar6 != -1) {
      do {
        if (*(UObjectBase **)(*(longlong *)&this->AnnotationMap + (longlong)iVar6 * 0x18) == param_1
           ) {
          TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UObjectBase_const_*,FObjectIdAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectIdAnnotation,0>,FDefaultSetAllocator>
                           *)&this->AnnotationMap,iVar6);
          break;
        }
        iVar6 = *(int *)(*(longlong *)&this->AnnotationMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
    if ((0 < iVar1 - iVar2) &&
       (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      ProcessRegistration(this);
      return;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 1480d2880

void __thiscall
FUObjectAnnotationSparse<FObjectIdAnnotation,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FObjectIdAnnotation,1> *this,UObjectBase *param_1,
          FObjectIdAnnotation *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  (this->AnnotationCacheValue).Id = param_2->Id;
                    /* WARNING: Could not recover jumptable at 0x0001480d28f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// NotifyUObjectDeleted @ 148a26470

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FActorInstanceGuid FStack_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_28.ActorGuid.A = 0;
  FStack_28.ActorGuid.B = 0;
  FStack_28.ActorGuid.C = 0;
  FStack_28.ActorGuid.D = 0;
  FStack_28.ActorInstanceGuid.A = 0;
  FStack_28.ActorInstanceGuid.B = 0;
  FStack_28.ActorInstanceGuid.C = 0;
  FStack_28.ActorInstanceGuid.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_28);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 148a26480

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 148a264c0

ulong64 __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return (longlong)iVar3 * 0x30 + lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2);
}

// NotifyUObjectDeleted @ 148a282b0

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::NotifyUObjectDeleted
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this,UObjectBase *param_1,int param_2)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *pUStackX_8;
  FLevelInstanceGuid FStack_48;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FStack_48.bIsDefault = true;
  FStack_48._49_2_ = 0;
  FStack_48._51_1_ = 0;
  FStack_48.LevelInstanceGuid.A = 0;
  FStack_48.LevelInstanceGuid.B = 0;
  FStack_48.LevelInstanceGuid.C = 0;
  FStack_48.LevelInstanceGuid.D = 0;
  FStack_48.Level.WeakPtr.ObjectIndex = 0;
  FStack_48.Level.WeakPtr.ObjectSerialNumber = 0;
  FStack_48.OwnerLevel.WeakPtr.ObjectIndex = 0;
  FStack_48.OwnerLevel.WeakPtr.ObjectSerialNumber = 0;
  FStack_48.ResolvedLevelInstanceGuid.A = 0;
  FStack_48.ResolvedLevelInstanceGuid.B = 0;
  FStack_48.ResolvedLevelInstanceGuid.C = 0;
  FStack_48.ResolvedLevelInstanceGuid.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&FStack_48);
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
  pUStackX_8 = param_1;
  if (((iVar1 != iVar2) &&
      (uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
               -0x7a143595, uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb,
      TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&pUStackX_8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// OnUObjectArrayShutdown @ 148a282c0

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::OnUObjectArrayShutdown
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this)

{
  RemoveAllAnnotations(this);
  FUObjectArray::RemoveUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  return;
}

// GetAllocatedSize @ 148a28340

ulong64 __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::GetAllocatedSize
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulong64 uVar6;
  longlong lVar7;
  
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  uVar1 = *(uint *)&(this->AnnotationMap).field_0x48;
  if (uVar1 < 2) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar1 << 2;
  }
  iVar2 = *(int *)&(this->AnnotationMap).field_0x2c;
  iVar3 = *(int *)&(this->AnnotationMap).field_0xc;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return lVar7 + (ulonglong)((iVar2 + 0x1fU >> 5) << 2) + (longlong)iVar3 * 0x48;
}

// ~FUObjectAnnotationSparse<FActorInstanceGuid,1> @ 148a43370

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::~FUObjectAnnotationSparse<FActorInstanceGuid,1>
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFActorInstanceGuid___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FActorInstanceGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FActorInstanceGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FActorInstanceGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// ~FUObjectAnnotationSparse<FLevelInstanceGuid,1> @ 148a43450

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::~FUObjectAnnotationSparse<FLevelInstanceGuid,1>
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparse_UFLevelInstanceGuid___00__6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLevelInstanceGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLevelInstanceGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FLevelInstanceGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationCacheCritical);
  }
  BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  if (BVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->AnnotationMapCritical);
  }
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// AddAnnotation @ 148a49080

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::AddAnnotation
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this,UObjectBase *param_1,
          FLevelInstanceGuid *param_2)

{
  FPlatformRWLock *SRWLock;
  FPlatformRWLock *SRWLock_00;
  int iVar1;
  int iVar2;
  code *pcVar3;
  FLevelInstanceGuid *pFVar4;
  bool bVar5;
  TPairInitializer<UObjectBase_const_*_const_&,FLevelInstanceGuid_const_&> local_res10;
  FLevelInstanceGuid **local_78;
  FWeakObjectPtr *local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr FStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_res10.Value = (FLevelInstanceGuid *)param_1;
  if (param_1 == (UObjectBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_68 = (param_2->Level).WeakPtr;
  FStack_60 = (param_2->OwnerLevel).WeakPtr;
  local_38 = *(undefined4 *)&param_2->bIsDefault;
  local_58._0_4_ = (param_2->LevelInstanceGuid).A;
  local_58._4_4_ = (param_2->LevelInstanceGuid).B;
  uStack_50._0_4_ = (param_2->LevelInstanceGuid).C;
  uStack_50._4_4_ = (param_2->LevelInstanceGuid).D;
  local_48._0_4_ = (param_2->ResolvedLevelInstanceGuid).A;
  local_48._4_4_ = (param_2->ResolvedLevelInstanceGuid).B;
  uStack_40._0_4_ = (param_2->ResolvedLevelInstanceGuid).C;
  uStack_40._4_4_ = (param_2->ResolvedLevelInstanceGuid).D;
  if ((char)local_38 != '\0') {
    RemoveAnnotation(this,(UObjectBase *)local_res10.Value);
    return;
  }
  SRWLock = &this->AnnotationMapCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar1 = *(int *)&(this->AnnotationMap).field_0x34;
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  local_78 = &local_res10.Value;
  local_70 = &local_68;
  TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FLevelInstanceGuid_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap,&local_res10,(bool *)&local_78);
  pFVar4 = local_res10.Value;
  SRWLock_00 = &this->AnnotationCacheCritical;
  if (SRWLock_00 == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
  this->AnnotationCacheKey = (UObjectBase *)pFVar4;
  (this->AnnotationCacheValue).Level.WeakPtr = local_68;
  (this->AnnotationCacheValue).OwnerLevel.WeakPtr = FStack_60;
  (this->AnnotationCacheValue).LevelInstanceGuid.A = (uint)local_58;
  (this->AnnotationCacheValue).LevelInstanceGuid.B = local_58._4_4_;
  (this->AnnotationCacheValue).LevelInstanceGuid.C = (uint)uStack_50;
  (this->AnnotationCacheValue).LevelInstanceGuid.D = uStack_50._4_4_;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.A = (uint)local_48;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.B = local_48._4_4_;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.C = (uint)uStack_40;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.D = uStack_40._4_4_;
  *(undefined4 *)&(this->AnnotationCacheValue).bIsDefault = local_38;
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (iVar2 == iVar1) {
    ProcessRegistration(this);
  }
  return;
}

// GetAnnotation @ 148a540b0

FLevelInstanceGuid * __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::GetAnnotation
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this,
          FLevelInstanceGuid *__return_storage_ptr__,UObjectBase *param_1)

{
  FPlatformRWLock *pFVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FWeakObjectPtr FVar12;
  undefined3 uVar13;
  bool bVar14;
  FLevelInstanceGuid *pFVar15;
  FWeakObjectPtr *pFVar16;
  FLevelInstanceGuid *pFVar17;
  FLevelInstanceGuid local_e8;
  FWeakObjectPtr local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  FLevelInstanceGuid local_80;
  FWeakObjectPtr local_4c;
  FWeakObjectPtr FStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  if (param_1 == (UObjectBase *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                        ,0x11d,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar15 = (FLevelInstanceGuid *)(*pcVar3)();
      return pFVar15;
    }
  }
  pFVar1 = &this->AnnotationCacheCritical;
  if (pFVar1 == (FPlatformRWLock *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Mutex",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                        ,0xa2,L"");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      pFVar15 = (FLevelInstanceGuid *)(*pcVar3)();
      return pFVar15;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)pFVar1);
  if (param_1 == this->AnnotationCacheKey) {
    FVar12 = (this->AnnotationCacheValue).OwnerLevel.WeakPtr;
    bVar14 = (this->AnnotationCacheValue).bIsDefault;
    uVar13 = *(undefined3 *)&(this->AnnotationCacheValue).field_0x31;
    uVar4 = (this->AnnotationCacheValue).LevelInstanceGuid.A;
    uVar5 = (this->AnnotationCacheValue).LevelInstanceGuid.B;
    uVar6 = (this->AnnotationCacheValue).LevelInstanceGuid.C;
    uVar7 = (this->AnnotationCacheValue).LevelInstanceGuid.D;
    (__return_storage_ptr__->Level).WeakPtr = (this->AnnotationCacheValue).Level.WeakPtr;
    (__return_storage_ptr__->OwnerLevel).WeakPtr = FVar12;
    uVar8 = (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.A;
    uVar9 = (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.B;
    uVar10 = (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.C;
    uVar11 = (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.D;
    (__return_storage_ptr__->LevelInstanceGuid).A = uVar4;
    (__return_storage_ptr__->LevelInstanceGuid).B = uVar5;
    (__return_storage_ptr__->LevelInstanceGuid).C = uVar6;
    (__return_storage_ptr__->LevelInstanceGuid).D = uVar7;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).A = uVar8;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).B = uVar9;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).C = uVar10;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).D = uVar11;
    __return_storage_ptr__->bIsDefault = bVar14;
    *(undefined3 *)&__return_storage_ptr__->field_0x31 = uVar13;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
    pFVar1 = &this->AnnotationMapCritical;
    if (pFVar1 == (FPlatformRWLock *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0xa2,L"");
      if (bVar14) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FLevelInstanceGuid *)(*pcVar3)();
        return pFVar15;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)pFVar1);
    pFVar15 = TMapBase<UObjectBase_const_*,FLevelInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>_>
              ::Find((TMapBase<UObjectBase_const_*,FLevelInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>_>
                      *)&this->AnnotationMap,param_1);
    if (pFVar15 == (FLevelInstanceGuid *)0x0) {
      local_e8._49_2_ = 0;
      local_e8.Level.WeakPtr.ObjectIndex = 0;
      local_e8.Level.WeakPtr.ObjectSerialNumber = 0;
      local_e8.OwnerLevel.WeakPtr.ObjectIndex = 0;
      local_e8.OwnerLevel.WeakPtr.ObjectSerialNumber = 0;
      local_e8._51_1_ = 0;
      pFVar17 = &local_e8;
      local_e8.LevelInstanceGuid.A = 0;
      local_e8.LevelInstanceGuid.B = 0;
      local_e8.LevelInstanceGuid.C = 0;
      local_e8.LevelInstanceGuid.D = 0;
      local_e8.ResolvedLevelInstanceGuid.A = 0;
      local_e8.ResolvedLevelInstanceGuid.B = 0;
      local_e8.ResolvedLevelInstanceGuid.C = 0;
      local_e8.ResolvedLevelInstanceGuid.D = 0;
      local_e8.bIsDefault = true;
    }
    else {
      local_80.Level.WeakPtr = (pFVar15->Level).WeakPtr;
      local_80.OwnerLevel.WeakPtr = (pFVar15->OwnerLevel).WeakPtr;
      pFVar17 = &local_80;
      local_80.LevelInstanceGuid.A = (pFVar15->LevelInstanceGuid).A;
      local_80.LevelInstanceGuid.B = (pFVar15->LevelInstanceGuid).B;
      local_80.LevelInstanceGuid.C = (pFVar15->LevelInstanceGuid).C;
      local_80.LevelInstanceGuid.D = (pFVar15->LevelInstanceGuid).D;
      local_80.ResolvedLevelInstanceGuid.A = (pFVar15->ResolvedLevelInstanceGuid).A;
      local_80.ResolvedLevelInstanceGuid.B = (pFVar15->ResolvedLevelInstanceGuid).B;
      local_80.ResolvedLevelInstanceGuid.C = (pFVar15->ResolvedLevelInstanceGuid).C;
      local_80.ResolvedLevelInstanceGuid.D = (pFVar15->ResolvedLevelInstanceGuid).D;
      local_80.bIsDefault = pFVar15->bIsDefault;
      local_80._49_3_ = *(undefined3 *)&pFVar15->field_0x31;
    }
    SetAnnotationCacheKeyAndValue(this,param_1,pFVar17);
    if (pFVar15 == (FLevelInstanceGuid *)0x0) {
      local_83 = 0;
      local_b4.ObjectIndex = 0;
      local_b4.ObjectSerialNumber = 0;
      uStack_ac = 0;
      local_81 = 0;
      pFVar16 = &local_b4;
      local_a4 = 0;
      local_9c = 0;
      local_94 = 0;
      local_8c = 0;
      local_84 = 1;
    }
    else {
      local_1c = *(undefined4 *)&pFVar15->bIsDefault;
      pFVar16 = &local_4c;
      local_4c = (pFVar15->Level).WeakPtr;
      FStack_44 = (pFVar15->OwnerLevel).WeakPtr;
      local_3c._0_4_ = (pFVar15->LevelInstanceGuid).A;
      local_3c._4_4_ = (pFVar15->LevelInstanceGuid).B;
      uStack_34._0_4_ = (pFVar15->LevelInstanceGuid).C;
      uStack_34._4_4_ = (pFVar15->LevelInstanceGuid).D;
      local_2c._0_4_ = (pFVar15->ResolvedLevelInstanceGuid).A;
      local_2c._4_4_ = (pFVar15->ResolvedLevelInstanceGuid).B;
      uStack_24._0_4_ = (pFVar15->ResolvedLevelInstanceGuid).C;
      uStack_24._4_4_ = (pFVar15->ResolvedLevelInstanceGuid).D;
    }
    FVar12 = pFVar16[1];
    uVar4 = pFVar16[2].ObjectIndex;
    uVar5 = pFVar16[2].ObjectSerialNumber;
    uVar6 = pFVar16[3].ObjectIndex;
    uVar7 = pFVar16[3].ObjectSerialNumber;
    (__return_storage_ptr__->Level).WeakPtr = *pFVar16;
    (__return_storage_ptr__->OwnerLevel).WeakPtr = FVar12;
    uVar8 = pFVar16[4].ObjectIndex;
    uVar9 = pFVar16[4].ObjectSerialNumber;
    uVar10 = pFVar16[5].ObjectIndex;
    uVar11 = pFVar16[5].ObjectSerialNumber;
    iVar2 = pFVar16[6].ObjectIndex;
    (__return_storage_ptr__->LevelInstanceGuid).A = uVar4;
    (__return_storage_ptr__->LevelInstanceGuid).B = uVar5;
    (__return_storage_ptr__->LevelInstanceGuid).C = uVar6;
    (__return_storage_ptr__->LevelInstanceGuid).D = uVar7;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).A = uVar8;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).B = uVar9;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).C = uVar10;
    (__return_storage_ptr__->ResolvedLevelInstanceGuid).D = uVar11;
    *(int *)&__return_storage_ptr__->bIsDefault = iVar2;
    ReleaseSRWLockShared((PSRWLOCK)pFVar1);
  }
  return __return_storage_ptr__;
}

// ProcessRegistration @ 148a619f0

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000148a61aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// ProcessRegistration @ 148a61ac0

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::ProcessRegistration
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this)

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
                    /* WARNING: Could not recover jumptable at 0x000148a61b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  return;
}

// RemoveAllAnnotations @ 148a64590

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FActorInstanceGuid local_38;
  
  local_38.ActorGuid.A = 0;
  local_38.ActorGuid.B = 0;
  local_38.ActorGuid.C = 0;
  local_38.ActorGuid.D = 0;
  local_38.ActorInstanceGuid.A = 0;
  local_38.ActorInstanceGuid.B = 0;
  local_38.ActorInstanceGuid.C = 0;
  local_38.ActorInstanceGuid.D = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_38);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAllAnnotations @ 148a646d0

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::RemoveAllAnnotations
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  FLevelInstanceGuid local_58;
  
  local_58.bIsDefault = true;
  local_58._49_2_ = 0;
  local_58._51_1_ = 0;
  local_58.LevelInstanceGuid.A = 0;
  local_58.LevelInstanceGuid.B = 0;
  local_58.Level.WeakPtr.ObjectIndex = 0;
  local_58.Level.WeakPtr.ObjectSerialNumber = 0;
  local_58.OwnerLevel.WeakPtr.ObjectIndex = 0;
  local_58.OwnerLevel.WeakPtr.ObjectSerialNumber = 0;
  local_58.LevelInstanceGuid.C = 0;
  local_58.LevelInstanceGuid.D = 0;
  local_58.ResolvedLevelInstanceGuid.A = 0;
  local_58.ResolvedLevelInstanceGuid.B = 0;
  local_58.ResolvedLevelInstanceGuid.C = 0;
  local_58.ResolvedLevelInstanceGuid.D = 0;
  SetAnnotationCacheKeyAndValue(this,(UObjectBase *)0x0,&local_58);
  iVar2 = *(int *)&(this->AnnotationMap).field_0x8;
  SRWLock = &this->AnnotationMapCritical;
  iVar3 = *(int *)&(this->AnnotationMap).field_0x34;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0xa2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  bVar6 = 1 < *(int *)&(this->AnnotationMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
                      *)&this->AnnotationMap);
  }
  puVar1 = &(this->AnnotationMap).field_0xc;
  *(undefined4 *)&(this->AnnotationMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)&this->AnnotationMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AnnotationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnnotationMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->AnnotationMap).field_0x2c;
  *(undefined4 *)&(this->AnnotationMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->AnnotationMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AnnotationMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AnnotationMap).field_0x48 = 1;
    TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
              *)&this->AnnotationMap);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (0 < iVar2 - iVar3) {
    ProcessRegistration(this);
  }
  return;
}

// RemoveAnnotation @ 148a64820

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FActorInstanceGuid local_28;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28.ActorGuid.A = 0;
  local_28.ActorGuid.B = 0;
  local_28.ActorGuid.C = 0;
  local_28.ActorGuid.D = 0;
  local_28.ActorInstanceGuid.A = 0;
  local_28.ActorInstanceGuid.B = 0;
  local_28.ActorInstanceGuid.C = 0;
  local_28.ActorInstanceGuid.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_28);
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
      TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// RemoveAnnotation @ 148a64950

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::RemoveAnnotation
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this,UObjectBase *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObjectBase *local_res8;
  FLevelInstanceGuid local_48;
  
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0xda,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48.bIsDefault = true;
  local_48._49_2_ = 0;
  local_48._51_1_ = 0;
  local_48.LevelInstanceGuid.A = 0;
  local_48.LevelInstanceGuid.B = 0;
  local_48.LevelInstanceGuid.C = 0;
  local_48.LevelInstanceGuid.D = 0;
  local_48.Level.WeakPtr.ObjectIndex = 0;
  local_48.Level.WeakPtr.ObjectSerialNumber = 0;
  local_48.OwnerLevel.WeakPtr.ObjectIndex = 0;
  local_48.OwnerLevel.WeakPtr.ObjectSerialNumber = 0;
  local_48.ResolvedLevelInstanceGuid.A = 0;
  local_48.ResolvedLevelInstanceGuid.B = 0;
  local_48.ResolvedLevelInstanceGuid.C = 0;
  local_48.ResolvedLevelInstanceGuid.D = 0;
  SetAnnotationCacheKeyAndValue(this,param_1,&local_48);
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
      TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FLevelInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLevelInstanceGuid,0>,FDefaultSetAllocator>
                  *)&this->AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res8), 0 < iVar1 - iVar2)) &&
     (*(int *)&(this->AnnotationMap).field_0x8 == *(int *)&(this->AnnotationMap).field_0x34)) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    ProcessRegistration(this);
    return;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 148a68180

void __thiscall
FUObjectAnnotationSparse<FActorInstanceGuid,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FActorInstanceGuid,1> *this,UObjectBase *param_1,
          FActorInstanceGuid *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  uVar2 = (param_2->ActorGuid).B;
  uVar3 = (param_2->ActorGuid).C;
  uVar4 = (param_2->ActorGuid).D;
  (this->AnnotationCacheValue).ActorGuid.A = (param_2->ActorGuid).A;
  (this->AnnotationCacheValue).ActorGuid.B = uVar2;
  (this->AnnotationCacheValue).ActorGuid.C = uVar3;
  (this->AnnotationCacheValue).ActorGuid.D = uVar4;
  uVar2 = (param_2->ActorInstanceGuid).B;
  uVar3 = (param_2->ActorInstanceGuid).C;
  uVar4 = (param_2->ActorInstanceGuid).D;
  (this->AnnotationCacheValue).ActorInstanceGuid.A = (param_2->ActorInstanceGuid).A;
  (this->AnnotationCacheValue).ActorInstanceGuid.B = uVar2;
  (this->AnnotationCacheValue).ActorInstanceGuid.C = uVar3;
  (this->AnnotationCacheValue).ActorInstanceGuid.D = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000148a68202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// SetAnnotationCacheKeyAndValue @ 148a68210

void __thiscall
FUObjectAnnotationSparse<FLevelInstanceGuid,1>::SetAnnotationCacheKeyAndValue
          (FUObjectAnnotationSparse<FLevelInstanceGuid,1> *this,UObjectBase *param_1,
          FLevelInstanceGuid *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FWeakObjectPtr FVar5;
  undefined3 uVar6;
  bool bVar7;
  
  SRWLock = &this->AnnotationCacheCritical;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0xa2,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this->AnnotationCacheKey = param_1;
  FVar5 = (param_2->OwnerLevel).WeakPtr;
  (this->AnnotationCacheValue).Level.WeakPtr = (param_2->Level).WeakPtr;
  (this->AnnotationCacheValue).OwnerLevel.WeakPtr = FVar5;
  uVar2 = (param_2->LevelInstanceGuid).B;
  uVar3 = (param_2->LevelInstanceGuid).C;
  uVar4 = (param_2->LevelInstanceGuid).D;
  (this->AnnotationCacheValue).LevelInstanceGuid.A = (param_2->LevelInstanceGuid).A;
  (this->AnnotationCacheValue).LevelInstanceGuid.B = uVar2;
  (this->AnnotationCacheValue).LevelInstanceGuid.C = uVar3;
  (this->AnnotationCacheValue).LevelInstanceGuid.D = uVar4;
  uVar2 = (param_2->ResolvedLevelInstanceGuid).B;
  uVar3 = (param_2->ResolvedLevelInstanceGuid).C;
  uVar4 = (param_2->ResolvedLevelInstanceGuid).D;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.A = (param_2->ResolvedLevelInstanceGuid).A;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.B = uVar2;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.C = uVar3;
  (this->AnnotationCacheValue).ResolvedLevelInstanceGuid.D = uVar4;
  uVar6 = *(undefined3 *)&param_2->field_0x31;
  (this->AnnotationCacheValue).bIsDefault = param_2->bIsDefault;
  *(undefined3 *)&(this->AnnotationCacheValue).field_0x31 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000148a682a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

