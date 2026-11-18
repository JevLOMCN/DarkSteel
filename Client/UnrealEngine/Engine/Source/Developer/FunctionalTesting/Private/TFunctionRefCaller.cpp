// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 10

// Call @ 148c8a520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AFunctionalAITestBase::GatherRelevantActors'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FAITestSpawnInfoBase_const_&>
::Call(void *param_1,FAITestSpawnInfoBase *param_2)

{
  TObjectPtr<AActor>_u_0 local_res10 [3];
  
  local_res10[0] = (TObjectPtr<AActor>_u_0)(param_2->SpawnLocation).field0_0x0.DebugPtr;
  if (local_res10[0].DebugPtr != (AActor *)0x0) {
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
              (*(TArray<AActor_*,TSizedDefaultAllocator<32>_> **)param_1,&local_res10[0].DebugPtr);
  }
  return;
}

// Call @ 148c8a550

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AFunctionalAITestBase::BeginPlay'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,FAITestSpawnInfoBase_&>
::Call(void *param_1,FAITestSpawnInfoBase *param_2)

{
  AActor *pAVar1;
  
  pAVar1 = (param_2->SpawnLocation).field0_0x0.DebugPtr;
  param_2->SpawnSetName = *(FName *)(*(longlong *)param_1 + 8);
  if (pAVar1 != (AActor *)0x0) {
    return;
  }
  pAVar1 = *(AActor **)(*(longlong *)param_1 + 0x18);
  if (pAVar1 == (AActor *)0x0) {
    pAVar1 = *(AActor **)((longlong)param_1 + 8);
    if (GC::GIsIncrementalReachabilityPending == false) goto LAB_148c8a5b7;
    if (pAVar1 != (AActor *)0x0) goto LAB_148c8a599;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending == false) goto LAB_148c8a5b7;
LAB_148c8a599:
    GC::MarkAsReachable((UObject *)pAVar1);
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
    GC::MarkAsReachable((UObject *)pAVar1);
  }
LAB_148c8a5b7:
  (param_2->SpawnLocation).field0_0x0.DebugPtr = pAVar1;
  return;
}

// Call @ 148c8a5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AFunctionalAITestBase::BeginPlay'::__l2::<lambda_1>,bool,FAITestSpawnSetBase_&>
::Call(void *param_1,FAITestSpawnSetBase *param_2)

{
  FString local_18;
  
  if (param_2->bEnabled == 0) {
    if (4 < (byte)LogFunctionalTest._0_1_) {
      ::FName::ToString(&param_2->Name,&local_18);
      Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_Removing_disabl_151cac4c8,
                 (FLogCategoryBase *)&LogFunctionalTest);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return true;
  }
  return false;
}

// Call @ 148c8a640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AFunctionalAITestBase::GatherRelevantActors'::__l2::<lambda_1>,void,FAITestSpawnSetBase_const_&>
::Call(void *param_1,FAITestSpawnSetBase *param_2)

{
  TObjectPtr<AActor>_u_0 local_res8;
  code *local_18;
  TObjectPtr<AActor>_u_0 *local_10;
  
  local_res8 = (TObjectPtr<AActor>_u_0)(param_2->FallbackSpawnLocation).field0_0x0.DebugPtr;
  if (local_res8.DebugPtr != (AActor *)0x0) {
    TArray<AActor_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<AActor_*>
              (*(TArray<AActor_*,TSizedDefaultAllocator<32>_> **)param_1,&local_res8.DebugPtr);
  }
  local_res8 = *(TObjectPtr<AActor>_u_0 *)param_1;
  local_10 = &local_res8;
  local_18 = TFunctionRefCaller<``AFunctionalAITestBase::GatherRelevantActors'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,FAITestSpawnInfoBase_const_&>
             ::Call;
  (**(code **)(param_2->_padding_ + 0x28))(param_2,&local_18);
  return;
}

