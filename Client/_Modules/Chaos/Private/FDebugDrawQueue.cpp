// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// AcceptCommand @ 14374f4b0

bool __thiscall
Chaos::FDebugDrawQueue::AcceptCommand(FDebugDrawQueue *this,int param_1,TVector<double,3> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar5;
  int iVar6;
  FTlsAutoCleanup FVar7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_res20 [8];
  TVector<double>_u_0 local_28;
  
  if (!bChaosDebugDraw_UseNewQueue) {
    if (bChaosDebugDraw_UseLegacyQueue) {
      local_28._s_0.X = (double)*(undefined8 *)param_2;
      local_28._s_0.Y = (double)*(undefined8 *)&param_2->field_0x8;
      local_28._s_0.Z = (double)*(undefined8 *)&param_2->field_0x10;
      bVar2 = IsInRegionOfInterestImpl(this,(TVector<double> *)&local_28._s_0);
      if (bVar2) {
        iVar6 = this->RequestedCommandCost + param_1;
        this->RequestedCommandCost = iVar6;
        if ((this->MaxCommandCost < 1) || (iVar6 <= this->MaxCommandCost)) {
          return true;
        }
      }
    }
    return false;
  }
  puVar3 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
  local_28._s_0.Y = (double)local_res20;
  local_28._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28._s_0,puVar3);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled == false) {
    FVar7 = (FTlsAutoCleanup)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
LAB_14374f612:
    bVar8 = false;
    bVar2 = false;
    if (FVar7 == (FTlsAutoCleanup)0x0) goto LAB_14374f623;
  }
  else {
    puVar3 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_28._s_0.Y = (double)local_res20;
    local_28._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28._s_0,puVar3);
    FVar7 = pFVar4[2];
    pTVar5 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar4 + 2);
    if (FVar7 == (FTlsAutoCleanup)0x0) {
      pTVar5 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      FVar7 = (FTlsAutoCleanup)pTVar5->Object;
    }
    pTVar9 = (pTVar5->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (FVar7 == (FTlsAutoCleanup)0x0) goto LAB_14374f612;
    (**(code **)(*(longlong *)FVar7 + 8))(FVar7);
    if (*(double *)((longlong)FVar7 + 0x58) <= 0.0) {
      bVar2 = true;
    }
    else {
      dVar11 = *(double *)((longlong)FVar7 + 0x48) - *(double *)&param_2->field_0x8;
      dVar10 = *(double *)((longlong)FVar7 + 0x40) - *(double *)param_2;
      dVar1 = *(double *)((longlong)FVar7 + 0x50) - *(double *)&param_2->field_0x10;
      dVar12 = *(double *)((longlong)FVar7 + 0x58) + __real_3f1a36e2e0000000;
      bVar2 = dVar11 * dVar11 + dVar10 * dVar10 + dVar1 * dVar1 <= dVar12 * dVar12;
    }
    if (!bVar2) goto LAB_14374f612;
    lpCriticalSection = (LPCRITICAL_SECTION)((longlong)FVar7 + 0x98);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    *(int *)((longlong)FVar7 + 100) = *(int *)((longlong)FVar7 + 100) + param_1;
    if ((*(int *)((longlong)FVar7 + 0x60) < *(int *)((longlong)FVar7 + 100)) &&
       (*(int *)((longlong)FVar7 + 0x60) != 0)) {
      LeaveCriticalSection(lpCriticalSection);
      bVar2 = false;
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
      bVar2 = true;
    }
  }
  bVar8 = bVar2;
  (**(code **)(*(longlong *)FVar7 + 0x10))(FVar7);
LAB_14374f623:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return bVar8;
}

