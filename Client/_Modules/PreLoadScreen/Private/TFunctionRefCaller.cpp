// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 3

// Call @ 145ac43a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if ((**(char **)param_1 != '\0') && (!GIsRequestingExit)) {
    FPreLoadScreenManager::StaticRenderTick_RenderThread(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ac43d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
  return;
}

// Call @ 145ac43e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<int> aVar1;
  FWeakReferencer<1> FVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  IPreLoadScreen *pIVar5;
  IPreLoadScreen *pIVar6;
  bool bVar7;
  
  EnterCriticalSection
            ((LPCRITICAL_SECTION)&FPreLoadScreenManager::ActivePreloadScreenCriticalSection);
  FVar2 = FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount;
  pIVar5 = (IPreLoadScreen *)0x0;
  FVar4 = FVar2;
  pIVar6 = pIVar5;
  if (FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar1 = (FPreLoadScreenManager::ActivePreloadScreen.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar4.ReferenceController = (TReferenceControllerBase<1> *)pIVar5;
      pIVar6 = pIVar5;
      if (aVar1 == (atomic<int>)0x0) break;
      LOCK();
      aVar3 = (FVar2.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar1 == aVar3;
      if (bVar7) {
        (FVar2.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar3 = aVar1;
      }
      UNLOCK();
      FVar4 = FVar2;
      pIVar6 = FPreLoadScreenManager::ActivePreloadScreen.Object;
      aVar1 = aVar3;
    } while (!bVar7);
  }
  if (((FPreLoadScreenManager::bRenderingEnabled != (atomic<bool>)0x0) &&
      (pIVar6 != (IPreLoadScreen *)0x0)) && (*(char *)(*(longlong *)param_1 + 0xa1) == '\0')) {
    GFrameNumberRenderThread = GFrameNumberRenderThread + 1;
    *(undefined1 *)(*(longlong *)param_1 + 0xa1) = 1;
    (**(code **)(*(longlong *)pIVar6 + 0x28))(pIVar6,param_2,*(undefined4 *)((longlong)param_1 + 8))
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
                    /* WARNING: Could not recover jumptable at 0x000145ac03ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)&FPreLoadScreenManager::ActivePreloadScreenCriticalSection);
  return;
}

// Call @ 145ac43f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0xa1) = 0;
  FRHICommandListImmediate::EndFrame(param_2);
  FRHICommandListImmediate::ImmediateFlush(param_2,FlushRHIThreadFlushResources,None);
  return;
}