// Call @ 148c8a6b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetBackbufferInfo'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  byte *pbVar4;
  FRHIResource *pFStackX_8;
  
  this = *(FRHIResource **)(*(longlong *)param_1 + 0xa0);
  if (this == (FRHIResource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewportRHI.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FRHIResource::AddRef(this);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,&pFStackX_8,this);
  if ((pFStackX_8 == (FRHIResource *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("BackbufferTexture.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\FunctionalTesting\\Private\\FunctionalUIScreenshotTest.cpp"
                         ,0x33,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar3 = (**(code **)(pFStackX_8->_padding_ + 0x20))();
  **(undefined1 **)((longlong)param_1 + 8) = *(undefined1 *)(lVar3 + 0x33);
  pbVar4 = (byte *)(**(code **)(pFStackX_8->_padding_ + 0x20))();
  **(byte **)((longlong)param_1 + 0x10) = *pbVar4 >> 4 & 1;
  if (pFStackX_8 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_8);
  }
  if (this != (FRHIResource *)0x0) {
    FRHIResource::Release(this);
  }
  return;
}

// Call @ 148c8a6c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ReadBackbuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  undefined4 uVar1;
  FRHIResource *this;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  FRHITexture *pFStackX_8;
  TIntRect<int>_u_0 TStack_68;
  FReadSurfaceDataFlags FStack_58;
  FReadSurfaceDataFlags FStack_38;
  
  this = *(FRHIResource **)(*(longlong *)param_1 + 0xa0);
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x298))(GDynamicRHI,&pFStackX_8,this);
  pTVar2 = *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  FStack_58._9_2_ = FStack_38._9_2_;
  FStack_58._11_1_ = FStack_38._11_1_;
  FStack_58._18_2_ = FStack_38._18_2_;
  FStack_58.CubeFace = CubeFace_MAX;
  FStack_58.CompressionMode = RCM_UNorm;
  FStack_58.bLinearToGamma = true;
  FStack_58.MaxDepthRange = 16000.0;
  FStack_58.bOutputStencil = false;
  FStack_58.MipLevel = '\0';
  FStack_58.ArrayIndex = 0;
  lVar3 = (**(code **)(pFStackX_8->_padding_ + 0x20))();
  TStack_68._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  uVar1 = *(undefined4 *)(lVar3 + 0x28);
  lVar3 = (**(code **)(pFStackX_8->_padding_ + 0x20))();
  FStack_38._9_2_ = FStack_58._9_2_;
  FStack_38.bLinearToGamma = FStack_58.bLinearToGamma;
  FStack_38._11_1_ = FStack_58._11_1_;
  FStack_38.MaxDepthRange = FStack_58.MaxDepthRange;
  FStack_38._18_2_ = FStack_58._18_2_;
  FStack_38.bOutputStencil = FStack_58.bOutputStencil;
  FStack_38.MipLevel = FStack_58.MipLevel;
  FStack_38.ArrayIndex = FStack_58.ArrayIndex;
  TStack_68._8_4_ = *(undefined4 *)(lVar3 + 0x24);
  FStack_38.CubeFace = FStack_58.CubeFace;
  FStack_38.CompressionMode = FStack_58.CompressionMode;
  FStack_38.GPUIndex = 0;
  TStack_68._12_4_ = uVar1;
  FRHICommandListImmediate::ReadSurfaceData
            (param_2,pFStackX_8,(TIntRect<int> *)&TStack_68._s_0,pTVar2,&FStack_38);
  if (pFStackX_8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFStackX_8);
  }
  if (this != (FRHIResource *)0x0) {
    FRHIResource::Release(this);
  }
  return;
}

// Call @ 148c8a6d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ReadPixelsFromRT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FTextureRenderTargetResource *pFVar1;
  TIntRect<int>_u_0 TStack_58;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  ushort uStack_36;
  undefined4 uStack_34;
  FReadSurfaceDataFlags FStack_28;
  
  pFVar1 = UTextureRenderTarget::GetRenderTargetResource(*(UTextureRenderTarget **)param_1);
  uStack_36 = FStack_28._18_2_;
  uStack_3f = FStack_28._9_2_;
  TStack_58._8_4_ = *(undefined4 *)(*(longlong *)param_1 + 0x158);
  TStack_58._12_4_ = *(undefined4 *)(*(longlong *)param_1 + 0x15c);
  uStack_3d = FStack_28._11_1_;
  uStack_38 = 0;
  uStack_34 = 0;
  FStack_28._16_8_ = (ulonglong)(ushort)FStack_28._18_2_ << 0x10;
  TStack_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FStack_28.GPUIndex = 0;
  uStack_48 = 6;
  uStack_40 = 1;
  uStack_3c = 0x467a0000;
  FStack_28.bLinearToGamma = true;
  FStack_28.MaxDepthRange = 16000.0;
  FStack_28.CubeFace = CubeFace_MAX;
  FStack_28.CompressionMode = RCM_UNorm;
  FRHICommandListImmediate::ReadSurfaceData
            (param_2,(FRHITexture *)pFVar1->_padding_,(TIntRect<int> *)&TStack_58._s_0,
             *(TArray<FColor,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8),&FStack_28);
  return;
}

