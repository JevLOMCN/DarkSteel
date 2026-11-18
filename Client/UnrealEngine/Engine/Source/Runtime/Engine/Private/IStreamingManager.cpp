// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// ~IStreamingManager @ 1473daf30

void __thiscall IStreamingManager::~IStreamingManager(IStreamingManager *this)

{
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// Exec @ 1473fa3f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
IStreamingManager::Exec
          (IStreamingManager *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  return false;
}

// GetNumWantingResources @ 147403000

int __thiscall IStreamingManager::GetNumWantingResources(IStreamingManager *this)

{
  return this->NumWantingResources;
}

// GetNumWantingResourcesID @ 147403010

int __thiscall IStreamingManager::GetNumWantingResourcesID(IStreamingManager *this)

{
  return this->NumWantingResourcesCounter;
}

// NotifyActorDestroyed @ 14740ccf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall IStreamingManager::NotifyActorDestroyed(IStreamingManager *this,AActor *param_1)

{
  return;
}

// NotifyPrimitiveDetached @ 14740cd20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
IStreamingManager::NotifyPrimitiveDetached(IStreamingManager *this,UPrimitiveComponent *param_1)

{
  return;
}

// NotifyPrimitiveUpdated @ 14740cd30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
IStreamingManager::NotifyPrimitiveUpdated(IStreamingManager *this,UPrimitiveComponent *param_1)

{
  return;
}

// NotifyPrimitiveUpdated_Concurrent @ 14740cd40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
IStreamingManager::NotifyPrimitiveUpdated_Concurrent
          (IStreamingManager *this,UPrimitiveComponent *param_1)

{
  return;
}

// PropagateLightingScenarioChange @ 14740e170

void __thiscall IStreamingManager::PropagateLightingScenarioChange(IStreamingManager *this)

{
  return;
}

// AddViewInfoToArray @ 1479b0cc0

void __cdecl
IStreamingManager::AddViewInfoToArray
          (TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2,
          float param_3,float param_4,float param_5,bool param_6,float param_7,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_8,
          TWeakObjectPtr<UWorld,FWeakObjectPtr> param_9)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar1 = __real_3fe0000000000000;
  fVar4 = __real_322bcc77;
  uVar13 = param_1->ArrayNum;
  bVar8 = true;
  uVar11 = 0;
  if (0 < (int)uVar13) {
    lVar10 = 0;
    fVar16 = param_5 - __real_3f800000;
    do {
      uVar15 = 0;
      if ((int)uVar11 < (int)uVar13) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      dVar3 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar9 + lVar10);
      uVar13 = SUB84(dVar3,0) & uVar5;
      uVar15 = (uint)((ulonglong)dVar3 >> 0x20) & uVar6;
      if ((((((double)CONCAT44(uVar15,uVar13) < dVar1 || (double)CONCAT44(uVar15,uVar13) == dVar1)
            && (dVar3 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar9 + lVar10 + 8),
               uVar13 = SUB84(dVar3,0) & uVar5, uVar15 = (uint)((ulonglong)dVar3 >> 0x20) & uVar6,
               (double)CONCAT44(uVar15,uVar13) < dVar1 || (double)CONCAT44(uVar15,uVar13) == dVar1))
           && (dVar3 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar9 + lVar10 + 0x10),
              uVar13 = SUB84(dVar3,0) & uVar5, uVar15 = (uint)((ulonglong)dVar3 >> 0x20) & uVar6,
              (double)CONCAT44(uVar15,uVar13) < dVar1 || (double)CONCAT44(uVar15,uVar13) == dVar1))
          && (((float)((uint)(param_3 - *(float *)(pFVar9 + lVar10 + 0x18)) & uVar12) <= fVar4 &&
              ((float)((uint)(param_4 - *(float *)(pFVar9 + lVar10 + 0x1c)) & uVar12) <= fVar4))))
         && (pFVar9[lVar10 + 0x28] == (FScriptContainerElement)param_6)) {
        *(float *)(pFVar9 + lVar10 + 0x24) = param_7;
        fVar14 = param_5;
        if ((float)((uint)fVar16 & uVar12) <= fVar4) {
          fVar14 = *(float *)(pFVar9 + lVar10 + 0x20);
        }
        *(float *)(pFVar9 + lVar10 + 0x20) = fVar14;
        bVar8 = false;
      }
      uVar13 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x40;
    } while ((int)uVar11 < (int)uVar13);
    if (!bVar8) {
      return;
    }
  }
  if (uVar13 == param_1->ArrayMax) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = uVar13 + 1;
  uVar12 = 0;
  if ((int)uVar13 < (int)(uVar13 + 1)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar9 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x40;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    *(double *)pFVar9 = (param_2->field0_0x0)._s_0.X;
    *(double *)(pFVar9 + 8) = dVar1;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    *(FWeakObjectPtr *)(pFVar9 + 0x2c) = param_8.WeakPtr;
    *(FWeakObjectPtr *)(pFVar9 + 0x34) = param_9.WeakPtr;
    *(float *)(pFVar9 + 0x18) = param_3;
    *(float *)(pFVar9 + 0x1c) = param_4;
    *(float *)(pFVar9 + 0x20) = param_5;
    *(float *)(pFVar9 + 0x24) = param_7;
    *(double *)(pFVar9 + 0x10) = dVar1;
    pFVar9[0x28] = (FScriptContainerElement)param_6;
  }
  return;
}

