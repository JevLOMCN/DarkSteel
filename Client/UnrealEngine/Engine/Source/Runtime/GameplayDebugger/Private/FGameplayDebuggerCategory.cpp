// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 15

// FGameplayDebuggerCategory @ 146d3f9c0

FGameplayDebuggerCategory * __thiscall
FGameplayDebuggerCategory::FGameplayDebuggerCategory(FGameplayDebuggerCategory *this)

{
  undefined1 *puVar1;
  
  this->bShowDataPackReplication = 0;
  this->bIsLocal = 0;
  this->bAllowLocalDataCollection = 0;
  this->bShowUpdateTimer = 0;
  this->bShowCategoryName = 1;
  this->bIsEnabled = 1;
  this->bHasAuthority = 1;
  this->bShowOnlyWithDebugActor = 1;
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory__6B_;
  this->LastCollectDataTime = -1.7976931348623157e+308;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->CollectDataInterval = 0.0;
  this->CategoryId = -1;
  (this->CategoryName).ComparisonIndex = 0;
  (this->CategoryName).Number = 0;
  (this->ReplicatedLines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedLines).ArrayNum = 0;
  (this->ReplicatedLines).ArrayMax = 0;
  (this->ReplicatedShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedShapes).ArrayNum = 0;
  (this->ReplicatedShapes).ArrayMax = 0;
  (this->ReplicatedDataPacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicatedDataPacks).ArrayNum = 0;
  (this->ReplicatedDataPacks).ArrayMax = 0;
  return this;
}

// ~FGameplayDebuggerCategory @ 146d41210

void __thiscall
FGameplayDebuggerCategory::~FGameplayDebuggerCategory(FGameplayDebuggerCategory *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FGameplayDebuggerCategory__6B_;
  DestructItems<FGameplayDebuggerDataPack,int>
            ((FGameplayDebuggerDataPack *)(this->ReplicatedDataPacks).AllocatorInstance.Data,
             (this->ReplicatedDataPacks).ArrayNum);
  pFVar3 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FGameplayDebuggerShape,int>
            ((FGameplayDebuggerShape *)(this->ReplicatedShapes).AllocatorInstance.Data,
             (this->ReplicatedShapes).ArrayNum);
  pFVar3 = (this->ReplicatedShapes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->ReplicatedLines).AllocatorInstance.Data,
             (this->ReplicatedLines).ArrayNum);
  pFVar3 = (this->ReplicatedLines).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FGameplayDebuggerAddonBase__6B_;
  DestructItems<FGameplayDebuggerInputHandler,int>
            ((FGameplayDebuggerInputHandler *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146d412ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// AddShape @ 146d42e40

void __thiscall
FGameplayDebuggerCategory::AddShape(FGameplayDebuggerCategory *this,FGameplayDebuggerShape *param_1)

{
  int *piVar1;
  FGameplayDebuggerShape *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this->bAllowLocalDataCollection != 0 || this->bHasAuthority != 0) {
    pFVar2 = (FGameplayDebuggerShape *)(this->ReplicatedShapes).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->ReplicatedShapes).ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ReplicatedShapes).ArrayNum;
    piVar1 = &(this->ReplicatedShapes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&(this->ReplicatedShapes).AllocatorInstance,piVar1);
    }
    (this->ReplicatedShapes).ArrayNum = iVar5 + 1;
    FGameplayDebuggerShape::FGameplayDebuggerShape
              ((FGameplayDebuggerShape *)
               ((this->ReplicatedShapes).AllocatorInstance.Data + (longlong)iVar5 * 0x28),param_1);
  }
  return;
}

// AddTextLine @ 146d42f10

void __thiscall
FGameplayDebuggerCategory::AddTextLine(FGameplayDebuggerCategory *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if (this->bAllowLocalDataCollection != 0 || this->bHasAuthority != 0) {
    pFVar2 = (this->ReplicatedLines).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) &&
       (param_1 < pFVar2 + (longlong)(this->ReplicatedLines).ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->ReplicatedLines).ArrayNum;
    piVar1 = &(this->ReplicatedLines).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ReplicatedLines).AllocatorInstance,piVar1);
    }
    (this->ReplicatedLines).ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)
                       ((this->ReplicatedLines).AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                       param_1);
  }
  return;
}

// CollectData @ 146d458e0

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
FGameplayDebuggerCategory::CollectData
          (FGameplayDebuggerCategory *this,APlayerController *param_1,AActor *param_2)

{
  return;
}

// CreateDebugSceneProxy @ 146d47260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FDebugRenderSceneProxy * __thiscall
FGameplayDebuggerCategory::CreateDebugSceneProxy
          (FGameplayDebuggerCategory *this,UPrimitiveComponent *param_1,
          FDebugDrawDelegateHelper **param_2)

