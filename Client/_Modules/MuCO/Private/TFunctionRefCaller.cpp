// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 39

// Call @ 14abd2f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateTextureRegionsMutable'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  FRHITexture *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uchar *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FRHITexture *pFVar11;
  
  uVar10 = 0;
  uVar8 = uVar10;
  if (*(longlong **)(**(longlong **)param_1 + 0x20) != (longlong *)0x0) {
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)param_1 + 0x20) + 0x20))();
    uVar8 = (uint)*(byte *)(lVar6 + 0x30);
  }
  if ((*(int *)(*(longlong *)param_1 + 0x28) < (int)uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(RegionData->NumMips) >= RegionData->Texture2DResource->GetCurrentMipCount()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0x1672,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = uVar10;
  if (*(longlong **)(**(longlong **)param_1 + 0x20) != (longlong *)0x0) {
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)param_1 + 0x20) + 0x20))();
    uVar8 = (uint)*(byte *)(lVar6 + 0x30);
  }
  iVar9 = *(int *)(*(longlong *)param_1 + 0x28) - uVar8;
  if ((iVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MipDifference >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectInstance.cpp"
                         ,0x1674,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = *(longlong *)(**(longlong **)param_1 + 0x68);
  if (lVar6 != 0) {
    uVar10 = ((uint)((ulonglong)lVar6 >> 0x18) & 0xff) - ((uint)((ulonglong)lVar6 >> 0x28) & 0xff);
  }
  puVar7 = FBulkData::LockReadOnly(*(FBulkData **)((longlong)param_1 + 8));
  plVar1 = *(longlong **)param_1;
  if ((int)(uVar10 + iVar9) <= (int)plVar1[1]) {
    pFVar2 = *(FRHITexture **)(*plVar1 + 0x20);
    pFVar11 = (FRHITexture *)0x0;
    if ((pFVar2 != (FRHITexture *)0x0) && ((pFVar2->TextureDesc).Dimension == Texture2D)) {
      pFVar11 = pFVar2;
    }
    FRHICommandListBase::UpdateTexture2D
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,pFVar11,
               ((int)plVar1[1] - uVar10) - iVar9,(FUpdateTextureRegion2D *)((longlong)plVar1 + 0xc),
               *(uint *)((longlong)plVar1 + 0x24),puVar7);
  }
  FBulkData::Unlock(*(FBulkData **)((longlong)param_1 + 8));
  pvVar3 = *(void **)param_1;
  if (pvVar3 != (void *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)pvVar3 + 0x38));
    ::operator_delete(pvVar3,0x40);
  }
  return;
}