// AddCommand @ 143750590

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
Chaos::FDebugDrawQueue::AddCommand(FDebugDrawQueue *this,FLatentDrawCommand *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar2;
  FLatentDrawCommand *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar9;
  FTlsAutoCleanup FVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 local_res18 [16];
  code *local_28;
  undefined1 *local_20;
  
  if (bChaosDebugDraw_UseNewQueue) {
    if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled) {
      puVar7 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
      local_20 = local_res18;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar8 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar7);
      FVar10 = pFVar8[2];
      pTVar9 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar8 + 2);
      if (FVar10 == (FTlsAutoCleanup)0x0) {
        pTVar9 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
        FVar10 = (FTlsAutoCleanup)pTVar9->Object;
      }
      pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (FVar10 != (FTlsAutoCleanup)0x0) {
        (**(code **)(*(longlong *)FVar10 + 8))(FVar10);
        lpCriticalSection = (LPCRITICAL_SECTION)((longlong)FVar10 + 0x98);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pFVar2 = (ForAnyElementType *)((longlong)FVar10 + 0x88);
        if (((FLatentDrawCommand *)pFVar2->Data <= param_1) &&
           (param_1 < (FLatentDrawCommand *)pFVar2->Data + *(int *)((longlong)FVar10 + 0x94))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar6 = *(int *)((longlong)FVar10 + 0x90);
        if (iVar6 == *(int *)((longlong)FVar10 + 0x94)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1b0,0x10,pFVar2,(int *)((longlong)FVar10 + 0x94));
        }
        *(int *)((longlong)FVar10 + 0x90) = iVar6 + 1;
        FLatentDrawCommand::FLatentDrawCommand
                  ((FLatentDrawCommand *)(pFVar2->Data + (longlong)iVar6 * 0x1b0),param_1);
        LeaveCriticalSection(lpCriticalSection);
        if (FVar10 != (FTlsAutoCleanup)0x0) {
          (**(code **)(*(longlong *)FVar10 + 0x10))(FVar10);
        }
      }
    }
    else {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  else if (bChaosDebugDraw_UseLegacyQueue) {
    pFVar3 = (FLatentDrawCommand *)(this->CommandQueue).AllocatorInstance.Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->CommandQueue).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->CommandQueue).ArrayNum;
    piVar1 = &(this->CommandQueue).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1b0,0x10,(ForAnyElementType *)this,piVar1);
    }
    (this->CommandQueue).ArrayNum = iVar6 + 1;
    FLatentDrawCommand::FLatentDrawCommand
              ((FLatentDrawCommand *)
               ((this->CommandQueue).AllocatorInstance.Data + (longlong)iVar6 * 0x1b0),param_1);
    return;
  }
  return;
}

