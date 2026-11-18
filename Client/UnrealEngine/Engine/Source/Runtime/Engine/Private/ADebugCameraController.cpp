// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 67

// StaticClass @ 147aa3fc0

UClass * __cdecl ADebugCameraController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADebugCameraController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugCameraController",
               &Z_Registration_Info_UClass_ADebugCameraController.InnerSingleton,
               StaticRegisterNativesADebugCameraController,0x920,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADebugCameraController>,
               InternalVTableHelperCtorCaller<ADebugCameraController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADebugCameraController.InnerSingleton;
}

// ADebugCameraController @ 147aba2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADebugCameraController * __thiscall
ADebugCameraController::ADebugCameraController(ADebugCameraController *this,FVTableHelper *param_1)

{
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->DrawFrustum).field0_0x0.DebugPtr = (UDrawFrustumComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->SelectedActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7ADebugCameraController__6B_;
  (this->SelectedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  memset(&this->SelectedHitPoint,0,0x100);
  (this->SelectedHitPoint).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedHitPoint).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->SelectedHitPoint).Time = 1.0;
  (this->SelectedHitPoint).MyItem = -1;
  (this->SelectedHitPoint).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->SelectedHitPoint).HitObjectHandle.InstanceIndex = -1;
  (this->SelectedHitPoint).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->SelectedHitPoint).HitObjectHandle.field_0x1d = 0;
  (this->OriginalControllerRef).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->OriginalPlayer).field0_0x0.DebugPtr = (UPlayer *)0x0;
  (this->CurrSelectedBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrSelectedBuffer).Data.ArrayNum = 0;
  (this->CurrSelectedBuffer).Data.ArrayMax = 0;
  return this;
}

// ADebugCameraController @ 147aba3e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADebugCameraController * __thiscall
ADebugCameraController::ADebugCameraController
          (ADebugCameraController *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  APlayerController::APlayerController((APlayerController *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->SelectedActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  (this->SelectedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&___7ADebugCameraController__6B_;
  memset(&this->SelectedHitPoint,0,0x100);
  (this->SelectedHitPoint).Time = 1.0;
  (this->SelectedHitPoint).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedHitPoint).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->SelectedHitPoint).MyItem = -1;
  (this->SelectedHitPoint).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->SelectedHitPoint).HitObjectHandle.InstanceIndex = -1;
  (this->SelectedHitPoint).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->SelectedHitPoint).HitObjectHandle.field_0x1d = 0;
  (this->CurrSelectedBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrSelectedBuffer).Data.ArrayNum = 0;
  (this->CurrSelectedBuffer).Data.ArrayMax = 0;
  (this->OriginalControllerRef).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->OriginalPlayer).field0_0x0.DebugPtr = (UPlayer *)0x0;
  this->bIsFrozenRendering = 0;
  (this->DrawFrustum).field0_0x0.DebugPtr = (UDrawFrustumComponent *)0x0;
  this->SpeedScale = 1.0;
  this->InitialMaxSpeed = 0.0;
  this->InitialAccel = 0.0;
  this->InitialDecel = 0.0;
  AActor::SetHidden((AActor *)this,false);
  this->bIsOrbitingSelectedActor = 0;
  this->bOrbitPivotUseCenter = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 1;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 4;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastOrbitPawnLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastOrbitPawnLocation).field0_0x0._s_0.Y = (double)uVar5;
  (this->LastOrbitPawnLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OrbitPivot).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OrbitPivot).field0_0x0._s_0.Y = (double)uVar5;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  puVar3 = &this->field_0x788;
  this->bEnableBufferVisualization = 0;
  this->bLastDisplayEnabled = 1;
  this->bIsBufferVisualizationInputSetup = 0;
  this->bEnableBufferVisualizationFullMode = 0;
  (this->OrbitPivot).field0_0x0._s_0.Z = (double)uVar5;
  this->OrbitRadius = 30.0;
  this->LastViewModeSettingsIndex = 0;
  return this;
}

// ~ADebugCameraController @ 147abebe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::~ADebugCameraController(ADebugCameraController *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7ADebugCameraController__6B_;
  pFVar1 = (this->CurrSelectedBuffer).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  APlayerController::~APlayerController((APlayerController *)this);
  return;
}

// AddCheats @ 147ac47e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::AddCheats(ADebugCameraController *this,bool param_1)

{
  APlayerController::AddCheats((APlayerController *)this,true);
  return;
}

// ApplySpeedScale @ 147ac6c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ApplySpeedScale(ADebugCameraController *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((longlong *)this->_padding_ != (longlong *)0x0) &&
     (lVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x760))(), lVar2 != 0)) {
    pUVar3 = Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(float *)(lVar2 + 400) = this->InitialMaxSpeed * this->SpeedScale;
      *(float *)(lVar2 + 0x194) = this->InitialAccel * this->SpeedScale;
      *(float *)(lVar2 + 0x198) = this->InitialDecel * this->SpeedScale;
    }
  }
  return;
}

// BufferVisualizationMoveDown @ 147ac85a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::BufferVisualizationMoveDown(ADebugCameraController *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
    GetBufferVisualizationOverviewTargets(this,&local_18);
    GetNextBuffer(this,&local_18,4);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// BufferVisualizationMoveLeft @ 147ac8600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::BufferVisualizationMoveLeft(ADebugCameraController *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
    GetBufferVisualizationOverviewTargets(this,&local_18);
    GetNextBuffer(this,&local_18,-1);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// BufferVisualizationMoveRight @ 147ac8660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::BufferVisualizationMoveRight(ADebugCameraController *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
    GetBufferVisualizationOverviewTargets(this,&local_18);
    GetNextBuffer(this,&local_18,1);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// BufferVisualizationMoveUp @ 147ac86c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::BufferVisualizationMoveUp(ADebugCameraController *this)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
    GetBufferVisualizationOverviewTargets(this,&local_18);
    GetNextBuffer(this,&local_18,-4);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// ConsoleCommand @ 147acb7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
ADebugCameraController::ConsoleCommand
          (ADebugCameraController *this,FString *__return_storage_ptr__,FString *param_1,
          bool param_2)

{
  ulong64 uVar1;
  int iVar2;
  UGameViewportClient *pUVar3;
  longlong lVar4;
  code *pcVar5;
  APlayerController *pAVar6;
  bool bVar7;
  char cVar8;
  wchar_t *_Dest;
  wchar_t *pwVar9;
  UWorld *pUVar10;
  int iVar11;
  wchar_t *pwVar12;
  ForAnyElementType FVar13;
  UConsole *pUVar14;
  int iVar15;
  size_t _Count;
  int iVar16;
  wchar_t *local_78;
  FString local_70;
  FOutputDevice local_60;
  FString local_50;
  UConsole *local_40;
  
  if (this->_padding_ != 0) {
    pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    if (pUVar3 == (UGameViewportClient *)0x0) {
      pUVar14 = (UConsole *)0x0;
    }
    else {
      pUVar14 = (pUVar3->ViewportConsole).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar14 != (UConsole *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
    }
    ::FString::FString(&local_50,L"");
    FOutputDevice::FOutputDevice(&local_60);
    local_60._padding_ = (longlong)&___7FConsoleOutputDevice__6B_;
    iVar11 = (param_1->Data).ArrayNum;
    local_60.bAutoEmitLineTerminator = false;
    iVar16 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar16 = 0;
    }
    _Count = (size_t)iVar16;
    uVar1 = _Count * 2 + 2;
    local_40 = pUVar14;
    _Dest = FMemory::Malloc(uVar1,0);
    pwVar9 = FMemory::Malloc(uVar1,0);
    iVar2 = (param_1->Data).ArrayNum;
    iVar11 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar11 = 0;
    }
    if (iVar16 < iVar11) {
      iVar11 = iVar16;
    }
    iVar15 = 0;
    if (0 < iVar11) {
      iVar15 = iVar11;
    }
    if (iVar2 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    local_78 = _Dest;
    ::FString::ConstructFromPtrSize(&local_70,pwVar12,iVar15);
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_70.Data.ArrayNum != 0) {
      FVar13.Data = local_70.Data.AllocatorInstance.Data;
    }
    wcsncpy(_Dest,(wchar_t *)FVar13.Data,_Count);
    _Dest[_Count] = L'\0';
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    bVar7 = FParse::Line(&local_78,pwVar9,iVar16 + 1,false);
    if (bVar7) {
      do {
        lVar4 = this->_padding_;
        pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x28) + 8);
        pUVar10 = AActor::GetWorld((AActor *)this);
        cVar8 = (*pcVar5)(lVar4 + 0x28,pUVar10,pwVar9);
        if (cVar8 == '\0') {
          lVar4 = this->_padding_;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar6 = (this->OriginalControllerRef).field0_0x0.DebugPtr,
             pAVar6 != (APlayerController *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar6);
          }
          *(TObjectPtr<APlayerController>_u_0 *)(lVar4 + 0x30) =
               (this->OriginalControllerRef).field0_0x0;
          lVar4 = this->_padding_;
          pcVar5 = *(code **)(*(longlong *)(lVar4 + 0x28) + 8);
          pUVar10 = AActor::GetWorld((AActor *)this);
          (*pcVar5)(lVar4 + 0x28,pUVar10,pwVar9);
          lVar4 = this->_padding_;
          if (lVar4 != 0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            *(ADebugCameraController **)(lVar4 + 0x30) = this;
          }
        }
        bVar7 = FParse::Line(&local_78,pwVar9,iVar16 + 1,false);
      } while (bVar7);
    }
    FMemory::Free(_Dest);
    FMemory::Free(pwVar9);
    if (!param_2) {
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar13.Data = local_50.Data.AllocatorInstance.Data;
      }
      ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar13.Data);
      FOutputDevice::~FOutputDevice(&local_60);
      if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    FOutputDevice::~FOutputDevice(&local_60);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// ConsumeAxisMotion @ 147acbc70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::ConsumeAxisMotion(ADebugCameraController *this,float param_1)

{
  return;
}

// CycleViewMode @ 147acf590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::CycleViewMode(ADebugCameraController *this)

{
  int iVar1;
  EViewModeIndex EVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  UWorld *this_00;
  UGameViewportClient *pUVar8;
  UClass *pUVar9;
  wchar_t *pwVar10;
  FString *pFVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  uint local_a8 [2];
  ForAnyElementType local_a0;
  undefined8 local_98;
  FString local_90;
  FString local_80;
  void *local_70 [2];
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (this->bEnableBufferVisualization != 0) {
    ToggleBufferVisualizationOverviewMode(this);
  }
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar8 = UWorld::GetGameViewport(this_00);
  if (pUVar8 != (UGameViewportClient *)0x0) {
    pUVar9 = UDebugCameraControllerSettings::StaticClass();
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pUVar3 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      pFVar11 = GetTypeName<UDebugCameraControllerSettings>(&local_60);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar9 = UDebugCameraControllerSettings::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar9->_padding_)) {
      pFVar11 = GetTypeName<UDebugCameraControllerSettings>(&local_50);
      pwVar10 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<UObject>(&local_40,pUVar3);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar16);
    }
    iVar12 = 0;
    uVar17 = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98 = 0;
    iVar1 = *(int *)&pUVar3[1].field_0x18;
    lVar14 = *(longlong *)&pUVar3[1].field_0x10;
    lVar15 = (longlong)iVar1 * 0x10 + lVar14;
    while( true ) {
      if (*(int *)&pUVar3[1].field_0x18 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FDebugCameraControllerSettingsViewModeIndex,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
        iVar12 = (int)local_98;
      }
      if (lVar14 == lVar15) break;
      local_a8[0] = (uint)*(byte *)(lVar14 + 8);
      iVar6 = iVar12;
      if ((local_a0.Data <= (FScriptContainerElement *)local_a8) &&
         ((FScriptContainerElement *)local_a8 < local_a0.Data + (longlong)local_98._4_4_ * 4)) {
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
        iVar6 = (int)local_98;
      }
      if (iVar6 == local_98._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_a0,(int *)((longlong)&local_98 + 4));
      }
      iVar12 = iVar6 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar12);
      lVar14 = lVar14 + 0x10;
      *(uint *)(local_a0.Data + (longlong)iVar6 * 4) = local_a8[0];
    }
    if (iVar12 == 0) {
      if (2 < (byte)LogPlayerController._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
      }
    }
    else {
      EVar2 = pUVar8->ViewModeIndex;
      uVar13 = uVar17;
      if (this->LastViewModeSettingsIndex < iVar12) {
        uVar13 = (this->LastViewModeSettingsIndex + 1) % iVar12;
      }
      uVar7 = uVar17;
      if ((int)uVar13 < iVar12) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(EViewModeIndex *)(local_a0.Data + (longlong)(int)uVar13 * 4) != EVar2) {
        pwVar10 = GetViewModeName(*(EViewModeIndex *)(local_a0.Data + (longlong)(int)uVar13 * 4));
        ::FString::FString(&local_90,pwVar10);
        if (local_90.Data.ArrayNum < 2) {
          if (2 < (byte)LogPlayerController._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      (&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
          }
        }
        else {
          ::FString::FString(&local_80,L"VIEWMODE ");
          if (local_90.Data.ArrayNum != 0) {
            uVar17 = local_90.Data.ArrayNum - 1;
          }
          ::FString::AppendChars(&local_80,(wchar_t *)local_90.Data.AllocatorInstance.Data,uVar17);
          (**(code **)(pUVar8->_padding_ + 0x340))(pUVar8,local_70,&local_80);
          if (local_70[0] != (void *)0x0) {
            FMemory::Free(local_70[0]);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
      }
      this->LastViewModeSettingsIndex = uVar13;
    }
    if (local_a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data);
    }
  }
  return;
}

// DecreaseCameraSpeed @ 147acfab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::DecreaseCameraSpeed(ADebugCameraController *this)