// AddViewInformation @ 1479b0fa0

void __thiscall
IStreamingManager::AddViewInformation
          (IStreamingManager *this,TVector<double> *param_1,float param_2,float param_3,
          float param_4,bool param_5,float param_6,TWeakObjectPtr<AActor,FWeakObjectPtr> param_7,
          TWeakObjectPtr<UWorld,FWeakObjectPtr> param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  TConsoleVariableData<float> *pTVar3;
  TConsoleVariableData<float> *pTVar4;
  bool bVar5;
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  float fVar7;
  
  pTVar4 = CVarStreamingMinBoost.Ref;
  if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&param_1->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) < __real_4415af1d80000000) &&
      (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_4415af1d80000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
     __real_4415af1d80000000)) {
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = CVarStreamingBoost.Ref;
    fVar7 = pTVar4->ShadowedValue[0];
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (fVar7 <= pTVar3->ShadowedValue[0]) {
      fVar7 = pTVar3->ShadowedValue[0];
    }
    if (bPendingRemoveViews != false) {
      bPendingRemoveViews = false;
      RemoveStreamingViews(this,RemoveStreamingViews_Normal);
    }
    pTVar6 = &LastingViewInfos;
    if (param_6 <= 0.0) {
      RemoveViewInfoFromArray(&LastingViewInfos,param_1);
      pTVar6 = &PendingViewInfos;
      param_6 = 0.0;
    }
    AddViewInfoToArray(pTVar6,param_1,param_2,param_3,param_4 * fVar7,param_5,param_6,param_7,
                       param_8);
  }
  return;
}

// AddViewLocation @ 1479b11a0

void __thiscall
IStreamingManager::AddViewLocation
          (IStreamingManager *this,TVector<double> *param_1,float param_2,bool param_3,float param_4
          )

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  TConsoleVariableData<float> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  pTVar6 = CVarStreamingMinBoost.Ref;
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  pTVar5 = CVarStreamingBoost.Ref;
  fVar2 = pTVar6->ShadowedValue[0];
  bVar7 = IsInParallelGameThread();
  if (!bVar7) {
    bVar7 = IsInGameThread();
    if (!bVar7) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  fVar10 = pTVar5->ShadowedValue[0];
  if (pTVar5->ShadowedValue[0] <= fVar2) {
    fVar10 = fVar2;
  }
  if (bPendingRemoveViews == false) {
LAB_1479b12e3:
    uVar8 = SecondaryLocations.ArrayNum;
    if (SecondaryLocations.ArrayNum != SecondaryLocations.ArrayMax) goto LAB_1479b1307;
  }
  else {
    bPendingRemoveViews = false;
    PendingViewInfos.ArrayNum = 0;
    if (PendingViewInfos.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&PendingViewInfos.AllocatorInstance,0,&PendingViewInfos.ArrayMax);
    }
    SecondaryLocations.ArrayNum = 0;
    if (SecondaryLocations.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&SecondaryLocations.AllocatorInstance,0,&SecondaryLocations.ArrayMax);
      goto LAB_1479b12e3;
    }
  }
  uVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&SecondaryLocations.AllocatorInstance,&SecondaryLocations.ArrayMax);