// DrawDebugDirectionalArrow @ 143763980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugDirectionalArrow
          (FDebugDrawQueue *this,TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FColor *param_4,bool param_5,float param_6,uchar param_7,float param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_218 [32];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TVector<double>_u_0 local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  FColor_u_0 local_1a8;
  bool local_1a0;
  float local_19c;
  float local_198;
  uchar local_194;
  float local_190;
  void *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  pFVar2 = GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = GetInstance();
    if (0 < pFVar2->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_1f8 = (param_1->field0_0x0)._s_0.X;
      dStack_1f0 = (param_1->field0_0x0)._s_0.Y;
      local_1e8 = (param_1->field0_0x0)._s_0.Z;
      bVar1 = AcceptCommand(this,3,(TVector<double,3> *)&local_1f8);
      if (bVar1) {
        local_1d8._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_1d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_110 = (void *)0x0;
        local_108 = 0;
        local_100 = 0;
        local_1c0 = (param_2->field0_0x0)._s_0.X;
        dStack_1b8 = (param_2->field0_0x0)._s_0.Y;
        local_30 = 2;
        local_1a8._s_0 = *(FColor_u_0_s_0 *)&param_4->field0_0x0;
        local_1a0 = param_5;
        local_198 = param_6;
        local_1b0 = (param_2->field0_0x0)._s_0.Z;
        local_190 = param_8;
        local_194 = param_7;
        local_19c = param_3;
        AddCommand(this,(FLatentDrawCommand *)&local_1d8._s_0);
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// DrawDebugLine @ 143763bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugLine
          (FDebugDrawQueue *this,TVector<double> *param_1,TVector<double> *param_2,FColor *param_3,
          bool param_4,float param_5,uchar param_6,float param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_218 [32];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TVector<double>_u_0 local_1d8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  FColor_u_0 local_1a8;
  bool local_1a0;
  float local_198;
  uchar local_194;
  float local_190;
  void *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  pFVar2 = GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = GetInstance();
    if (0 < pFVar2->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_1f8 = (param_1->field0_0x0)._s_0.X;
      dStack_1f0 = (param_1->field0_0x0)._s_0.Y;
      local_1e8 = (param_1->field0_0x0)._s_0.Z;
      bVar1 = AcceptCommand(this,1,(TVector<double,3> *)&local_1f8);
      if (bVar1) {
        local_1d8._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_1d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1c0 = (param_2->field0_0x0)._s_0.X;
        dStack_1b8 = (param_2->field0_0x0)._s_0.Y;
        local_110 = (void *)0x0;
        local_108 = 0;
        local_100 = 0;
        local_1a8._s_0 = *(FColor_u_0_s_0 *)&param_3->field0_0x0;
        local_198 = param_5;
        local_1b0 = (param_2->field0_0x0)._s_0.Z;
        local_1a0 = param_4;
        local_190 = param_7;
        local_194 = param_6;
        local_30 = 1;
        AddCommand(this,(FLatentDrawCommand *)&local_1d8._s_0);
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// DrawDebugString @ 143764190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugString
          (FDebugDrawQueue *this,TVector<double> *param_1,FString *param_2,AActor *param_3,
          FColor *param_4,float param_5,bool param_6,float param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  FDebugDrawQueue *pFVar3;
  int iVar4;
  undefined1 auStack_228 [32];
  double local_208;
  double dStack_200;
  double local_1f8;
  FLatentDrawCommand local_1e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  pFVar3 = GetInstance();
  if (pFVar3->bEnableDebugDrawing != false) {
    pFVar3 = GetInstance();
    if (0 < pFVar3->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar1 = (param_2->Data).ArrayNum;
      local_208 = (param_1->field0_0x0)._s_0.X;
      dStack_200 = (param_1->field0_0x0)._s_0.Y;
      local_1f8 = (param_1->field0_0x0)._s_0.Z;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = 0;
      }
      bVar2 = AcceptCommand(this,iVar4,(TVector<double,3> *)&local_208);
      if (bVar2) {
        local_1e8.TextLocation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_1e8.TextLocation.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1e8.TextLocation.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1e8.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Text.Data.ArrayNum = 0;
        local_1e8.Text.Data.ArrayMax = 0;
        local_1e8.TestBaseActor = (AActor *)0x0;
        ::FString::operator=(&local_1e8.Text,param_2);
        local_1e8.Duration = param_5;
        local_1e8.LifeTime = param_5;
        local_1e8.Color.field0_0x0._s_0 = param_4->field0_0x0;
        local_1e8.bDrawShadow = param_6;
        local_1e8.FontScale = param_7;
        local_1e8.Type = String;
        local_1e8.TestBaseActor = param_3;
        AddCommand(this,&local_1e8);
        if (local_1e8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Text.Data.AllocatorInstance.Data);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// IsInRegionOfInterestImpl @ 143797880

bool __thiscall
Chaos::FDebugDrawQueue::IsInRegionOfInterestImpl(FDebugDrawQueue *this,TVector<double> *param_1)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar3;
  FTlsAutoCleanup FVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  if (!bChaosDebugDraw_UseNewQueue) {
    dVar7 = this->RadiusOfInterest;
    if ((0.0 < dVar7) &&
       (dVar10 = (param_1->field0_0x0)._s_0.Y - (this->CenterOfInterest).field0_0x0._s_0.Y,
       dVar9 = (param_1->field0_0x0)._s_0.X - (this->CenterOfInterest).field0_0x0._s_0.X,
       dVar8 = (param_1->field0_0x0)._s_0.Z - (this->CenterOfInterest).field0_0x0._s_0.Z,
       dVar7 * dVar7 <= dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8)) {
      return false;
    }
    return true;
  }
  puVar1 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled == false) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    puVar1 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_10 = local_res18;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar2 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
    FVar4 = pFVar2[2];
    pTVar3 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar2 + 2);
    if (FVar4 == (FTlsAutoCleanup)0x0) {
      pTVar3 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      FVar4 = (FTlsAutoCleanup)pTVar3->Object;
    }
    pTVar6 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (FVar4 != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)FVar4 + 8))(FVar4);
      if (*(double *)((longlong)FVar4 + 0x58) <= 0.0) {
        bVar5 = true;
        (**(code **)(*(longlong *)FVar4 + 0x10))(FVar4);
      }
      else {
        dVar8 = *(double *)((longlong)FVar4 + 0x40) - (param_1->field0_0x0)._s_0.X;
        dVar9 = *(double *)((longlong)FVar4 + 0x48) - (param_1->field0_0x0)._s_0.Y;
        dVar7 = *(double *)((longlong)FVar4 + 0x50) - (param_1->field0_0x0)._s_0.Z;
        dVar10 = *(double *)((longlong)FVar4 + 0x58) + __real_3f1a36e2e0000000;
        bVar5 = dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7 <= dVar10 * dVar10;
        (**(code **)(*(longlong *)FVar4 + 0x10))(FVar4);
      }
      goto LAB_1437979a1;
    }
  }
  bVar5 = false;
LAB_1437979a1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return bVar5;
}

// IsInRegionOfInterestImpl @ 143797a30

bool __thiscall
Chaos::FDebugDrawQueue::IsInRegionOfInterestImpl
          (FDebugDrawQueue *this,TVector<double> *param_1,double param_2)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  FTlsAutoCleanup FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 local_res20 [8];
  code *local_38;
  undefined1 *local_30;
  double local_28;
  
  if (!bChaosDebugDraw_UseNewQueue) {
    if ((0.0 < this->RadiusOfInterest) &&
       (dVar9 = this->RadiusOfInterest + param_2,
       dVar8 = (param_1->field0_0x0)._s_0.Y - (this->CenterOfInterest).field0_0x0._s_0.Y,
       dVar7 = (param_1->field0_0x0)._s_0.X - (this->CenterOfInterest).field0_0x0._s_0.X,
       dVar10 = (param_1->field0_0x0)._s_0.Z - (this->CenterOfInterest).field0_0x0._s_0.Z,
       dVar9 * dVar9 <= dVar8 * dVar8 + dVar7 * dVar7 + dVar10 * dVar10)) {
      return false;
    }
    return true;
  }
  puVar1 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
  local_30 = local_res20;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar1);
  if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled == false) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    puVar1 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_30 = local_res20;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar2 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar1);
    FVar6 = pFVar2[2];
    pTVar3 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar2 + 2);
    if (FVar6 == (FTlsAutoCleanup)0x0) {
      pTVar3 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
      FVar6 = (FTlsAutoCleanup)pTVar3->Object;
    }
    pTVar4 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (FVar6 != (FTlsAutoCleanup)0x0) {
      (**(code **)(*(longlong *)FVar6 + 8))(FVar6);
      local_28 = (param_1->field0_0x0)._s_0.Z;
      if (*(double *)((longlong)FVar6 + 0x58) <= 0.0) {
        bVar5 = true;
        (**(code **)(*(longlong *)FVar6 + 0x10))(FVar6);
      }
      else {
        dVar8 = *(double *)((longlong)FVar6 + 0x40) - (param_1->field0_0x0)._s_0.X;
        dVar7 = *(double *)((longlong)FVar6 + 0x50) - local_28;
        dVar10 = *(double *)((longlong)FVar6 + 0x58) + param_2 + __real_3f1a36e2e0000000;
        dVar9 = *(double *)((longlong)FVar6 + 0x48) - (param_1->field0_0x0)._s_0.Y;
        if (dVar10 <= 0.0) {
          dVar10 = 0.0;
        }
        bVar5 = dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7 <= dVar10 * dVar10;
        (**(code **)(*(longlong *)FVar6 + 0x10))(FVar6);
      }
      goto LAB_143797b77;
    }
  }
  bVar5 = false;