{
  *param_2 = (FDebugDrawDelegateHelper *)0x0;
  return (FDebugRenderSceneProxy *)0x0;
}

// DrawCategory @ 146d49220

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

void __thiscall
FGameplayDebuggerCategory::DrawCategory
          (FGameplayDebuggerCategory *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  UWorld *pUVar9;
  AActor *this_00;
  FString *pFVar10;
  longlong lVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  bVar4 = false;
  bVar7 = false;
  bVar6 = FWeakObjectPtr::IsValid(&(param_2->World).WeakPtr);
  if (bVar6) {
    pUVar9 = (UWorld *)FWeakObjectPtr::Get(&(param_2->World).WeakPtr);
  }
  else {
    bVar6 = FWeakObjectPtr::IsValid(&(param_2->PlayerController).WeakPtr);
    if (!bVar6) goto LAB_146d4964e;
    this_00 = (AActor *)FWeakObjectPtr::Get(&(param_2->PlayerController).WeakPtr);
    pUVar9 = AActor::GetWorld(this_00);
  }
  if (pUVar9 != (UWorld *)0x0) {
    FVar13.Data = (FScriptContainerElement *)0x0;
    if (this->bShowCategoryName == 0) {
      ::FName::ToString(&this->CategoryName,local_68);
      ::FString::PrintfImpl(&local_a8,L"{green}[%s]{white}  ");
      FVar13.Data = local_a8.Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
    }
    fVar5 = __real_3f800000;
    if (this->bShowUpdateTimer == 1 && this->bHasAuthority == 1) {
      FGameplayDebuggerCanvasContext::PrintfImpl
                (param_2,&FColor::White,__real_3f800000,L"%sNext update in: {yellow}%.0fs");
    }
    if ((this->bShowDataPackReplication != 0) &&
       (uVar12 = 0, 0 < (this->ReplicatedDataPacks).ArrayNum)) {
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->ReplicatedDataPacks).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->ReplicatedDataPacks).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar2 + lVar11 + 0x14);
        if ((0 < iVar1) && (*(int *)(pFVar2 + lVar11 + 0x18) < iVar1)) {
          if ((this->ReplicatedDataPacks).ArrayNum == 1) {
            bVar4 = true;
            ::FString::PrintfImpl(&local_78,L"%sReplicating: {red}%.0f%% {white}(ver:%d)");
            pFVar10 = &local_78;
            local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
          }
          else {
            bVar7 = true;
            ::FString::PrintfImpl(&local_88,L"%sReplicating data[%d]: {red}%.0f%% {white}(ver:%d)");
            pFVar10 = &local_88;
            local_98.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
          }
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_98.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
          if ((bVar7) &&
             (bVar7 = false, local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          if ((bVar4) &&
             (bVar4 = false, local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          FGameplayDebuggerCanvasContext::Print(param_2,&FColor::White,fVar5,&local_98);
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x60;
      } while ((int)uVar12 < (this->ReplicatedDataPacks).ArrayNum);
    }
    uVar12 = 0;
    if (0 < (this->ReplicatedLines).ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->ReplicatedLines).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FGameplayDebuggerCanvasContext::Print
                  (param_2,&FColor::White,fVar5,
                   (FString *)
                   ((this->ReplicatedLines).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10));
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (this->ReplicatedLines).ArrayNum);
    }
    uVar12 = 0;
    if (0 < (this->ReplicatedShapes).ArrayNum) {
      do {
        uVar8 = 0;
        if ((int)uVar12 < (this->ReplicatedShapes).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FGameplayDebuggerShape::Draw
                  ((FGameplayDebuggerShape *)
                   ((this->ReplicatedShapes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x28),
                   pUVar9,param_2);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (this->ReplicatedShapes).ArrayNum);
    }
    (**(code **)(this->_padding_ + 0x20))(this,param_1,param_2);
    if (FVar13.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FVar13.Data);
    return;
  }
LAB_146d4964e:
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4945372760776900536>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerCategory.cpp"
                     ,0x48,"World");
  if (!bVar7) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// DrawData @ 146d49bc0

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
FGameplayDebuggerCategory::DrawData
          (FGameplayDebuggerCategory *this,APlayerController *param_1,
          FGameplayDebuggerCanvasContext *param_2)

{
  return;
}

// GetSceneProxyViewFlag @ 146d4dbc0

FString * __thiscall
FGameplayDebuggerCategory::GetSceneProxyViewFlag
          (FGameplayDebuggerCategory *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Game");
  return __return_storage_ptr__;
}

// GetViewPoint @ 146d4e140

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
FGameplayDebuggerCategory::GetViewPoint
          (FGameplayDebuggerCategory *this,APlayerController *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  bool bVar1;
  AGameplayDebuggerCategoryReplicator *this_00;
  
  this_00 = (AGameplayDebuggerCategoryReplicator *)
            FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((this_00 != (AGameplayDebuggerCategoryReplicator *)0x0) &&
     (bVar1 = AGameplayDebuggerCategoryReplicator::GetViewPoint(this_00,param_2,param_3), bVar1)) {
    return true;
  }
  if (param_1 != (APlayerController *)0x0) {
    AGameplayDebuggerPlayerManager::GetViewPoint(param_1,param_2,param_3);
    return true;
  }
  return false;
}

// IsLocationInViewCone @ 146d4f420

bool __cdecl
FGameplayDebuggerCategory::IsLocationInViewCone
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  UObject *pUVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *this;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  
  this = UGameplayDebuggerUserSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  dVar7 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar9 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  fVar5 = *(float *)&pUVar1[1].field_0x14;
  dVar6 = dVar2 * dVar2 + dVar7 * dVar7 + dVar9 * dVar9;
  if ((double)(fVar5 * fVar5) < dVar6) {
    bVar4 = false;
  }
  else {
    uVar8 = dVar7;
    uVar10 = dVar9;
    uVar3 = dVar2;
    if ((dVar6 != __real_3ff0000000000000) &&
       (uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar6)) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      uVar8 = dVar7 * dVar6;
      uVar10 = dVar9 * dVar6;
      uVar3 = dVar2 * dVar6;
    }
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.X;
    dVar7 = (param_2->field0_0x0)._s_0.Z;
    fVar5 = cosf(*(float *)&pUVar1[1].field_0x18 * __real_3c8efa35);
    bVar4 = (double)fVar5 <= (double)uVar3 * dVar2 + (double)uVar8 * dVar6 + (double)uVar10 * dVar7;
  }
  return bVar4;
}