LAB_1479b1307:
  SecondaryLocations.ArrayNum = uVar8 + 1;
  uVar9 = 0;
  if ((int)uVar8 < SecondaryLocations.ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar1 = SecondaryLocations.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x28;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
    *(double *)(pFVar1 + 8) = dVar3;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    *(float *)(pFVar1 + 0x1c) = param_4;
    *(double *)(pFVar1 + 0x10) = dVar3;
    *(float *)(pFVar1 + 0x18) = param_2 * fVar10;
    pFVar1[0x20] = (FScriptContainerElement)param_3;
  }
  return;
}

// Get @ 1479c3b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStreamingManagerCollection * __cdecl IStreamingManager::Get(void)

{
  longlong lVar1;
  FStreamingManagerCollection *this;
  FStreamingManagerCollection *pFVar2;
  FWriteBuffer *pFVar3;
  bool bVar4;
  undefined1 auStackY_68 [32];
  FLLMScope local_34;
  FLLMScope local_30;
  FLLMScope local_2c;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (StreamingManagerCollection == (FStreamingManagerCollection *)0x0) {
    FLLMScope::FLLMScope(&local_2c,StreamingManager,false,None,Default,true);
    FMemScope::FMemScope(&local_28,StreamingManager,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_30,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_34,AssetClasses,Default);
    bVar4 = -1 < MetadataChannel->Enabled;
    if (bVar4) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    this = ::operator_new(0x58);
    pFVar2 = (FStreamingManagerCollection *)0x0;
    if (this != (FStreamingManagerCollection *)0x0) {
      pFVar2 = FStreamingManagerCollection::FStreamingManagerCollection(this);
    }
    StreamingManagerCollection = pFVar2;
    if (bVar4) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar3 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar3 - *(int *)&pFVar3->Cursor < 1) {
        pFVar3 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar3->Cursor = '\n';
      pFVar3->Cursor = pFVar3->Cursor + 1;
      pFVar3->Committed = pFVar3->Cursor;
    }
    FLLMScope::~FLLMScope(&local_34);
    FLLMScope::~FLLMScope(&local_30);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_2c);
  }
  return StreamingManagerCollection;
}

// Get_Concurrent @ 1479d55d0

FStreamingManagerCollection * __cdecl IStreamingManager::Get_Concurrent(void)

{
  FStreamingManagerCollection *pFVar1;
  
  pFVar1 = (FStreamingManagerCollection *)0x0;
  if (StreamingManagerCollection != (FStreamingManagerCollection *)0xffffffffffffffff) {
    pFVar1 = StreamingManagerCollection;
  }
  return pFVar1;
}

// HasShutdown @ 1479d5a30

bool __cdecl IStreamingManager::HasShutdown(void)

{
  return (undefined1 *)0xfffffffffffffffd <
         (undefined1 *)
         ((longlong)&StreamingManagerCollection[-1].NaniteCoarseMeshStreamingManager + 7);
}

// RemoveStreamingViews @ 1479e47e0

void __thiscall
IStreamingManager::RemoveStreamingViews(IStreamingManager *this,ERemoveStreamingViews param_1)