// Call @ 14ac15e30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ExecuteOnGameThread<``Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>::operator()'::__l52::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
::Call(void *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = `ExecuteOnGameThread<``Impl::Task_Mutable_UpdateImage'::__l2::<lambda_2>::operator()'::__l52::<lambda_1>_>'
          ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14ac15e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::FCustomizableObjectMeshStreamIn'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::DoInitiate(*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac15e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoCancel(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac15e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoFinishUpdate(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac15e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::DoCreateBuffers
            (*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac15e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::RequestMeshUpdate'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  TSharedPtr<FMutableUpdateMeshContext,1> local_18;
  
  local_18.Object = *(FMutableUpdateMeshContext **)param_1;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  impl::Task_Mutable_UpdateMesh
            (&local_18,(TRefCountPtr<FCustomizableObjectMeshStreamIn> *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 14ac15ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCustomizableObjectSystemPrivate::StartUpdateSkeletalMesh'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  FMutableTaskGraph *lpCriticalSection;
  TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_int> aVar4;
  byte bVar5;
  FModel *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TConsoleVariableData<bool> *pTVar9;
  uchar *puVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  UCustomizableObjectSystem *pUVar19;
  UCustomizableObjectSkeletalMesh *pUVar20;
  UCustomizableObjectPrivate *pUVar21;
  UCustomizableObjectInstance *pUVar22;
  UCustomizableInstancePrivate *this_00;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *pTVar23;
  UCustomizableObject *pUVar24;
  UCustomizableObjectPrivate *this_01;
  UModelResources *pUVar25;
  FMutableStateData *pFVar26;
  FMutableStateData *pFVar27;
  FStreamingManagerCollection *this_02;
  TSharedPtr<UE::Mutable::Private::FModel,1> *pTVar28;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  **ppTVar29;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  **ppTVar30;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  **ppTVar31;
  TTask<void> TVar32;
  long64 lVar33;
  FUnrealMutableModelBulkReader *this_03;
  FBoneNames **ppFVar34;
  TReferenceControllerBase<1> *pTVar35;
  FSystem *pFVar36;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *pTVar37;
  FInstance *this_04;
  TTuple<FName,unsigned_char> *pTVar38;
  FHandle *pFVar39;
  undefined1 uVar40;
  uint uVar41;
  ForAnyElementType FVar42;
  FModel **ppFVar43;
  undefined **ppuVar44;
  undefined ***pppuVar45;
  FScriptContainerElement *pFVar46;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TVar47;
  TSharedPtr<UE::Mutable::Private::FParameters,1> *pTVar48;
  FBoneNames *pFVar49;
  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
  *this_05;
  TObjectPtr<UCustomizableObjectSystemPrivate>_u_0 TVar50;
  ulonglong uVar51;
  UModelResources *pUVar52;
  bool bVar53;
  float fVar54;
  undefined1 auStackY_338 [32];
  undefined1 uStack_2e6;
  undefined1 uStack_2e5;
  undefined1 auStack_2e4 [4];
  UCustomizableObjectSkeletalMesh *pUStack_2e0;
  ulonglong uStack_2d8;
  UModelResources *pUStack_2d0;
  TObjectPtr<UCustomizableObjectSystemPrivate>_u_0 TStack_2c8;
  TSharedRef<FBoneNames,1> TStack_2c0;
  ForAnyElementType FStack_2b0;
  int iStack_2a8;
  int iStack_2a4;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> TStack_2a0;
  TPairInitializer<FName_const_&,unsigned_char_&&> TStack_290;
  FTaskBase *pFStack_280;
  TSharedPtr<UE::Mutable::Private::FSystem,1> TStack_278;
  FBoneNames *pFStack_268;
  FSharedReferencer<1> FStack_260;
  FTaskHandle FStack_258;
  FTaskHandle FStack_250;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTStack_248;
  FSharedReferencer<1> FStack_240;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTStack_238;
  FSharedReferencer<1> FStack_230;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTStack_228;
  FSharedReferencer<1> FStack_220;
  FBoneNames *pFStack_218;
  FSharedReferencer<1> FStack_210;
  FModel *pFStack_208;
  FSharedReferencer<1> FStack_200;
  LARGE_INTEGER LStack_1f8;
  FName FStack_1f0;
  undefined8 *puStack_1e8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> TStack_1e0;
  FString FStack_1d8;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> TStack_1c8;
  TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> TStack_1b8;
  TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> TStack_1a8;
  TSharedPtr<UE::Mutable::Private::FModel_const_,1> TStack_198;
  TSharedPtr<UE::Mutable::Private::FExternalResourceProvider,1> TStack_188;
  TSharedPtr<UE::Mutable::Private::FParameters_const_,1> TStack_178;
  FHandle FStack_168;
  FString FStack_150;
  FScriptContainerElement *pFStack_140;
  undefined1 *puStack_138;
  FString FStack_130;
  TSharedPtr<UE::Mutable::Private::FParameters,1> TStack_120;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> TStack_110;
  FHandle FStack_100;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  TReferenceControllerBase<1> *pTStack_c8;
  undefined ***pppuStack_c0;
  code *apcStack_b8 [2];
  undefined **appuStack_a8 [2];
  TReferenceControllerBase<1> *pTStack_98;
  undefined ***pppuStack_90;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  TStack_88;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar53 = -1 < CpuChannel->Enabled;
  if (bVar53) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3417,"Mutable_Task_Game_StartUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xd59);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3417);
  }
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xd5b,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined1 *)(*(longlong *)param_1 + 0x710) = 1;
  FMiscTrace::OutputBeginRegion(L"Mutable Update",(wchar_t *)0x0);
  pTVar9 = CVarEnableBenchmark.Ref;
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
    lVar18 = 0;
  }
  else {
    lVar18 = 1;
  }
  if (((pTVar9->ShadowedValue[lVar18] != false) || (FLogBenchmarkUtil::bIsEnabledOverride != false))
     && (GWorld.World != (UWorld *)0x0)) {
    bVar11 = UWorld::GetBegunPlay(GWorld.World);
    *(bool *)(*(longlong *)param_1 + 0x711) = bVar11;
  }
  pUVar19 = UCustomizableObjectSystem::GetInstance();
  QueryPerformanceCounter(&LStack_1f8);
  *(double *)(*(longlong *)param_1 + 0x728) =
       (double)LStack_1f8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (pUVar19 != (UCustomizableObjectSystem *)0x0) {
    if (((pUVar19->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Private",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                            ,0x32c,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TStack_2c8 = (pUVar19->Private).field0_0x0;
    pUVar20 = (UCustomizableObjectSkeletalMesh *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x48));
    pUStack_2e0 = pUVar20;
    if (pUVar20 != (UCustomizableObjectSkeletalMesh *)0x0) {
      pUVar21 = UCustomizableObject::GetPrivate((UCustomizableObject *)pUVar20);
      FStack_1f0 = (FName)pUVar20->_padding_;
      TStack_290.Value = (uchar *)pUVar21;
      ::FName::ToString(&FStack_1f0,&FStack_1d8);
      FVar42.Data = (FScriptContainerElement *)L"";
      if (FStack_1d8.Data.ArrayNum != 0) {
        FVar42.Data = FStack_1d8.Data.AllocatorInstance.Data;
      }
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar42.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                   ,0xd7d);
      }
      if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
      }
      pUVar22 = (UCustomizableObjectInstance *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x40));
      if (pUVar22 == (UCustomizableObjectInstance *)0x0) {
        *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
        FinishUpdateGlobal(param_1);
      }
      else {
        this_00 = UCustomizableObjectInstance::GetPrivate(pUVar22);
        if ((this_00 == (UCustomizableInstancePrivate *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InstancePrivate",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                ,0xd88,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((this_00->InstanceFlagsPrivate >> 9 & 1) != 0) {
          this_00->InstanceFlagsPrivate = this_00->InstanceFlagsPrivate & ~PendingLODsUpdate;
        }
        bVar12 = FDescriptorHash::IsSubset
                           ((FDescriptorHash *)(*(longlong *)param_1 + 0x1e0),
                            &this_00->CommittedDescriptorHash);
        TVar50 = TStack_2c8;
        if (bVar12) {
          *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 0;
          UpdateSkeletalMesh(param_1);
          FinishUpdateGlobal(param_1);
        }
        else if (pUVar21->bLocked == false) {
          if ((((TStack_2c8.DebugPtr)->CurrentInstanceLODManagement).field0_0x0.DebugPtr ==
               (UCustomizableInstanceLODManagementBase *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SystemPrivate->CurrentInstanceLODManagement != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                  ,0xda3,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          cVar13 = (**(code **)(*(longlong *)
                                 ((TVar50.DebugPtr)->CurrentInstanceLODManagement).field0_0x0.
                                 DebugPtr + 0x2d8))();
          if (cVar13 != '\0') {
            fVar54 = (float)(**(code **)(*(longlong *)
                                          ((TVar50.DebugPtr)->CurrentInstanceLODManagement).
                                          field0_0x0.DebugPtr + 0x2d0))();
            if ((fVar54 * fVar54 < this_00->LastMinSquareDistFromComponentToPlayer) &&
               (this_00->LastMinSquareDistFromComponentToPlayer != __real_7f7fffff)) {
              *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
              FinishUpdateGlobal(param_1);
              goto LAB_14ac3fa16;
            }
          }
          pTVar23 = FCustomizableObjectInstanceDescriptor::GetParameters
                              ((FCustomizableObjectInstanceDescriptor *)
                               (*(longlong *)param_1 + 0x50),&TStack_120);
          lVar18 = *(longlong *)param_1;
          pTVar48 = (TSharedPtr<UE::Mutable::Private::FParameters,1> *)(lVar18 + 0x2d8);
          if (pTVar48 != pTVar23) {
            pTVar48->Object = pTVar23->Object;
            pTVar23->Object = (FParameters *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(lVar18 + 0x2e0),&pTVar23->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_120.SharedReferenceCount.ReferenceController);
          if (*(longlong *)(*(longlong *)param_1 + 0x2d8) == 0) {
            *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
            FinishUpdateGlobal(param_1);
          }
          else {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar22);
            }
            *(UCustomizableObjectInstance **)((longlong)TVar50 + 0x158) = pUVar22;
            pUVar24 = UCustomizableObjectInstance::GetCustomizableObject(pUVar22);
            this_01 = UCustomizableObject::GetPrivate(pUVar24);
            pUVar25 = UCustomizableObjectPrivate::GetModelResourcesChecked(this_01);
            pUStack_2d0 = pUVar25;
            iVar15 = UCustomizableInstancePrivate::GetState(this_00);
            uStack_2d8 = CONCAT44(uStack_2d8._4_4_,iVar15);
            UCustomizableObjectPrivate::GetStateName(pUVar21,&FStack_130,iVar15);
            pFVar26 = TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                      ::Find((TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                              *)&pUVar25->StateUIDataMap,&FStack_130);
            *(undefined1 *)(*(longlong *)param_1 + 0x4b1) = 0;
            if (UCustomizableObjectSystemPrivate::EnableMutableLiveUpdate != 0) {
              if (pFVar26 == (FMutableStateData *)0x0) {
                uVar40 = 0;
              }
              else {
                uVar40 = pFVar26->bLiveUpdateMode;
              }
              *(undefined1 *)(*(longlong *)param_1 + 0x4b1) = uVar40;
            }
            *(undefined1 *)(*(longlong *)param_1 + 0x4b0) = 0;
            *(undefined4 *)(*(longlong *)param_1 + 0x4bc) = 0;
            lVar18 = *(longlong *)param_1;
            cVar13 = *(char *)(lVar18 + 0x4b9);
            *(undefined1 *)(lVar18 + 0x4b0) = 0;
            UCustomizableObjectInstance::GetCurrentState(pUVar22,&FStack_150);
            pUVar24 = UCustomizableObjectInstance::GetCustomizableObject(pUVar22);
            pUVar21 = UCustomizableObject::GetPrivate(pUVar24);
            pUVar25 = UCustomizableObjectPrivate::GetModelResources(pUVar21);
            if ((pUVar25 != (UModelResources *)0x0) &&
               (pFVar27 = TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                          ::Find((TMapBase<FString,FMutableStateData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FMutableStateData,0>_>
                                  *)&pUVar25->StateUIDataMap,&FStack_150),
               pFVar27 != (FMutableStateData *)0x0)) {
              *(bool *)(lVar18 + 0x4b0) = pFVar27->bDisableTextureStreaming;
            }
            *(undefined4 *)(lVar18 + 0x4bc) = 0;
            this_02 = IStreamingManager::Get();
            bVar12 = FStreamingManagerCollection::IsTextureStreamingEnabled(this_02);
            if ((bVar12) && (cVar13 != '\0')) {
              if (*(char *)(lVar18 + 0x4b0) == '\0') {
                *(undefined4 *)(lVar18 + 0x4bc) = 0xff;
              }
            }
            else {
              *(undefined1 *)(lVar18 + 0x4b0) = 1;
            }
            if (FStack_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_150.Data.AllocatorInstance.Data);
            }
            lVar18 = *(longlong *)param_1;
            if ((*(char *)(lVar18 + 0x4b1) != '\0') &&
               ((*(char *)(lVar18 + 0x4b0) == '\0' || (0 < *(int *)(lVar18 + 0x4bc))))) {
              if (2 < (byte)LogMutable._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
              }
              *(undefined1 *)(*(longlong *)param_1 + 0x4b1) = 0;
            }
            *(undefined1 *)(*(longlong *)param_1 + 0x4b2) = 0;
            if ((*(char *)(*(longlong *)param_1 + 0x4b8) == '\0') &&
               (UCustomizableObjectSystemPrivate::EnableReuseInstanceTextures != 0)) {
              if (pFVar26 == (FMutableStateData *)0x0) {
                uVar40 = 0;
              }
              else {
                uVar40 = pFVar26->bReuseInstanceTextures;
              }
              *(undefined1 *)(*(longlong *)param_1 + 0x4b2) = uVar40;
              *(byte *)(*(longlong *)param_1 + 0x4b2) =
                   *(byte *)(*(longlong *)param_1 + 0x4b2) |
                   (byte)(this_00->InstanceFlagsPrivate >> 3) & 1;
              if ((*(char *)(*(longlong *)param_1 + 0x4b2) != '\0') &&
                 (*(char *)(*(longlong *)param_1 + 0x4b0) == '\0')) {
                if (2 < (byte)LogMutable._0_1_) {
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMutable);
                }
                *(undefined1 *)(*(longlong *)param_1 + 0x4b2) = 0;
              }
            }
            if ((*(char *)(*(longlong *)param_1 + 0x4b1) == '\0') &&
               (this_00->LiveUpdateModeInstanceID != 0)) {
              impl::Task_Game_ReleaseInstanceID(this_00->LiveUpdateModeInstanceID);
              this_00->LiveUpdateModeInstanceID = 0;
            }
            pTVar28 = UCustomizableObjectPrivate::GetModel
                                ((UCustomizableObjectPrivate *)TStack_290.Value);
            if ((pTVar28->Object == (FModel *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = pTVar28->Object;
            pTVar35 = (pTVar28->SharedReferenceCount).ReferenceController;
            if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar6 == (FModel *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar18 = *(longlong *)param_1;
            ppFVar43 = (FModel **)(lVar18 + 0x4d8);
            pFStack_208 = pFVar6;
            FStack_200.ReferenceController = pTVar35;
            if (ppFVar43 != &pFStack_208) {
              *ppFVar43 = pFVar6;
              pFStack_208 = (FModel *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(lVar18 + 0x4e0),&FStack_200);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_200.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar35);
            puVar10 = TStack_290.Value;
            FStack_240.ReferenceController =
                 (((TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                    *)((longlong)TStack_290.Value + 0xf8))->SharedReferenceCount).
                 ReferenceController;
            pTStack_248 = ((TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                            *)((longlong)TStack_290.Value + 0xf8))->Object;
            if (FStack_240.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_240.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_240.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar18 = *(longlong *)param_1;
            ppTVar29 = (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                        **)(lVar18 + 0x4e8);
            if (ppTVar29 != &pTStack_248) {
              *ppTVar29 = pTStack_248;
              pTStack_248 = (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                             *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(lVar18 + 0x4f0),&FStack_240);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_240.ReferenceController);
            FStack_230.ReferenceController =
                 (((TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                    *)((longlong)puVar10 + 0x108))->SharedReferenceCount).ReferenceController;
            pTStack_238 = ((TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                            *)((longlong)puVar10 + 0x108))->Object;
            if (FStack_230.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_230.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_230.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar18 = *(longlong *)param_1;
            ppTVar30 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                        **)(lVar18 + 0x4f8);
            if (ppTVar30 != &pTStack_238) {
              *ppTVar30 = pTStack_238;
              pTStack_238 = (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
                             *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(lVar18 + 0x500),&FStack_230);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_230.ReferenceController);
            FStack_220.ReferenceController =
                 (((TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                    *)((longlong)puVar10 + 0x118))->SharedReferenceCount).ReferenceController;
            pTStack_228 = ((TSharedRef<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                            *)((longlong)puVar10 + 0x118))->Object;
            if (FStack_220.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FStack_220.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FStack_220.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar18 = *(longlong *)param_1;
            ppTVar31 = (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                        **)(lVar18 + 0x508);
            if (ppTVar31 != &pTStack_228) {
              *ppTVar31 = pTStack_228;
              pTStack_228 = (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
                             *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(lVar18 + 0x510),&FStack_220);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_220.ReferenceController);
            TVar32 = Tasks::MakeCompletedTask<void>();
            TVar47.Reference = *(FTaskBase **)TVar32;
            *(undefined8 *)TVar32 = 0;
            pFStack_280 = TVar47.Reference;
            if (puStack_1e8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puStack_1e8 + 6);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)*puStack_1e8)(puStack_1e8,1);
              }
            }
            pUVar20 = pUStack_2e0;
            if (*(char *)(*(longlong *)param_1 + 0x4b1) == '\0') {
              uVar16 = 0;
            }
            else {
              uVar16 = this_00->LiveUpdateModeInstanceID;
            }
            *(uint *)(*(longlong *)param_1 + 0x4c0) = uVar16;
            if ((((*(char *)((longlong)&pUStack_2e0->_padding_ + 2) == '\0') ||
                 (*(char *)(*(longlong *)param_1 + 0x4b8) != '\0')) ||
                (*(char *)(*(longlong *)param_1 + 0x4b1) != '\0')) ||
               (bVar12 = UCustomizableObjectSystem::IsMeshCacheEnabled(true), !bVar12)) {
              uVar40 = 0;
            }
            else {
              uVar40 = 1;
            }
            *(undefined1 *)(*(longlong *)param_1 + 0x4b3) = uVar40;
            bVar12 = IsStreamingEnabled((UCustomizableObject *)pUVar20,(int)uStack_2d8);
            *(bool *)(*(longlong *)param_1 + 0x4b4) = bVar12;
            if ((this_00->InstanceFlagsPrivate & ForceGenerateMipTail) == ECONone) {
              UCustomizableObjectPrivate::GetLowPriorityTextureNames
                        ((UCustomizableObjectPrivate *)puVar10,
                         (TArray<FString,TSizedDefaultAllocator<32>_> *)
                         (*(longlong *)param_1 + 0x4a0));
            }
            TVar50 = TStack_2c8;
            if ((*(char *)(*(longlong *)param_1 + 0x4ba) == '\0') ||
               (cVar13 = (**(code **)(*(longlong *)
                                       ((TStack_2c8.DebugPtr)->CurrentInstanceLODManagement).
                                       field0_0x0.DebugPtr + 0x2e0))(), cVar13 == '\0')) {
              TStack_88.Elements._44_4_ = 0x80;
              TStack_88.Elements._0_8_ = 0;
              TStack_88.Elements._8_8_ = 0;
              TStack_88.Elements._32_8_ = 0;
              TStack_88.Elements._40_4_ = 0;
              TStack_88.Elements._48_4_ = 0xffffffff;
              TStack_88.Elements._52_4_ = 0;
              TStack_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
              TStack_88.HashSize = 0;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::operator=(&TStack_88,
                          (TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                           *)(*(longlong *)param_1 + 400));
              pUVar25 = pUStack_2d0;
              pFVar46 = (pUStack_2d0->ComponentNamesPerObjectComponent).AllocatorInstance.Data;
              iVar15 = (pUStack_2d0->ComponentNamesPerObjectComponent).ArrayNum;
              pFVar3 = pFVar46 + (longlong)iVar15 * 8;
              while( true ) {
                if ((pUVar25->ComponentNamesPerObjectComponent).ArrayNum != iVar15) {
                  uStack_2e6 = 0;
                  `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&uStack_2e6);
                }
                if (pFVar46 == pFVar3) break;
                puStack_138 = &uStack_2e5;
                uStack_2e5 = 0;
                pFStack_140 = pFVar46;
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FName_const_&,unsigned_char_&&>_>
                          (&TStack_88,&TStack_290,(bool *)&pFStack_140);
                pFVar46 = pFVar46 + 8;
              }
              lVar18 = *(longlong *)param_1;
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                           *)(lVar18 + 400),&TStack_88);
              TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
              ::operator=((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                           *)(lVar18 + 0x288),&TStack_88);
              TVar47.Reference = pFStack_280;
              TStack_88.HashSize = 0;
              if (TStack_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)TStack_88.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&TStack_88.Elements);
              pUVar20 = pUStack_2e0;
              TVar50 = TStack_2c8;
            }
            bVar12 = FLogBenchmarkUtil::IsBenchmarkingReportingEnabled();
            if (bVar12) {
              lVar33 = UE::Mutable::Private::FGlobalMemoryCounter::GetAbsoluteCounter();
              *(long64 *)(*(longlong *)param_1 + 0x760) = lVar33;
              UE::Mutable::Private::FGlobalMemoryCounter::Zero();
            }
            if ((((TVar50.DebugPtr)->Streamer).Object == (FUnrealMutableModelBulkReader *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SystemPrivate->Streamer != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                    ,0xe67,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            this_03 = TSharedPtr<FUnrealMutableModelBulkReader,1>::operator->
                                (&(TVar50.DebugPtr)->Streamer);
            pUVar22 = (UCustomizableObjectInstance *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x40));
            pUVar24 = UCustomizableObjectInstance::GetCustomizableObject(pUVar22);
            FUnrealMutableModelBulkReader::PrepareStreamingForObject(this_03,pUVar24);
            lpCriticalSection = &(TVar50.DebugPtr)->MutableTaskGraph;
            *(undefined1 *)(*(longlong *)param_1 + 0x4b5) = 1;
            if (lpCriticalSection == (FMutableTaskGraph *)0x0) {
                    /* WARNING: Subroutine does not return */
              ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            ((TVar50.DebugPtr)->MutableTaskGraph).bAllowLaunchMutableTaskLowPriority = false;
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            TStack_278.Object = ((TVar50.DebugPtr)->MutableSystem).Object;
            TStack_278.SharedReferenceCount.ReferenceController =
                 ((TVar50.DebugPtr)->MutableSystem).SharedReferenceCount.ReferenceController;
            if (TStack_278.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (TStack_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(TStack_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pUVar21 = UCustomizableObject::GetPrivate((UCustomizableObject *)pUVar20);
            pUVar25 = UCustomizableObjectPrivate::GetModelResources(pUVar21);
            TStack_2c0.SharedReferenceCount.ReferenceController = ::operator_new(0x88);
            if (TStack_2c0.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              TStack_2c0.Object = ___xmm_00000000000000000000000000000010;
              TStack_2c0.SharedReferenceCount.ReferenceController = _UNK_150651568;
            }
            else {
              (TStack_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)0x1;
              (TStack_2c0.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)0x1;
              (TStack_2c0.SharedReferenceCount.ReferenceController)->_padding_ =
                   (longlong)
                   &___7__TIntrusiveReferenceController_VFBoneNames___00_SharedPointerInternals__6B_
              ;
              FBoneNames::FBoneNames
                        ((FBoneNames *)(TStack_2c0.SharedReferenceCount.ReferenceController + 1),
                         pUVar25);
              TStack_2c0.Object =
                   (FBoneNames *)(TStack_2c0.SharedReferenceCount.ReferenceController + 1);
              if ((TStack_2c0.Object == (FBoneNames *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if (TStack_2c0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (TStack_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(TStack_2c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            lVar18 = *(longlong *)param_1;
            ppFVar34 = (FBoneNames **)(lVar18 + 0x528);
            pFStack_218 = TStack_2c0.Object;
            FStack_210.ReferenceController = TStack_2c0.SharedReferenceCount.ReferenceController;
            if (ppFVar34 != &pFStack_218) {
              *ppFVar34 = TStack_2c0.Object;
              pFStack_218 = (FBoneNames *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(lVar18 + 0x530),&FStack_210);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_210.ReferenceController);
            pTVar35 = ::operator_new(0x28);
            if (pTVar35 == (TReferenceControllerBase<1> *)0x0) {
              pTVar35 = (TReferenceControllerBase<1> *)0x0;
              pFStack_268 = ___xmm_00000000000000000000000000000010;
              pFVar49 = (FBoneNames *)&DAT_00000010;
              FStack_260.ReferenceController = _UNK_150651568;
            }
            else {
              pTVar35->SharedReferenceCount = (atomic<int>)0x1;
              pTVar35->WeakReferenceCount = (atomic<int>)0x1;
              pTVar35->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_VFUnrealMutableResourceProvider___00_SharedPointerInternals__6B_
              ;
              FUnrealMutableResourceProvider::FUnrealMutableResourceProvider
                        ((FUnrealMutableResourceProvider *)(pTVar35 + 1),&TStack_2c0);
              pFVar49 = (FBoneNames *)(pTVar35 + 1);
              if ((pFVar49 == (FBoneNames *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
              FStack_260.ReferenceController = pTVar35;
              pFStack_268 = pFVar49;
            }
            lVar18 = *(longlong *)param_1;
            ppFVar34 = (FBoneNames **)(lVar18 + 0x518);
            if (ppFVar34 != &pFStack_268) {
              *ppFVar34 = pFVar49;
              pFStack_268 = (FBoneNames *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(lVar18 + 0x520),&FStack_260);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_260.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar35);
            iVar15 = *(int *)(*(longlong *)param_1 + 0x4c0);
            if (*(char *)(*(longlong *)param_1 + 0x4b1) == '\0') {
              if ((iVar15 != 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Operation->InstanceID == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                      ,0xe86,L""), bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar36 = TSharedPtr<UE::Mutable::Private::FSystem,1>::operator->(&TStack_278);
              TStack_188.Object = *(FExternalResourceProvider **)(*(longlong *)param_1 + 0x518);
              TStack_188.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x520);
              if (TStack_188.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_188.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              TStack_198.Object = *(FModel **)(*(longlong *)param_1 + 0x4d8);
              TStack_198.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x4e0);
              if (TStack_198.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_198.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar16 = UE::Mutable::Private::FSystem::NewInstance(pFVar36,&TStack_198,&TStack_188);
              *(uint *)(*(longlong *)param_1 + 0x4c0) = uVar16;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_198.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_188.SharedReferenceCount.ReferenceController);
              if (5 < (byte)LogMutable._0_1_) {
                ppuVar44 = (undefined **)&::LOG_Static;
                goto LAB_14ac3f0f0;
              }
            }
            else if (iVar15 == 0) {
              pFVar36 = TSharedPtr<UE::Mutable::Private::FSystem,1>::operator->(&TStack_278);
              TStack_1b8.Object = *(FExternalResourceProvider **)(*(longlong *)param_1 + 0x518);
              TStack_1b8.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x520);
              if (TStack_1b8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_1b8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              TStack_1c8.Object = *(FModel **)(*(longlong *)param_1 + 0x4d8);
              TStack_1c8.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x4e0);
              if (TStack_1c8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_1c8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar16 = UE::Mutable::Private::FSystem::NewInstance(pFVar36,&TStack_1c8,&TStack_1b8);
              *(uint *)(*(longlong *)param_1 + 0x4c0) = uVar16;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_1c8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_1b8.SharedReferenceCount.ReferenceController);
              if (5 < (byte)LogMutable._0_1_) {
                ppuVar44 = &PTR_u_Creating_Mutabl_1522c70d8;
LAB_14ac3f0f0:
                Logging::Private::BasicLog<6>
                          ((FStaticBasicLogRecord *)ppuVar44,(FLogCategoryBase *)&LogMutable);
              }
            }
            else {
              pFVar36 = TSharedPtr<UE::Mutable::Private::FSystem,1>::operator->(&TStack_278);
              TStack_1a8.Object = *(FExternalResourceProvider **)(*(longlong *)param_1 + 0x518);
              TStack_1a8.SharedReferenceCount.ReferenceController =
                   *(TReferenceControllerBase<1> **)(*(longlong *)param_1 + 0x520);
              if (TStack_1a8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (TStack_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(TStack_1a8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              UE::Mutable::Private::FSystem::ReuseInstance
                        (pFVar36,*(uint *)(*(longlong *)param_1 + 0x4c0),&TStack_1a8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (TStack_1a8.SharedReferenceCount.ReferenceController);
              if (5 < (byte)LogMutable._0_1_) {
                ppuVar44 = (undefined **)&::LOG_Static;
                goto LAB_14ac3f0f0;
              }
            }
            if ((TStack_278.Object == (FSystem *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar18 = *(longlong *)param_1;
            TStack_178.Object = *(FParameters **)(lVar18 + 0x2d8);
            iVar15 = *(int *)(lVar18 + 0xe8);
            TStack_178.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)(lVar18 + 0x2e0);
            if (TStack_178.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (TStack_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(TStack_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            pTVar37 = UE::Mutable::Private::FSystem::BeginUpdate_GameThread
                                (TStack_278.Object,&TStack_110,
                                 *(uint *)(*(longlong *)param_1 + 0x4c0),&TStack_178,
                                 (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                                  *)(lVar18 + 0x4e8),
                                 (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                                  *)(lVar18 + 0x4f8),
                                 (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                                  *)(lVar18 + 0x508),iVar15,0xffffffff);
            TSharedPtr<UE::Mutable::Private::FInstance_const_,1>::operator=
                      ((TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)
                       (*(longlong *)param_1 + 0x4c8),pTVar37);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_110.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_178.SharedReferenceCount.ReferenceController);
            this_04 = TSharedPtr<UE::Mutable::Private::FInstance_const_,1>::operator->
                                ((TSharedPtr<UE::Mutable::Private::FInstance_const_,1> *)
                                 (*(longlong *)param_1 + 0x4c8));
            iVar15 = UE::Mutable::Private::FInstance::GetComponentCount(this_04);
            *(char *)(*(longlong *)param_1 + 0x539) = (char)iVar15;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_2c0.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (TStack_278.SharedReferenceCount.ReferenceController);
            impl::FixLODs(param_1);
            lVar18 = *(longlong *)param_1;
            bVar5 = *(byte *)(lVar18 + 0x538);
            this = (TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                    *)(lVar18 + 0x6f0);
            iVar15 = *(int *)(lVar18 + 0x6f8);
            if (iVar15 < (int)(uint)bVar5) {
              iVar15 = (uint)bVar5 - iVar15;
              iVar17 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,iVar15,(ForAnyElementType *)this,(int *)(lVar18 + 0x6f8),
                                  (int *)(lVar18 + 0x6fc));
              memset((this->AllocatorInstance).Data + (longlong)iVar17 * 0x10,0,
                     (longlong)iVar15 << 4);
            }
            else if ((int)(uint)bVar5 < iVar15) {
              iVar15 = iVar15 - (uint)bVar5;
              if (iVar15 < 0) {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   );
                if (bVar12) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else if (iVar15 == 0) goto LAB_14ac3f2f1;
              TArray<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              ::RemoveAtImpl(this,(uint)bVar5,iVar15);
              ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)this,*(int *)(lVar18 + 0x6f8),
                         (int *)(lVar18 + 0x6fc));
            }
LAB_14ac3f2f1:
            lVar18 = *(longlong *)param_1;
            uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
            uVar51 = uStack_2d8;
            pUStack_2e0 = (UCustomizableObjectSkeletalMesh *)(lVar18 + 0x570);
            if (*(char *)(lVar18 + 0x539) != '\0') {
              uStack_2d8._0_4_ = 0;
              iVar15 = (int)uStack_2d8;
              uStack_2d8 = uVar51;
              do {
                if ((*(longlong *)(lVar18 + 0x4c8) == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar14 = UE::Mutable::Private::FInstance::GetComponentId
                                   (*(FInstance **)(lVar18 + 0x4c8),iVar15);
                lVar18 = *(longlong *)param_1;
                if ((int)(uint)uVar14 < *(int *)(lVar18 + 0x6f8)) {
                  if ((*(int *)(lVar18 + 0x6f8) <= (int)(uint)uVar14) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uStack_2d8 = (ulonglong)(int)(uint)uVar14;
                  this_05 = (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                             *)(uStack_2d8 * 0x10 + *(longlong *)(lVar18 + 0x6f0));
                  if (this_05 ==
                      (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                       *)0x0) goto LAB_14ac3f5e7;
                  FStack_168._4_4_ = 0;
                  FStack_168.Id = 0xffffffff;
                  FStack_168.WeakRegistry.Object =
                       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                        *)0x0;
                  FStack_168.WeakRegistry.WeakReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                  ::Init(this_05,&FStack_168,8);
                  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                  ::FHandle::~FHandle(&FStack_168);
                  lVar18 = *(longlong *)param_1;
                  if ((*(int *)(lVar18 + 0x548) <= (int)(uint)uVar14) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pUStack_2d0 = *(UModelResources **)(lVar18 + 0x540);
                  lVar18 = *(longlong *)param_1;
                  if (*(char *)(lVar18 + 0x4b4) == '\0') {
                    pTVar38 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                      *)(lVar18 + 400),*(FName *)(&pUStack_2d0->_padding_ + uVar14))
                    ;
                    if (pTVar38 == (TTuple<FName,unsigned_char> *)0x0) {
                      iVar17 = 0x27b;
                      goto LAB_14ac3f4a4;
                    }
                  }
                  else {
                    pTVar38 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                      *)(lVar18 + 0x5c0),
                                     *(FName *)(&pUStack_2d0->_padding_ + uVar14));
                    if (pTVar38 == (TTuple<FName,unsigned_char> *)0x0) {
                      iVar17 = 0x288;
LAB_14ac3f4a4:
                      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Pair != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                          ,iVar17,L"");
                      if (bVar12) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                    }
                  }
                  uVar16 = (uint)(byte)pTVar38->field_0x8;
                  uVar51 = (ulonglong)uVar14;
                  while( true ) {
                    pTVar38 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                              ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                      *)pUStack_2e0,*(FName *)(&pUStack_2d0->_padding_ + uVar51));
                    if ((pTVar38 == (TTuple<FName,unsigned_char> *)0x0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Pair != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                            ,0x27b,L""), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    if ((int)(uint)(byte)pTVar38->field_0x8 <= (int)uVar16) break;
                    lVar18 = *(longlong *)param_1;
                    if ((*(longlong *)(lVar18 + 0x4c8) == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pFVar39 = UE::Mutable::Private::FInstance::GetMeshId
                                        (*(FInstance **)(lVar18 + 0x4c8),&FStack_100,iVar15,uVar16);
                    uVar41 = 0;
                    if ((int)uVar16 < this_05->ArrayNum) {
                      uVar41 = ~uVar16 >> 0x1f;
                    }
                    if ((uVar41 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                    ::FHandle::operator=
                              ((FHandle *)
                               ((this_05->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x18),
                               pFVar39);
                    TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                    ::FHandle::~FHandle(&FStack_100);
                    uVar16 = uVar16 + 1;
                    uVar51 = uStack_2d8;
                  }
                }
                else {
LAB_14ac3f5e7:
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MeshId",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                      ,0xea0,L"");
                  if (bVar12) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar18 = *(longlong *)param_1;
                iVar15 = iVar15 + 1;
                TVar47.Reference = pFStack_280;
              } while (iVar15 < (int)(uint)*(byte *)(lVar18 + 0x539));
            }
            puVar10 = TStack_290.Value;
            if (*(char *)(lVar18 + 0x4b3) != '\0') {
              iVar15 = *(int *)(lVar18 + 0x6f8);
              pUVar25 = *(UModelResources **)(lVar18 + 0x6f0);
              pUVar52 = (UModelResources *)(&pUVar25->_padding_ + (longlong)iVar15 * 2);
              pUStack_2d0 = pUVar52;
              while( true ) {
                TStack_290.Key = (FName *)pUVar25;
                if (*(int *)(lVar18 + 0x6f8) != iVar15) {
                  `TCheckedPointerIterator<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(auStack_2e4);
                }
                TVar47.Reference = pFStack_280;
                if (pUVar25 == pUVar52) break;
                pUStack_2e0 = FMeshCache::Get((FMeshCache *)((longlong)puVar10 + 0x48),
                                              (TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>
                                               *)pUVar25);
                if (pUStack_2e0 != (UCustomizableObjectSkeletalMesh *)0x0) {
                  lVar7 = *(longlong *)param_1;
                  iVar17 = *(int *)(lVar7 + 2000);
                  if (iVar17 == *(int *)(lVar7 + 0x7d4)) {
                    iVar17 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,(ForAnyElementType *)(lVar7 + 0x7c8),
                                        (int *)(lVar7 + 0x7d4));
                  }
                  *(int *)(lVar7 + 2000) = iVar17 + 1;
                  lVar7 = *(longlong *)(lVar7 + 0x7c8);
                  *(undefined8 *)(lVar7 + (longlong)iVar17 * 8) = 0;
                  UObjectBase::AddRef((UObjectBase *)pUStack_2e0);
                  *(UCustomizableObjectSkeletalMesh **)(lVar7 + (longlong)iVar17 * 8) = pUStack_2e0;
                  pUVar25 = (UModelResources *)TStack_290.Key;
                  pUVar52 = pUStack_2d0;
                }
                pUVar25 = (UModelResources *)&pUVar25->_padding_;
              }
            }
            TVar50 = TStack_2c8;
            if (TVar47.Reference != (FTaskBase *)0x0) {
              LOCK();
              (TVar47.Reference)->RefCount =
                   (atomic<unsigned_int>)((int)(TVar47.Reference)->RefCount + 1);
              UNLOCK();
            }
            FStack_2b0.Data = (FScriptContainerElement *)0x0;
            iStack_2a8 = 1;
            FStack_258.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TVar47.Reference;
            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,0,&FStack_2b0,1,&iStack_2a4);
            ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                      (FStack_2b0.Data,&FStack_258,1);
            pTVar35 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
            uStack_d0 = *(undefined8 *)param_1;
            if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
            }
            pppuStack_c0 = (undefined ***)0x0;
            ppuStack_d8 = &TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::`2'::<lambda_1>,1,0>
                           ::_vftable_;
            TStack_e8.AllocatorInstance.Data =
                 (FScriptContainerElement *)
                 TFunctionRefCaller<`impl::Task_Game_StartUpdate'::__l2::<lambda_1>,void>::Call;
            pTStack_c8 = pTVar35;
            FMutableTaskGraph::AddMutableThreadTask
                      (&(TVar50.DebugPtr)->MutableTaskGraph,(wchar_t *)&TStack_1e0,
                       (TUniqueFunction<void___cdecl(void)> *)L"Task_Mutable_GetMeshes",&TStack_e8);
            if (TStack_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              pppuVar45 = &ppuStack_d8;
              if (pppuStack_c0 != (undefined ***)0x0) {
                pppuVar45 = pppuStack_c0;
              }
              (*(code *)(*pppuVar45)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar35);
            DestructItems<UE::Tasks::Private::FTaskHandle,int>
                      ((FTaskHandle *)FStack_2b0.Data,iStack_2a8);
            if (FStack_2b0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_2b0.Data);
            }
            if (FStack_258.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar2 = (atomic<unsigned_int> *)((longlong)FStack_258.Pimpl.Reference + 0x30);
              aVar4 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)FStack_258.Pimpl.Reference)(FStack_258.Pimpl.Reference,1)
                ;
              }
            }
            FStack_250.Pimpl.Reference =
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
                 (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TStack_1e0.Reference;
            if (TStack_1e0.Reference != (FTaskBase *)0x0) {
              LOCK();
              (TStack_1e0.Reference)->RefCount =
                   (atomic<unsigned_int>)((int)(TStack_1e0.Reference)->RefCount + 1);
              UNLOCK();
            }
            TStack_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_2a0.ArrayNum = 1;
            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,0,&TStack_2a0.AllocatorInstance,1,&TStack_2a0.ArrayMax);
            ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                      (TStack_2a0.AllocatorInstance.Data,&FStack_250,1);
            pTVar35 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
            appuStack_a8[1] = *(undefined ***)param_1;
            if (pTVar35 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar35->SharedReferenceCount = (atomic<int>)((int)pTVar35->SharedReferenceCount + 1);
              UNLOCK();
            }
            pppuStack_90 = (undefined ***)0x0;
            appuStack_a8[0] =
                 &TFunction_OwnedObject<`impl::Task_Game_StartUpdate'::`2'::<lambda_2>,1,0>::
                  _vftable_;
            apcStack_b8[0] =
                 TFunctionRefCaller<`impl::Task_Game_StartUpdate'::__l2::<lambda_2>,void>::Call;
            pTStack_98 = pTVar35;
            FMutableTaskGraph::AddGameThreadTask
                      (&(TVar50.DebugPtr)->MutableTaskGraph,L"Task_Game_LockCache",
                       (TUniqueFunction<void___cdecl(void)> *)apcStack_b8,false,&TStack_2a0);
            if (apcStack_b8[0] != (code *)0x0) {
              pppuVar45 = appuStack_a8;
              if (pppuStack_90 != (undefined ***)0x0) {
                pppuVar45 = pppuStack_90;
              }
              (*(code *)(*pppuVar45)[2])();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar35);
            DestructItems<UE::Tasks::Private::FTaskHandle,int>
                      ((FTaskHandle *)TStack_2a0.AllocatorInstance.Data,TStack_2a0.ArrayNum);
            if (TStack_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TStack_2a0.AllocatorInstance.Data);
            }
            if (FStack_250.Pimpl.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar2 = (atomic<unsigned_int> *)((longlong)FStack_250.Pimpl.Reference + 0x30);
              aVar4 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<unsigned_int>)0x1) {
                (*(code *)**(undefined8 **)FStack_250.Pimpl.Reference)(FStack_250.Pimpl.Reference,1)
                ;
              }
            }
            if (TStack_1e0.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar2 = &(TStack_1e0.Reference)->RefCount;
              aVar4 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<unsigned_int>)0x1) {
                (**(code **)(TStack_1e0.Reference)->_padding_)(TStack_1e0.Reference,1);
              }
            }
            if (TVar47.Reference != (FTaskBase *)0x0) {
              LOCK();
              paVar2 = &(TVar47.Reference)->RefCount;
              aVar4 = *paVar2;
              *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
              UNLOCK();
              if (aVar4 == (atomic<unsigned_int>)0x1) {
                (**(code **)(TVar47.Reference)->_padding_)(TVar47.Reference,1);
              }
            }
            if (FStack_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_130.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
          FinishUpdateGlobal(param_1);
        }
      }
LAB_14ac3fa16:
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_14ac3fa20;
    }
  }
  *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
  FinishUpdateGlobal(param_1);
LAB_14ac3fa20:
  if (bVar53) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac15ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`impl::Task_Game_ConvertResources'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  bool bVar1;
  TSharedPtr<UE::Mutable::Private::FSystem,1> local_18;
  
  local_18.Object = *(FSystem **)((longlong)param_1 + 8);
  bVar1 = *(bool *)((longlong)param_1 + 0x18);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  impl::Task_Mutable_ReleaseInstance(*(uint *)param_1,&local_18,bVar1);
  return;
}

// Call @ 14ac15f10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`impl::Task_Game_StartUpdate'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
  *pTVar3;
  atomic<unsigned_int> *paVar4;
  TArray<FInstanceUpdateData::FComponent,TSizedDefaultAllocator<32>_> *this;
  FWindowsRecursiveMutex *pFVar5;
  FScriptContainerElement *pFVar6;
  atomic<unsigned_int> aVar7;
  byte bVar8;
  FName FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
  *pTVar11;
  code *pcVar12;
  double dVar13;
  FWeakReferencer<1> *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  TConsoleVariableData<bool> *pTVar16;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  *pTVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ushort uVar21;
  int iVar22;
  atomic<int> aVar23;
  uint uVar24;
  int iVar25;
  atomic<int> aVar26;
  uint uVar27;
  UCustomizableObjectSystem *pUVar28;
  UCustomizableObjectSystemPrivate *pUVar29;
  UCustomizableObjectInstance *this_00;
  UCustomizableInstancePrivate *pUVar30;
  FSystem *pFVar31;
  ulonglong uVar32;
  byte *pbVar33;
  FHandle *pFVar34;
  FEntry *pFVar35;
  FHandle *pFVar36;
  longlong lVar37;
  FEntry *pFVar38;
  TTask<void> TVar39;
  FTaskBase *pFVar40;
  FTaskBase *this_01;
  ulonglong uVar41;
  undefined1 uVar42;
  int iVar43;
  uint uVar44;
  FTaskBase *pFVar45;
  longlong lVar46;
  longlong *plVar47;
  ForAnyElementType FVar48;
  longlong lVar49;
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  *this_02;
  FHandle *pFVar50;
  FWeakReferencer<1> FVar51;
  TArray<FInstanceUpdateData::FLOD,TSizedDefaultAllocator<32>_> *this_03;
  bool bVar52;
  uint uStack_188;
  undefined1 auStack_184 [4];
  ForAnyElementType FStack_180;
  undefined8 uStack_178;
  uint uStack_170;
  longlong lStack_168;
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  *pTStack_160;
  longlong lStack_158;
  TReferenceControllerBase<1> *pTStack_150;
  TSharedPtr<UE::Mutable::Private::FInstance_const_,1> TStack_148;
  uint auStack_138 [2];
  uint auStack_130 [2];
  uint auStack_128 [2];
  TReferenceControllerBase<1> *pTStack_120;
  FHandle *pFStack_118;
  int aiStack_110 [2];
  FHandle FStack_108;
  undefined1 uStack_f0;
  LARGE_INTEGER LStack_e8;
  undefined8 *puStack_e0;
  TSharedPtr<UE::Mutable::Private::FParameters_const_,1> TStack_d8;
  FHandle FStack_c8;
  FHandle FStack_b0;
  TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
  TStack_98;
  undefined8 uStack_88;
  TReferenceControllerBase<1> *pTStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 auStack_68 [5];
  
  bVar52 = -1 < CpuChannel->Enabled;
  if (bVar52) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2678,"Mutable_Task_Mutable_GetMeshes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xa76);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2678);
  }
  FMiscTrace::OutputBeginRegion(L"Task_Mutable_GetMeshes",(wchar_t *)0x0);
  QueryPerformanceCounter(&LStack_e8);
  dVar13 = (double)LStack_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  if ((*(longlong *)(*(longlong *)param_1 + 0x2d8) == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("OperationData->Parameters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xa7b,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FInstanceUpdateData::Clear((FInstanceUpdateData *)(*(longlong *)param_1 + 0x300));
  pUVar28 = UCustomizableObjectSystem::GetInstance();
  if ((pUVar28 == (UCustomizableObjectSystem *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("UCustomizableObjectSystem::GetInstance() != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xa7e,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pUVar28 = UCustomizableObjectSystem::GetInstance();
  pUVar29 = UCustomizableObjectSystem::GetPrivate(pUVar28);
  if ((pUVar29 == (UCustomizableObjectSystemPrivate *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("UCustomizableObjectSystem::GetInstance()->GetPrivate() != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xa7f,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_00 = (UCustomizableObjectInstance *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x40));
  pUVar30 = UCustomizableObjectInstance::GetPrivate(this_00);
  DestructItems<TSoftObjectPtr<UTexture_const_>,int>
            ((TSoftObjectPtr<UTexture_const_> *)
             (pUVar30->PassThroughTexturesToLoad).AllocatorInstance.Data,
             (pUVar30->PassThroughTexturesToLoad).ArrayNum);
  uVar41 = 0;
  piVar2 = &(pUVar30->PassThroughTexturesToLoad).ArrayMax;
  (pUVar30->PassThroughTexturesToLoad).ArrayNum = 0;
  if (*piVar2 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pUVar30->PassThroughTexturesToLoad).AllocatorInstance,0,piVar2);
  }
  DestructItems<TSoftObjectPtr<UStreamableRenderAsset_const_>,int>
            ((TSoftObjectPtr<UStreamableRenderAsset_const_> *)
             (pUVar30->PassThroughMeshesToLoad).AllocatorInstance.Data,
             (pUVar30->PassThroughMeshesToLoad).ArrayNum);
  piVar2 = &(pUVar30->PassThroughMeshesToLoad).ArrayMax;
  (pUVar30->PassThroughMeshesToLoad).ArrayNum = 0;
  if (*piVar2 != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(pUVar30->PassThroughMeshesToLoad).AllocatorInstance,0,piVar2);
  }
  if (*(longlong *)(*(longlong *)param_1 + 0x6c0) != 0) {
    pFVar31 = TSharedPtr<UE::Mutable::Private::FSystem,1>::operator->
                        ((TSharedPtr<UE::Mutable::Private::FSystem,1> *)
                         (*(longlong *)param_1 + 0x2e8));
    UE::Mutable::Private::FSystem::SetImagePixelConversionOverride
              (pFVar31,(TFunction<void___cdecl(bool_&,int,UE::Mutable::Private::FImage_*,UE::Mutable::Private::FImage_const_*,int)>
                        *)(*(longlong *)param_1 + 0x6c0));
  }
  pFVar31 = TSharedPtr<UE::Mutable::Private::FSystem,1>::operator->
                      ((TSharedPtr<UE::Mutable::Private::FSystem,1> *)(*(longlong *)param_1 + 0x2e8)
                      );
  lVar46 = *(longlong *)param_1;
  TStack_d8.Object = *(FParameters **)(lVar46 + 0x2d8);
  iVar43 = *(int *)(lVar46 + 0xe8);
  TStack_d8.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(lVar46 + 0x2e0);
  if (TStack_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::Mutable::Private::FSystem::BeginUpdate_MutableThread
            (pFVar31,&TStack_148,*(uint *)(*(longlong *)param_1 + 0x4c0),&TStack_d8,
             (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
              *)(lVar46 + 0x4e8),
             (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
              *)(lVar46 + 0x4f8),
             (TSharedPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
              *)(lVar46 + 0x508),iVar43,0xffffffff);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_d8.SharedReferenceCount.ReferenceController);
  lVar46 = *(longlong *)param_1;
  if (TStack_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  uStack_88 = *(undefined8 *)(lVar46 + 0x4c8);
  pTStack_80 = *(TReferenceControllerBase<1> **)(lVar46 + 0x4d0);
  *(FInstance **)(lVar46 + 0x4c8) = TStack_148.Object;
  *(TReferenceControllerBase<1> **)(lVar46 + 0x4d0) =
       TStack_148.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  pTVar16 = CVarForceGeometryOnFirstGeneration.Ref;
  bVar18 = IsInParallelGameThread();
  if (bVar18) {
LAB_14ac41d3a:
    uVar32 = uVar41;
  }
  else {
    bVar18 = IsInGameThread();
    uVar32 = 1;
    if (bVar18) goto LAB_14ac41d3a;
  }
  bVar18 = pTVar16->ShadowedValue[uVar32];
  FStack_180.Data = (FScriptContainerElement *)0x0;
  uStack_178 = 0;
  pTStack_150 = ::operator_new(0x20);
  if (pTStack_150 == (TReferenceControllerBase<1> *)0x0) {
    pTStack_150 = (TReferenceControllerBase<1> *)0x0;
    pTStack_120 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTStack_120 = pTStack_150 + 1;
    pTStack_150->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_150->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_150->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_UFGetMeshData_impl__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    pTStack_150[1]._padding_ = 0;
    pTStack_150[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_150[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTStack_120 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar19)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  lVar46 = *(longlong *)param_1;
  bVar8 = *(byte *)(lVar46 + 0x539);
  this = (TArray<FInstanceUpdateData::FComponent,TSizedDefaultAllocator<32>_> *)(lVar46 + 0x300);
  iVar43 = *(int *)(lVar46 + 0x308);
  if (iVar43 < (int)(uint)bVar8) {
    iVar43 = (uint)bVar8 - iVar43;
    iVar22 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x30,8,iVar43,(ForAnyElementType *)this,(int *)(lVar46 + 0x308),
                        (int *)(lVar46 + 0x30c));
    DefaultConstructItems<FInstanceUpdateData::FComponent,int>
              ((this->AllocatorInstance).Data + (longlong)iVar22 * 0x30,iVar43);
  }
  else if ((int)(uint)bVar8 < iVar43) {
    iVar43 = iVar43 - (uint)bVar8;
    if (iVar43 < 0) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar19) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else if (iVar43 == 0) goto LAB_14ac41ea4;
    TArray<FInstanceUpdateData::FComponent,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (this,(uint)bVar8,iVar43);
    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,(ForAnyElementType *)this,*(int *)(lVar46 + 0x308),(int *)(lVar46 + 0x30c));
  }
LAB_14ac41ea4:
  lVar46 = *(longlong *)param_1;
  uStack_188 = 0;
  if (*(char *)(lVar46 + 0x539) != '\0') {
    do {
      uVar24 = (uint)uVar41;
      uVar27 = 0;
      if ((int)uVar24 < *(int *)(lVar46 + 0x308)) {
        uVar27 = ~uVar24 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar46 = *(longlong *)(lVar46 + 0x300);
      lVar49 = (longlong)(int)uVar24 * 0x30;
      *(undefined2 *)(lVar46 + 4 + lVar49) = *(undefined2 *)(*(longlong *)param_1 + 0x318);
      lStack_168 = lVar49;
      lStack_158 = lVar46;
      if ((TStack_148.Object == (FInstance *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar21 = UE::Mutable::Private::FInstance::GetComponentId(TStack_148.Object,uStack_188);
      if (uVar21 < 0xffff) {
        uVar27 = (uint)uVar21;
        *(uint *)(lVar46 + lVar49) = (uint)uVar21;
        plVar47 = (longlong *)(*(longlong *)param_1 + 0x540);
        uVar24 = 0;
        if ((int)(uint)uVar21 < *(int *)(*(longlong *)param_1 + 0x548)) {
          uVar24 = ~(uint)uVar21 >> 0x1f;
        }
        if (uVar24 == 0) goto LAB_14ac41fca;
      }
      else {
        *(undefined4 *)(lVar46 + lVar49) = 0xffffffff;
        uVar27 = 0xffffffff;
        plVar47 = (longlong *)(*(longlong *)param_1 + 0x540);
LAB_14ac41fca:
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      FVar9 = *(FName *)(*plVar47 + (longlong)(int)uVar27 * 8);
      pbVar33 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                               *)(*(longlong *)param_1 + 0x570),FVar9);
      bVar8 = *pbVar33;
      *(ushort *)(lVar46 + 6 + lVar49) = (ushort)bVar8;
      if (bVar8 != 0) {
        if ((TStack_148.Object == (FInstance *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar34 = UE::Mutable::Private::FInstance::GetOverlayMaterialId
                            (TStack_148.Object,&FStack_c8,uStack_188);
        this_02 = (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                   *)(lVar49 + 0x10 + lVar46);
        *(uint *)(lVar46 + 8 + lVar49) = pFVar34->Id;
        pFVar34->Id = 0xffffffff;
        pTStack_160 = this_02;
        TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
        ::operator=(this_02,&pFVar34->WeakRegistry);
        TStack_98.Object =
             (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
              *)0x0;
        TStack_98.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
        ::operator=(&pFVar34->WeakRegistry,&TStack_98);
        if (TStack_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(TStack_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar26 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar26 == (atomic<int>)0x1) {
            (**(code **)((TStack_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (TStack_98.WeakReferenceCount.ReferenceController,1);
          }
        }
        FVar51.ReferenceController = FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController;
        pTVar17 = FStack_c8.WeakRegistry.Object;
        uVar27 = FStack_c8.Id;
        if (FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          aVar26 = (FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController)->
                   SharedReferenceCount;
          do {
            if (aVar26 == (atomic<int>)0x0) {
              FVar51.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14ac4218f;
            }
            LOCK();
            aVar23 = (FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController)->
                     SharedReferenceCount;
            bVar19 = aVar26 == aVar23;
            if (bVar19) {
              (FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController)->SharedReferenceCount
                   = (atomic<int>)((int)aVar26 + 1);
              aVar23 = aVar26;
            }
            UNLOCK();
            aVar26 = aVar23;
          } while (!bVar19);
          this_02 = pTStack_160;
          if (FStack_c8.WeakRegistry.Object !=
              (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
               *)0x0) {
            pFVar5 = &(FStack_c8.WeakRegistry.Object)->CriticalSection;
            if (pFVar5 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
            pFVar35 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                      ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>_>
                                     *)&pTVar17->Entries,uVar27);
            pFVar35->RefCount = pFVar35->RefCount - 1;
            if (pFVar35->RefCount == 0) {
              if (*(int *)&(pTVar17->KeyIndex).field_0x8 != *(int *)&(pTVar17->KeyIndex).field_0x34)
              {
                uVar24 = UE::Mutable::Private::GetTypeHash((pFVar35->KeyContainer).Key.Object);
                TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                ::
                RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer>
                          ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                            *)&pTVar17->KeyIndex,uVar24,&pFVar35->KeyContainer);
              }
              auStack_138[0] = uVar27;
              lVar49 = lStack_168;
              if (*(int *)&(pTVar17->Entries).field_0x8 != *(int *)&(pTVar17->Entries).field_0x34) {
                TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>::FEntry,0>,FDefaultSetAllocator>
                            *)&pTVar17->Entries,uVar27,auStack_138);
                lVar49 = lStack_168;
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
            lVar46 = lStack_158;
            this_02 = pTStack_160;
          }
        }
LAB_14ac4218f:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar51.ReferenceController);
        if (FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar26 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar26 == (atomic<int>)0x1) {
            (**(code **)((FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController)->_padding_
                        + 8))(FStack_c8.WeakRegistry.WeakReferenceCount.ReferenceController,1);
          }
        }
        if ((((*(int *)(lVar46 + 8 + lVar49) != -1) &&
             (this_02->Object !=
              (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
               *)0x0)) && (lVar37 = *(longlong *)(lVar46 + 0x18 + lVar49), lVar37 != 0)) &&
           (0 < *(int *)(lVar37 + 8))) {
          if (((FStack_180.Data <= (FScriptContainerElement *)&uStack_188) &&
              ((FScriptContainerElement *)&uStack_188 <
               FStack_180.Data + (longlong)uStack_178._4_4_ * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar43 = (int)uStack_178;
          if ((int)uStack_178 == uStack_178._4_4_) {
            iVar43 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&FStack_180,(int *)((longlong)&uStack_178 + 4));
          }
          uStack_178 = CONCAT44(uStack_178._4_4_,iVar43 + 1);
          *(uint *)(FStack_180.Data + (longlong)iVar43 * 4) = uStack_188;
        }
        pbVar33 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                  ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                 *)(*(longlong *)param_1 + 0x610),FVar9);
        lVar37 = *(longlong *)param_1;
        this_03 = (TArray<FInstanceUpdateData::FLOD,TSizedDefaultAllocator<32>_> *)(lVar37 + 0x310);
        bVar8 = *pbVar33;
        piVar2 = (int *)(lVar37 + 0x318);
        iVar22 = (uint)*(ushort *)(lVar46 + 4 + lVar49) + (uint)*(ushort *)(lVar46 + 6 + lVar49);
        iVar43 = *piVar2;
        if (iVar43 < iVar22) {
          iVar25 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40,8,iVar22 - iVar43,(ForAnyElementType *)this_03,piVar2,
                              (int *)(lVar37 + 0x31c));
          DefaultConstructItems<FInstanceUpdateData::FLOD,int>
                    ((this_03->AllocatorInstance).Data + (longlong)iVar25 * 0x40,iVar22 - iVar43);
        }
        else if (iVar22 < iVar43) {
          iVar43 = iVar43 - iVar22;
          if (iVar43 < 0) {
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               );
            if (bVar19) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          else if (iVar43 == 0) goto LAB_14ac4238a;
          TArray<FInstanceUpdateData::FLOD,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (this_03,iVar22,iVar43);
          ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,(ForAnyElementType *)this_03,*piVar2,(int *)(lVar37 + 0x31c));
        }
LAB_14ac4238a:
        lVar46 = *(longlong *)param_1;
        if (*(char *)(lVar46 + 0x4b4) == '\0') {
          pbVar33 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                    ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                   *)(lVar46 + 400),FVar9);
        }
        else {
          pbVar33 = TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                    ::FindChecked((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                                   *)(lVar46 + 0x5c0),FVar9);
        }
        uStack_170 = (uint)*pbVar33;
        if (uStack_170 < *(ushort *)(lStack_158 + 6 + lVar49)) {
          do {
            lVar46 = lStack_158;
            uVar27 = uStack_170;
            bVar19 = -1 < CpuChannel->Enabled;
            if (bVar19) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId2757,"Mutable_GetMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0xac5);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2757);
            }
            lVar37 = *(longlong *)param_1;
            uVar44 = *(ushort *)(lVar46 + 4 + lVar49) + uVar27;
            uVar24 = 0;
            if ((int)uVar44 < *(int *)(lVar37 + 0x318)) {
              uVar24 = ~uVar44 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar50 = (FHandle *)(*(longlong *)(lVar37 + 0x310) + (longlong)(int)uVar44 * 0x40);
            pFStack_118 = pFVar50;
            if ((TStack_148.Object == (FInstance *)0x0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar36 = UE::Mutable::Private::FInstance::GetMeshId
                                (TStack_148.Object,&FStack_b0,uStack_188,uVar27);
            pTVar3 = &pFVar36->WeakRegistry;
            pFVar50->Id = pFVar36->Id;
            pFVar36->Id = 0xffffffff;
            pTVar10 = (pFVar36->WeakRegistry).WeakReferenceCount.ReferenceController;
            pTVar11 = pTVar3->Object;
            if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
              UNLOCK();
            }
            uStack_78 = *(undefined4 *)&(pFVar50->WeakRegistry).Object;
            uStack_74 = *(undefined4 *)((longlong)&(pFVar50->WeakRegistry).Object + 4);
            pFVar14 = &(pFVar50->WeakRegistry).WeakReferenceCount;
            uStack_70 = *(undefined4 *)&pFVar14->ReferenceController;
            uStack_6c = *(undefined4 *)
                         ((longlong)&(pFVar50->WeakRegistry).WeakReferenceCount.ReferenceController
                         + 4);
            pTVar15 = pFVar14->ReferenceController;
            (pFVar50->WeakRegistry).Object = pTVar11;
            (pFVar50->WeakRegistry).WeakReferenceCount.ReferenceController = pTVar10;
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &pTVar15->WeakReferenceCount;
              aVar26 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar26 == (atomic<int>)0x1) {
                (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
              }
            }
            if (pTVar3 != (TWeakPtr<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                           *)auStack_68) {
              pTVar10 = (pFVar36->WeakRegistry).WeakReferenceCount.ReferenceController;
              pTVar3->Object =
                   (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                    *)0x0;
              (pFVar36->WeakRegistry).WeakReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &pTVar10->WeakReferenceCount;
                aVar26 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar26 == (atomic<int>)0x1) {
                  (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
                }
              }
            }
            FVar51.ReferenceController =
                 FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController;
            pTVar11 = FStack_b0.WeakRegistry.Object;
            uVar24 = FStack_b0.Id;
            if (FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              aVar26 = (FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController)->
                       SharedReferenceCount;
              do {
                if (aVar26 == (atomic<int>)0x0) {
                  FVar51.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_14ac4262f;
                }
                LOCK();
                aVar23 = (FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController)->
                         SharedReferenceCount;
                bVar20 = aVar26 == aVar23;
                if (bVar20) {
                  (FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController)->
                  SharedReferenceCount = (atomic<int>)((int)aVar26 + 1);
                  aVar23 = aVar26;
                }
                UNLOCK();
                aVar26 = aVar23;
              } while (!bVar20);
              pFVar50 = pFStack_118;
              if (FStack_b0.WeakRegistry.Object !=
                  (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                   *)0x0) {
                pFVar5 = &(FStack_b0.WeakRegistry.Object)->CriticalSection;
                if (pFVar5 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
                pFVar38 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                          ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                                         *)&pTVar11->Entries,uVar24);
                pFVar38->RefCount = pFVar38->RefCount - 1;
                if (pFVar38->RefCount == 0) {
                  if (*(int *)&(pTVar11->KeyIndex).field_0x8 !=
                      *(int *)&(pTVar11->KeyIndex).field_0x34) {
                    uVar27 = UE::Mutable::Private::GetTypeHash((pFVar38->KeyContainer).Key.Object);
                    TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                    ::
                    RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                              ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                                *)&pTVar11->KeyIndex,uVar27,&pFVar38->KeyContainer);
                  }
                  auStack_130[0] = uVar24;
                  lVar49 = lStack_168;
                  if (*(int *)&(pTVar11->Entries).field_0x8 !=
                      *(int *)&(pTVar11->Entries).field_0x34) {
                    TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                    ::RemoveImpl<unsigned_int>
                              ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                                *)&pTVar11->Entries,uVar24,auStack_130);
                    lVar49 = lStack_168;
                  }
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
                pFVar50 = pFStack_118;
                uVar27 = uStack_170;
              }
            }
LAB_14ac4262f:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar51.ReferenceController);
            if (FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController)->
                        WeakReferenceCount;
              aVar26 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar26 == (atomic<int>)0x1) {
                (**(code **)((FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController)->
                             _padding_ + 8))
                          (FStack_b0.WeakRegistry.WeakReferenceCount.ReferenceController,1);
              }
            }
            uVar42 = 0xf;
            if (bVar18 == false) {
              uVar42 = 0xf;
              if ((int)uVar27 < (int)(uint)bVar8) {
                uVar42 = 0xe;
              }
            }
            FStack_108.Id = 0xffffffff;
            FStack_108.WeakRegistry.Object =
                 (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                  *)0x0;
            FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            aiStack_110[0] = *(ushort *)(lStack_158 + 4 + lVar49) + uVar27;
            TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
            ::FHandle::operator=(&FStack_108,pFVar50);
            pTVar10 = pTStack_120;
            uStack_f0 = uVar42;
            if ((((int *)pTStack_120->_padding_ <= aiStack_110) &&
                (aiStack_110 <
                 (int *)pTStack_120->_padding_ + (longlong)(int)pTStack_120->WeakReferenceCount * 10
                )) && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar20)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            aVar26 = pTVar10->SharedReferenceCount;
            if (aVar26 == pTVar10->WeakReferenceCount) {
              aVar26 = (atomic<int>)
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,(ForAnyElementType *)pTVar10,
                                  (int *)&pTVar10->WeakReferenceCount);
            }
            lVar37 = (longlong)(int)aVar26;
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar26 + 1);
            lVar46 = pTVar10->_padding_;
            *(int *)(lVar46 + lVar37 * 0x28) = aiStack_110[0];
            *(undefined4 *)(lVar46 + 8 + lVar37 * 0x28) = 0xffffffff;
            *(undefined8 *)(lVar46 + 0x10 + lVar37 * 0x28) = 0;
            *(undefined8 *)(lVar46 + 0x18 + lVar37 * 0x28) = 0;
            TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
            ::FHandle::operator=((FHandle *)(lVar46 + 8 + lVar37 * 0x28),&FStack_108);
            FVar51.ReferenceController =
                 FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController;
            pTVar11 = FStack_108.WeakRegistry.Object;
            uVar24 = FStack_108.Id;
            *(undefined1 *)(lVar46 + 0x20 + lVar37 * 0x28) = uStack_f0;
            if (FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              aVar26 = (FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController)->
                       SharedReferenceCount;
              do {
                if (aVar26 == (atomic<int>)0x0) {
                  FVar51.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_14ac427a2;
                }
                LOCK();
                aVar23 = (FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController)->
                         SharedReferenceCount;
                bVar20 = aVar26 == aVar23;
                if (bVar20) {
                  (FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController)->
                  SharedReferenceCount = (atomic<int>)((int)aVar26 + 1);
                  aVar23 = aVar26;
                }
                UNLOCK();
                aVar26 = aVar23;
              } while (!bVar20);
              if (FStack_108.WeakRegistry.Object !=
                  (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
                   *)0x0) {
                pFVar5 = &(FStack_108.WeakRegistry.Object)->CriticalSection;
                if (pFVar5 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
                  ReportNotNullPtr();
                }
                EnterCriticalSection((LPCRITICAL_SECTION)pFVar5);
                pFVar38 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                          ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>_>
                                         *)&pTVar11->Entries,uVar24);
                pFVar38->RefCount = pFVar38->RefCount - 1;
                if (pFVar38->RefCount == 0) {
                  if (*(int *)&(pTVar11->KeyIndex).field_0x8 !=
                      *(int *)&(pTVar11->KeyIndex).field_0x34) {
                    uVar27 = UE::Mutable::Private::GetTypeHash((pFVar38->KeyContainer).Key.Object);
                    TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                    ::
                    RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer>
                              ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                                *)&pTVar11->KeyIndex,uVar27,&pFVar38->KeyContainer);
                  }
                  auStack_128[0] = uVar24;
                  lVar49 = lStack_168;
                  if (*(int *)&(pTVar11->Entries).field_0x8 !=
                      *(int *)&(pTVar11->Entries).field_0x34) {
                    TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                    ::RemoveImpl<unsigned_int>
                              ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FEntry,0>,FDefaultSetAllocator>
                                *)&pTVar11->Entries,uVar24,auStack_128);
                    lVar49 = lStack_168;
                  }
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)pFVar5);
                uVar27 = uStack_170;
              }
            }
LAB_14ac427a2:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar51.ReferenceController);
            if (FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController)->
                        WeakReferenceCount;
              aVar26 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar26 == (atomic<int>)0x1) {
                (**(code **)((FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController)->
                             _padding_ + 8))
                          (FStack_108.WeakRegistry.WeakReferenceCount.ReferenceController,1);
              }
            }
            if (bVar19) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            uStack_170 = uVar27 + 1;
          } while ((int)uStack_170 < (int)(uint)*(ushort *)(lStack_158 + 6 + lVar49));
        }
      }
      lVar46 = *(longlong *)param_1;
      uStack_188 = uStack_188 + 1;
      uVar41 = (ulonglong)uStack_188;
    } while ((int)uStack_188 < (int)(uint)*(byte *)(lVar46 + 0x539));
  }
  TVar39 = Tasks::MakeCompletedTask<void>();
  pFVar45 = *(FTaskBase **)TVar39;
  *(undefined8 *)TVar39 = 0;
  if (puStack_e0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puStack_e0 + 6);
    iVar43 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar43 == 1) {
      (**(code **)*puStack_e0)(puStack_e0,1);
    }
  }
  iVar43 = (int)uStack_178;
  uVar41 = (ulonglong)(int)uStack_178;
  pFVar6 = FStack_180.Data + uVar41 * 4;
  FVar48.Data = FStack_180.Data;
  while( true ) {
    if ((int)uVar41 != iVar43) {
      auStack_184[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_184);
    }
    pTVar15 = pTStack_150;
    pTVar10 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
    if (FVar48.Data == pFVar6) break;
    lVar46 = *(longlong *)param_1;
    uVar27 = *(uint *)FVar48.Data;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar40 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    if (pFVar40 == (FTaskBase *)0x0) {
      pFVar40 = (FTaskBase *)0x0;
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(pFVar40,2,true);
      pFVar40->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`impl::Impl::Task_Mutable_GetMeshes'::`51'::<lambda_1>,void,void>::
            _vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar40,L"Task_MutableGetMeshes_GetMesh_GetMaterialOverride",Inherit,None,None);
      pFVar40[1]._padding_ = lVar46;
      *(uint *)&pFVar40[1]._padding_ = uVar27;
      pFVar40[1]._padding_ = (longlong)pTVar10;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar40->_padding_ =
           (longlong)
           &Tasks::Private::TExecutableTask<`impl::Impl::Task_Mutable_GetMeshes'::`51'::<lambda_1>_>
            ::_vftable_;
    }
    if (pFVar45 == (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::TryLaunch(pFVar40,0x100);
    }
    else {
      Tasks::Private::FTaskBase::AddPrerequisites(pFVar40,pFVar45);
      Tasks::Private::FTaskBase::TryLaunch(pFVar40,0x100);
      LOCK();
      paVar4 = &pFVar45->RefCount;
      aVar7 = *paVar4;
      *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
      UNLOCK();
      if (aVar7 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar45->_padding_)(pFVar45,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    uVar41 = uStack_178 & 0xffffffff;
    FVar48.Data = FVar48.Data + 4;
    pFVar45 = pFVar40;
  }
  lVar46 = *(longlong *)param_1;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_150->SharedReferenceCount = (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar40 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (pFVar40 == (FTaskBase *)0x0) {
    pFVar40 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(pFVar40,2,true);
    pFVar40->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`impl::Impl::Task_Mutable_GetMeshes'::`2'::<lambda_2>,void,void>::
          _vftable_;
    Tasks::Private::FTaskBase::Init(pFVar40,L"Task_MutableGetMeshes_GetMesh_Post",Inherit,None,None)
    ;
    pFVar40[1]._padding_ = lVar46;
    pFVar40[1]._padding_ = (longlong)pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar40[1]._padding_ = (longlong)pTStack_120;
    pFVar40[1]._padding_ = (longlong)dVar13;
    pFVar40[1]._padding_ = (longlong)pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar40->_padding_ =
         (longlong)
         &Tasks::Private::TExecutableTask<`impl::Impl::Task_Mutable_GetMeshes'::`2'::<lambda_2>_>::
          _vftable_;
  }
  if (pFVar45 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::AddPrerequisites(pFVar40,pFVar45);
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar40,0x100);
  this_01 = Tasks::Private::GetCurrentTask();
  if ((this_01 == (FTaskBase *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                          ,0x1ff,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  Tasks::Private::FTaskBase::AddNested(this_01,pFVar40);
  if (pFVar40 != (FTaskBase *)0x0) {
    LOCK();
    paVar4 = &pFVar40->RefCount;
    aVar7 = *paVar4;
    *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
    UNLOCK();
    if (aVar7 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar40->_padding_)(pFVar40,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pFVar45 != (FTaskBase *)0x0) {
    LOCK();
    paVar4 = &pFVar45->RefCount;
    aVar7 = *paVar4;
    *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
    UNLOCK();
    if (aVar7 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar45->_padding_)(pFVar45,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if (FStack_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_148.SharedReferenceCount.ReferenceController);
  if (bVar52) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac15f20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`impl::Task_Game_ReleaseInstanceID'::__l3::<lambda_1>,void>::Call(void *param_1)

{
  uint uVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar1 = *(uint *)param_1;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3080,"Mutable_Task_Mutable_ReleaseInstanceID",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xc08);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3080);
  }
  if (uVar1 != 0) {
    if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::Mutable::Private::FSystem::ReleaseInstance(*(FSystem **)((longlong)param_1 + 8),uVar1);
  }
  pTVar3 = CVarClearWorkingMemoryOnUpdateEnd.Ref;
  if (UCustomizableObjectSystemPrivate::bUseBenchmarkingSettings == false) {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar5 = 0;
    }
    else {
      lVar5 = 1;
    }
    if (pTVar3->ShadowedValue[lVar5] == false) goto LAB_14ac0e979;
  }
  if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Mutable::Private::FSystem::ClearWorkingMemory(*(FSystem **)((longlong)param_1 + 8));
LAB_14ac0e979:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac15f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UCustomizableObjectSystem::BeginDestroy'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUnrealMutableModelBulkReader::EndStreaming(*(FUnrealMutableModelBulkReader **)param_1);
  return;
}

// Call @ 14ac15f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_1>,void>::
Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId222,"Mutable_LowPriorityTaskBody",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
  }
  CheckCallable(*(void **)((longlong)param_1 + 0x30));
  pcVar1 = *(code **)((longlong)param_1 + 0x30);
  plVar3 = (longlong *)((longlong)param_1 + 0x40);
  if (*(longlong **)((longlong)param_1 + 0x58) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x58);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac15f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`impl::Task_Game_LockCache'::__l43::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  LARGE_INTEGER LStackX_8;
  TSharedPtr<TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>,1>
  aTStack_38 [2];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3030,"Mutable_Task_Mutable_GetImages",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xbd6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3030);
  }
  FMiscTrace::OutputBeginRegion(L"Task_Mutable_GetImages",(wchar_t *)0x0);
  QueryPerformanceCounter(&LStackX_8);
  dVar2 = (double)LStackX_8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  aTStack_38[0].SharedReferenceCount.ReferenceController = ::operator_new(0x20);
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  if (aTStack_38[0].SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
  {
    aTStack_38[0].Object = ___xmm_00000000000000000000000000000010;
    aTStack_38[0].SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    (aTStack_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)0x1;
    (aTStack_38[0].SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    aTStack_38[0].SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    aTStack_38[0].SharedReferenceCount.ReferenceController[1].SharedReferenceCount =
         (atomic<int>)0x0;
    aTStack_38[0].SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    (aTStack_38[0].SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFHandle___TRegistry_UFGeneratedImageKey_Private_Mutable_UE__UFGeneratedImageData_234___V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    if (((TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>
          *)(aTStack_38[0].SharedReferenceCount.ReferenceController + 1) ==
         (TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>
          *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    LOCK();
    (aTStack_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(aTStack_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar4 = aTStack_38[0].SharedReferenceCount.ReferenceController;
    aTStack_38[0].Object =
         (TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>
          *)(aTStack_38[0].SharedReferenceCount.ReferenceController + 1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  impl::Task_Mutable_GetImages_Loop(param_1,dVar2,aTStack_38,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (!bVar5) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 14ac15fa0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FinishUpdateGlobal'::__l93::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  UCustomizableObjectSystem *pUVar3;
  
  if ((UCustomizableObjectSystemPrivate::SSystem != (UCustomizableObjectSystem *)0x0) &&
     (pUVar3 = UCustomizableObjectSystem::GetInstance(), pUVar3 != (UCustomizableObjectSystem *)0x0)
     ) {
    if (((pUVar3->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Private",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                           ,0x32c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FLogBenchmarkUtil::FinishUpdateMesh
              (&((pUVar3->Private).field0_0x0.DebugPtr)->LogBenchmarkUtil,param_1);
  }
  return;
}

// Call @ 14ac15fb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::MarkRenderStateDirty
            (*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac15fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_1>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::DoConvertResources
            (*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac15fd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FMutableTextureMipDataProvider::GetMips'::__l70::<lambda_1>::operator()'::__l15::<lambda_1>,void>
::Call(void *param_1)

{
  TSharedPtr<FMutableImageOperationData,1> local_18;
  
  local_18.Object = *(FMutableImageOperationData **)param_1;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::Impl::Task_Mutable_UpdateImage(&local_18);
  return;
}

// Call @ 14ac16010

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoCreateBuffers'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoFinishUpdate(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac16020

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::MarkRenderStateDirty'::__l2::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoCancel(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac16030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ac3cfaf) */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`impl::Task_Game_LockCache'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  int iVar3;
  atomic<unsigned_int> aVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  FSystem *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  double dVar10;
  TConsoleVariableData<bool> *pTVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  bool bVar14;
  UCustomizableObjectSystem *this;
  longlong lVar15;
  UCustomizableObjectInstance *this_00;
  UCustomizableInstancePrivate *this_01;
  long64 lVar16;
  UCustomizableObjectSystemPrivate *pUVar17;
  FTaskHandle FVar18;
  FTaskBase *this_02;
  longlong *plVar19;
  undefined ***pppuVar20;
  atomic<int> *paVar21;
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar22;
  TReferenceControllerBase<1> *pTVar23;
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_03;
  bool bVar24;
  undefined1 auStackY_168 [32];
  TReferenceControllerBase<1> *pTStack_130;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> TStack_118;
  LARGE_INTEGER LStack_108;
  undefined8 *puStack_100;
  TReferenceControllerBase<1> *pTStack_f8;
  FMutableTaskGraph *pFStack_f0;
  LARGE_INTEGER LStack_e8;
  double *pdStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTStack_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  undefined ***pppuStack_b0;
  code *apcStack_a8 [2];
  undefined **appuStack_98 [2];
  TReferenceControllerBase<1> *pTStack_88;
  undefined ***pppuStack_80;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> TStack_78;
  longlong alStack_68 [3];
  longlong *plStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3155,"Mutable_Task_Game_ConvertResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xc53);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3155);
  }
  pdStack_e0 = (double *)(*(longlong *)param_1 + 0x750);
  QueryPerformanceCounter(&LStack_108);
  dVar10 = (double)LStack_108.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar13 = IsInGameThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xc56,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this = UCustomizableObjectSystem::GetInstance();
  if (((this == (UCustomizableObjectSystem *)0x0) ||
      (bVar13 = UObjectBase::IsValidLowLevel((UObjectBase *)this),
      pTVar11 = CVarEnableRealTimeMorphTargets.Ref, !bVar13)) ||
     (((uint)this->_padding_ >> 0xf & 1) != 0)) {
    *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
    FinishUpdateGlobal(param_1);
    goto LAB_14ac3d428;
  }
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_14ac3cd1b:
    lVar15 = 0;
  }
  else {
    bVar13 = IsInGameThread();
    lVar15 = 1;
    if (bVar13) goto LAB_14ac3cd1b;
  }
  if (pTVar11->ShadowedValue[lVar15] != false) {
    impl::Subtask_Mutable_PrepareRealTimeMorphData(param_1);
  }
  this_00 = (UCustomizableObjectInstance *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x40));
  if ((this_00 == (UCustomizableObjectInstance *)0x0) ||
     (bVar13 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00), !bVar13)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
    this_01 = UCustomizableObjectInstance::GetPrivate(this_00);
    bVar14 = UCustomizableInstancePrivate::UpdateSkeletalMesh_PostBeginUpdate0
                       (this_01,this_00,param_1);
    if (bVar14) {
      if (CpuChannel->Enabled < 0) {
        UCustomizableInstancePrivate::BuildMaterials(this_01,param_1,this_00);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3192,"Mutable_UpdateSkeletalMesh_PostBeginUpdate1",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                   ,0xc78);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3192);
        UCustomizableInstancePrivate::BuildMaterials(this_01,param_1,this_00);
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (CpuChannel->Enabled < 0) {
        UCustomizableInstancePrivate::PostEditChangePropertyWithoutEditor(this_01);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId3200,"Mutable_UpdateSkeletalMesh_PostBeginUpdate2",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                   ,0xc80);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3200);
        UCustomizableInstancePrivate::PostEditChangePropertyWithoutEditor(this_01);
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  bVar14 = FLogBenchmarkUtil::IsBenchmarkingReportingEnabled();
  if (bVar14) {
    lVar16 = UE::Mutable::Private::FGlobalMemoryCounter::GetPeak();
    *(long64 *)(*(longlong *)param_1 + 0x768) = lVar16;
    lVar15 = *(longlong *)param_1;
    *(longlong *)(lVar15 + 0x770) = *(longlong *)(lVar15 + 0x768) + *(longlong *)(lVar15 + 0x760);
  }
  pUVar17 = UCustomizableObjectSystem::GetPrivate(this);
  pTVar23 = (pUVar17->MutableSystem).SharedReferenceCount.ReferenceController;
  pFVar7 = (pUVar17->MutableSystem).Object;
  if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
    paVar21 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar21 = &pTVar23->SharedReferenceCount;
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  pFStack_f0 = &pUVar17->MutableTaskGraph;
  uVar5 = *(undefined1 *)(*(longlong *)param_1 + 0x4b1);
  uVar6 = *(undefined4 *)(*(longlong *)param_1 + 0x4c0);
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTStack_f8 = pTVar23;
  plStack_50 = FMemory::Malloc(0x28,8);
  *(undefined4 *)(plStack_50 + 1) = uVar6;
  plStack_50[2] = (longlong)pFVar7;
  *plStack_50 = (longlong)
                &TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::`2'::<lambda_1>,1,1>::
                 _vftable_;
  plStack_50[3] = (longlong)pTVar23;
  if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar21 = (atomic<int>)((int)*paVar21 + 1);
    UNLOCK();
  }
  *(undefined1 *)(plStack_50 + 4) = uVar5;
  if (plStack_50 != (longlong *)&DAT_fffffffffffffff8) {
    TStack_78.AllocatorInstance.Data =
         (FScriptContainerElement *)
         TFunctionRefCaller<`impl::Task_Game_ConvertResources'::__l2::<lambda_1>,void>::Call;
  }
  FVar18 = FMutableTaskGraph::AddMutableThreadTask
                     (&pUVar17->MutableTaskGraph,(wchar_t *)&puStack_100,
                      (TUniqueFunction<void___cdecl(void)> *)L"Task_Mutable_ReleaseInstance",
                      &TStack_78);
  Tasks::Private::FTaskHandle::operator=
            (&pUVar17->LastUpdateMutableTask,(FTaskHandle *)FVar18.Pimpl.Reference);
  if (puStack_100 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_100 + 6);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)*puStack_100)(puStack_100,1);
    }
  }
  if (TStack_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    plVar19 = alStack_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar19 = plStack_50;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)0x0,0);
  if (bVar13) {
    *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
    FinishUpdateGlobal(param_1);
  }
  else {
    pTStack_130 = ::operator_new(0x60);
    if (pTStack_130 == (TReferenceControllerBase<1> *)0x0) {
      this_03 = (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar22 = (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(*(longlong *)param_1 + 0x660);
      pTStack_130 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTStack_130->SharedReferenceCount = (atomic<int>)0x1;
      this_03 = (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(pTStack_130 + 1);
      pTStack_130->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_130->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFMutableReleasePlatformOperationData___00_SharedPointerInternals__6B_
      ;
      pTStack_130[2]._padding_ = 0;
      pTStack_130[2].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_130[2].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_130[4].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_130[4].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_130[5].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_130[5].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_130[1]._padding_ = 0;
      pTStack_130[1].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_130[1].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_130[3]._padding_ = 0;
      pTStack_130[3].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_130[3].WeakReferenceCount = (atomic<int>)0x80;
      *(undefined4 *)&pTStack_130[4]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pTStack_130[4]._padding_ + 4) = 0;
      pTStack_130[5]._padding_ = 0;
      if ((this_03 ==
           (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_130);
      if ((this_03 ==
           (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ReleaseOperationData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                              ,0xca4,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar22 = (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(*(longlong *)param_1 + 0x660);
      if ((this_03 ==
           (TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (this_03 != pTVar22) {
      TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this_03,0,*(int *)&this_03->field_0x8);
      if (*(void **)this_03 != (void *)0x0) {
        FMemory::Free(*(void **)this_03);
      }
      *(undefined8 *)this_03 = *(undefined8 *)pTVar22;
      *(undefined8 *)pTVar22 = 0;
      *(undefined4 *)&this_03->field_0x8 = *(undefined4 *)&pTVar22->field_0x8;
      *(undefined4 *)&this_03->field_0xc = *(undefined4 *)&pTVar22->field_0xc;
      *(undefined8 *)&pTVar22->field_0x8 = 0;
      if (&this_03->field_0x10 != &pTVar22->field_0x10) {
        if (*(longlong *)&pTVar22->field_0x20 == 0) {
          memmove(&this_03->field_0x10,&pTVar22->field_0x10,0x10);
        }
        if (*(void **)&this_03->field_0x20 != (void *)0x0) {
          FMemory::Free(*(void **)&this_03->field_0x20);
        }
        *(undefined8 *)&this_03->field_0x20 = *(undefined8 *)&pTVar22->field_0x20;
        *(undefined8 *)&pTVar22->field_0x20 = 0;
        *(undefined4 *)&this_03->field_0x28 = *(undefined4 *)&pTVar22->field_0x28;
        *(undefined4 *)&this_03->field_0x2c = *(undefined4 *)&pTVar22->field_0x2c;
        *(undefined8 *)&pTVar22->field_0x28 = 0;
      }
      *(undefined4 *)&this_03->field_0x30 = *(undefined4 *)&pTVar22->field_0x30;
      *(undefined4 *)&this_03->field_0x34 = *(undefined4 *)&pTVar22->field_0x34;
      *(undefined4 *)&pTVar22->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar22->field_0x34 = 0;
      if (*(longlong *)&pTVar22[1].field_0x8 == 0) {
        *(undefined4 *)(this_03 + 1) = *(undefined4 *)(pTVar22 + 1);
      }
      if (*(void **)&this_03[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_03[1].field_0x8);
      }
      *(undefined8 *)&this_03[1].field_0x8 = *(undefined8 *)&pTVar22[1].field_0x8;
      *(undefined8 *)&pTVar22[1].field_0x8 = 0;
      *(undefined4 *)&this_03[1].field_0x10 = *(undefined4 *)&pTVar22[1].field_0x10;
      *(undefined4 *)&pTVar22[1].field_0x10 = 0;
      pTVar23 = pTStack_f8;
    }
    if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    pppuStack_b0 = (undefined ***)0x0;
    ppuStack_c8 = &TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::`29'::<lambda_2>,1,0>::
                   _vftable_;
    pcStack_d8 = TFunctionRefCaller<`impl::Task_Game_ConvertResources'::__l29::<lambda_2>,void>::
                 Call;
    pTStack_c0 = this_03;
    pTStack_b8 = pTStack_130;
    this_02 = FMemory::Malloc(0x140,0x40);
    if (this_02 == (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x140);
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
      this_02->_padding_ =
           (longlong)
           &___7__TExecutableTaskBase_V__TUniqueFunction___A6AXXZ__XX_Private_Tasks_UE__6B_;
      Tasks::Private::FTaskBase::Init(this_02,L"Mutable_ReleasePlatformData",Default,None,None);
      this_02[1]._padding_ = (longlong)pcStack_d8;
      *(undefined ****)&this_02[1].RefCount = pppuStack_b0;
      this_02[1]._padding_ = (longlong)ppuStack_c8;
      this_02[1]._padding_ = (longlong)pTStack_c0;
      this_02[1]._padding_ = (longlong)pTStack_b8;
      if (this_02[1]._padding_ != 0) {
        pcStack_d8 = (code *)0x0;
      }
      this_02->_padding_ =
           (longlong)&___7__TExecutableTask_V__TUniqueFunction___A6AXXZ___Private_Tasks_UE__6B_;
      Tasks::Private::FTaskBase::TryLaunch(this_02,0x140);
      LOCK();
      paVar2 = &this_02->RefCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_02->_padding_)(this_02,1);
      }
    }
    if (pcStack_d8 != (code *)0x0) {
      pppuVar20 = &ppuStack_c8;
      if (pppuStack_b0 != (undefined ***)0x0) {
        pppuVar20 = pppuStack_b0;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
    appuStack_98[1] = *(undefined ***)param_1;
    TStack_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_118.ArrayNum = 0;
    TStack_118.ArrayMax = 0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pppuStack_80 = (undefined ***)0x0;
    appuStack_98[0] =
         &TFunction_OwnedObject<`impl::Task_Game_ConvertResources'::`29'::<lambda_3>,1,0>::_vftable_
    ;
    apcStack_a8[0] =
         TFunctionRefCaller<`impl::Task_Game_ConvertResources'::__l29::<lambda_3>,void>::Call;
    pTStack_88 = pTVar8;
    FMutableTaskGraph::AddGameThreadTask
              (pFStack_f0,L"Task_Game_Callbacks",(TUniqueFunction<void___cdecl(void)> *)apcStack_a8,
               false,&TStack_118);
    if (apcStack_a8[0] != (code *)0x0) {
      pppuVar20 = appuStack_98;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar20 = pppuStack_80;
      }
      (*(code *)(*pppuVar20)[2])();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FVar12.Data = TStack_118.AllocatorInstance.Data;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>
              ((FTaskHandle *)TStack_118.AllocatorInstance.Data,TStack_118.ArrayNum);
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_130)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
LAB_14ac3d428:
  QueryPerformanceCounter(&LStack_e8);
  *pdStack_e0 = (double)LStack_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar10;
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac16040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`impl::Task_Game_StartUpdate'::__l2::<lambda_2>,void>::Call(void *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> aVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double dVar8;
  FSharedReferencer<1> FVar9;
  uint uVar10;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
  *pTVar11;
  FTextureCache *this;
  TObjectPtr<UCustomizableObjectSystemPrivate>_u_0 TVar12;
  bool bVar13;
  int iVar14;
  atomic<int> aVar15;
  uint uVar16;
  UCustomizableObjectSystem *pUVar17;
  UCustomizableObject *this_00;
  UCustomizableObjectInstance *this_01;
  UCustomizableInstancePrivate *pUVar18;
  UCustomizableObjectPrivate *pUVar19;
  UTexture2D *this_02;
  longlong lVar20;
  FEntry *pFVar21;
  FTaskHandle FVar22;
  undefined ***pppuVar23;
  ulonglong uVar24;
  ForAnyElementType *pFVar25;
  undefined8 *puVar26;
  longlong lVar27;
  FWeakReferencer<1> FVar28;
  undefined1 *puVar29;
  FHandle *pFVar30;
  bool bVar31;
  undefined1 auStackY_1e8 [32];
  undefined1 auStack_198 [8];
  UTexture2D *pUStack_190;
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> TStack_188;
  uint auStack_178 [2];
  uint uStack_170;
  longlong lStack_168;
  FHandle *pFStack_160;
  TSharedRef<FUpdateContextPrivate,1> TStack_158;
  undefined8 uStack_148;
  FId FStack_140;
  LARGE_INTEGER LStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong lStack_100;
  FTextureCache *pFStack_f8;
  UCustomizableInstancePrivate *pUStack_f0;
  TObjectPtr<UCustomizableObjectSystemPrivate>_u_0 TStack_e8;
  undefined8 *puStack_e0;
  LARGE_INTEGER LStack_d8;
  double *pdStack_d0;
  FTaskHandle FStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [16];
  TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> TStack_a8;
  undefined **ppuStack_98;
  longlong lStack_90;
  TReferenceControllerBase<1> *pTStack_88;
  undefined ***pppuStack_80;
  code *apcStack_78 [2];
  undefined **ppuStack_68;
  longlong lStack_60;
  TReferenceControllerBase<1> *pTStack_58;
  undefined ***pppuStack_50;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  bVar31 = -1 < CpuChannel->Enabled;
  plStack_110 = param_1;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3275,"Mutable_Task_Game_LockCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xccb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3275);
  }
  pdStack_d0 = (double *)(*(longlong *)param_1 + 0x740);
  QueryPerformanceCounter(&LStack_118);
  dVar8 = (double)LStack_118.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar13 = IsInGameThread();
  if ((!bVar13) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                          ,0xcce,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar17 = UCustomizableObjectSystem::GetInstance();
  if (pUVar17 != (UCustomizableObjectSystem *)0x0) {
    if (((pUVar17->Private).field0_0x0.DebugPtr == (UCustomizableObjectSystemPrivate *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Private",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                            ,0x32c,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TStack_e8 = (pUVar17->Private).field0_0x0;
    this_00 = (UCustomizableObject *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x48));
    if (this_00 == (UCustomizableObject *)0x0) {
      *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
      FinishUpdateGlobal(param_1);
      goto LAB_14ac3dc8c;
    }
    this_01 = (UCustomizableObjectInstance *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x40));
    if (this_01 != (UCustomizableObjectInstance *)0x0) {
      pUVar18 = UCustomizableObjectInstance::GetPrivate(this_01);
      pUStack_f0 = pUVar18;
      if (*(char *)(*(longlong *)param_1 + 0x4b1) != '\0') {
        if ((*(int *)(*(longlong *)param_1 + 0x4c0) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("OperationData->InstanceID != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                                ,0xcee,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pUVar18->LiveUpdateModeInstanceID == 0) {
          pUVar18->LiveUpdateModeInstanceID = *(uint *)(*(longlong *)param_1 + 0x4c0);
        }
      }
      if (*(char *)(*(longlong *)param_1 + 0xec) != '\0') {
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  (&pUVar18->RelevantParameters,
                   (TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0x490));
      }
      pUVar19 = UCustomizableObject::GetPrivate(this_00);
      pFStack_f8 = &pUVar19->TextureCache;
      lStack_100 = *(longlong *)param_1;
      uStack_170 = *(uint *)(lStack_100 + 0x338);
      uVar24 = (ulonglong)(int)uStack_170;
      lVar27 = *(longlong *)(lStack_100 + 0x330);
      pFVar30 = (FHandle *)(lVar27 + 8);
      lStack_108 = uVar24 * 0x60 + lVar27;
      while( true ) {
        this = pFStack_f8;
        lVar20 = lStack_108;
        lStack_168 = lVar27;
        pFStack_160 = pFVar30;
        if (*(int *)(lStack_100 + 0x338) != (int)uVar24) {
          auStack_198[0] = 0;
          `TCheckedPointerIterator<FInstanceUpdateData::FImage,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(auStack_198);
        }
        if (lVar27 == lVar20) break;
        FStack_140.Resource.Id = 0xffffffff;
        FStack_140.Resource.WeakRegistry.Object =
             (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              *)0x0;
        FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
        ::FHandle::operator=(&FStack_140.Resource,pFVar30);
        FStack_140.SkippedMips = *(int *)(*(longlong *)param_1 + 0x4bc);
        this_02 = FTextureCache::Get(this,&FStack_140);
        if (this_02 != (UTexture2D *)0x0) {
          lVar20 = *(longlong *)param_1;
          pFVar25 = (ForAnyElementType *)(lVar20 + 0x7c8);
          UObjectBase::AddRef((UObjectBase *)this_02);
          pUStack_190 = (UTexture2D *)0x0;
          UObjectBase::AddRef((UObjectBase *)this_02);
          pUStack_190 = this_02;
          if (((pFVar25->Data <= (FScriptContainerElement *)&pUStack_190) &&
              ((FScriptContainerElement *)&pUStack_190 <
               pFVar25->Data + (longlong)*(int *)(lVar20 + 0x7d4) * 8)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = *(int *)(lVar20 + 2000);
          if (iVar14 == *(int *)(lVar20 + 0x7d4)) {
            iVar14 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar25,(int *)(lVar20 + 0x7d4));
          }
          *(int *)(lVar20 + 2000) = iVar14 + 1;
          *(UTexture2D **)(pFVar25->Data + (longlong)iVar14 * 8) = pUStack_190;
          pUStack_190 = (UTexture2D *)0x0;
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_02);
          lVar20 = *(longlong *)param_1;
          pFVar25 = (ForAnyElementType *)(lVar20 + 0x7f8);
          if ((((FHandle *)pFVar25->Data <= pFVar30) &&
              (pFVar30 < (FHandle *)pFVar25->Data + *(int *)(lVar20 + 0x804))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar14 = *(int *)(lVar20 + 0x800);
          if (iVar14 == *(int *)(lVar20 + 0x804)) {
            iVar14 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,pFVar25,(int *)(lVar20 + 0x804));
          }
          *(int *)(lVar20 + 0x800) = iVar14 + 1;
          lVar20 = (longlong)iVar14;
          pFVar4 = pFVar25->Data;
          *(undefined4 *)(pFVar4 + lVar20 * 0x18) = 0xffffffff;
          *(undefined8 *)(pFVar4 + lVar20 * 0x18 + 8) = 0;
          *(undefined8 *)(pFVar4 + lVar20 * 0x18 + 0x10) = 0;
          TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
          ::FHandle::operator=((FHandle *)(pFVar4 + lVar20 * 0x18),pFVar30);
        }
        FVar28.ReferenceController =
             FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController;
        pTVar11 = FStack_140.Resource.WeakRegistry.Object;
        uVar10 = FStack_140.Resource.Id;
        if (FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          aVar3 = (FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController)->
                  SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              FVar28.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14ac3d902;
            }
            LOCK();
            aVar15 = (FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController)->
                     SharedReferenceCount;
            bVar13 = aVar3 == aVar15;
            if (bVar13) {
              (FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController)->
              SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar15 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar15;
          } while (!bVar13);
          if (FStack_140.Resource.WeakRegistry.Object !=
              (TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
               *)0x0) {
            lpCriticalSection = &(FStack_140.Resource.WeakRegistry.Object)->CriticalSection;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            pFVar21 = TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                      ::FindChecked((TMapBase<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>_>
                                     *)&pTVar11->Entries,uVar10);
            pFVar21->RefCount = pFVar21->RefCount - 1;
            if (pFVar21->RefCount == 0) {
              if (*(int *)&(pTVar11->KeyIndex).field_0x8 != *(int *)&(pTVar11->KeyIndex).field_0x34)
              {
                uVar16 = UE::Mutable::Private::GetTypeHash((pFVar21->KeyContainer).Key.Object);
                TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                ::
                RemoveImpl<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer>
                          ((TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FKeyContainer,unsigned_int,0>,FDefaultSetAllocator>
                            *)&pTVar11->KeyIndex,uVar16,&pFVar21->KeyContainer);
              }
              auStack_178[0] = uVar10;
              lVar27 = lStack_168;
              if (*(int *)&(pTVar11->Entries).field_0x8 != *(int *)&(pTVar11->Entries).field_0x34) {
                TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry>,TDefaultMapHashableKeyFuncs<unsigned_int,TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FEntry,0>,FDefaultSetAllocator>
                            *)&pTVar11->Entries,uVar10,auStack_178);
                lVar27 = lStack_168;
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            pFVar30 = pFStack_160;
          }
        }
LAB_14ac3d902:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar28.ReferenceController);
        if (FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController)->
                    WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)((FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController)->
                         _padding_ + 8))
                      (FStack_140.Resource.WeakRegistry.WeakReferenceCount.ReferenceController,1);
          }
        }
        lVar27 = lVar27 + 0x60;
        pFVar30 = pFVar30 + 4;
        uVar24 = (ulonglong)uStack_170;
        param_1 = plStack_110;
      }
      UCustomizableInstancePrivate::PrepareForUpdate(pUStack_f0);
      TVar12 = TStack_e8;
      pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
      puVar26 = (undefined8 *)0x0;
      lStack_90 = *(longlong *)param_1;
      TStack_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      uStack_148 = 0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pppuStack_80 = (undefined ***)0x0;
      ppuStack_98 = &TFunction_OwnedObject<`impl::Task_Game_LockCache'::`43'::<lambda_1>,1,0>::
                     _vftable_;
      TStack_a8.AllocatorInstance.Data =
           (FScriptContainerElement *)
           TFunctionRefCaller<`impl::Task_Game_LockCache'::__l43::<lambda_1>,void>::Call;
      pTStack_88 = pTVar5;
      FVar22 = FMutableTaskGraph::AddMutableThreadTask
                         (&(TStack_e8.DebugPtr)->MutableTaskGraph,(wchar_t *)&puStack_e0,
                          (TUniqueFunction<void___cdecl(void)> *)L"Task_Mutable_GetImages",
                          &TStack_a8);
      if ((FTaskBase *)auStack_b8 != FVar22.Pimpl.Reference) {
        puVar26 = *(undefined8 **)FVar22.Pimpl.Reference;
        *(undefined8 *)FVar22.Pimpl.Reference = 0;
      }
      if (puStack_e0 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puStack_e0 + 6);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)*puStack_e0)(puStack_e0,1);
        }
      }
      if (TStack_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        pppuVar23 = &ppuStack_98;
        if (pppuStack_80 != (undefined ***)0x0) {
          pppuVar23 = pppuStack_80;
        }
        (*(code *)(*pppuVar23)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      FVar9.ReferenceController = TStack_158.SharedReferenceCount.ReferenceController;
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)TStack_158.SharedReferenceCount.ReferenceController,(int)uStack_148)
      ;
      if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        FMemory::Free(FVar9.ReferenceController);
      }
      LoadAdditionalAssetsAndData(&TStack_158);
      FStack_c8.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)TStack_158.Object;
      if (TStack_158.Object != (FUpdateContextPrivate *)0x0) {
        LOCK();
        *(atomic<unsigned_int> *)((longlong)TStack_158.Object + 0x30) =
             (atomic<unsigned_int>)
             ((int)*(atomic<unsigned_int> *)((longlong)TStack_158.Object + 0x30) + 1);
        UNLOCK();
      }
      if (puVar26 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar26 + 6) = *(int *)(puVar26 + 6) + 1;
        UNLOCK();
      }
      lVar27 = 2;
      TStack_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_188.ArrayNum = 2;
      puStack_c0 = puVar26;
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,2,0,&TStack_188.AllocatorInstance,2,&TStack_188.ArrayMax);
      ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
                (TStack_188.AllocatorInstance.Data,&FStack_c8,2);
      lStack_60 = *(longlong *)param_1;
      pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pppuStack_50 = (undefined ***)0x0;
      ppuStack_68 = &TFunction_OwnedObject<`impl::Task_Game_LockCache'::`2'::<lambda_2>,1,0>::
                     _vftable_;
      apcStack_78[0] = TFunctionRefCaller<`impl::Task_Game_LockCache'::__l2::<lambda_2>,void>::Call;
      pTStack_58 = pTVar5;
      FMutableTaskGraph::AddGameThreadTask
                (&(TVar12.DebugPtr)->MutableTaskGraph,L"Task_Game_ConvertResources",
                 (TUniqueFunction<void___cdecl(void)> *)apcStack_78,false,&TStack_188);
      if (apcStack_78[0] != (code *)0x0) {
        pppuVar23 = &ppuStack_68;
        if (pppuStack_50 != (undefined ***)0x0) {
          pppuVar23 = pppuStack_50;
        }
        (*(code *)(*pppuVar23)[2])();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      DestructItems<UE::Tasks::Private::FTaskHandle,int>
                ((FTaskHandle *)TStack_188.AllocatorInstance.Data,TStack_188.ArrayNum);
      if (TStack_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_188.AllocatorInstance.Data);
      }
      puVar29 = auStack_b8;
      do {
        puVar6 = *(undefined8 **)(puVar29 + -8);
        puVar29 = puVar29 + -8;
        lVar27 = lVar27 + -1;
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar6 + 6);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
      } while (lVar27 != 0);
      if (TStack_158.Object != (FUpdateContextPrivate *)0x0) {
        LOCK();
        puVar29 = &((TStack_158.Object)->UpdateNativeCallback).field_0x10;
        iVar14 = *(int *)puVar29;
        *(int *)puVar29 = *(int *)puVar29 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (*(code *)**(undefined8 **)TStack_158.Object)(TStack_158.Object,1);
        }
      }
      if (puVar26 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar26 + 6);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)*puVar26)(puVar26,1);
        }
      }
      goto LAB_14ac3dc8c;
    }
  }
  *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
  FinishUpdateGlobal(param_1);
LAB_14ac3dc8c:
  QueryPerformanceCounter(&LStack_d8);
  *pdStack_d0 = (double)LStack_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar8;
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac16050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l21::<lambda_2>,void>::
Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  longlong alStack_18 [2];
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId229,"Mutable_LowPriorityTaskBodyEnd",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xe5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId229);
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(*(longlong *)param_1 + 0x54) = 0;
  plVar4 = (longlong *)(*(longlong *)param_1 + 0x58);
  if (plVar4 != alStack_18) {
    puVar3 = (undefined8 *)*plVar4;
    *plVar4 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FMutableTaskGraph::TryLaunchMutableTaskLowPriority(*(FMutableTaskGraph **)param_1,true);
  LeaveCriticalSection(lpCriticalSection);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac16060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`impl::Task_Game_ConvertResources'::__l29::<lambda_2>,void>::Call(void *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
  *this;
  FTexturePlatformData *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStackX_8 [8];
  int iStackX_10;
  undefined4 uStack_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3096,"Mutable_Task_Game_ReleasePlatformData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xc18);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3096);
  }
  if (*(longlong *)param_1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OperationData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                       ,0xc1a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(longlong *)param_1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this = *(TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
           **)param_1;
  iVar10 = 0;
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar2 = &(this->Elements).field_0x10;
  uVar6 = 1;
  iVar12 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ac3e07e;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStackX_10 = (int)lVar8;
    iVar7 = iStackX_10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ac3e07e:
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = uStack_9c;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ac3e180;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14ac3e180:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != (int)uStack_40
       ) {
      `TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    this_00 = *(FTexturePlatformData **)
               (*(longlong *)&this->Elements + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    if (this_00 != (FTexturePlatformData *)0x0) {
      FTexturePlatformData::~FTexturePlatformData(this_00);
      ::operator_delete(this_00,0x38);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>,TDefaultMapHashableKeyFuncs<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*,0>,FDefaultSetAllocator>
  ::Reset(this);
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac16070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l12::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoCancel(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac16080

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l12::<lambda_2>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoCancel(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac16090

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMutableTaskGraph::TryLaunchMutableTaskLowPriority'::__l23::<lambda_3>,void>::
Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong alStack_18 [2];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId245,"Mutable_LowPriorityTaskBody",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\FMutableTaskGraph.cpp"
               ,0xf5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId245);
  }
  CheckCallable(*(void **)((longlong)param_1 + 0x30));
  pcVar3 = *(code **)((longlong)param_1 + 0x30);
  plVar6 = (longlong *)((longlong)param_1 + 0x40);
  if (*(longlong **)((longlong)param_1 + 0x58) != (longlong *)0x0) {
    plVar6 = *(longlong **)((longlong)param_1 + 0x58);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5);
  lpCriticalSection = *(LPCRITICAL_SECTION *)param_1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(*(longlong *)param_1 + 0x54) = 0;
  plVar6 = (longlong *)(*(longlong *)param_1 + 0x58);
  if (plVar6 != alStack_18) {
    puVar4 = (undefined8 *)*plVar6;
    *plVar6 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 6);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  FMutableTaskGraph::TryLaunchMutableTaskLowPriority(*(FMutableTaskGraph **)param_1,true);
  LeaveCriticalSection(lpCriticalSection);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac160a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`impl::Task_Game_ConvertResources'::__l29::<lambda_3>,void>::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  UCustomizableObjectSystem *this;
  UCustomizableObjectInstance *this_00;
  UCustomizableObject *pUVar5;
  bool bVar6;
  LARGE_INTEGER LStackX_8;
  LARGE_INTEGER LStackX_10;
  LARGE_INTEGER LStackX_18;
  LARGE_INTEGER LStackX_20;
  LARGE_INTEGER aLStack_48 [4];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3111,"Mutable_Task_Game_Callbacks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
               ,0xc27);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3111);
  }
  lVar1 = *(longlong *)param_1;
  QueryPerformanceCounter(&LStackX_8);
  dVar3 = (double)LStackX_8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\CustomizableObject\\Private\\MuCO\\CustomizableObjectSystem.cpp"
                         ,0xc2a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this = UCustomizableObjectSystem::GetInstance();
  if (((this == (UCustomizableObjectSystem *)0x0) ||
      (bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this), !bVar4)) ||
     (((uint)this->_padding_ >> 0xf & 1) != 0)) {
    *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
    FinishUpdateGlobal(param_1);
    QueryPerformanceCounter(aLStack_48);
    *(double *)(lVar1 + 0x758) =
         (double)aLStack_48[0].QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3;
  }
  else {
    this_00 = (UCustomizableObjectInstance *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)param_1 + 0x40));
    if ((this_00 == (UCustomizableObjectInstance *)0x0) ||
       (bVar4 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00), !bVar4)) {
      *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
      FinishUpdateGlobal(param_1);
      QueryPerformanceCounter(&LStackX_20);
      *(double *)(lVar1 + 0x758) =
           (double)LStackX_20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3;
    }
    else {
      pUVar5 = UCustomizableObjectInstance::GetCustomizableObject(this_00);
      if (pUVar5 == (UCustomizableObject *)0x0) {
        *(undefined1 *)(*(longlong *)param_1 + 0x6b0) = 2;
        FinishUpdateGlobal(param_1);
        QueryPerformanceCounter(&LStackX_10);
        *(double *)(lVar1 + 0x758) =
             (double)LStackX_10.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3;
      }
      else {
        UCustomizableObjectSystem::GetPrivate(this);
        UpdateSkeletalMesh(param_1);
        FinishUpdateGlobal(param_1);
        QueryPerformanceCounter(&LStackX_18);
        *(double *)(lVar1 + 0x758) =
             (double)LStackX_18.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3;
      }
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14ac160b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_3>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::DoCreateBuffers
            (*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac160c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_3>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::DoConvertResources
            (*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac160d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoConvertResources'::__l14::<lambda_4>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FSkeletalMeshStreamIn::DoCancel(*(FSkeletalMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac160e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCustomizableObjectMeshStreamIn::DoInitiate'::__l14::<lambda_4>,void,FSkelMeshUpdateContext_const_&>
::Call(void *param_1,FSkelMeshUpdateContext *param_2)

{
  FCustomizableObjectMeshStreamIn::DoCancelMeshUpdate
            (*(FCustomizableObjectMeshStreamIn **)param_1,param_2);
  return;
}

// Call @ 14ac57d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29::<lambda_1>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  ``UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::<lambda_1>::operator()'::__l29
  ::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return;
}

// Call @ 14ac57d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      return;
    }
  }
  return;
}

// Call @ 14ac57dd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FMutableStreamRequest::Stream'::__l2::<lambda_1>::operator()'::__l26::<lambda_2>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  atomic<bool> aVar1;
  FTaskBase *this;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)(*(longlong *)param_1 + 0xd0) == '\0')) {
    this = *(FTaskBase **)param_1;
    LOCK();
    aVar1 = this->TaskTriggered;
    this->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(this,0xd8);
      return;
    }
  }
  return;
}

// Call @ 14ac57e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l87::<lambda_2>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool local_res18;
  undefined7 uStackX_19;
  
  _local_res18 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_2 == false);
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res18);
  return;
}

// Call @ 14ac57e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>,void,bool,IBulkDataIORequest_*>
::Call(void *param_1,bool *param_2,IBulkDataIORequest **param_3)

{
  `FUnrealMutableResourceProvider::GetImageAsync'::__l115::<lambda_2>::operator()
            (param_1,*param_2,*param_3);
  return;
}

// Call @ 14ac57e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUnrealMutableModelBulkReader::BeginReadBlock'::__l93::<lambda_3>,void,bool,IAsyncReadRequest_*>
::Call(void *param_1,bool *param_2,IAsyncReadRequest **param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool local_res18;
  undefined7 uStackX_19;
  
  _local_res18 = CONCAT71((int7)((ulonglong)param_3 >> 8),*param_2 == false);
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res18);
  return;
}

// Call @ 14ac57ef0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FUnrealMutableResourceProvider::GetImageAsync'::__l124::<lambda_3>,void>::Call
          (void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)param_1 = 0;
  return;
}