LAB_143797b77:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar5;
}

// IsInRegionOfInterestImpl @ 143797c20

bool __thiscall
Chaos::FDebugDrawQueue::IsInRegionOfInterestImpl(FDebugDrawQueue *this,TAABB<double,3> *param_1)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *pTVar8;
  FTlsAutoCleanup FVar9;
  longlong lVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  double dVar13;
  undefined1 local_res18 [16];
  undefined1 local_68 [16];
  double local_58;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  undefined1 local_20;
  
  if (bChaosDebugDraw_UseNewQueue) {
    puVar6 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
    local_68._8_8_ = local_res18;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    FThreadSingletonInitializer::Get
              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_68,puVar6);
    if (ChaosDD::Private::FChaosDDContext::bDebugDrawEnabled == false) {
      FVar9 = (FTlsAutoCleanup)0x0;
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      puVar6 = TThreadSingleton<ChaosDD::Private::FChaosDDContext>::GetTlsSlot();
      local_68._8_8_ = local_res18;
      local_68._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`TThreadSingleton<ChaosDD::Private::FChaosDDContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
           ::Call;
      pFVar7 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_68,puVar6);
      FVar9 = pFVar7[2];
      pTVar8 = (TSharedPtr<ChaosDD::Private::FChaosDDFrame,1> *)(pFVar7 + 2);
      if (FVar9 == (FTlsAutoCleanup)0x0) {
        pTVar8 = ChaosDD::Private::FChaosDDContext::GetGlobalFrame();
        FVar9 = (FTlsAutoCleanup)pTVar8->Object;
      }
      pTVar11 = (pTVar8->SharedReferenceCount).ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (FVar9 != (FTlsAutoCleanup)0x0) {
        (**(code **)(*(longlong *)FVar9 + 8))(FVar9);
      }
    }
    local_50._s_0.Z = (double)*(undefined8 *)&(param_1->MMin).field_0x10;
    local_38._s_0.Z = (double)*(undefined8 *)&(param_1->MMax).field_0x10;
    local_20 = 1;
    local_50._s_0.X = (double)*(undefined8 *)&param_1->MMin;
    local_50._s_0.Y = (double)*(undefined8 *)&(param_1->MMin).field_0x8;
    local_38._s_0.X = (double)*(undefined8 *)&param_1->MMax;
    local_38._s_0.Y = (double)*(undefined8 *)&(param_1->MMax).field_0x8;
    if (FVar9 == (FTlsAutoCleanup)0x0) {
      bVar12 = false;
    }
    else {
      dVar2 = *(double *)((longlong)FVar9 + 0x58);
      if (dVar2 <= 0.0) {
        bVar12 = true;
        (**(code **)(*(longlong *)FVar9 + 0x10))(FVar9);
      }
      else {
        dVar4 = ComputeSquaredDistanceFromBoxToPoint<double,double>
                          ((TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38._s_0,
                           (TVector<double> *)((longlong)FVar9 + 0x40));
        bVar12 = dVar4 < dVar2 * dVar2;
        (**(code **)(*(longlong *)FVar9 + 0x10))(FVar9);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    return bVar12;
  }
  lVar10 = 0;
  dVar13 = (double)CONCAT44((uint)((ulonglong)this->RadiusOfInterest >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(this->RadiusOfInterest,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar2 = *(double *)&(param_1->MMin).field_0x8 - dVar13;
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = *(double *)&param_1->MMin - dVar13;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&param_1->MMin = auVar3;
  *(double *)&(param_1->MMin).field_0x10 = *(double *)&(param_1->MMin).field_0x10 - dVar13;
  dVar4 = *(double *)&(param_1->MMax).field_0x8 + dVar13;
  dVar2 = *(double *)&(param_1->MMax).field_0x10;
  auVar5._8_4_ = SUB84(dVar4,0);
  auVar5._0_8_ = *(double *)&param_1->MMax + dVar13;
  auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&param_1->MMax = auVar5;
  *(double *)&(param_1->MMax).field_0x10 = dVar13 + dVar2;
  local_68._0_8_ = (this->CenterOfInterest).field0_0x0._s_0.X;
  local_68._8_8_ = (this->CenterOfInterest).field0_0x0._s_0.Y;
  local_58 = (this->CenterOfInterest).field0_0x0._s_0.Z;
  while ((dVar2 = *(double *)(local_68 + lVar10 * 8),
         *(double *)(&(param_1->MMin).field_0x0 + lVar10 * 8) <= dVar2 &&
         (pdVar1 = (double *)(&(param_1->MMax).field_0x0 + lVar10 * 8),
         dVar2 < *pdVar1 || dVar2 == *pdVar1))) {
    lVar10 = lVar10 + 1;
    if (2 < lVar10) {
      return true;
    }
  }
  return false;
}

// DrawDebugPoint @ 1438ae860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugPoint
          (FDebugDrawQueue *this,TVector<double> *param_1,FColor *param_2,bool param_3,float param_4
          ,uchar param_5,float param_6)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_218 [32];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TVector<double>_u_0 local_1d8 [2];
  FColor_u_0 local_1a8;
  undefined1 local_1a0;
  float local_198;
  uchar local_194;
  float local_190;
  void *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  pFVar2 = GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = GetInstance();
    if (0 < pFVar2->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_1f8 = (param_1->field0_0x0)._s_0.X;
      dStack_1f0 = (param_1->field0_0x0)._s_0.Y;
      local_1e8 = (param_1->field0_0x0)._s_0.Z;
      bVar1 = AcceptCommand(this,1,(TVector<double,3> *)&local_1f8);
      if (bVar1) {
        local_1d8[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
        local_1d8[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
        local_1a8._s_0 = *(FColor_u_0_s_0 *)&param_2->field0_0x0;
        local_1d8[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
        local_198 = param_4;
        local_110 = (void *)0x0;
        local_108 = 0;
        local_100 = 0;
        local_30 = 0;
        local_190 = param_6;
        local_194 = param_5;
        local_1a0 = param_3;
        AddCommand(this,(FLatentDrawCommand *)&local_1d8[0]._s_0);
        if (local_110 != (void *)0x0) {
          FMemory::Free(local_110);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// DrawDebugCircle @ 1439603d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugCircle
          (FDebugDrawQueue *this,TVector<double> *param_1,double param_2,int param_3,FColor *param_4
          ,bool param_5,float param_6,uchar param_7,float param_8,TVector<double> *param_9,
          TVector<double> *param_10,bool param_11)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_228 [32];
  double local_208;
  double dStack_200;
  double local_1f8;
  FLatentDrawCommand local_1e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  pFVar2 = GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = GetInstance();
    if (0 < pFVar2->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_208 = (param_1->field0_0x0)._s_0.X;
      dStack_200 = (param_1->field0_0x0)._s_0.Y;
      local_1f8 = (param_1->field0_0x0)._s_0.Z;
      bVar1 = AcceptCommand(this,param_3,(TVector<double,3> *)&local_208);
      if (bVar1) {
        local_1e8.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_1e8.Center.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1e8.Center.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1e8.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Text.Data.ArrayNum = 0;
        local_1e8.Text.Data.ArrayMax = 0;
        local_1e8.TestBaseActor = (AActor *)0x0;
        local_1e8.LifeTime = param_6;
        local_1e8.Color.field0_0x0._s_0 = param_4->field0_0x0;
        local_1e8.bPersistentLines = param_5;
        local_1e8.DepthPriority = param_7;
        local_1e8.Thickness = param_8;
        local_1e8.YAxis.field0_0x0._s_0.X = (param_9->field0_0x0)._s_0.X;
        local_1e8.YAxis.field0_0x0._s_0.Y = (param_9->field0_0x0)._s_0.Y;
        local_1e8.YAxis.field0_0x0._s_0.Z = (param_9->field0_0x0)._s_0.Z;
        local_1e8.Type = Circle;
        local_1e8.ZAxis.field0_0x0._s_0.X = (param_10->field0_0x0)._s_0.X;
        local_1e8.ZAxis.field0_0x0._s_0.Y = (param_10->field0_0x0)._s_0.Y;
        local_1e8.ZAxis.field0_0x0._s_0.Z = (param_10->field0_0x0)._s_0.Z;
        local_1e8.bDrawAxis = param_11;
        local_1e8.Segments = param_3;
        local_1e8.Radius = param_2;
        AddCommand(this,&local_1e8);
        if (local_1e8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Text.Data.AllocatorInstance.Data);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// IsDebugDrawingEnabled @ 143961fd0

bool __cdecl Chaos::FDebugDrawQueue::IsDebugDrawingEnabled(void)

{
  FDebugDrawQueue *pFVar1;
  
  pFVar1 = GetInstance();
  if (pFVar1->bEnableDebugDrawing != false) {
    pFVar1 = GetInstance();
    if (0 < pFVar1->NumConsumers) {
      return true;
    }
  }
  return false;
}

// GetInstance @ 143a6b4b0

FDebugDrawQueue * __cdecl Chaos::FDebugDrawQueue::GetInstance(void)

{
  if (PSingleton == (FDebugDrawQueue *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton.CommandQueueCS,4000);
        ::Singleton.Consumers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        ::Singleton.Consumers.ArrayNum = 0;
        ::Singleton.Consumers.ArrayMax = 0;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton.ConsumersCS,4000);
        ::Singleton.bEnableDebugDrawing = false;
        ::Singleton.CenterOfInterest.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        ::Singleton.CenterOfInterest.field0_0x0._s_0.Y =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        ::Singleton.CenterOfInterest.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        ::Singleton.RadiusOfInterest = 0.0;
        atexit(`Chaos::FDebugDrawQueue::GetInstance'::__l5::
               _dynamic_atexit_destructor_for__Singleton__);
        _Init_thread_footer(&::_TSS0);
        PSingleton = &::Singleton;
        return &::Singleton;
      }
    }
    PSingleton = &::Singleton;
  }
  return PSingleton;
}