{
  PendingViewInfos.ArrayNum = 0;
  if (PendingViewInfos.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&PendingViewInfos.AllocatorInstance,0,&PendingViewInfos.ArrayMax);
  }
  SecondaryLocations.ArrayNum = 0;
  if (SecondaryLocations.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&SecondaryLocations.AllocatorInstance,0,&SecondaryLocations.ArrayMax);
  }
  if ((param_1 == RemoveStreamingViews_All) &&
     (LastingViewInfos.ArrayNum = 0, LastingViewInfos.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&LastingViewInfos.AllocatorInstance,0,&LastingViewInfos.ArrayMax);
  }
  return;
}

// RemoveViewInfoFromArray @ 1479e48b0

void __cdecl
IStreamingManager::RemoveViewInfoFromArray
          (TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  
  uVar5 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar3 = __real_3fe0000000000000;
  uVar13 = 0;
  iVar8 = param_1->ArrayNum;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar9 = ~uVar13 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar13 < iVar8) {
        uVar12 = uVar9;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      dVar14 = (param_2->field0_0x0)._s_0.X - *(double *)(pFVar1 + lVar11);
      lVar10 = lVar11;
      uVar12 = uVar13;
      if ((((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar5,SUB84(dVar14,0) & uVar4) <=
            dVar3) &&
          (dVar14 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar1 + lVar11 + 8),
          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar5,SUB84(dVar14,0) & uVar4) <=
          dVar3)) &&
         (dVar14 = (param_2->field0_0x0)._s_0.Z - *(double *)(pFVar1 + lVar11 + 0x10),
         (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & uVar5,SUB84(dVar14,0) & uVar4) <=
         dVar3)) {
        uVar12 = uVar13 - 1;
        lVar10 = lVar11 + -0x40;
        uVar7 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar7 = uVar9;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar8 = param_1->ArrayNum + ~uVar13;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar1 + lVar11,pFVar1 + (longlong)(param_1->ArrayNum - iVar8) * 0x40,
                  (longlong)iVar8 << 6);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      iVar8 = param_1->ArrayNum;
      uVar13 = uVar12 + 1;
      lVar11 = lVar10 + 0x40;
    } while ((int)uVar13 < iVar8);
  }
  return;
}

// SetupViewInfos @ 1479ed320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IStreamingManager::SetupViewInfos(IStreamingManager *this,float param_1)