{
  float fVar1;
  
  fVar1 = this->SpeedScale - __real_3d4ccccd;
  if (fVar1 <= __real_3d4ccccd) {
    fVar1 = __real_3d4ccccd;
  }
  this->SpeedScale = fVar1;
                    /* WARNING: Could not recover jumptable at 0x000147acfad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xfa8))();
  return;
}

// DecreaseFOV @ 147acfae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::DecreaseFOV(ADebugCameraController *this)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    fVar3 = (float)(**(code **)(lVar2 + 0x800))(plVar1);
    (**(code **)(lVar2 + 0x808))(plVar1,fVar3 - __real_3f800000);
  }
  return;
}

// EnableDebugBuffers @ 147ad6520

bool __cdecl ADebugCameraController::EnableDebugBuffers(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarForceDebugViewModes.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] == 1;
    }
  }
  return pTVar1->ShadowedValue[0] == 1;
}

// EnableDebugViewmodes @ 147ad6530

bool __cdecl ADebugCameraController::EnableDebugViewmodes(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarForceDebugViewModes.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1] == 1;
    }
  }
  return pTVar1->ShadowedValue[0] == 1;
}

// EndSpectatingState @ 147ad6540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::EndSpectatingState(ADebugCameraController *this)

{
                    /* WARNING: Could not recover jumptable at 0x000147ad6543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xf48))();
  return;
}

// GetBufferMaterialName @ 147ae3ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
ADebugCameraController::GetBufferMaterialName
          (ADebugCameraController *this,FString *__return_storage_ptr__,FString *param_1)

{
  FBufferVisualizationData *this_00;
  FName *pFVar1;
  UMaterialInterface *pUVar2;
  wchar_t *pwVar3;
  FName local_res18 [2];
  
  if (1 < (param_1->Data).ArrayNum) {
    this_00 = GetBufferVisualizationData();
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(local_res18,pwVar3);
    pUVar2 = FBufferVisualizationData::GetMaterial(this_00,*pFVar1);
    if (pUVar2 != (UMaterialInterface *)0x0) {
      local_res18[0] = (FName)pUVar2->_padding_;
      ::FName::ToString(local_res18,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetBufferVisualizationOverviewTargets @ 147ae3d40

/* WARNING: Removing unreachable block (ram,0x000147ae4090) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
ADebugCameraController::GetBufferVisualizationOverviewTargets
          (ADebugCameraController *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  FBufferVisualizationData *this_00;
  FName *pFVar5;
  UMaterialInterface *pUVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  IConsoleManager *pIVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FName local_res10;
  FName local_res18;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar9 = (ulonglong)_tls_index;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar9 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar8 = IConsoleManager::Get();
    ::CVar = (IConsoleVariable *)
             (**(code **)((longlong)*pIVar8 + 0xc0))
                       (pIVar8,L"r.BufferVisualizationOverviewTargets",1);
    _Init_thread_footer(&::_TSS0);
  }
  if (::CVar == (IConsoleVariable *)0x0) {
    if (2 < (byte)LogPlayerController._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
    }
  }
  else {
    (**(code **)(*(longlong *)::CVar + 0xd8))(::CVar,&local_58);
    while( true ) {
      iVar4 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      if ((iVar4 == 0) || (0xf < __return_storage_ptr__->ArrayNum)) break;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::FString(&local_28,L",");
      bVar3 = ::FString::Split(&local_58,&local_28,&local_68,&local_78);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (!bVar3) {
        iVar4 = local_58.Data.ArrayNum + -1;
        if (local_58.Data.ArrayNum == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
      }
      ::FString::TrimStartInline(&local_68);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar11.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_48,(wchar_t *)FVar11.Data);
      if (local_48.Data.ArrayNum < 2) {
LAB_147ae3eba:
        ::FString::FString(&local_38,L"");
      }
      else {
        this_00 = GetBufferVisualizationData();
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar11.Data = local_48.Data.AllocatorInstance.Data;
        }
        pFVar5 = ::FName::FName(&local_res18,(wchar_t *)FVar11.Data);
        pUVar6 = FBufferVisualizationData::GetMaterial(this_00,*pFVar5);
        if (pUVar6 == (UMaterialInterface *)0x0) goto LAB_147ae3eba;
        local_res10 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_res10,&local_38);
      }
      iVar4 = local_38.Data.ArrayNum;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (iVar4 < 2) {
        ::FString::FString(&local_98,L"");
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 <
             pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar10 = 0;
        *(FScriptContainerElement **)pFVar10 = local_98.Data.AllocatorInstance.Data;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar10 + 8) = local_98.Data.ArrayNum;
        *(int *)(pFVar10 + 0xc) = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
      }
      else {
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar11.Data = local_68.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_88,(wchar_t *)FVar11.Data);
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
          return pTVar7;
        }
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar10 = 0;
        *(FScriptContainerElement **)pFVar10 = local_88.Data.AllocatorInstance.Data;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar10 + 8) = local_88.Data.ArrayNum;
        *(int *)(pFVar10 + 0xc) = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
      }
      iVar4 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange(&local_58,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar4);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetNextBuffer @ 147ae9d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::GetNextBuffer
          (ADebugCameraController *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FString *this_00;
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ulonglong uVar7;
  ulonglong uVar10;
  
  if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
    uVar7 = 0;
    this_00 = &this->CurrSelectedBuffer;
    uVar9 = 0;
    if (1 < (this->CurrSelectedBuffer).Data.ArrayNum) {
      iVar5 = param_1->ArrayNum;
      uVar10 = uVar7;
      uVar15 = uVar7;
      if (0 < iVar5) {
        do {
          uVar9 = (uint)uVar10;
          uVar4 = 0;
          if ((int)uVar9 < iVar5) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar16 = (param_1->AllocatorInstance).Data;
          iVar5 = (this->CurrSelectedBuffer).Data.ArrayNum;
          iVar1 = *(int *)(pFVar16 + uVar15 + 8);
          if (iVar1 == iVar5) {
            if (iVar1 < 2) goto LAB_147ae9e12;
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(pFVar16 + uVar15),
                               (wchar_t *)(this_00->Data).AllocatorInstance.Data);
            bVar3 = iVar5 == 0;
          }
          else {
            bVar3 = iVar1 + iVar5 == 1;
          }
          if (bVar3) goto LAB_147ae9e12;
          iVar5 = param_1->ArrayNum;
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar15 = uVar15 + 0x10;
        } while ((int)(uVar9 + 1) < iVar5);
      }
      ::FString::Empty(this_00);
      uVar9 = 0;
    }
LAB_147ae9e12:
    uVar4 = 0;
    if ((this->CurrSelectedBuffer).Data.ArrayNum < 2) {
      iVar5 = param_1->ArrayNum;
      pFVar16 = (param_1->AllocatorInstance).Data;
      pFVar13 = pFVar16 + (longlong)iVar5 * 0x10;
      while( true ) {
        if (param_1->ArrayNum != iVar5) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar16 == pFVar13) {
          return;
        }
        local_40 = *(int *)(pFVar16 + 8);
        lVar11 = (longlong)local_40;
        _Src = *(void **)pFVar16;
        local_48.Data = (FScriptContainerElement *)0x0;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_40,0,&local_48,local_40,&local_3c);
          memcpy(local_48.Data,_Src,lVar11 * 2);
        }
        if (1 < local_40) break;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        pFVar16 = pFVar16 + 0x10;
      }
      uVar9 = local_40 - 1;
      if (local_40 == 0) {
        uVar9 = uVar4;
      }
      ::FString::AssignRange(this_00,(wchar_t *)local_48.Data,uVar9);
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
    }
    else {
      iVar5 = -param_2;
      if (-param_2 < 0) {
        iVar5 = param_2;
      }
      if (iVar5 == 1) {
        uVar14 = ((int)uVar9 >> 0x1f & 3U) + uVar9 & 0xfffffffc;
      }
      else {
        uVar14 = uVar9 & 0x80000003;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
        }
      }
      uVar12 = uVar14;
      do {
        uVar8 = uVar12 + iVar5;
        if (param_1->ArrayNum <= (int)uVar8) break;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar12 = uVar8;
      } while ((int)uVar6 < 3);
      uVar6 = param_2 + uVar9;
      uVar8 = uVar12;
      if (((int)uVar14 <= (int)uVar6) && (uVar8 = uVar6, (int)uVar12 < (int)uVar6)) {
        uVar8 = uVar14;
      }
      while (uVar8 != uVar9) {
        uVar6 = uVar4;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (1 < *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10 + 8)) {
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          ::FString::operator=
                    (this_00,(FString *)
                             ((param_1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
          return;
        }
        uVar6 = uVar8 + param_2;
        uVar8 = uVar12;
        if (((int)uVar14 <= (int)uVar6) && (uVar8 = uVar6, (int)uVar12 < (int)uVar6)) {
          uVar8 = uVar14;
        }
      }
    }
  }
  return;
}

// GetNextBuffer @ 147aea080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::GetNextBuffer(ADebugCameraController *this,int param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
    GetBufferVisualizationOverviewTargets(this,&local_18);
    GetNextBuffer(this,&local_18,param_1);
    DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPivotForOrbit @ 147aea650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
ADebugCameraController::GetPivotForOrbit(ADebugCameraController *this,TVector<double> *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  uint uVar16;
  AActor *this_00;
  UClass *pUVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  undefined1 *puVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  UClass *local_1e0;
  UClass *local_1d8;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0;
  undefined7 uStack_19f;
  undefined1 local_198 [192];
  undefined1 *local_d8;
  int local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_248;
  bVar13 = FWeakObjectPtr::IsValid(&(this->SelectedActor).WeakPtr);
  if (!bVar13) {
    return false;
  }
  if (this->bOrbitPivotUseCenter == 0) {
    dVar4 = *(double *)&(this->SelectedHitPoint).Location.field_0x8;
    (param_1->field0_0x0)._s_0.X = *(double *)&(this->SelectedHitPoint).Location;
    (param_1->field0_0x0)._s_0.Y = dVar4;
    (param_1->field0_0x0)._s_0.Z = *(double *)&(this->SelectedHitPoint).Location.field_0x10;
    return true;
  }
  local_1e8 = 0;
  local_218 = ZEXT816(0);
  iVar23 = 0;
  local_208 = ZEXT816(0);
  local_1f8 = ZEXT816(0);
  this_00 = (AActor *)FWeakObjectPtr::Get(&(this->SelectedActor).WeakPtr);
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0;
  local_cc = 0x18;
  if (this_00 == (AActor *)0x0) goto LAB_147aea7d4;
  pUVar17 = Z_Construct_UClass_UMeshComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar17 != (UClass *)0x0) goto LAB_147aea73b;
LAB_147aea76e:
    pUVar18 = (UClass *)0x0;
  }
  else {
    if (pUVar17 == (UClass *)0x0) goto LAB_147aea76e;
    UE::GC::MarkAsReachable((UObject *)pUVar17);
LAB_147aea73b:
    pUVar18 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar18 == (UClass *)0x0) goto LAB_147aea76e;
    iVar1 = (int)pUVar18->_padding_;
    if (((int)pUVar17->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar17->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar18->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    pUVar18 = pUVar17;
    if (!bVar13) goto LAB_147aea76e;
  }
  pUVar19 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar18 == pUVar19) {
    local_1e0 = pUVar17;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    AActor::
    ForEachComponent_Internal<UMeshComponent,1,0,_AActor::GetComponents<UMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_1e0,
               (TArray<UMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *
               )local_198);
  }
  else {
    local_1d8 = pUVar17;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar17);
    }
    AActor::
    ForEachComponent_Internal<UMeshComponent,0,0,_AActor::GetComponents<UMeshComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_1d8,
               (TArray<UMeshComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_> *
               )local_198);
  }
LAB_147aea7d4:
  uVar21 = 0;
  if (0 < local_d0) {
    lVar22 = 0;
    dVar5 = (double)local_1f8._0_8_;
    dVar9 = (double)local_1f8._8_8_;
    dVar4 = (double)local_208._8_8_;
    dVar10 = (double)local_218._0_8_;
    dVar11 = (double)local_208._0_8_;
    dVar12 = (double)local_218._8_8_;
    do {
      uVar16 = 0;
      if ((int)uVar21 < local_d0) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if (uVar16 == 0) {
        local_228 = (longlong)(int)uVar21;
        local_220 = (longlong)local_d0;
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar3 = (code *)swi(3);
          uVar14 = (*pcVar3)();
          return (bool)uVar14;
        }
      }
      puVar20 = local_198;
      if (local_d8 != (undefined1 *)0x0) {
        puVar20 = local_d8;
      }
      plVar2 = *(longlong **)(puVar20 + lVar22);
      dVar7 = dVar5;
      dVar8 = dVar9;
      dVar6 = dVar4;
      dVar24 = dVar10;
      dVar26 = dVar11;
      dVar25 = dVar12;
      if (((*(byte *)(plVar2 + 0x13) & 1) != 0) &&
         (cVar15 = (**(code **)(*plVar2 + 0x560))(plVar2), cVar15 != '\0')) {
        dVar6 = (double)plVar2[0x22] + (double)plVar2[0x25];
        uVar28 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar7 = (double)plVar2[0x23] + (double)plVar2[0x26];
        dVar8 = (double)plVar2[0x24] + (double)plVar2[0x27];
        uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_1a0 = 1;
        dVar24 = (double)plVar2[0x22] - (double)plVar2[0x25];
        dVar25 = (double)plVar2[0x23] - (double)plVar2[0x26];
        dVar26 = (double)plVar2[0x24] - (double)plVar2[0x27];
        local_1b0._8_8_ = dVar8;
        local_1b0._0_8_ = dVar7;
        local_1d0._8_8_ = dVar25;
        local_1d0._0_8_ = dVar24;
        local_1c0._8_8_ = dVar6;
        local_1c0._0_8_ = dVar26;
        uVar27 = (undefined4)((ulonglong)dVar25 >> 0x20);
        if ((char)local_1e8 == '\0') {
          local_1e8 = CONCAT71(uStack_19f,1);
          local_1d0._8_4_ = SUB84(dVar25,0);
          local_1d0._12_4_ = uVar27;
          local_218._8_4_ = SUB84(dVar25,0);
          local_218._0_8_ = dVar24;
          local_218._12_4_ = uVar27;
          local_1c0._8_4_ = SUB84(dVar6,0);
          local_1c0._12_4_ = uVar28;
          local_208._8_4_ = SUB84(dVar6,0);
          local_208._0_8_ = dVar26;
          local_208._12_4_ = uVar28;
          local_1b0._8_4_ = SUB84(dVar8,0);
          local_1b0._12_4_ = uVar29;
          local_1f8._8_4_ = SUB84(dVar8,0);
          local_1f8._0_8_ = dVar7;
          local_1f8._12_4_ = uVar29;
        }
        else {
          if (dVar24 <= dVar10) {
            dVar10 = dVar24;
          }
          if (dVar25 <= dVar12) {
            dVar12 = dVar25;
          }
          if (dVar26 <= dVar11) {
            dVar11 = dVar26;
          }
          if (dVar4 <= dVar6) {
            dVar4 = dVar6;
          }
          if (dVar5 <= dVar7) {
            dVar5 = dVar7;
          }
          if (dVar9 <= dVar8) {
            dVar9 = dVar8;
          }
          local_218._8_8_ = dVar12;
          local_218._0_8_ = dVar10;
          local_208._8_8_ = dVar4;
          local_208._0_8_ = dVar11;
          local_1f8._8_8_ = dVar9;
          local_1f8._0_8_ = dVar5;
          dVar6 = dVar4;
          dVar7 = dVar5;
          dVar8 = dVar9;
          dVar24 = dVar10;
          dVar26 = dVar11;
          dVar25 = dVar12;
        }
        iVar23 = iVar23 + 1;
      }
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 8;
      dVar5 = dVar7;
      dVar9 = dVar8;
      dVar4 = dVar6;
      dVar10 = dVar24;
      dVar11 = dVar26;
      dVar12 = dVar25;
    } while ((int)uVar21 < local_d0);
    if (0 < iVar23) {
      dVar4 = (dVar7 + dVar25) * __real_3fe0000000000000;
      dVar5 = (dVar8 + dVar26) * __real_3fe0000000000000;
      (param_1->field0_0x0)._s_0.X = (dVar6 + dVar24) * __real_3fe0000000000000;
      (param_1->field0_0x0)._s_0.Y = dVar4;
      (param_1->field0_0x0)._s_0.Z = dVar5;
      if (local_d8 != (undefined1 *)0x0) {
        FMemory::Free(local_d8);
      }
      return true;
    }
  }
  if (local_d8 != (undefined1 *)0x0) {
    FMemory::Free(local_d8);
  }
  return false;
}

// GetPrivateStaticClass @ 147aeae40

UClass * __cdecl ADebugCameraController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADebugCameraController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugCameraController",
               &Z_Registration_Info_UClass_ADebugCameraController.InnerSingleton,
               StaticRegisterNativesADebugCameraController,0x920,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ADebugCameraController>,
               InternalVTableHelperCtorCaller<ADebugCameraController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADebugCameraController.InnerSingleton;
}

// GetSelectedActor @ 147aed320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

AActor * __thiscall ADebugCameraController::GetSelectedActor(ADebugCameraController *this)

{
  AActor *pAVar1;
  
  pAVar1 = (AActor *)FWeakObjectPtr::Get(&(this->SelectedActor).WeakPtr);
  return pAVar1;
}

// GetSelectedBufferMaterialName @ 147aed340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
ADebugCameraController::GetSelectedBufferMaterialName
          (ADebugCameraController *this,FString *__return_storage_ptr__)

{
  GetBufferMaterialName(this,__return_storage_ptr__,&this->CurrSelectedBuffer);
  return __return_storage_ptr__;
}

// IncreaseCameraSpeed @ 147af0870

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::IncreaseCameraSpeed(ADebugCameraController *this)

{
  this->SpeedScale = this->SpeedScale + __real_3d4ccccd;
                    /* WARNING: Could not recover jumptable at 0x000147af088b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xfa8))();
  return;
}

// IncreaseFOV @ 147af08a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::IncreaseFOV(ADebugCameraController *this)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    fVar3 = (float)(**(code **)(lVar2 + 0x800))(plVar1);
    (**(code **)(lVar2 + 0x808))(plVar1,fVar3 + __real_3f800000);
  }
  return;
}

// IsDisplayEnabled @ 147af48c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall ADebugCameraController::IsDisplayEnabled(ADebugCameraController *this)

{
  if ((this->_padding_ != 0) && ((*(byte *)(this->_padding_ + 0x2c8) & 2) != 0)) {
    return true;
  }
  return false;
}

// OnActivate @ 147afb560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ADebugCameraController::OnActivate(ADebugCameraController *this,APlayerController *param_1)

{
  UPlayer *pUVar1;
  code *pcVar2;
  APlayerCameraManager *pAVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  UClass *pUVar5;
  UDrawFrustumComponent *this_00;
  UWorld *this_01;
  UFunction *pUVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_148 [32];
  FString local_118;
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  void *local_d0;
  double dStack_c8;
  double local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Player).field0_0x0.DebugPtr, pUVar1 != (UPlayer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->OriginalPlayer).field0_0x0 = (param_1->Player).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OriginalControllerRef).field0_0x0.DebugPtr = param_1;
  (**(code **)(param_1->_padding_ + 0x840))(param_1,&local_e8,&local_d0);
  uVar8 = (**(code **)(((param_1->PlayerCameraManager).field0_0x0.DebugPtr)->_padding_ + 0x800))();
  pcVar2 = *(code **)(this->_padding_ + 0x7a0);
  FVar4 = FNameEntryId::FromValidEName((EName)&local_118);
  local_118.Data.AllocatorInstance.Data._4_4_ = 0;
  local_118.Data.AllocatorInstance.Data._0_4_ = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  (*pcVar2)(this,local_118.Data.AllocatorInstance.Data);
  (**(code **)(this->_padding_ + 0x7b8))(this,&local_e8,&local_d0);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x808))(plVar7,uVar8);
    (**(code **)(*(longlong *)this->_padding_ + 0x7b8))((longlong *)this->_padding_,0);
  }
  this_00 = (this->DrawFrustum).field0_0x0.DebugPtr;
  if (this_00 == (UDrawFrustumComponent *)0x0) {
    pAVar3 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar5);
    local_b8._8_8_ = pAVar3;
    this_00 = (UDrawFrustumComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar7 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDrawFrustumComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->DrawFrustum).field0_0x0.DebugPtr = this_00;
    if (this_00 == (UDrawFrustumComponent *)0x0) goto LAB_147afb803;
  }
  USceneComponent::SetVisibility((USceneComponent *)this_00,true,DirtyOnly);
  (**(code **)(param_1->_padding_ + 0x368))(param_1,0);
  pAVar3 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
  (**(code **)(pAVar3->_padding_ + 0x368))(pAVar3,0);
  ((this->DrawFrustum).field0_0x0.DebugPtr)->FrustumAngle = (float)uVar8;
  USceneComponent::SetAbsolute
            ((USceneComponent *)(this->DrawFrustum).field0_0x0.DebugPtr,true,true,false);
  local_108._s_0.X = local_e8;
  local_108._s_0.Y = dStack_e0;
  local_108._s_0.Z = local_d8;
  USceneComponent::SetRelativeLocation
            ((USceneComponent *)(this->DrawFrustum).field0_0x0.DebugPtr,
             (TVector<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
  local_108._s_0.X = (double)local_d0;
  local_108._s_0.Y = dStack_c8;
  local_108._s_0.Z = local_c0;
  USceneComponent::SetRelativeRotation
            ((USceneComponent *)(this->DrawFrustum).field0_0x0.DebugPtr,
             (TRotator<double> *)&local_108._s_0,false,(FHitResult *)0x0,None);
  UActorComponent::RegisterComponent((UActorComponent *)(this->DrawFrustum).field0_0x0.DebugPtr);
  pcVar2 = *(code **)(this->_padding_ + 0xe00);
  ::FString::FString(&local_118,L"show camfrustums");
  (*pcVar2)(this,&local_108,&local_118,1);
  if ((void *)local_108._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_108._s_0.X);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
LAB_147afb803:
  this_01 = AActor::GetWorld((AActor *)this);
  UWorld::AddController(this_01,(AController *)this);
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  pUVar6 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADebugCameraController_ReceiveOnActivate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&local_118);
  return;
}

// OnDeactivate @ 147afb9e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::OnDeactivate(ADebugCameraController *this,APlayerController *param_1)

{
  code *pcVar1;
  UDrawFrustumComponent *this_00;
  APlayerCameraManager *pAVar2;
  uint uVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  UWorld *this_01;
  UFunction *pUVar5;
  APlayerController *local_res8;
  FString local_28;
  void *local_18 [2];
  
  uVar3 = *(uint *)&this->field_0x788;
  if (ZPULL(uVar3,1,1) != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0xe00);
    ::FString::FString(&local_28,L"FreezeRendering");
    (*pcVar1)(this,local_18,&local_28,1);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    this->bIsFrozenRendering = 0;
    uVar3 = *(uint *)&this->field_0x788;
  }
  if ((uVar3 & 0x10) != 0) {
    ToggleBufferVisualizationOverviewMode(this);
  }
  this_00 = (this->DrawFrustum).field0_0x0.DebugPtr;
  this->bIsOrbitingSelectedActor = 0;
  USceneComponent::SetVisibility((USceneComponent *)this_00,false,DirtyOnly);
  pcVar1 = *(code **)(this->_padding_ + 0xe00);
  ::FString::FString(&local_28,L"show camfrustums");
  (*pcVar1)(this,local_18,&local_28,1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  UActorComponent::UnregisterComponent((UActorComponent *)(this->DrawFrustum).field0_0x0.DebugPtr);
  (**(code **)(param_1->_padding_ + 0x368))(param_1,1);
  pAVar2 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
  if (pAVar2 != (APlayerCameraManager *)0x0) {
    (**(code **)(pAVar2->_padding_ + 0x368))(pAVar2,1);
  }
  (this->OriginalControllerRef).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->OriginalPlayer).field0_0x0.DebugPtr = (UPlayer *)0x0;
  pcVar1 = *(code **)(this->_padding_ + 0x7a0);
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res8 = (APlayerController *)(ulonglong)*(uint *)CONCAT44(extraout_var,FVar4.Value);
  (*pcVar1)(this,local_res8);
  this_01 = AActor::GetWorld((AActor *)this);
  UWorld::RemoveController(this_01,(AController *)this);
  local_res8 = param_1;
  pUVar5 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADebugCameraController_ReceiveOnDeactivate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_res8);
  return;
}

// OnFingerMove @ 147afbba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::OnFingerMove
          (ADebugCameraController *this,Type param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((param_1 == Touch1) &&
     ((dVar1 = (this->LastTouchDragLocation).field0_0x0._s_0.X, dVar1 != 0.0 ||
      ((this->LastTouchDragLocation).field0_0x0._s_0.Y != 0.0)))) {
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (dVar2 - dVar1) * __real_3fb99999a0000000;
    dVar1 = (dVar3 - (this->LastTouchDragLocation).field0_0x0._s_0.Y) * __real_3fb99999a0000000;
    (**(code **)(this->_padding_ + 0xd48))(dVar4,(float)dVar4);
    (**(code **)(this->_padding_ + 0xd40))(this,(float)dVar1);
    (this->LastTouchDragLocation).field0_0x0._s_0.X = dVar2;
    (this->LastTouchDragLocation).field0_0x0._s_0.Y = dVar3;
  }
  return;
}

// OnTouchBegin @ 147afc3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::OnTouchBegin
          (ADebugCameraController *this,Type param_1,TVector<double> *param_2)

{
  double dVar1;
  
  if (param_1 == Touch1) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (this->LastTouchDragLocation).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->LastTouchDragLocation).field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// OnTouchEnd @ 147afc3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::OnTouchEnd
          (ADebugCameraController *this,Type param_1,TVector<double> *param_2)

{
  if (param_1 == Touch1) {
    (this->LastTouchDragLocation).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  return;
}

// PostInitializeComponents @ 147afca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::PostInitializeComponents(ADebugCameraController *this)

{
  int iVar1;
  code *pcVar2;
  FNameEntryId FVar3;
  UWorld *this_00;
  UClass *pUVar4;
  AActor *pAVar5;
  FString *pFVar6;
  undefined4 extraout_var;
  longlong *plVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_d8 [32];
  FString local_a8;
  FString local_98;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  APlayerController::PostInitializeComponents((APlayerController *)this);
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    AActor::Destroy((AActor *)this->_padding_,false,true);
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  local_88._16_8_ = this;
  local_88._24_8_ = AActor::GetInstigator((AActor *)this);
  local_88._52_4_ = local_88._52_4_ | RF_Transient;
  local_88[0x30] = AlwaysSpawn;
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar4 = ADebugCameraHUD::StaticClass();
  pAVar5 = UWorld::SpawnActor(this_00,pUVar4,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                              (FActorSpawnParameters *)local_88);
  if (pAVar5 == (AActor *)0x0) {
    pAVar5 = (AActor *)0x0;
  }
  else {
    pUVar4 = ADebugCameraHUD::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar6 = GetTypeName<ADebugCameraHUD>(&local_a8);
      pwVar9 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_98,pAVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar8);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar5);
  }
  this->_padding_ = (longlong)pAVar5;
  pcVar2 = *(code **)(this->_padding_ + 0x7a0);
  FVar3 = FNameEntryId::FromValidEName((EName)&local_a8);
  local_a8.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)CONCAT44(extraout_var,FVar3.Value);
  local_a8.Data.AllocatorInstance.Data._4_4_ = 0;
  (*pcVar2)(this,local_a8.Data.AllocatorInstance.Data._0_4_);
  if (local_88._64_8_ != 0) {
    plVar7 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// PreProcessInput @ 147afedd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::PreProcessInput(ADebugCameraController *this,float param_1,bool param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  APawn *pAVar2;
  longlong *plVar3;
  
  if (this->bIsOrbitingSelectedActor == 0) {
    APlayerController::PreProcessInput((APlayerController *)this,param_1,param_2);
    return;
  }
  pAVar2 = APlayerController::GetPawnOrSpectator((APlayerController *)this);
  if (pAVar2 != (APawn *)0x0) {
    plVar3 = (longlong *)(**(code **)(pAVar2->_padding_ + 0x760))(pAVar2);
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (plVar3 != (longlong *)0x0) {
      plVar3[0x1b] = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      plVar3[0x1c] = uVar1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x550);
      plVar3[0x1d] = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x000147afee2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar3,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  return;
}

// PreProcessInputForOrbit @ 147afee50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::PreProcessInputForOrbit
          (ADebugCameraController *this,float param_1,bool param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  APawn *pAVar2;
  longlong *plVar3;
  
  if (this->bIsOrbitingSelectedActor != 0) {
    pAVar2 = APlayerController::GetPawnOrSpectator((APlayerController *)this);
    if (pAVar2 != (APawn *)0x0) {
      plVar3 = (longlong *)(**(code **)(pAVar2->_padding_ + 0x760))(pAVar2);
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (plVar3 != (longlong *)0x0) {
        plVar3[0x1b] = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        plVar3[0x1c] = uVar1;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x550);
        plVar3[0x1d] = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x000147afeeaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar3,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  return;
}

// ReceiveOnActivate @ 147b089a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::ReceiveOnActivate(ADebugCameraController *this,APlayerController *param_1)

{
  UFunction *pUVar1;
  APlayerController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADebugCameraController_ReceiveOnActivate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// ReceiveOnActorSelected @ 147b089e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::ReceiveOnActorSelected
          (ADebugCameraController *this,AActor *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FHitResult *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UFunction *pUVar5;
  undefined8 *puVar6;
  longlong lVar7;
  AActor *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110 [33];
  
  memset(local_110,0,0x100);
  local_140 = (param_2->field0_0x0)._s_0.X;
  dStack_138 = (param_2->field0_0x0)._s_0.Y;
  local_130 = (param_2->field0_0x0)._s_0.Z;
  lVar7 = 2;
  local_128 = (param_3->field0_0x0)._s_0.X;
  dStack_120 = (param_3->field0_0x0)._s_0.Y;
  local_118 = (param_3->field0_0x0)._s_0.Z;
  puVar6 = local_110;
  do {
    uVar1 = *(undefined8 *)&param_4->Distance;
    uVar2 = *(undefined8 *)&param_4->Location;
    uVar3 = *(undefined8 *)&(param_4->Location).field_0x8;
    *puVar6 = *(undefined8 *)param_4;
    puVar6[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_4->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_4->ImpactPoint;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_4->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_4->ImpactPoint).field_0x10;
    puVar6[4] = uVar1;
    puVar6[5] = uVar4;
    uVar1 = *(undefined8 *)&param_4->Normal;
    uVar4 = *(undefined8 *)&(param_4->Normal).field_0x8;
    puVar6[6] = uVar2;
    puVar6[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_4->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_4->ImpactNormal;
    puVar6[8] = uVar1;
    puVar6[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_4->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_4->ImpactNormal).field_0x10;
    puVar6[10] = uVar2;
    puVar6[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_4->TraceStart;
    uVar3 = *(undefined8 *)&(param_4->TraceStart).field_0x8;
    puVar6[0xc] = uVar1;
    puVar6[0xd] = uVar4;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    lVar7 = lVar7 + -1;
    param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
    puVar6 = puVar6 + 0x10;
  } while (lVar7 != 0);
  local_148 = param_1;
  pUVar5 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADebugCameraController_ReceiveOnActorSelected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar5,&local_148);
  return;
}

// ReceiveOnDeactivate @ 147b08b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::ReceiveOnDeactivate(ADebugCameraController *this,APlayerController *param_1)

{
  UFunction *pUVar1;
  APlayerController *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_ADebugCameraController_ReceiveOnDeactivate);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// Select @ 147b105b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::Select(ADebugCameraController *this,FHitResult *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  AActor *pAVar8;
  FHitResult *pFVar9;
  undefined8 *puVar10;
  UFunction *pUVar11;
  FHitResult *pFVar12;
  longlong lVar13;
  longlong lVar14;
  AActor *local_res8;
  AActor *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110 [33];
  
  pAVar8 = FActorInstanceHandle::FetchActor(&param_1->HitObjectHandle);
  local_res8 = pAVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar8 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  FWeakObjectPtr::operator=(&(this->SelectedActor).WeakPtr,(FObjectPtr)&local_res8);
  lVar14 = 2;
  (this->SelectedComponent).WeakPtr = (param_1->Component).WeakPtr;
  lVar13 = 2;
  pFVar9 = &this->SelectedHitPoint;
  pFVar12 = param_1;
  do {
    fVar5 = pFVar12->Time;
    fVar6 = pFVar12->Distance;
    iVar7 = pFVar12->_padding_;
    pFVar9->FaceIndex = pFVar12->FaceIndex;
    pFVar9->Time = fVar5;
    pFVar9->Distance = fVar6;
    pFVar9->_padding_ = iVar7;
    uVar1 = *(undefined8 *)&(pFVar12->Location).field_0x8;
    *(undefined8 *)&pFVar9->Location = *(undefined8 *)&pFVar12->Location;
    *(undefined8 *)&(pFVar9->Location).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pFVar12->ImpactPoint;
    *(undefined8 *)&(pFVar9->Location).field_0x10 = *(undefined8 *)&(pFVar12->Location).field_0x10;
    *(undefined8 *)&pFVar9->ImpactPoint = uVar1;
    uVar1 = *(undefined8 *)&(pFVar12->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar9->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar12->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar9->ImpactPoint).field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar12->Normal).field_0x8;
    *(undefined8 *)&pFVar9->Normal = *(undefined8 *)&pFVar12->Normal;
    *(undefined8 *)&(pFVar9->Normal).field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pFVar12->ImpactNormal;
    *(undefined8 *)&(pFVar9->Normal).field_0x10 = *(undefined8 *)&(pFVar12->Normal).field_0x10;
    *(undefined8 *)&pFVar9->ImpactNormal = uVar1;
    uVar1 = *(undefined8 *)&(pFVar12->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar9->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar12->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar9->ImpactNormal).field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar12->TraceStart).field_0x8;
    *(undefined8 *)&pFVar9->TraceStart = *(undefined8 *)&pFVar12->TraceStart;
    *(undefined8 *)&(pFVar9->TraceStart).field_0x8 = uVar1;
    lVar13 = lVar13 + -1;
    pFVar9 = (FHitResult *)&(pFVar9->TraceStart).field_0x10;
    pFVar12 = (FHitResult *)&(pFVar12->TraceStart).field_0x10;
  } while (lVar13 != 0);
  memset(local_110,0,0x100);
  local_140 = *(undefined8 *)&param_1->ImpactPoint;
  uStack_138 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
  local_130 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
  local_128 = *(undefined8 *)&param_1->ImpactNormal;
  uStack_120 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
  local_118 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
  puVar10 = local_110;
  do {
    uVar1 = *(undefined8 *)&param_1->Distance;
    uVar2 = *(undefined8 *)&param_1->Location;
    uVar3 = *(undefined8 *)&(param_1->Location).field_0x8;
    *puVar10 = *(undefined8 *)param_1;
    puVar10[1] = uVar1;
    uVar1 = *(undefined8 *)&(param_1->Location).field_0x10;
    uVar4 = *(undefined8 *)&param_1->ImpactPoint;
    puVar10[2] = uVar2;
    puVar10[3] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->ImpactPoint).field_0x8;
    uVar3 = *(undefined8 *)&(param_1->ImpactPoint).field_0x10;
    puVar10[4] = uVar1;
    puVar10[5] = uVar4;
    uVar1 = *(undefined8 *)&param_1->Normal;
    uVar4 = *(undefined8 *)&(param_1->Normal).field_0x8;
    puVar10[6] = uVar2;
    puVar10[7] = uVar3;
    uVar2 = *(undefined8 *)&(param_1->Normal).field_0x10;
    uVar3 = *(undefined8 *)&param_1->ImpactNormal;
    puVar10[8] = uVar1;
    puVar10[9] = uVar4;
    uVar1 = *(undefined8 *)&(param_1->ImpactNormal).field_0x8;
    uVar4 = *(undefined8 *)&(param_1->ImpactNormal).field_0x10;
    puVar10[10] = uVar2;
    puVar10[0xb] = uVar3;
    uVar2 = *(undefined8 *)&param_1->TraceStart;
    uVar3 = *(undefined8 *)&(param_1->TraceStart).field_0x8;
    puVar10[0xc] = uVar1;
    puVar10[0xd] = uVar4;
    puVar10[0xe] = uVar2;
    puVar10[0xf] = uVar3;
    lVar14 = lVar14 + -1;
    puVar10 = puVar10 + 0x10;
    param_1 = (FHitResult *)&(param_1->TraceStart).field_0x10;
  } while (lVar14 != 0);
  local_148 = pAVar8;
  pUVar11 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ADebugCameraController_ReceiveOnActorSelected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar11,&local_148);
  return;
}

// SelectTargetedObject @ 147b10770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::SelectTargetedObject(ADebugCameraController *this)

{
  bool bVar1;
  TStatId TVar2;
  UWorld *this_00;
  TVector<double> *pTVar3;
  undefined1 auStackY_268 [32];
  TVector<double> local_220;
  undefined4 uStack_208;
  undefined1 uStack_204;
  undefined2 uStack_203;
  undefined1 uStack_201;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TRotator<double> local_1c8;
  FHitResult local_1a8;
  FCollisionQueryParams local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_268;
  (**(code **)(this->_padding_ + 0x840))(this,&local_200,&local_1c8);
  memset(&local_1a8,0,0x100);
  uStack_208 = 0xffffffff;
  uStack_203 = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_201 = 0;
  local_220.field0_0x0._s_0.Z = 0.0;
  uStack_204 = 0;
  local_1a8.HitObjectHandle.InstanceIndex = -1;
  local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
  local_1a8.HitObjectHandle._29_3_ = 0;
  local_1a8.Time = 1.0;
  local_1a8.MyItem = -1;
  local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  TVar2 = FCollisionQueryParams::GetUnknownStatId();
  FCollisionQueryParams::FCollisionQueryParams
            (&local_a8,(FName)0x0,(TStatId *)TVar2.StatIdPtr,true,(AActor *)this);
  this_00 = AActor::GetWorld((AActor *)this);
  pTVar3 = UE::Math::TRotator<double>::Vector(&local_1c8,&local_220);
  local_1e8._s_0.X = (pTVar3->field0_0x0)._s_0.X * __real_40f86a0000000000 + local_200._s_0.X;
  local_1e8._s_0.Z = (pTVar3->field0_0x0)._s_0.Z * __real_40f86a0000000000 + local_200._s_0.Z;
  local_1e8._s_0.Y = local_200._s_0.Y + (pTVar3->field0_0x0)._s_0.Y * __real_40f86a0000000000;
  bVar1 = UWorld::LineTraceSingleByChannel
                    (this_00,&local_1a8,(TVector<double> *)&local_200._s_0,
                     (TVector<double> *)&local_1e8._s_0,ECC_Pawn,&local_a8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (bVar1) {
    (**(code **)(this->_padding_ + 0xfc0))(this,&local_1a8);
  }
  if (local_a8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_a8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_a8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

// SetBufferVisualizationFullMode @ 147b119f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall
ADebugCameraController::SetBufferVisualizationFullMode(ADebugCameraController *this,bool param_1)

{
  longlong *plVar1;
  FString *pFVar2;
  IConsoleManager *pIVar3;
  IConsoleVariable *this_00;
  byte bVar4;
  wchar_t *pwVar5;
  bool bVar6;
  FString local_28;
  
  bVar6 = false;
  if (this->bEnableBufferVisualizationFullMode != (uint)param_1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar3 = IConsoleManager::Get();
        ICVar = (IConsoleVariable *)
                (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.BufferVisualizationTarget",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    this_00 = ICVar;
    if (ICVar == (IConsoleVariable *)0x0) {
      if (5 < (byte)LogPlayerController._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
      }
    }
    else {
      this->bEnableBufferVisualizationFullMode = 0;
      *(uint *)&this->field_0x788 = *(uint *)&this->field_0x788 | (uint)param_1 << 5;
      if (param_1) {
        if ((this->CurrSelectedBuffer).Data.ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(this->CurrSelectedBuffer).Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar2 = ::FName::ToString(&::EmptyName,&local_28);
        if ((pFVar2->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
        }
        bVar6 = true;
        this_00 = ICVar;
      }
      IConsoleVariable::Set<wchar_t_const_*>(this_00,pwVar5,ECVF_SetByCode,(FName)0x0);
      if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      SetupBufferVisualizationOverviewInput(this);
      plVar1 = (longlong *)this->_padding_;
      if ((plVar1 == (longlong *)0x0) || ((*(byte *)(plVar1 + 0x59) & 2) == 0)) {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
      }
      if ((bVar4 != this->bEnableBufferVisualizationFullMode) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147b11b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x760))();
        return;
      }
    }
  }
  return;
}

// SetDisplay @ 147b130d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::SetDisplay(ADebugCameraController *this,bool param_1)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = (longlong *)this->_padding_;
  if ((plVar1 == (longlong *)0x0) || ((*(byte *)(plVar1 + 0x59) & 2) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2 != param_1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147b130f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x760))();
    return;
  }
  return;
}

// SetPawnMovementSpeedScale @ 147b13980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::SetPawnMovementSpeedScale(ADebugCameraController *this,float param_1)

{
  this->SpeedScale = param_1;
                    /* WARNING: Could not recover jumptable at 0x000147b1398b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0xfa8))();
  return;
}

// SetSpectatorPawn @ 147b13f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::SetSpectatorPawn(ADebugCameraController *this,ASpectatorPawn *param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  APlayerController::SetSpectatorPawn((APlayerController *)this,param_1);
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    AActor::SetActorEnableCollision((AActor *)this->_padding_,false);
    pbVar1 = (byte *)(this->_padding_ + 0x32);
    *pbVar1 = *pbVar1 ^ ((byte)((uint)this->_padding_ >> 2) ^ *(byte *)(this->_padding_ + 0x32)) & 1
    ;
    lVar3 = (**(code **)(*(longlong *)this->_padding_ + 0x760))();
    if (lVar3 != 0) {
      pUVar4 = Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar4->_padding_)) {
        *(uint *)(lVar3 + 0x1a8) = *(uint *)(lVar3 + 0x1a8) | 1;
        *(byte *)(lVar3 + 0x42) =
             *(byte *)(lVar3 + 0x42) ^
             ((byte)((uint)this->_padding_ >> 2) ^ *(byte *)(lVar3 + 0x42)) & 1;
        this->InitialMaxSpeed = *(float *)(lVar3 + 400);
        this->InitialAccel = *(float *)(lVar3 + 0x194);
        this->InitialDecel = *(float *)(lVar3 + 0x198);
        (**(code **)(this->_padding_ + 0xfa8))(this);
      }
    }
  }
  return;
}

// SetupBufferVisualizationOverviewInput @ 147b14250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::SetupBufferVisualizationOverviewInput(ADebugCameraController *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  uint uVar10;
  longlong lVar11;
  UInputComponent *pUVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  void *_Dst;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte local_e8;
  FName local_e4;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_d8;
  undefined4 local_b8;
  code *local_a8;
  undefined8 uStack_a0;
  FName local_98 [2];
  FName local_88;
  undefined8 uStack_80;
  FName local_78;
  undefined8 uStack_70;
  FName local_68;
  undefined8 uStack_60;
  FName local_58;
  undefined8 uStack_50;
  
  pUVar12 = (UInputComponent *)this->_padding_;
  if (pUVar12 != (UInputComponent *)0x0) {
    if (this->bEnableBufferVisualization == 1 && this->bEnableBufferVisualizationFullMode == 0) {
      if (this->bIsBufferVisualizationInputSetup == 0) {
        local_f8 = (FName)BufferVisualizationMoveUp;
        uStack_f0 = 0;
        pFVar9 = ::FName::FName(&local_res10,"DebugCamera_BufferVisualizationUp");
        uStack_80._4_4_ = uStack_ec;
        uStack_80._0_4_ = uStack_f0;
        local_88 = local_f8;
        UInputComponent::BindAction<ADebugCameraController>
                  (pUVar12,*pFVar9,IE_Pressed,this,(pmf_df982789 *)&local_88);
        pUVar12 = (UInputComponent *)this->_padding_;
        local_f8 = (FName)BufferVisualizationMoveDown;
        uStack_f0 = 0;
        pFVar9 = ::FName::FName(&local_res18,"DebugCamera_BufferVisualizationDown");
        uStack_70._4_4_ = uStack_ec;
        uStack_70._0_4_ = uStack_f0;
        local_78 = local_f8;
        UInputComponent::BindAction<ADebugCameraController>
                  (pUVar12,*pFVar9,IE_Pressed,this,(pmf_df982789 *)&local_78);
        pUVar12 = (UInputComponent *)this->_padding_;
        local_f8 = (FName)BufferVisualizationMoveRight;
        uStack_f0 = 0;
        pFVar9 = ::FName::FName(&local_res20,"DebugCamera_BufferVisualizationRight");
        uStack_60._4_4_ = uStack_ec;
        uStack_60._0_4_ = uStack_f0;
        local_68 = local_f8;
        UInputComponent::BindAction<ADebugCameraController>
                  (pUVar12,*pFVar9,IE_Pressed,this,(pmf_df982789 *)&local_68);
        pUVar12 = (UInputComponent *)this->_padding_;
        local_f8 = (FName)BufferVisualizationMoveLeft;
        uStack_f0 = 0;
        pFVar9 = ::FName::FName(local_98,"DebugCamera_BufferVisualizationLeft");
        uStack_50._4_4_ = uStack_ec;
        uStack_50._0_4_ = uStack_f0;
        local_58 = local_f8;
        UInputComponent::BindAction<ADebugCameraController>
                  (pUVar12,*pFVar9,IE_Pressed,this,(pmf_df982789 *)&local_58);
        lVar2 = this->_padding_;
        local_a8 = ConsumeAxisMotion;
        uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
        pFVar9 = ::FName::FName(&local_f8,"DebugCamera_DisableAxisMotion");
        FVar3 = *pFVar9;
        UInputComponent::LogDeprecatedBindingWarning(FVar3);
        local_e8 = local_e8 & 0xfd | 1;
        local_d8.FuncDelegate.Object =
             (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
        local_d8.FuncDelegate.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_b8 = 0;
        local_d8.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
        local_d8.FuncDynDelegate.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_e4 = FVar3;
        TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
        ::BindDelegate<ADebugCameraController>(&local_d8,this,(pmf_e396c782 *)&local_a8);
        iVar7 = *(int *)(lVar2 + 0xe8);
        if (iVar7 == *(int *)(lVar2 + 0xec)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,(ForAnyElementType *)(lVar2 + 0xe0),(int *)(lVar2 + 0xec));
        }
        *(int *)(lVar2 + 0xe8) = iVar7 + 1;
        lVar4 = *(longlong *)(lVar2 + 0xe0);
        lVar11 = (longlong)iVar7 * 0x38;
        *(byte *)(lVar11 + lVar4) = local_e8;
        *(FName *)(lVar11 + 4 + lVar4) = local_e4;
        *(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)(lVar11 + 0x10 + lVar4) =
             local_d8.FuncDelegate.Object;
        *(TReferenceControllerBase<1> **)(lVar11 + 0x18 + lVar4) =
             local_d8.FuncDelegate.SharedReferenceCount.ReferenceController;
        *(FInputAxisHandlerDynamicSignature **)(lVar11 + 0x20 + lVar4) =
             local_d8.FuncDynDelegate.Object;
        *(TReferenceControllerBase<1> **)(lVar11 + 0x28 + lVar4) =
             local_d8.FuncDynDelegate.SharedReferenceCount.ReferenceController;
        *(undefined4 *)(lVar11 + 0x30 + lVar4) = local_b8;
        local_d8.FuncDelegate.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_d8.FuncDelegate.Object =
             (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
        local_d8.FuncDynDelegate.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        uVar10 = *(int *)(lVar2 + 0xe8) - 1;
        local_d8.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar2 + 0xe8)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        this->bIsBufferVisualizationInputSetup = 1;
      }
    }
    else if (this->bIsBufferVisualizationInputSetup != 0) {
      uVar14 = 0;
      uVar13 = uVar14;
      uVar15 = uVar14;
      if (0 < (pUVar12->ActionBindings).ArrayNum) {
        do {
          uVar10 = (uint)uVar15;
          uVar8 = 0;
          if ((int)uVar10 < (pUVar12->ActionBindings).ArrayNum) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = *(FName *)(*(longlong *)
                              ((pUVar12->ActionBindings).AllocatorInstance.Data + uVar13) + 4);
          bVar6 = ::FName::Equals(FVar3,"DebugCamera_BufferVisualizationUp");
          if ((((bVar6) ||
               (bVar6 = ::FName::Equals(FVar3,"DebugCamera_BufferVisualizationDown"), bVar6)) ||
              (bVar6 = ::FName::Equals(FVar3,"DebugCamera_BufferVisualizationRight"), bVar6)) ||
             (bVar6 = ::FName::Equals(FVar3,"DebugCamera_BufferVisualizationLeft"), bVar6)) {
            UInputComponent::RemoveActionBinding((UInputComponent *)this->_padding_,uVar10);
            uVar10 = uVar10 - 1;
            uVar13 = uVar13 - 0x10;
          }
          pUVar12 = (UInputComponent *)this->_padding_;
          uVar13 = uVar13 + 0x10;
          uVar15 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < (pUVar12->ActionBindings).ArrayNum);
      }
      uVar13 = uVar14;
      if (0 < (pUVar12->AxisBindings).ArrayNum) {
        do {
          uVar10 = (uint)uVar13;
          uVar16 = ~uVar10 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar10 < (pUVar12->AxisBindings).ArrayNum) {
            uVar8 = uVar16;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar6 = ::FName::Equals(*(FName *)((pUVar12->AxisBindings).AllocatorInstance.Data +
                                            uVar14 + 4),"DebugCamera_DisableAxisMotion");
          if (bVar6) {
            lVar2 = this->_padding_;
            uVar8 = 0;
            if ((int)uVar10 < *(int *)(lVar2 + 0xe8)) {
              uVar8 = uVar16;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            _Dst = (void *)(*(longlong *)(lVar2 + 0xe0) + uVar14);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x28));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x18));
            iVar7 = ~uVar10 + *(int *)(lVar2 + 0xe8);
            if (iVar7 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)iVar7 * 0x38);
            }
            *(int *)(lVar2 + 0xe8) = *(int *)(lVar2 + 0xe8) + -1;
            uVar10 = uVar10 - 1;
            uVar14 = uVar14 - 0x38;
          }
          pUVar12 = (UInputComponent *)this->_padding_;
          uVar14 = uVar14 + 0x38;
          uVar13 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < (pUVar12->AxisBindings).ArrayNum);
      }
      this->bIsBufferVisualizationInputSetup = 0;
    }
  }
  return;
}

// SetupInputComponent @ 147b147e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::SetupInputComponent(ADebugCameraController *this)

{
  UInputComponent *pUVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res8;
  code *local_28;
  undefined8 uStack_20;
  
  APlayerController::SetupInputComponent((APlayerController *)this);
  InitializeDebugCameraInputBindings();
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = SelectTargetedObject;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_Select");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = Unselect;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_Unselect");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = IncreaseCameraSpeed;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_IncreaseSpeed");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = DecreaseCameraSpeed;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_DecreaseSpeed");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = IncreaseFOV;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_IncreaseFOV");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = IncreaseFOV;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_IncreaseFOV");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Repeat,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = DecreaseFOV;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_DecreaseFOV");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = DecreaseFOV;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_DecreaseFOV");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Repeat,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = ToggleDisplay;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_ToggleDisplay");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = _vcall__4000__flat______;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_FreezeRendering");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = ToggleOrbitHitPoint;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_OrbitHitPoint");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  pUVar1 = (UInputComponent *)this->_padding_;
  local_28 = ToggleOrbitCenter;
  uStack_20._0_4_ = 0;
  pFVar3 = ::FName::FName(&local_res8,"DebugCamera_OrbitCenter");
  UInputComponent::BindAction<ADebugCameraController>
            (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  bVar2 = AllowDebugViewmodes();
  if (bVar2) {
    pUVar1 = (UInputComponent *)this->_padding_;
    local_28 = CycleViewMode;
    uStack_20._0_4_ = 0;
    pFVar3 = ::FName::FName(&local_res8,"DebugCamera_CycleViewMode");
    UInputComponent::BindAction<ADebugCameraController>
              (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  }
  bVar2 = AllowDebugViewmodes();
  if (bVar2) {
    pUVar1 = (UInputComponent *)this->_padding_;
    local_28 = ToggleBufferVisualizationOverviewMode;
    uStack_20._0_4_ = 0;
    pFVar3 = ::FName::FName(&local_res8,"DebugCamera_ToggleBufferVisualizationOverview");
    UInputComponent::BindAction<ADebugCameraController>
              (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
    pUVar1 = (UInputComponent *)this->_padding_;
    local_28 = ToggleBufferVisualizationFullMode;
    uStack_20._0_4_ = 0;
    pFVar3 = ::FName::FName(&local_res8,"DebugCamera_ToggleBufferVisualizationFull");
    UInputComponent::BindAction<ADebugCameraController>
              (pUVar1,*pFVar3,IE_Pressed,this,(pmf_df982789 *)&local_28);
  }
  uStack_20._0_4_ = 0;
  local_28 = OnTouchBegin;
  UInputComponent::BindTouch<ADebugCameraController>
            ((UInputComponent *)this->_padding_,IE_Pressed,this,(pmf_12c40d2c *)&local_28);
  uStack_20._0_4_ = 0;
  local_28 = OnTouchEnd;
  UInputComponent::BindTouch<ADebugCameraController>
            ((UInputComponent *)this->_padding_,IE_Released,this,(pmf_12c40d2c *)&local_28);
  uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
  local_28 = OnFingerMove;
  UInputComponent::BindTouch<ADebugCameraController>
            ((UInputComponent *)this->_padding_,IE_Repeat,this,(pmf_12c40d2c *)&local_28);
  return;
}

// ShowDebugSelectedInfo @ 147b15990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ShowDebugSelectedInfo(ADebugCameraController *this)

{
  *(uint *)&this->field_0x788 = *(uint *)&this->field_0x788 ^ 1;
  return;
}

// SpawnSpectatorPawn @ 147b15d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ASpectatorPawn * __thiscall ADebugCameraController::SpawnSpectatorPawn(ADebugCameraController *this)

{
  int iVar1;
  AGameStateBase *pAVar2;
  bool bVar3;
  char cVar4;
  UWorld *pUVar5;
  TRotator<double> *pTVar6;
  UClass *pUVar7;
  ASpectatorPawn *pAVar8;
  UClass *pUVar9;
  ASpectatorPawn *pAVar10;
  FString *pFVar11;
  longlong *plVar12;
  ADebugCameraController *pAVar13;
  undefined7 uVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  ASpectatorPawn *pAVar17;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FString local_d8;
  TVector<double>_u_0 local_c8;
  undefined1 local_b0 [24];
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pAVar10 = (ASpectatorPawn *)0x0;
  local_d8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data & 0xffffffff00000000;
  if ((this->_padding_ != 0) || (cVar4 = (**(code **)(this->_padding_ + 0x7f0))(), cVar4 == '\0'))
  goto LAB_147b1603e;
  pUVar5 = AActor::GetWorld((AActor *)this);
  pAVar2 = (pUVar5->GameState).field0_0x0.DebugPtr;
  if (pAVar2 == (AGameStateBase *)0x0) {
    if (5 < (byte)LogPlayerController._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
    }
    goto LAB_147b1603e;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._52_4_ = local_98._52_4_ | RF_Transient;
  local_98[0x30] = AlwaysSpawn;
  local_98._16_8_ = this;
  pUVar5 = AActor::GetWorld((AActor *)this);
  pTVar6 = (TRotator<double> *)(**(code **)(this->_padding_ + 0x7a8))(this,local_b0);
  local_c8._s_0.X = (double)this->_padding_;
  local_c8._s_0.Y = (double)this->_padding_;
  local_c8._s_0.Z = (double)this->_padding_;
  pUVar7 = TSubclassOf<ASpectatorPawn>::operator*(&pAVar2->SpectatorClass);
  if (pUVar7 == (UClass *)0x0) {
    pUVar7 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
  }
  else {
    pUVar7 = TSubclassOf<ASpectatorPawn>::operator*(&pAVar2->SpectatorClass);
  }
  pAVar8 = (ASpectatorPawn *)
           UWorld::SpawnActor(pUVar5,pUVar7,(TVector<double> *)&local_c8._s_0,pTVar6,
                              (FActorSpawnParameters *)local_98);
  if (pAVar8 == (ASpectatorPawn *)0x0) {
    pAVar8 = pAVar10;
    if (2 < (byte)LogPlayerController._0_1_) {
      pUVar7 = (pAVar2->SpectatorClass).Class.field0_0x0.DebugPtr;
      pAVar17 = pAVar10;
      if ((pUVar7 != (UClass *)0x0) &&
         (pUVar9 = Z_Construct_UClass_ASpectatorPawn_NoRegister(), pUVar9 != (UClass *)0x0)) {
        iVar1 = (int)pUVar9->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar9->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (pUVar7 = (pAVar2->SpectatorClass).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) {
          pUVar9 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
          if (pUVar9 != (UClass *)0x0) {
            iVar1 = (int)pUVar9->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              pAVar8 = (ASpectatorPawn *)(pAVar2->SpectatorClass).Class.field0_0x0.DebugPtr;
            }
          }
          local_d8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&pAVar8->field_0x18;
          pAVar17 = (ASpectatorPawn *)&DAT_00000001;
          ::FName::ToString((FName *)&local_d8,&local_e8);
        }
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
      pAVar8 = (ASpectatorPawn *)0x0;
      if (pAVar17 != (ASpectatorPawn *)0x0) goto LAB_147b15ff0;
    }
  }
  else {
    pUVar7 = Z_Construct_UClass_ASpectatorPawn_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pAVar8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pAVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      pFVar11 = GetTypeName<ASpectatorPawn>(&local_e8);
      pwVar16 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<AActor>(&local_d8,(AActor *)pAVar8);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar16,pwVar15);
    }
    pAVar13 = this;
    (**(code **)(*(longlong *)&pAVar8->field_0x0 + 0x7e8))(pAVar8,this);
    uVar14 = (undefined7)((ulonglong)pAVar13 >> 8);
    APawn::DispatchRestart((APawn *)pAVar8,true);
    if ((*(longlong *)&pAVar8->field_0x30 & 0x40000) != 0) {
      (**(code **)(*(longlong *)&pAVar8->field_0x0 + 0x4a8))(pAVar8,CONCAT71(uVar14,1));
    }
    if (5 < (byte)LogPlayerController._0_1_) {
      AActor::InternalGetNetMode((AActor *)this);
      local_d8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&pAVar8->field_0x18;
      ::FName::ToString((FName *)&local_d8,&local_e8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPlayerController);
      pAVar10 = pAVar8;
LAB_147b15ff0:
      pAVar8 = pAVar10;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pAVar8 != (ASpectatorPawn *)0x0) {
    return pAVar8;
  }
LAB_147b1603e:
  pAVar10 = APlayerController::SpawnSpectatorPawn((APlayerController *)this);
  return pAVar10;
}

// StaticRegisterNativesADebugCameraController @ 147b17150

void __cdecl ADebugCameraController::StaticRegisterNativesADebugCameraController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ADebugCameraController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToggleBufferVisualizationFullMode @ 147b1cef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::ToggleBufferVisualizationFullMode(ADebugCameraController *this)

{
  SetBufferVisualizationFullMode(this,(bool)(~this->bEnableBufferVisualizationFullMode & 1));
  return;
}

// ToggleBufferVisualizationOverviewMode @ 147b1cf10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::ToggleBufferVisualizationOverviewMode(ADebugCameraController *this)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  UWorld *this_00;
  UGameViewportClient *pUVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  ForAnyElementType FVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  SetBufferVisualizationFullMode(this,false);
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar5 = UWorld::GetGameViewport(this_00);
  if (pUVar5 == (UGameViewportClient *)0x0) {
    return;
  }
  *(uint *)&this->field_0x788 = *(uint *)&this->field_0x788 ^ 0x10;
  ::FString::FString(&local_18,L"VIEWMODE ");
  if (this->bEnableBufferVisualization == 0) {
    pwVar6 = GetViewModeName(VMI_Lit);
    sVar7 = wcslen(pwVar6);
    ::FString::AppendChars(&local_18,pwVar6,(int)sVar7);
    plVar2 = (longlong *)this->_padding_;
    if ((plVar2 == (longlong *)0x0) || ((*(byte *)(plVar2 + 0x59) & 2) == 0)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    if ((bVar3 != this->bLastDisplayEnabled) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x760))();
    }
    goto LAB_147b1d0d2;
  }
  pwVar6 = GetViewModeName(VMI_VisualizeBuffer);
  sVar7 = wcslen(pwVar6);
  ::FString::AppendChars(&local_18,pwVar6,(int)sVar7);
  GetBufferVisualizationOverviewTargets(this,&local_28);
  if (1 < (this->CurrSelectedBuffer).Data.ArrayNum) {
    pFVar9 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 0x10;
    for (FVar8.Data = local_28.AllocatorInstance.Data; FVar8.Data != pFVar9;
        FVar8.Data = FVar8.Data + 0x10) {
      iVar4 = *(int *)(FVar8.Data + 8);
      iVar1 = (this->CurrSelectedBuffer).Data.ArrayNum;
      if (iVar4 == iVar1) {
        if (iVar4 < 2) goto LAB_147b1d00e;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)FVar8.Data,
                           (wchar_t *)(this->CurrSelectedBuffer).Data.AllocatorInstance.Data);
        bVar10 = iVar4 == 0;
      }
      else {
        bVar10 = iVar4 + iVar1 == 1;
      }
      if (bVar10) goto LAB_147b1d00e;
    }
  }
  GetNextBuffer(this,&local_28,1);
LAB_147b1d00e:
  plVar2 = (longlong *)this->_padding_;
  if ((plVar2 == (longlong *)0x0) || ((*(byte *)(plVar2 + 0x59) & 2) == 0)) {
    this->bLastDisplayEnabled = 0;
    if (plVar2 != (longlong *)0x0) goto LAB_147b1d043;
  }
  else {
    this->bLastDisplayEnabled = 1;
LAB_147b1d043:
    if ((*(byte *)(plVar2 + 0x59) & 2) != 0) {
      (**(code **)(*plVar2 + 0x760))();
    }
  }
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
LAB_147b1d0d2:
  (**(code **)(pUVar5->_padding_ + 0x340))(pUVar5,&local_28,&local_18);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  SetupBufferVisualizationOverviewInput(this);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ToggleDisplay @ 147b1d130

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ToggleDisplay(ADebugCameraController *this)

{
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b1d13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x760))();
    return;
  }
  return;
}

// ToggleFreezeRendering @ 147b1d150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ToggleFreezeRendering(ADebugCameraController *this)

{
  code *pcVar1;
  FString local_28;
  void *local_18 [2];
  
  pcVar1 = *(code **)(this->_padding_ + 0xe00);
  ::FString::FString(&local_28,L"FreezeRendering");
  (*pcVar1)(this,local_18,&local_28,1);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(uint *)&this->field_0x788 = *(uint *)&this->field_0x788 ^ 2;
  return;
}

// ToggleOrbit @ 147b1d1c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ToggleOrbit(ADebugCameraController *this,bool param_1)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  APawn *this_00;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  TRotator<double> local_a0;
  double local_88;
  double dStack_80;
  double local_78;
  
  if (ZPULL(*(undefined4 *)&this->field_0x788,2,1) == 0) {
    this_00 = APlayerController::GetPawnOrSpectator((APlayerController *)this);
    *(uint *)&this->field_0x788 = (uint)param_1 << 3 | *(uint *)&this->field_0x788 & 0xfffffff7;
    if ((this_00 == (APawn *)0x0) || (bVar9 = GetPivotForOrbit(this,&this->OrbitPivot), !bVar9)) {
      iVar10 = 0;
    }
    else {
      iVar10 = 1;
    }
    uVar5 = *(uint *)&this->field_0x788;
    this->bIsOrbitingSelectedActor = iVar10;
    if (iVar10 != 0) {
      lVar6 = this_00->_padding_;
      if (lVar6 == 0) {
        uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar19 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        uVar18 = (undefined4)*(undefined8 *)(lVar6 + 0x220);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x220) >> 0x20);
        uVar13 = *(undefined4 *)(lVar6 + 0x210);
        uVar15 = *(undefined4 *)(lVar6 + 0x214);
        uVar16 = *(undefined4 *)(lVar6 + 0x218);
        uVar17 = *(undefined4 *)(lVar6 + 0x21c);
      }
      pTVar1 = &this->LastOrbitPawnLocation;
      *(undefined4 *)&pTVar1->field0_0x0 = uVar13;
      *(undefined4 *)((longlong)&(this->LastOrbitPawnLocation).field0_0x0 + 4) = uVar15;
      *(undefined4 *)((longlong)&(this->LastOrbitPawnLocation).field0_0x0 + 8) = uVar16;
      *(undefined4 *)((longlong)&(this->LastOrbitPawnLocation).field0_0x0 + 0xc) = uVar17;
      (this->LastOrbitPawnLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
      fVar8 = __real_41f00000;
      dVar2 = (this->OrbitPivot).field0_0x0._s_0.X;
      dVar3 = (this->OrbitPivot).field0_0x0._s_0.Y;
      dVar20 = dVar2 - (pTVar1->field0_0x0)._s_0.X;
      dVar4 = (this->OrbitPivot).field0_0x0._s_0.Z;
      dVar7 = dVar3 - (this->LastOrbitPawnLocation).field0_0x0._s_0.Y;
      local_a8 = dVar4 - (this->LastOrbitPawnLocation).field0_0x0._s_0.Z;
      auVar11._0_8_ = dVar20 * dVar20;
      auVar11._8_8_ = 0;
      dStack_b0 = dVar7;
      local_b8 = dVar20;
      dVar22 = dVar7 * dVar7 + auVar11._0_8_ + (double)local_a8 * (double)local_a8;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar22;
      auVar12 = sqrtpd(auVar11,auVar12);
      fVar14 = (float)auVar12._0_8_;
      if (fVar14 == 0.0) {
        *(uint *)&this->field_0x788 = uVar5 & 0xfffffffb;
      }
      else {
        if (fVar14 < __real_41f00000) {
          if (dVar22 == __real_3ff0000000000000) {
            unique0x10000092 = SUB84(dVar7,0);
            unique0x10000096 = (int)((ulonglong)dVar7 >> 0x20);
            uVar21 = local_a8;
            local_78 = (double)local_a8;
          }
          else if (__real_3e45798ee0000000 <= dVar22) {
            dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
            dVar7 = dVar7 * dVar22;
            uVar21 = (double)local_a8 * dVar22;
            dVar20 = dVar20 * dVar22;
          }
          else {
            dVar20 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                      UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            dVar7 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          dVar7 = dVar7 * __real_403e000000000000;
          dVar22 = (double)uVar21 * __real_403e000000000000;
          (pTVar1->field0_0x0)._s_0.X = dVar2 - dVar20 * __real_403e000000000000;
          (this->LastOrbitPawnLocation).field0_0x0._s_0.Y = dVar3 - dVar7;
          (this->LastOrbitPawnLocation).field0_0x0._s_0.Z = dVar4 - dVar22;
          AActor::SetActorLocation((AActor *)this_00,pTVar1,false,(FHitResult *)0x0,None);
          fVar14 = fVar8;
        }
        this->OrbitRadius = fVar14;
        UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_b8,&local_a0);
        (**(code **)(this->_padding_ + 0x7b0))(this,&local_a0);
        local_88 = local_a0.Pitch;
        dStack_80 = local_a0.Yaw;
        local_78 = local_a0.Roll;
        (**(code **)(this_00->_padding_ + 0x850))(this_00,&local_88,0);
      }
    }
    return;
  }
  *(uint *)&this->field_0x788 = *(undefined4 *)&this->field_0x788 & 0xfffffffb;
  return;
}

// ToggleOrbitCenter @ 147b1d4d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ToggleOrbitCenter(ADebugCameraController *this)

{
  ToggleOrbit(this,true);
  return;
}

// ToggleOrbitHitPoint @ 147b1d4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::ToggleOrbitHitPoint(ADebugCameraController *this)

{
  ToggleOrbit(this,false);
  return;
}

// Unselect @ 147b1f500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::Unselect(ADebugCameraController *this)

{
  (this->SelectedActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SelectedComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// UpdateHiddenComponents @ 147b22270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::UpdateHiddenComponents
          (ADebugCameraController *this,TVector<double> *param_1,
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *param_2)

{
  APlayerController *pAVar1;
  
  pAVar1 = (this->OriginalControllerRef).field0_0x0.DebugPtr;
  if (pAVar1 != (APlayerController *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b2227f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pAVar1->_padding_ + 0xe18))();
    return;
  }
  return;
}

// UpdateRotation @ 147b225a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraController::UpdateRotation(ADebugCameraController *this,float param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  ulonglong uVar7;
  APawn *this_00;
  TVector<double> *pTVar8;
  TRotator<double> *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  uint uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db;
  uint uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar29;
  undefined1 auVar28 [16];
  TVector<double>_u_0 TStack_178;
  TRotator<double> TStack_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 TStack_128;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 auStack_e8 [16];
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  
  if (this->bIsOrbitingSelectedActor == 0) {
    APlayerController::UpdateRotation((APlayerController *)this,param_1);
    return;
  }
  this_00 = APlayerController::GetPawnOrSpectator((APlayerController *)this);
  if (this->bIsOrbitingSelectedActor == 0) {
    return;
  }
  if (this_00 == (APawn *)0x0) {
    return;
  }
  (**(code **)(this->_padding_ + 0x7a8))(this,&TStack_158);
  pTVar8 = APawn::GetLastMovementInputVector(this_00,(TVector<double> *)&TStack_178._s_0);
  dVar17 = __real_4076800000000000;
  if ((((pTVar8->field0_0x0)._s_0.X == 0.0) && ((pTVar8->field0_0x0)._s_0.Y == 0.0)) &&
     ((pTVar8->field0_0x0)._s_0.Z == 0.0)) {
    dVar19 = FGenericPlatformMath::Fmod((double)this->_padding_,__real_4076800000000000);
    if (dVar19 < 0.0) {
      dVar19 = dVar19 + dVar17;
    }
    if (dVar19 == 0.0) {
      dVar19 = FGenericPlatformMath::Fmod((double)this->_padding_,dVar17);
      if (dVar19 < 0.0) {
        dVar19 = dVar19 + dVar17;
      }
      if (dVar19 == 0.0) {
        dVar19 = FGenericPlatformMath::Fmod((double)this->_padding_,dVar17);
        if (dVar19 < 0.0) {
          dVar19 = dVar19 + dVar17;
        }
        if (dVar19 == 0.0) {
          return;
        }
      }
    }
    TStack_158.Pitch = TStack_158.Pitch + (double)this->_padding_;
    TStack_158.Yaw = TStack_158.Yaw + (double)this->_padding_;
    TStack_158.Roll = TStack_158.Roll + (double)this->_padding_;
    pTVar8 = UE::Math::TRotator<double>::Vector(&TStack_158,(TVector<double> *)&TStack_178._s_0);
    uVar16 = __xmm_80000000000000008000000000000000._4_4_;
    uVar14 = (uint)__xmm_80000000000000008000000000000000;
    uVar24 = *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 0x10);
    TStack_140._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar24 ^ (uint)__xmm_80000000000000008000000000000000);
    TStack_140._4_4_ =
         *(uint *)((longlong)&pTVar8->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_
    ;
    TStack_140._0_4_ = *(uint *)&pTVar8->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    TStack_140._12_4_ = *(uint *)((longlong)&pTVar8->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    TStack_140._8_4_ = *(uint *)((longlong)&pTVar8->field0_0x0 + 8) ^ _UNK_15066df78;
    UE::Math::TQuat<double>::FindBetweenVectors
              ((TQuat<double> *)&TStack_128._s_0,&UE::Math::TVector<double>::UpVector,
               (TVector<double> *)&TStack_140._s_0);
    uVar13 = SUB84(dStack_110,0);
    uVar15 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    dVar17 = __real_bff0000000000000;
    if (__real_bff0000000000000 <= dStack_110) {
      if (__real_3ff0000000000000 <= dStack_110) {
        uVar13 = SUB84(__real_3ff0000000000000,0);
        uVar15 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      dVar17 = (double)CONCAT44(uVar15,uVar13);
    }
    dVar17 = acos(dVar17);
    dVar18 = TStack_128._s_0.Z * TStack_128._s_0.Z + TStack_128._s_0.X * TStack_128._s_0.X;
    dVar20 = TStack_128._s_0.Y * TStack_128._s_0.Y + 0.0;
    dVar19 = dVar20 + dVar18;
    dVar18 = dVar18 + dVar20;
    auVar2._8_4_ = SUB84(dVar18,0);
    auVar2._0_8_ = dVar19;
    auVar2._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar22 = sqrtpd(in_XMM3,auVar2);
    uVar10 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar19);
    uVar12 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar18);
    auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
    uVar11 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar19);
    auVar27._0_8_ = uVar10 & (ulonglong)(auVar26._0_8_ * TStack_128._s_0.X);
    uVar7 = uVar12 & (ulonglong)(auVar26._8_8_ * TStack_128._s_0.Y);
    auVar27._8_4_ = (undefined4)uVar7;
    auVar27._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar21._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
    auVar21._4_4_ =
         ~(uint)(uVar10 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
    auVar21._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
    auVar21._12_4_ =
         ~(uint)(uVar12 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
    TStack_178._s_0.Z =
         (double)(CONCAT44(~(uint)(uVar11 >> 0x20) &
                           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                 0x20),
                           ~(uint)uVar11 &
                           SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                 uVar11 & (ulonglong)(auVar22._0_8_ * TStack_128._s_0.Z));
    if ((__real_3e32b8c3 <= (float)(dVar17 + dVar17)) &&
       ((float)(dVar17 + dVar17) <= __real_403de44f)) goto LAB_147b22bfe;
    __libm_sse2_sincos_();
    dVar4 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    dVar20 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar27 | auVar21,0);
    dVar19 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * TStack_178._s_0.Z;
    dVar18 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar27 | auVar21,8);
    dVar17 = dVar18 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
             dVar19 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    dVar17 = dVar17 + dVar17;
    dVar25 = dVar19 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
             dVar20 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar25 = dVar25 + dVar25;
    dVar23 = dVar20 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
             dVar18 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dVar23 = dVar23 + dVar23;
    TStack_140._s_0.X =
         (dVar23 * dVar18 - dVar25 * dVar19) +
         dVar17 * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    TStack_178._s_0.X =
         (double)CONCAT44((uint)((ulonglong)TStack_140._s_0.X >> 0x20) ^ uVar16,
                          SUB84(TStack_140._s_0.X,0) ^ uVar14);
    TStack_140._s_0.Z =
         (dVar25 * dVar20 - dVar17 * dVar18) +
         dVar23 * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    TStack_140._s_0.Y =
         (dVar17 * dVar19 - dVar23 * dVar20) +
         dVar25 * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    TStack_178._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)TStack_140._s_0.Z >> 0x20) ^ uVar16,
                          SUB84(TStack_140._s_0.Z,0) ^ uVar14);
    TStack_178._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)TStack_140._s_0.Y >> 0x20) ^ uVar16,
                          SUB84(TStack_140._s_0.Y,0) ^ uVar14);
  }
  else {
    UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
              ((TRotationMatrix<double> *)&dStack_108,&TStack_158);
    lVar1 = this_00->_padding_;
    if (lVar1 == 0) {
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar15 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      uVar13 = *(undefined4 *)(lVar1 + 0x220);
      uVar15 = *(undefined4 *)(lVar1 + 0x224);
      uVar24 = *(double *)(lVar1 + 0x210);
      uVar29 = *(double *)(lVar1 + 0x218);
    }
    auVar5._4_8_ = in_XMM3._8_8_;
    auVar5._0_4_ = auStack_e8._4_4_;
    auVar26._0_8_ = auVar5._0_8_ << 0x20;
    auVar26._8_4_ = auStack_e8._8_4_;
    auVar26._12_4_ = auStack_e8._12_4_;
    dVar17 = (this->LastOrbitPawnLocation).field0_0x0._s_0.X;
    dVar19 = (double)uVar24 - dVar17;
    dVar25 = (double)uVar29 - (this->LastOrbitPawnLocation).field0_0x0._s_0.Y;
    TStack_178._s_0.Z = (double)CONCAT44(uVar15,uVar13);
    dVar20 = TStack_178._s_0.Z - (this->LastOrbitPawnLocation).field0_0x0._s_0.Z;
    auVar28._8_4_ = SUB84(dVar25,0);
    auVar28._0_8_ = dVar19;
    auVar28._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar18 = dVar20 * dStack_d8;
    dVar20 = auVar28._8_8_ * dStack_100 + dVar19 * dStack_108 + dVar20 * dStack_f8 + dStack_f0 * 0.0
    ;
    dVar19 = dVar25 * auVar26._8_8_ + dVar19 * auStack_e8._0_8_ + dVar18 + dStack_d0 * 0.0;
    auVar6._4_8_ = dVar18;
    auVar6._0_4_ = (int)((ulonglong)dVar20 >> 0x20);
    auVar22._0_8_ = auVar6._0_8_ << 0x20;
    uVar14 = SUB84(dVar19,0);
    auVar22._8_4_ = uVar14;
    uVar16 = (uint)((ulonglong)dVar19 >> 0x20);
    auVar22._12_4_ = uVar16;
    uVar14 = uVar14 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar16 = uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar16,uVar14) < __real_3f847ae147ae147b ||
        (double)CONCAT44(uVar16,uVar14) == __real_3f847ae147ae147b) {
      dVar20 = dVar20 * __real_4008000000000000;
      if (dVar20 <= (double)(this->OrbitRadius - __real_41f00000)) {
        this->OrbitRadius = (float)((double)this->OrbitRadius - dVar20);
      }
      else {
        this->OrbitRadius = (float)__real_403e000000000000;
      }
      goto LAB_147b22bfe;
    }
    dVar19 = auVar22._8_8_ + auVar22._8_8_;
    TStack_178._s_0.X =
         ((this->OrbitPivot).field0_0x0._s_0.X - dVar17) -
         (dVar19 * auStack_e8._0_8_ + dStack_108 * 0.0 + dStack_c8 * 0.0 + dStack_a8 * 0.0);
    TStack_178._s_0.Y =
         ((this->OrbitPivot).field0_0x0._s_0.Y - (this->LastOrbitPawnLocation).field0_0x0._s_0.Y) -
         (dVar19 * auStack_e8._8_8_ + dStack_100 * 0.0 + dStack_c0 * 0.0 + dStack_a0 * 0.0);
    TStack_178._s_0.Z =
         ((this->OrbitPivot).field0_0x0._s_0.Z - (this->LastOrbitPawnLocation).field0_0x0._s_0.Z) -
         (dVar19 * dStack_d8 + dStack_f8 * 0.0 + dStack_b8 * 0.0 + dStack_98 * 0.0);
  }
  pTVar9 = UE::Math::TVector<double>::ToOrientationRotator
                     ((TVector<double> *)&TStack_178._s_0,(TRotator<double> *)&TStack_128._s_0);
  TStack_158.Pitch = pTVar9->Pitch;
  TStack_158.Yaw = pTVar9->Yaw;
  TStack_158.Roll = pTVar9->Roll;
LAB_147b22bfe:
  pTVar8 = UE::Math::TRotator<double>::Vector(&TStack_158,(TVector<double> *)&TStack_128._s_0);
  dVar19 = (this->OrbitPivot).field0_0x0._s_0.Y;
  dVar18 = (pTVar8->field0_0x0)._s_0.Y;
  dVar20 = (double)this->OrbitRadius;
  dVar17 = (this->OrbitPivot).field0_0x0._s_0.Z - dVar20 * (pTVar8->field0_0x0)._s_0.Z;
  (this->LastOrbitPawnLocation).field0_0x0._s_0.X =
       (this->OrbitPivot).field0_0x0._s_0.X - dVar20 * (pTVar8->field0_0x0)._s_0.X;
  auVar3._8_4_ = SUB84(dVar17,0);
  auVar3._0_8_ = dVar19 - dVar20 * dVar18;
  auVar3._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->LastOrbitPawnLocation).field0_0x0 + 8) = auVar3;
  AActor::SetActorLocation
            ((AActor *)this_00,&this->LastOrbitPawnLocation,false,(FHitResult *)0x0,None);
  (**(code **)(this->_padding_ + 0x7b0))(this,&TStack_158);
  TStack_178._s_0.X = TStack_158.Pitch;
  TStack_178._s_0.Y = TStack_158.Yaw;
  TStack_178._s_0.Z = TStack_158.Roll;
  (**(code **)(this_00->_padding_ + 0x850))(this_00,&TStack_178);
  return;
}

// UpdateRotationForOrbit @ 147b225c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::UpdateRotationForOrbit(ADebugCameraController *this,float param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  ulonglong uVar7;
  APawn *this_00;
  TVector<double> *pTVar8;
  TRotator<double> *pTVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  uint uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db;
  uint uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar29;
  undefined1 auVar28 [16];
  TVector<double>_u_0 local_178;
  TRotator<double> local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  
  this_00 = APlayerController::GetPawnOrSpectator((APlayerController *)this);
  if (this->bIsOrbitingSelectedActor == 0) {
    return;
  }
  if (this_00 == (APawn *)0x0) {
    return;
  }
  (**(code **)(this->_padding_ + 0x7a8))(this,&local_158);
  pTVar8 = APawn::GetLastMovementInputVector(this_00,(TVector<double> *)&local_178._s_0);
  dVar17 = __real_4076800000000000;
  if ((((pTVar8->field0_0x0)._s_0.X == 0.0) && ((pTVar8->field0_0x0)._s_0.Y == 0.0)) &&
     ((pTVar8->field0_0x0)._s_0.Z == 0.0)) {
    dVar19 = FGenericPlatformMath::Fmod((double)this->_padding_,__real_4076800000000000);
    if (dVar19 < 0.0) {
      dVar19 = dVar19 + dVar17;
    }
    if (dVar19 == 0.0) {
      dVar19 = FGenericPlatformMath::Fmod((double)this->_padding_,dVar17);
      if (dVar19 < 0.0) {
        dVar19 = dVar19 + dVar17;
      }
      if (dVar19 == 0.0) {
        dVar19 = FGenericPlatformMath::Fmod((double)this->_padding_,dVar17);
        if (dVar19 < 0.0) {
          dVar19 = dVar19 + dVar17;
        }
        if (dVar19 == 0.0) {
          return;
        }
      }
    }
    local_158.Pitch = local_158.Pitch + (double)this->_padding_;
    local_158.Yaw = local_158.Yaw + (double)this->_padding_;
    local_158.Roll = local_158.Roll + (double)this->_padding_;
    pTVar8 = UE::Math::TRotator<double>::Vector(&local_158,(TVector<double> *)&local_178._s_0);
    uVar16 = __xmm_80000000000000008000000000000000._4_4_;
    uVar14 = (uint)__xmm_80000000000000008000000000000000;
    uVar24 = *(undefined8 *)((longlong)&pTVar8->field0_0x0 + 0x10);
    local_140._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)uVar24 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar24 ^ (uint)__xmm_80000000000000008000000000000000);
    local_140._4_4_ =
         *(uint *)((longlong)&pTVar8->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_
    ;
    local_140._0_4_ = *(uint *)&pTVar8->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    local_140._12_4_ = *(uint *)((longlong)&pTVar8->field0_0x0 + 0xc) ^ _UNK_15066df7c;
    local_140._8_4_ = *(uint *)((longlong)&pTVar8->field0_0x0 + 8) ^ _UNK_15066df78;
    UE::Math::TQuat<double>::FindBetweenVectors
              ((TQuat<double> *)&local_128._s_0,&UE::Math::TVector<double>::UpVector,
               (TVector<double> *)&local_140._s_0);
    uVar13 = SUB84(dStack_110,0);
    uVar15 = (undefined4)((ulonglong)dStack_110 >> 0x20);
    dVar17 = __real_bff0000000000000;
    if (__real_bff0000000000000 <= dStack_110) {
      if (__real_3ff0000000000000 <= dStack_110) {
        uVar13 = SUB84(__real_3ff0000000000000,0);
        uVar15 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      dVar17 = (double)CONCAT44(uVar15,uVar13);
    }
    dVar17 = acos(dVar17);
    dVar18 = local_128._s_0.Z * local_128._s_0.Z + local_128._s_0.X * local_128._s_0.X;
    dVar20 = local_128._s_0.Y * local_128._s_0.Y + 0.0;
    dVar19 = dVar20 + dVar18;
    dVar18 = dVar18 + dVar20;
    auVar2._8_4_ = SUB84(dVar18,0);
    auVar2._0_8_ = dVar19;
    auVar2._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar22 = sqrtpd(in_XMM3,auVar2);
    uVar10 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar19);
    uVar12 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar18);
    auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar22);
    uVar11 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar19);
    auVar27._0_8_ = uVar10 & (ulonglong)(auVar26._0_8_ * local_128._s_0.X);
    uVar7 = uVar12 & (ulonglong)(auVar26._8_8_ * local_128._s_0.Y);
    auVar27._8_4_ = (undefined4)uVar7;
    auVar27._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar21._0_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
    auVar21._4_4_ =
         ~(uint)(uVar10 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
    auVar21._8_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
    auVar21._12_4_ =
         ~(uint)(uVar12 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
    local_178._s_0.Z =
         (double)(CONCAT44(~(uint)(uVar11 >> 0x20) &
                           (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                 0x20),
                           ~(uint)uVar11 &
                           SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                 uVar11 & (ulonglong)(auVar22._0_8_ * local_128._s_0.Z));
    if ((__real_3e32b8c3 <= (float)(dVar17 + dVar17)) &&
       ((float)(dVar17 + dVar17) <= __real_403de44f)) goto LAB_147b22bfe;
    __libm_sse2_sincos_();
    dVar4 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    dVar20 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar27 | auVar21,0);
    dVar19 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_178._s_0.Z;
    dVar18 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * SUB168(auVar27 | auVar21,8);
    dVar17 = dVar18 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
             dVar19 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    dVar17 = dVar17 + dVar17;
    dVar25 = dVar19 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
             dVar20 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar25 = dVar25 + dVar25;
    dVar23 = dVar20 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
             dVar18 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dVar23 = dVar23 + dVar23;
    local_140._s_0.X =
         (dVar23 * dVar18 - dVar25 * dVar19) +
         dVar17 * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    local_178._s_0.X =
         (double)CONCAT44((uint)((ulonglong)local_140._s_0.X >> 0x20) ^ uVar16,
                          SUB84(local_140._s_0.X,0) ^ uVar14);
    local_140._s_0.Z =
         (dVar25 * dVar20 - dVar17 * dVar18) +
         dVar23 * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    local_140._s_0.Y =
         (dVar17 * dVar19 - dVar23 * dVar20) +
         dVar25 * dVar4 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    local_178._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_140._s_0.Z >> 0x20) ^ uVar16,
                          SUB84(local_140._s_0.Z,0) ^ uVar14);
    local_178._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)local_140._s_0.Y >> 0x20) ^ uVar16,
                          SUB84(local_140._s_0.Y,0) ^ uVar14);
  }
  else {
    UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
              ((TRotationMatrix<double> *)&local_108,&local_158);
    lVar1 = this_00->_padding_;
    if (lVar1 == 0) {
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar15 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
    else {
      uVar13 = *(undefined4 *)(lVar1 + 0x220);
      uVar15 = *(undefined4 *)(lVar1 + 0x224);
      uVar24 = *(double *)(lVar1 + 0x210);
      uVar29 = *(double *)(lVar1 + 0x218);
    }
    auVar5._4_8_ = in_XMM3._8_8_;
    auVar5._0_4_ = local_e8._4_4_;
    auVar26._0_8_ = auVar5._0_8_ << 0x20;
    auVar26._8_4_ = local_e8._8_4_;
    auVar26._12_4_ = local_e8._12_4_;
    dVar17 = (this->LastOrbitPawnLocation).field0_0x0._s_0.X;
    dVar19 = (double)uVar24 - dVar17;
    dVar25 = (double)uVar29 - (this->LastOrbitPawnLocation).field0_0x0._s_0.Y;
    local_178._s_0.Z = (double)CONCAT44(uVar15,uVar13);
    dVar20 = local_178._s_0.Z - (this->LastOrbitPawnLocation).field0_0x0._s_0.Z;
    auVar28._8_4_ = SUB84(dVar25,0);
    auVar28._0_8_ = dVar19;
    auVar28._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar18 = dVar20 * local_d8;
    dVar20 = auVar28._8_8_ * dStack_100 + dVar19 * local_108 + dVar20 * local_f8 + dStack_f0 * 0.0;
    dVar19 = dVar25 * auVar26._8_8_ + dVar19 * local_e8._0_8_ + dVar18 + dStack_d0 * 0.0;
    auVar6._4_8_ = dVar18;
    auVar6._0_4_ = (int)((ulonglong)dVar20 >> 0x20);
    auVar22._0_8_ = auVar6._0_8_ << 0x20;
    uVar14 = SUB84(dVar19,0);
    auVar22._8_4_ = uVar14;
    uVar16 = (uint)((ulonglong)dVar19 >> 0x20);
    auVar22._12_4_ = uVar16;
    uVar14 = uVar14 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar16 = uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar16,uVar14) < __real_3f847ae147ae147b ||
        (double)CONCAT44(uVar16,uVar14) == __real_3f847ae147ae147b) {
      dVar20 = dVar20 * __real_4008000000000000;
      if (dVar20 <= (double)(this->OrbitRadius - __real_41f00000)) {
        this->OrbitRadius = (float)((double)this->OrbitRadius - dVar20);
      }
      else {
        this->OrbitRadius = (float)__real_403e000000000000;
      }
      goto LAB_147b22bfe;
    }
    dVar19 = auVar22._8_8_ + auVar22._8_8_;
    local_178._s_0.X =
         ((this->OrbitPivot).field0_0x0._s_0.X - dVar17) -
         (dVar19 * local_e8._0_8_ + local_108 * 0.0 + local_c8 * 0.0 + local_a8 * 0.0);
    local_178._s_0.Y =
         ((this->OrbitPivot).field0_0x0._s_0.Y - (this->LastOrbitPawnLocation).field0_0x0._s_0.Y) -
         (dVar19 * local_e8._8_8_ + dStack_100 * 0.0 + dStack_c0 * 0.0 + dStack_a0 * 0.0);
    local_178._s_0.Z =
         ((this->OrbitPivot).field0_0x0._s_0.Z - (this->LastOrbitPawnLocation).field0_0x0._s_0.Z) -
         (dVar19 * local_d8 + local_f8 * 0.0 + local_b8 * 0.0 + local_98 * 0.0);
  }
  pTVar9 = UE::Math::TVector<double>::ToOrientationRotator
                     ((TVector<double> *)&local_178._s_0,(TRotator<double> *)&local_128._s_0);
  local_158.Pitch = pTVar9->Pitch;
  local_158.Yaw = pTVar9->Yaw;
  local_158.Roll = pTVar9->Roll;
LAB_147b22bfe:
  pTVar8 = UE::Math::TRotator<double>::Vector(&local_158,(TVector<double> *)&local_128._s_0);
  dVar19 = (this->OrbitPivot).field0_0x0._s_0.Y;
  dVar18 = (pTVar8->field0_0x0)._s_0.Y;
  dVar20 = (double)this->OrbitRadius;
  dVar17 = (this->OrbitPivot).field0_0x0._s_0.Z - dVar20 * (pTVar8->field0_0x0)._s_0.Z;
  (this->LastOrbitPawnLocation).field0_0x0._s_0.X =
       (this->OrbitPivot).field0_0x0._s_0.X - dVar20 * (pTVar8->field0_0x0)._s_0.X;
  auVar3._8_4_ = SUB84(dVar17,0);
  auVar3._0_8_ = dVar19 - dVar20 * dVar18;
  auVar3._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->LastOrbitPawnLocation).field0_0x0 + 8) = auVar3;
  AActor::SetActorLocation
            ((AActor *)this_00,&this->LastOrbitPawnLocation,false,(FHitResult *)0x0,None);
  (**(code **)(this->_padding_ + 0x7b0))(this,&local_158);
  local_178._s_0.X = local_158.Pitch;
  local_178._s_0.Y = local_158.Yaw;
  local_178._s_0.Z = local_158.Roll;
  (**(code **)(this_00->_padding_ + 0x850))(this_00,&local_178);
  return;
}

// UpdateVisualizeBufferPostProcessing @ 147b22d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADebugCameraController::UpdateVisualizeBufferPostProcessing
          (ADebugCameraController *this,FFinalPostProcessSettings *param_1)

{
  FBufferVisualizationData *this_00;
  FName *pFVar1;
  UMaterialInterface *pUVar2;
  wchar_t *pwVar3;
  int iVar4;
  FName local_res8;
  FString local_18;
  
  if (this->bEnableBufferVisualization == 0) goto LAB_147b22ded;
  if ((this->CurrSelectedBuffer).Data.ArrayNum < 2) {
LAB_147b22d85:
    ::FString::FString(&local_18,L"");
  }
  else {
    this_00 = GetBufferVisualizationData();
    if ((this->CurrSelectedBuffer).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(this->CurrSelectedBuffer).Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,pwVar3);
    pUVar2 = FBufferVisualizationData::GetMaterial(this_00,*pFVar1);
    if (pUVar2 == (UMaterialInterface *)0x0) goto LAB_147b22d85;
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_18);
  }
  if (1 < local_18.Data.ArrayNum) {
    iVar4 = local_18.Data.ArrayNum + -1;
    param_1->bBufferVisualizationOverviewTargetIsSelected = true;
    if (local_18.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              (&param_1->BufferVisualizationOverviewSelectedTargetMaterialName,
               (wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_147b22ded:
  param_1->bBufferVisualizationOverviewTargetIsSelected = false;
  ::FString::Empty(&param_1->BufferVisualizationOverviewSelectedTargetMaterialName);
  return;
}

// execGetSelectedActor @ 147b26400

void __cdecl
ADebugCameraController::execGetSelectedActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x30].field_0x18);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execSetPawnMovementSpeedScale @ 147b26720

void __cdecl
ADebugCameraController::execSetPawnMovementSpeedScale
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)&param_1[0x37].field_0x20 = local_res8[0];
  (**(code **)(lVar2 + 0xfa8))(param_1);
  return;
}

// execShowDebugSelectedInfo @ 147b267c0

void __cdecl
ADebugCameraController::execShowDebugSelectedInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147b267d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0xf98))();
  return;
}

// execToggleDisplay @ 147b267f0

void __cdecl
ADebugCameraController::execToggleDisplay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[0x16].field_0x18 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b26814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)&param_1[0x16].field_0x18 + 0x760))();
    return;
  }
  return;
}