// SetConsumerActive @ 143a91a90

void __thiscall
Chaos::FDebugDrawQueue::SetConsumerActive(FDebugDrawQueue *this,void *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  void *local_res10;
  
  lpCriticalSection = &this->ConsumersCS;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_2) {
    TArray<void_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_*_const_&>
              (&this->Consumers,&local_res10);
  }
  else {
    pFVar2 = (this->Consumers).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)(this->Consumers).ArrayMax * 8
        )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->Consumers).ArrayNum;
    if (iVar1 != 0) {
      iVar9 = 0;
      pFVar2 = (this->Consumers).AllocatorInstance.Data;
      bVar4 = *(void **)pFVar2 != local_res10;
      lVar8 = 0;
      pvVar5 = local_res10;
      iVar6 = 0;
      do {
        iVar7 = iVar6;
        do {
          lVar8 = lVar8 + 1;
          iVar7 = iVar7 + 1;
          if (iVar1 <= lVar8) break;
        } while (bVar4 == (*(void **)(pFVar2 + lVar8 * 8) != pvVar5));
        if (bVar4 != false) {
          if (iVar9 != iVar6) {
            memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar6 * 8,
                    (longlong)(iVar7 - iVar6) << 3);
            pvVar5 = local_res10;
          }
          iVar9 = iVar9 + (iVar7 - iVar6);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar6 = iVar7;
      } while (lVar8 < iVar1);
      (this->Consumers).ArrayNum = iVar9;
    }
  }
  this->NumConsumers = (this->Consumers).ArrayNum;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// DrawDebugBox @ 1440db4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugBox
          (FDebugDrawQueue *this,TVector<double> *param_1,TVector<double> *param_2,
          TQuat<double> *param_3,FColor *param_4,bool param_5,float param_6,uchar param_7,
          float param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_218 [32];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  FLatentDrawCommand local_1d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  pFVar2 = GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = GetInstance();
    if (0 < pFVar2->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_1f8 = (param_1->field0_0x0)._s_0.X;
      dStack_1f0 = (param_1->field0_0x0)._s_0.Y;
      local_1e8 = (param_1->field0_0x0)._s_0.Z;
      bVar1 = AcceptCommand(this,0xc,(TVector<double,3> *)&local_1f8);
      if (bVar1) {
        local_1d8.Center.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_1d8.Center.field0_0x0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1d8.Center.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1d8.Extent.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_1d8.Extent.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_1d8.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.Text.Data.ArrayNum = 0;
        local_1d8.Text.Data.ArrayMax = 0;
        local_1d8.TestBaseActor = (AActor *)0x0;
        local_1d8.Type = Box;
        local_1d8.Rotation.X = param_3->X;
        local_1d8.Rotation.Y = param_3->Y;
        local_1d8.Color.field0_0x0._s_0 = param_4->field0_0x0;
        local_1d8.Extent.field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_1d8.LifeTime = param_6;
        local_1d8.Rotation.Z = param_3->Z;
        local_1d8.Rotation.W = param_3->W;
        local_1d8.bPersistentLines = param_5;
        local_1d8.Thickness = param_8;
        local_1d8.DepthPriority = param_7;
        AddCommand(this,&local_1d8);
        if (local_1d8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Text.Data.AllocatorInstance.Data);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