{
  float fVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  double dVar4;
  TConsoleVariableData<float> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  FWeakObjectPtr FVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  ForAnyElementType FVar13;
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  FWeakObjectPtr local_e8;
  FWeakObjectPtr local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [19];
  
  uVar22 = SecondaryLocations.ArrayNum + LastingViewInfos.ArrayNum + PendingViewInfos.ArrayNum;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  uVar18 = 0;
  CurrentViewInfos.ArrayNum = 0;
  if (CurrentViewInfos.ArrayMax != uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar22,&CurrentViewInfos.AllocatorInstance,0,&CurrentViewInfos.ArrayMax);
  }
  iVar12 = PendingViewInfos.ArrayNum;
  bVar11 = bPendingRemoveViews;
  dVar4 = __real_4415af1d80000000;
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  FVar13.Data = PendingViewInfos.AllocatorInstance.Data;
  if ((0 < PendingViewInfos.ArrayNum) ||
     (FVar13.Data = LastingViewInfos.AllocatorInstance.Data, fVar24 = __real_44a00000,
     fVar25 = __real_44beae39, 0 < LastingViewInfos.ArrayNum)) {
    fVar24 = *(float *)(FVar13.Data + 0x18);
    fVar25 = *(float *)(FVar13.Data + 0x1c);
  }
  bPendingRemoveViews = false;
  uVar17 = uVar18;
  if (0 < SecondaryLocations.ArrayNum) {
    do {
      uVar19 = (uint)uVar18;
      uVar15 = 0;
      if ((int)uVar19 < SecondaryLocations.ArrayNum) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8.ObjectIndex = 0;
      local_e8.ObjectSerialNumber = 0;
      pFVar20 = SecondaryLocations.AllocatorInstance.Data + uVar17;
      local_d8 = 0;
      FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_d8);
      FVar7 = local_e8;
      local_e0.ObjectIndex = 0;
      local_e0.ObjectSerialNumber = 0;
      local_d0[0] = 0;
      FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)local_d0);
      FVar8 = local_e0;
      pTVar6 = CVarStreamingMinBoost.Ref;
      FVar2 = pFVar20[0x20];
      fVar26 = *(float *)(pFVar20 + 0x1c);
      fVar1 = *(float *)(pFVar20 + 0x18);
      if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)pFVar20 >> 0x20) & uVar16,
                             (uint)*(undefined8 *)pFVar20 & uVar22) < dVar4) &&
          ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar20 + 8) >> 0x20) & uVar16,
                            (uint)*(undefined8 *)(pFVar20 + 8) & uVar22) < dVar4)) &&
         ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar20 + 0x10) >> 0x20) & uVar16,
                           (uint)*(undefined8 *)(pFVar20 + 0x10) & uVar22) < dVar4)) {
        bVar9 = IsInParallelGameThread();
        if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar5 = CVarStreamingBoost.Ref;
        fVar23 = pTVar6->ShadowedValue[0];
        bVar9 = IsInParallelGameThread();
        if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
           (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (fVar23 <= pTVar5->ShadowedValue[0]) {
          fVar23 = pTVar5->ShadowedValue[0];
        }
        if (bPendingRemoveViews != false) {
          bPendingRemoveViews = false;
          RemoveStreamingViews(this,RemoveStreamingViews_Normal);
        }
        pTVar14 = &LastingViewInfos;
        if (fVar26 <= 0.0) {
          RemoveViewInfoFromArray(&LastingViewInfos,(TVector<double> *)pFVar20);
          pTVar14 = &PendingViewInfos;
          fVar26 = 0.0;
        }
        AddViewInfoToArray(pTVar14,(TVector<double> *)pFVar20,fVar24,fVar25,fVar1 * fVar23,
                           (bool)FVar2,fVar26,(TWeakObjectPtr<AActor,FWeakObjectPtr>)FVar8,
                           (TWeakObjectPtr<UWorld,FWeakObjectPtr>)FVar7);
      }
      uVar18 = (ulonglong)(uVar19 + 1);
      uVar17 = uVar17 + 0x28;
    } while ((int)(uVar19 + 1) < SecondaryLocations.ArrayNum);
  }
  fVar24 = __real_3f800000;
  uVar18 = 0;
  bPendingRemoveViews = bVar11;
  if ((1 < iVar12) &&
     (cVar10 = (**(code **)(GEngine->_padding_ + 0x3d8))(GEngine,0), cVar10 != '\0')) {
    fVar24 = __real_3f400000;
  }
  uVar22 = 0;
  uVar17 = uVar18;
  uVar21 = uVar18;
  iVar12 = LastingViewInfos.ArrayNum;
  if (0 < LastingViewInfos.ArrayNum) {
    do {
      uVar15 = (uint)uVar17;
      uVar16 = uVar22;
      if ((int)uVar15 < iVar12) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar12 = LastingViewInfos.ArrayNum, bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = LastingViewInfos.AllocatorInstance.Data + uVar21;
      if (pFVar20[0x28] == (FScriptContainerElement)0x0) {
        AddViewInfoToArray(&CurrentViewInfos,(TVector<double> *)pFVar20,
                           fVar24 * *(float *)(pFVar20 + 0x18),*(float *)(pFVar20 + 0x1c),
                           *(float *)(pFVar20 + 0x20),false,*(float *)(pFVar20 + 0x24),
                           (TWeakObjectPtr<AActor,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)(pFVar20 + 0x2c),
                           (TWeakObjectPtr<UWorld,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)(pFVar20 + 0x34));
        iVar12 = LastingViewInfos.ArrayNum;
      }
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar21 = uVar21 + 0x40;
    } while ((int)(uVar15 + 1) < iVar12);
  }
  uVar17 = uVar18;
  uVar21 = uVar18;
  if (0 < PendingViewInfos.ArrayNum) {
    do {
      uVar15 = (uint)uVar17;
      uVar16 = uVar22;
      if ((int)uVar15 < PendingViewInfos.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = PendingViewInfos.AllocatorInstance.Data + uVar21;
      if (pFVar20[0x28] == (FScriptContainerElement)0x0) {
        AddViewInfoToArray(&CurrentViewInfos,(TVector<double> *)pFVar20,
                           fVar24 * *(float *)(pFVar20 + 0x18),*(float *)(pFVar20 + 0x1c),
                           *(float *)(pFVar20 + 0x20),false,*(float *)(pFVar20 + 0x24),
                           (TWeakObjectPtr<AActor,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)(pFVar20 + 0x2c),
                           (TWeakObjectPtr<UWorld,FWeakObjectPtr>)
                           *(FWeakObjectPtr *)(pFVar20 + 0x34));
      }
      uVar17 = (ulonglong)(uVar15 + 1);
      uVar21 = uVar21 + 0x40;
      iVar12 = LastingViewInfos.ArrayNum;
    } while ((int)(uVar15 + 1) < PendingViewInfos.ArrayNum);
  }
  uVar17 = uVar18;
  if (0 < iVar12) {
    do {
      uVar15 = (uint)uVar18;
      uVar16 = uVar22;
      if ((int)uVar15 < iVar12) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar24 = *(float *)(LastingViewInfos.AllocatorInstance.Data + uVar17 + 0x24);
      *(float *)(LastingViewInfos.AllocatorInstance.Data + uVar17 + 0x24) = fVar24 - param_1;
      uVar21 = uVar17;
      uVar16 = uVar15;
      if (fVar24 - param_1 <= 0.0) {
        uVar21 = uVar17 - 0x40;
        uVar16 = uVar15 - 1;
        uVar19 = uVar22;
        if ((int)uVar15 < LastingViewInfos.ArrayNum) {
          uVar19 = ~uVar15 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar12 = (LastingViewInfos.ArrayNum - uVar15) + -1;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove(LastingViewInfos.AllocatorInstance.Data + uVar17,
                  LastingViewInfos.AllocatorInstance.Data +
                  (longlong)(LastingViewInfos.ArrayNum - iVar12) * 0x40,(longlong)iVar12 << 6);
        }
        LastingViewInfos.ArrayNum = LastingViewInfos.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,&LastingViewInfos.AllocatorInstance,LastingViewInfos.ArrayNum,
                   &LastingViewInfos.ArrayMax);
      }
      uVar18 = (ulonglong)(uVar16 + 1);
      uVar17 = uVar21 + 0x40;
      iVar12 = LastingViewInfos.ArrayNum;
    } while ((int)(uVar16 + 1) < LastingViewInfos.ArrayNum);
  }
  return;
}

// Shutdown @ 1479edd10

void __cdecl IStreamingManager::Shutdown(void)

{
  if (StreamingManagerCollection != (FStreamingManagerCollection *)0x0) {
    (**(code **)StreamingManagerCollection->_padding_)(StreamingManagerCollection,1);
    StreamingManagerCollection = (FStreamingManagerCollection *)0xffffffffffffffff;
  }
  return;
}

// StreamAllResources @ 1479ee280

int __thiscall IStreamingManager::StreamAllResources(IStreamingManager *this,float param_1)

{
  return 0;
}

// Tick @ 1479ee560

void __thiscall IStreamingManager::Tick(IStreamingManager *this,float param_1,bool param_2)

{
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,StreamingManager,true);
  (**(code **)(this->_padding_ + 0x10))(this,param_1,param_2);
  bPendingRemoveViews = true;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ~IStreamingManager @ 148714b40

void __thiscall UE::SVT::IStreamingManager::~IStreamingManager(IStreamingManager *this)

{
  return;
}