// MarkDataPackDirty @ 146d51e50

void __thiscall
FGameplayDebuggerCategory::MarkDataPackDirty(FGameplayDebuggerCategory *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->ReplicatedDataPacks).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->ReplicatedDataPacks).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->ReplicatedDataPacks).AllocatorInstance.Data + (longlong)param_1 * 0x60 + 0x28;
    *(uint *)pFVar1 = *(uint *)pFVar1 | 1;
  }
  return;
}

// MarkRenderStateDirty @ 146d51ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FGameplayDebuggerCategory::MarkRenderStateDirty(FGameplayDebuggerCategory *this)

{
  AActor *this_00;
  
  if (this->bIsLocal != 0) {
    this_00 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (this_00 != (AActor *)0x0) {
      AActor::MarkComponentsRenderStateDirty(this_00);
      return;
    }
  }
  return;
}

// OnDataPackReplicated @ 146d55940

void __thiscall
FGameplayDebuggerCategory::OnDataPackReplicated(FGameplayDebuggerCategory *this,int param_1)

{
  return;
}

// ResetReplicatedData @ 146d5a980

void __thiscall FGameplayDebuggerCategory::ResetReplicatedData(FGameplayDebuggerCategory *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FGameplayDebuggerShape *pFVar4;
  FGameplayDebuggerDataPack *pFVar5;
  
  piVar1 = &(this->ReplicatedLines).ArrayMax;
  pFVar3 = (this->ReplicatedLines).AllocatorInstance.Data;
  iVar2 = (this->ReplicatedLines).ArrayNum;
  if ((this->ReplicatedLines).ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->ReplicatedLines).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ReplicatedLines).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,iVar2);
    (this->ReplicatedLines).ArrayNum = 0;
  }
  piVar1 = &(this->ReplicatedShapes).ArrayMax;
  pFVar4 = (FGameplayDebuggerShape *)(this->ReplicatedShapes).AllocatorInstance.Data;
  iVar2 = (this->ReplicatedShapes).ArrayNum;
  if ((this->ReplicatedShapes).ArrayMax < 0) {
    DestructItems<FGameplayDebuggerShape,int>(pFVar4,iVar2);
    (this->ReplicatedShapes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->ReplicatedShapes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FGameplayDebuggerShape,int>(pFVar4,iVar2);
    (this->ReplicatedShapes).ArrayNum = 0;
  }
  pFVar5 = (FGameplayDebuggerDataPack *)(this->ReplicatedDataPacks).AllocatorInstance.Data;
  piVar1 = &(this->ReplicatedDataPacks).ArrayMax;
  iVar2 = (this->ReplicatedDataPacks).ArrayNum;
  if (-1 < (this->ReplicatedDataPacks).ArrayMax) {
    DestructItems<FGameplayDebuggerDataPack,int>(pFVar5,iVar2);
    (this->ReplicatedDataPacks).ArrayNum = 0;
    return;
  }
  DestructItems<FGameplayDebuggerDataPack,int>(pFVar5,iVar2);
  (this->ReplicatedDataPacks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->ReplicatedDataPacks).AllocatorInstance,0,piVar1);
  }
  return;
}