// Call @ 148c8a6e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AFunctionalAITestBase::StartSpawning'::__l2::<lambda_1>,void,FAITestSpawnInfoBase_&>
::Call(void *param_1,FAITestSpawnInfoBase *param_2)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  byte bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  FString FStack_58;
  FString FStack_48;
  int iStack_38;
  float fStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  float fStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar7 = (**(code **)(param_2->_padding_ + 8))(param_2);
  if (cVar7 == '\0') {
    ::FName::ToString((FName *)(**(longlong **)((longlong)param_1 + 0x18) + 8),&FStack_48);
    ::FString::PrintfImpl(&FStack_58,L"Spawn set \'%s\' contains invalid entry at index %d");
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogFunctionalTest._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogFunctionalTest);
    }
    **(undefined1 **)((longlong)param_1 + 0x10) = 0;
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    fStack_34 = param_2->PreSpawnDelay;
    if (fStack_34 <= 0.0) {
      if (param_2->SpawnDelay == 0.0) {
        iVar10 = 0;
        if (0 < param_2->NumberToSpawn) {
          do {
            bVar3 = **(byte **)((longlong)param_1 + 0x10);
            bVar9 = (**(code **)(param_2->_padding_ + 0x10))(param_2,*(undefined8 *)param_1);
            iVar10 = iVar10 + 1;
            **(byte **)((longlong)param_1 + 0x10) = bVar9 & bVar3;
          } while (iVar10 < param_2->NumberToSpawn);
        }
      }
      else {
        bVar3 = **(byte **)((longlong)param_1 + 0x10);
        bVar9 = (**(code **)(param_2->_padding_ + 0x10))(param_2,*(undefined8 *)param_1);
        **(byte **)((longlong)param_1 + 0x10) = bVar9 & bVar3;
        if (1 < param_2->NumberToSpawn) {
          lVar4 = *(longlong *)param_1;
          fStack_20 = param_2->SpawnDelay;
          uStack_14 = **(undefined4 **)((longlong)param_1 + 8);
          iStack_24 = param_2->NumberToSpawn + -1;
          uStack_18 = *(undefined4 *)(lVar4 + 0x460);
          pFVar1 = (ForAnyElementType *)(lVar4 + 0x450);
          uStack_1c = uStack_1c & 0xffffff00;
          if (((pFVar1->Data <= (FScriptContainerElement *)&iStack_24) &&
              ((FScriptContainerElement *)&iStack_24 <
               pFVar1->Data + (longlong)*(int *)(lVar4 + 0x45c) * 0x14)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)(lVar4 + 0x458);
          if (iVar10 == *(int *)(lVar4 + 0x45c)) {
            iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,pFVar1,(int *)(lVar4 + 0x45c));
          }
          *(int *)(lVar4 + 0x458) = iVar10 + 1;
          pFVar5 = pFVar1->Data;
          pFVar2 = pFVar5 + (longlong)iVar10 * 0x14;
          *(ulonglong *)pFVar2 = CONCAT44(fStack_20,iStack_24);
          *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_18,uStack_1c);
          *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0x14 + 0x10) = uStack_14;
        }
      }
    }
    else {
      lVar4 = *(longlong *)param_1;
      uStack_28 = **(undefined4 **)((longlong)param_1 + 8);
      uStack_2c = *(undefined4 *)(lVar4 + 0x460);
      pFVar1 = (ForAnyElementType *)(lVar4 + 0x450);
      iStack_38 = param_2->NumberToSpawn;
      uStack_30 = uStack_30 & 0xffffff00;
      if (((pFVar1->Data <= (FScriptContainerElement *)&iStack_38) &&
          ((FScriptContainerElement *)&iStack_38 <
           pFVar1->Data + (longlong)*(int *)(lVar4 + 0x45c) * 0x14)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)(lVar4 + 0x458);
      if (iVar10 == *(int *)(lVar4 + 0x45c)) {
        iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,pFVar1,(int *)(lVar4 + 0x45c));
      }
      *(int *)(lVar4 + 0x458) = iVar10 + 1;
      pFVar5 = pFVar1->Data;
      pFVar2 = pFVar5 + (longlong)iVar10 * 0x14;
      *(ulonglong *)pFVar2 = CONCAT44(fStack_34,iStack_38);
      *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_2c,uStack_30);
      *(undefined4 *)(pFVar5 + (longlong)iVar10 * 0x14 + 0x10) = uStack_28;
    }
  }
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 148c8a6f0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAutomationScreenshotTaker::DeleteSelfNextFrame'::__l5::<lambda_1>,bool,float>::
Call(void *param_1,float *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return false;
}

// Call @ 148c8a720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AFunctionalAITestBase::BeginPlay'::__l2::<lambda_2>,void,FAITestSpawnSetBase_&>
::Call(void *param_1,FAITestSpawnSetBase *param_2)

{
  FAITestSpawnSetBase *local_28;
  undefined8 local_20;
  code *local_18;
  FAITestSpawnSetBase **local_10;
  
  local_20 = *(undefined8 *)param_1;
  local_10 = &local_28;
  local_18 = TFunctionRefCaller<``AFunctionalAITestBase::BeginPlay'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void,FAITestSpawnInfoBase_&>
             ::Call;
  local_28 = param_2;
  (**(code **)(param_2->_padding_ + 0x20))(param_2,&local_18);
  return;
}

