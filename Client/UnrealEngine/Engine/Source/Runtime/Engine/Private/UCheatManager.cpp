// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 141

// StaticClass @ 1476d7920

UClass * __cdecl UCheatManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheatManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheatManager",
               &Z_Registration_Info_UClass_UCheatManager.InnerSingleton,
               StaticRegisterNativesUCheatManager,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheatManager>,InternalVTableHelperCtorCaller<UCheatManager>,
               local_res8,UObject::StaticClass,APlayerController::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheatManager.InnerSingleton;
}

// UCheatManager @ 1476e83e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCheatManager * __thiscall UCheatManager::UCheatManager(UCheatManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCheatManager__6B_;
  (this->DebugCameraControllerRef).field0_0x0.DebugPtr = (ADebugCameraController *)0x0;
  (this->DebugCameraControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DebugTraceInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTraceInfoList).ArrayNum = 0;
  (this->DebugTraceInfoList).ArrayMax = 0;
  (this->DebugTracePawnInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTracePawnInfoList).ArrayNum = 0;
  (this->DebugTracePawnInfoList).ArrayMax = 0;
  (this->CheatManagerExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheatManagerExtensions).ArrayNum = 0;
  (this->CheatManagerExtensions).ArrayMax = 0;
  return this;
}

// UCheatManager @ 1476e8430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCheatManager * __thiscall
UCheatManager::UCheatManager(UCheatManager *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UCheatManager__6B_;
  (this->DebugCameraControllerRef).field0_0x0.DebugPtr = (ADebugCameraController *)0x0;
  (this->DebugCameraControllerClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->bToggleAILogging = 0;
  (this->DebugTraceInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTraceInfoList).ArrayNum = 0;
  (this->DebugTraceInfoList).ArrayMax = 0;
  (this->DebugTracePawnInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugTracePawnInfoList).ArrayNum = 0;
  (this->DebugTracePawnInfoList).ArrayMax = 0;
  (this->CheatManagerExtensions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheatManagerExtensions).ArrayNum = 0;
  (this->CheatManagerExtensions).ArrayMax = 0;
  pUVar1 = Z_Construct_UClass_ADebugCameraController_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->DebugCameraControllerClass).Class.field0_0x0.DebugPtr = pUVar1;
  this->bDebugCapsuleTraceComplex = 0;
  this->DebugCapsuleHalfHeight = 23.0;
  this->DebugCapsuleRadius = 21.0;
  this->DebugTraceDistance = 10000.0;
  this->DebugTraceDrawNormalLength = 30.0;
  (this->DebugTraceChannel).Value = '\x02';
  return this;
}

// ~UCheatManager @ 1476e91b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::~UCheatManager(UCheatManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UCheatManager__6B_;
  pFVar1 = (this->CheatManagerExtensions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugTracePawnInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugTraceInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddCapsuleSweepDebugInfo @ 1476eb160

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
UCheatManager::AddCapsuleSweepDebugInfo
          (UCheatManager *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,float param_7,float param_8,bool param_9,bool param_10)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  double dVar11;
  
  if (param_9) {
    this->CurrentTracePawnIndex = this->CurrentTracePawnIndex + 1;
    uVar10 = this->CurrentTracePawnIndex;
    if (9 < (int)uVar10) {
      this->CurrentTracePawnIndex = 0;
      uVar10 = 0;
    }
    uVar8 = 0;
    if ((int)uVar10 < (this->DebugTracePawnInfoList).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar9 = (this->DebugTracePawnInfoList).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xa0;
  }
  else {
    uVar10 = this->CurrentTraceIndex;
    uVar8 = 0;
    if ((int)uVar10 < (this->DebugTraceInfoList).ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar9 = (this->DebugTraceInfoList).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xa0;
  }
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  *(double *)pFVar9 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 8) = dVar4;
  *(double *)(pFVar9 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(pFVar9 + 0x18) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 0x20) = dVar4;
  *(double *)(pFVar9 + 0x28) = (param_2->field0_0x0)._s_0.Z;
  *(float *)(pFVar9 + 0x94) = param_8;
  *(float *)(pFVar9 + 0x90) = param_7;
  dVar4 = (param_6->field0_0x0)._s_0.Y;
  *(double *)(pFVar9 + 0x78) = (param_6->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 0x80) = dVar4;
  *(double *)(pFVar9 + 0x88) = (param_6->field0_0x0)._s_0.Z;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  *(double *)(pFVar9 + 0x30) = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar9 + 0x38) = dVar4;
  *(double *)(pFVar9 + 0x40) = (param_3->field0_0x0)._s_0.Z;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar11 = (double)this->DebugTraceDrawNormalLength;
  dVar4 = dVar11 * (param_4->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x48) = dVar11 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar11 * dVar5 + dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar9 + 0x50) = auVar2;
  dVar5 = (param_5->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar11 = (double)this->DebugTraceDrawNormalLength;
  dVar4 = dVar11 * (param_5->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
  *(double *)(pFVar9 + 0x60) = dVar11 * (param_5->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar11 * dVar5 + dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(pFVar9 + 0x68) = auVar3;
  *(uint *)(pFVar9 + 0x98) = *(uint *)(pFVar9 + 0x98) & 0xfffffffe;
  *(uint *)(pFVar9 + 0x98) = *(uint *)(pFVar9 + 0x98) | (uint)param_10;
  return;
}

// AddCheatManagerExtension @ 1476eb700

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
UCheatManager::AddCheatManagerExtension(UCheatManager *this,UCheatManagerExtension *param_1)

{
  TArray<TObjectPtr<UCheatManagerExtension>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UFunction *this_00;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  UCheatManagerExtension *local_18 [2];
  
  if (param_1 == (UCheatManagerExtension *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8936125195328944772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                       ,0x57c,"CheatObject");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar1 = &this->CheatManagerExtensions;
    pFVar8 = (this->CheatManagerExtensions).AllocatorInstance.Data;
    pFVar3 = pFVar8 + (longlong)(this->CheatManagerExtensions).ArrayNum * 8;
    for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 8) {
      if ((*(UCheatManagerExtension **)pFVar8 != (UCheatManagerExtension *)0x0) &&
         (*(UCheatManagerExtension **)pFVar8 == param_1)) {
        return;
      }
    }
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 <
         pFVar3 + (longlong)(this->CheatManagerExtensions).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->CheatManagerExtensions).ArrayNum;
    piVar2 = &(this->CheatManagerExtensions).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->CheatManagerExtensions).ArrayNum = iVar6 + 1;
    *(UCheatManagerExtension **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UCheatManagerExtension *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
    this_00 = UObject::FindFunctionChecked
                        ((UObject *)param_1,NAME_UCheatManagerExtension_AddedToCheatManager);
    pUVar7 = UField::GetOwnerClass((UField *)this_00);
    if ((pUVar7->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x0001476eb882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x260))(param_1,this_00,0);
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
  }
  return;
}

// BeginDestroy @ 1476f0600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::BeginDestroy(UCheatManager *this)

{
  FVisualLogger *pFVar1;
  
  if (this->bToggleAILogging != 0) {
    FVisualLogger::Get();
    if (FVisualLogger::bIsRecording != 0) {
      pFVar1 = FVisualLogger::Get();
      FVisualLogger::SetIsRecording(pFVar1,false);
      pFVar1 = FVisualLogger::Get();
      FVisualLogger::SetIsRecordingToFile(pFVar1,false);
      this->bToggleAILogging = 0;
      pFVar1 = FVisualLogger::Get();
      pFVar1->bIsRecordingOnServer = false;
    }
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// BugIt @ 1476f09f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::BugIt(UCheatManager *this,FString *param_1)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  IFileManager *pIVar5;
  longlong *plVar6;
  FString local_108;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  void *local_80 [2];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  plVar6 = (longlong *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    plVar6 = (longlong *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FPaths::BugItDir(&local_90);
  ::FString::PrintfImpl(&local_a0,L"%s%s/%s_");
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  pIVar5 = IFileManager::Get();
  ::FString::FString(&local_c0,L"png");
  FFileHelper::GenerateNextBitmapFilename(&local_a0,&local_c0,&local_108,pIVar5);
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(*plVar6 + 0xe00);
  ::FString::PrintfImpl(&local_b0,L"BUGSCREENSHOTWITHHUDINFO %s");
  (*pcVar3)(plVar6,local_80,&local_b0,1);
  if (local_80[0] != (void *)0x0) {
    FMemory::Free(local_80[0]);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  (**(code **)(*plVar6 + 0x840))(plVar6,&local_d8,&local_70);
  pUVar1 = (UObject *)plVar6[0x62];
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_1476f0bf8;
  }
  else {
    if (pUVar1 == (UObject *)0x0) goto LAB_1476f0bf8;
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (UObject *)plVar6[0x62];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  lVar2 = *(longlong *)(pUVar1 + 0xb);
  if (lVar2 == 0) {
    local_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_d4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_cc = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_c8 = *(double *)(lVar2 + 0x220);
    local_d8 = *(undefined4 *)(lVar2 + 0x210);
    uStack_d4 = *(undefined4 *)(lVar2 + 0x214);
    uStack_d0 = *(undefined4 *)(lVar2 + 0x218);
    uStack_cc = *(undefined4 *)(lVar2 + 0x21c);
  }
LAB_1476f0bf8:
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_48 = local_60;
  local_38 = local_d8;
  uStack_34 = uStack_d4;
  uStack_30 = uStack_d0;
  uStack_2c = uStack_cc;
  local_28 = local_c8;
  (**(code **)(this->_padding_ + 0x408))(this,&local_38,&local_58,&local_e8,&local_f8);
  (**(code **)(this->_padding_ + 0x438))(this,param_1,&local_108,&local_e8,&local_f8);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

// BugItGo @ 1476f0cd0

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
UCheatManager::BugItGo
          (UCheatManager *this,float param_1,float param_2,float param_3,float param_4,float param_5
          ,float param_6)

{
  double local_48;
  double local_40;
  double local_38;
  double local_28;
  double local_20;
  double local_18;
  
  local_48 = (double)param_4;
  local_28 = (double)param_1;
  local_38 = (double)param_6;
  local_40 = (double)param_5;
  local_20 = (double)param_2;
  local_18 = (double)param_3;
  (**(code **)(this->_padding_ + 0x430))(local_20,&local_28,&local_48);
  return;
}

// BugItGoString @ 1476f0d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::BugItGoString(UCheatManager *this,FString *param_1,FString *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_90;
  double dStack_88;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  
  pwVar2 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uStack_90 = 0.0;
  dStack_88 = 0.0;
  dVar3 = _wtof(pwVar1);
  pwVar1 = wcsstr(pwVar1,L",");
  if (pwVar1 != (wchar_t *)0x0) {
    dVar4 = _wtof(pwVar1 + 1);
    uStack_90 = (double)(float)dVar4;
    pwVar1 = wcsstr(pwVar1 + 1,L",");
    if (pwVar1 != (wchar_t *)0x0) {
      dVar4 = _wtof(pwVar1 + 1);
      dStack_88 = (double)(float)dVar4;
    }
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  dVar5 = _wtof(pwVar2);
  pwVar2 = wcsstr(pwVar2,L",");
  dVar4 = 0.0;
  local_68 = 0.0;
  if (pwVar2 != (wchar_t *)0x0) {
    dVar4 = _wtof(pwVar2 + 1);
    dVar4 = (double)(float)dVar4;
    pwVar2 = wcsstr(pwVar2 + 1,L",");
    local_68 = 0.0;
    if (pwVar2 != (wchar_t *)0x0) {
      dVar6 = _wtof(pwVar2 + 1);
      local_68 = (double)(float)dVar6;
    }
  }
  uStack_50 = (undefined4)uStack_90;
  uStack_4c = uStack_90._4_4_;
  local_48 = dStack_88;
  local_78 = (double)(float)dVar5;
  local_70 = dVar4;
  local_58 = (double)(float)dVar3;
  (**(code **)(this->_padding_ + 0x430))(this,&local_58,&local_78);
  return;
}

// BugItStringCreator @ 1476f0f00

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
UCheatManager::BugItStringCreator
          (UCheatManager *this,TVector<double> *param_1,TRotator<double> *param_2,FString *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [7];
  
  ::FString::PrintfImpl(&local_a8,L"BugItGo %f %f %f %f %f %f");
  if (param_3 != &local_a8) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_a8.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_a8.Data.ArrayMax;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogCheatManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
  }
  ::FString::PrintfImpl(local_78,L"P=%f Y=%f R=%f");
  ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_98,L"?BugLoc=%s?BugRot=%s");
  if (param_4 != &local_98) {
    pFVar1 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_4->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_98.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogCheatManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
  }
  return;
}

// BugItWorker @ 1476f1160

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
UCheatManager::BugItWorker(UCheatManager *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  APlayerController *this_00;
  longlong *plVar4;
  char *in_stack_ffffffffffffff78;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  if (4 < (byte)LogCheatManager._0_1_) {
    ::FString::PrintfImpl(&local_68,L"P=%f Y=%f R=%f");
    in_stack_ffffffffffffff78 = (char *)(param_1->field0_0x0)._s_0.Z;
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x2e8))(this);
  if ((this->_padding_ & 0x10) == 0) {
    plVar4 = (longlong *)this->_padding_;
  }
  else {
    in_stack_ffffffffffffff78 = "false || !HasAnyFlags(RF_ClassDefaultObject)";
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar4 = (longlong *)0x0;
  }
  pUVar1 = (UObject *)plVar4[0x62];
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_1476f12fb;
    UE::GC::MarkAsReachable(pUVar1);
  }
  if (pUVar1 != (UObject *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x5f8))
              (pUVar1,param_1,param_2,0,(ulonglong)in_stack_ffffffffffffff78 & 0xffffffffffffff00);
    local_48 = *(undefined4 *)&param_2->Pitch;
    uStack_44 = *(undefined4 *)((longlong)&param_2->Pitch + 4);
    uStack_40 = *(undefined4 *)&param_2->Yaw;
    uStack_3c = *(undefined4 *)((longlong)&param_2->Yaw + 4);
    local_38 = param_2->Roll;
    (**(code **)(*(longlong *)pUVar1 + 0x850))(pUVar1,&local_48,0);
  }
LAB_1476f12fb:
  (**(code **)(*plVar4 + 0x7b0))(plVar4);
  (**(code **)(this->_padding_ + 0x2e8))(this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (APlayerController *)this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = (APlayerController *)0x0;
  }
  ::FString::FString(&local_58,L"BugItGo: Ghost mode is ON");
  APlayerController::ClientMessage(this_00,&local_58,(FName)0x0,0.0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// ChangeSize @ 1476f61a0

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

void __thiscall UCheatManager::ChangeSize(UCheatManager *this,float param_1)

{
  int iVar1;
  AActor *this_00;
  UObject *pUVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TRotator<double> *pTVar8;
  longlong lVar9;
  char *in_stack_ffffffffffffff68;
  TVector<double>_u_0 local_88;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  TRotator<double> local_38 [2];
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    lVar9 = this->_padding_;
  }
  else {
    in_stack_ffffffffffffff68 = "false || !HasAnyFlags(RF_ClassDefaultObject)";
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = 0;
  }
  this_00 = *(AActor **)(lVar9 + 0x310);
  if (this_00 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pUVar6 = ACharacter::StaticClass();
    pUVar7 = (UClass *)this_00->_padding_;
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= (int)pUVar7->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) == &pUVar6->_padding_)
       ) {
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar2 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar7 = ACharacter::StaticClass();
      lVar9 = *(longlong *)&pUVar2->field_0x10;
      iVar1 = (int)pUVar7->_padding_;
      if (((*(int *)(lVar9 + 0x38) < iVar1) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar7->_padding_)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1181,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar9 = *(longlong *)&pUVar2[0x15].field_0x8;
      UCapsuleComponent::SetCapsuleSize
                (*(UCapsuleComponent **)&this_00[1].AttachmentReplication.RelativeScale3D,
                 param_1 * *(float *)(lVar9 + 0x56c),param_1 * *(float *)(lVar9 + 0x568),true);
      pUVar3 = *(USceneComponent **)&this_00[1].AttachmentReplication.LocationOffset.field_0x8;
      if (pUVar3 != (USceneComponent *)0x0) {
        local_88._s_0.Z = (double)param_1;
        local_88._8_4_ = SUB84(local_88._s_0.Z,0);
        local_88._0_8_ = local_88._s_0.Z;
        local_88._12_4_ = (int)((ulonglong)local_88._s_0.Z >> 0x20);
        USceneComponent::SetRelativeScale3D(pUVar3,(TVector<double> *)&local_88._s_0);
      }
      pcVar4 = *(code **)(this_00->_padding_ + 0x5f8);
      pTVar8 = AActor::GetActorRotation(this_00,local_38);
      pUVar3 = (this_00->RootComponent).field0_0x0.DebugPtr;
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_5c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pUVar3 != (USceneComponent *)0x0) {
        local_68 = *(undefined4 *)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64;
        uStack_64 = *(undefined4 *)
                     ((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        uStack_60 = *(undefined4 *)((pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        uStack_5c = *(undefined4 *)
                     ((longlong)(pUVar3->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
        local_58 = (pUVar3->ComponentToWorld).Translation.ZW.m128d_f64[0];
      }
      (*pcVar4)(this_00,&local_68,pTVar8,0,(ulonglong)in_stack_ffffffffffffff68 & 0xffffffffffffff00
               );
    }
  }
  return;
}

// CheatScript @ 1476f6390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::CheatScript(UCheatManager *this,FString *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  FConfigSection *pFVar13;
  FString *pFVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  longlong *plVar17;
  UObject *pUVar18;
  longlong *local_res8;
  ForAnyElementType local_158;
  int local_150;
  int local_14c;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  FString local_138;
  FString local_128;
  FConfigSection *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  FString local_f0;
  FConfigSection *local_e0;
  int iStack_d8;
  uint uStack_d4;
  longlong *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  void *local_70 [5];
  undefined4 local_44;
  
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  if ((this->_padding_ & 0x10) == 0) {
    local_res8 = (longlong *)this->_padding_;
    if (local_res8 != (longlong *)0x0) {
      if (local_res8[0x6f] == 0) {
LAB_1476f6460:
        lVar15 = 0;
      }
      else {
        pUVar12 = Z_Construct_UClass_ULocalPlayer_NoRegister();
        bVar10 = FObjectPtr::IsA((FObjectPtr *)(local_res8 + 0x6f),pUVar12);
        if (!bVar10) goto LAB_1476f6460;
        lVar15 = local_res8[0x6f];
      }
      if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x78) != 0)) {
        pUVar18 = *(UObject **)(*(longlong *)(lVar15 + 0x78) + 0x70);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar18);
        }
        goto LAB_1476f640a;
      }
    }
  }
  else {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6281605350772703132>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                        ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res8 = (longlong *)0x0;
  }
  pUVar18 = (UObject *)0x0;
LAB_1476f640a:
  ::FString::PrintfImpl(&local_f0,L"CheatScript.%s");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar16.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar13 = FConfigCacheIni::GetSection(GConfig,(wchar_t *)FVar16.Data,false,&GGameIni);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (pFVar13 == (FConfigSection *)0x0) {
    if (2 < (byte)LogCheatManager._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
    }
  }
  else {
    iVar3 = (int)pFVar13->_padding_;
    local_d0 = &pFVar13->_padding_;
    iStack_d8 = 0;
    uStack_d4 = 1;
    local_c0 = 0;
    iVar11 = iStack_d8;
    if (iVar3 != 0) {
      plVar17 = (longlong *)pFVar13->_padding_;
      if ((longlong *)pFVar13->_padding_ == (longlong *)0x0) {
        plVar17 = local_d0;
      }
      uVar2 = (uint)*plVar17;
      local_c0 = 0;
      while (uVar2 == 0) {
        lVar15 = (longlong)iStack_d8;
        local_c0 = local_c0 + 0x20;
        iStack_d8 = iStack_d8 + 1;
        iVar11 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_1476f6580;
        uVar2 = *(uint *)((longlong)plVar17 + lVar15 * 4 + 4);
      }
      uStack_d4 = -uVar2 & uVar2;
      uVar1 = (ulonglong)uStack_d4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = local_c0 + -1 + (int)lVar15;
      if (iVar3 < iVar11) {
        iVar11 = iVar3;
      }
    }
LAB_1476f6580:
    local_e0 = pFVar13;
    uStack_c8 = 0xffffffff;
    iStack_c4 = iVar11;
    uStack_bc = local_44;
    local_118 = pFVar13;
    TStack_110._padding_ = CONCAT44(uStack_d4,iStack_d8);
    TStack_110.BaseBitIndex = local_c0;
    TStack_110._28_4_ = local_44;
    TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d0;
    TStack_110.UnvisitedBitMask = 0xffffffff;
    TStack_110.CurrentBitIndex = iVar11;
    if (iVar11 < iVar3) {
      do {
        pFVar13 = local_118;
        if (pUVar18 != (UObject *)0x0) {
          lVar15 = (longlong)iVar11 * 5 + 1;
          pFVar14 = (FString *)(local_118->_padding_ + lVar15 * 8);
          if (*(char *)(local_118->_padding_ + 0x15 + lVar15 * 8) == '\0') {
            iVar3 = (pFVar14->Data).ArrayNum;
            bVar6 = true;
            pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
            local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_138.Data.ArrayNum = iVar3;
            if (iVar3 == 0) {
              local_138.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar3,0,(ForAnyElementType *)&local_138,iVar3,&local_138.Data.ArrayMax)
              ;
              memcpy(local_138.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 2);
            }
            pFVar14 = &local_138;
          }
          else {
            bVar7 = true;
            pFVar14 = FConfigValue::ExpandValue(&local_90,pFVar14);
          }
          local_158.Data = (FScriptContainerElement *)0x0;
          local_150 = (pFVar14->Data).ArrayNum;
          lVar15 = (longlong)local_150;
          pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
          if (local_150 == 0) {
            local_14c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_150,0,&local_158,local_150,&local_14c);
            memcpy(local_158.Data,pFVar4,lVar15 * 2);
          }
          if ((bVar6) &&
             (bVar6 = false, local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if ((bVar7) &&
             (bVar7 = false, local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          ::FString::PrintfImpl(&local_b0,L"> %s");
          if (local_158.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data);
          }
          (**(code **)(*(longlong *)pUVar18 + 0x2d0))(pUVar18,&local_b0);
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
          }
        }
        pcVar5 = *(code **)(*local_res8 + 0xe00);
        lVar15 = (longlong)iVar11 * 5 + 1;
        pFVar14 = (FString *)(pFVar13->_padding_ + lVar15 * 8);
        if (*(char *)(pFVar13->_padding_ + 0x15 + lVar15 * 8) == '\0') {
          iVar3 = (pFVar14->Data).ArrayNum;
          pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
          bVar8 = true;
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = iVar3;
          if (iVar3 == 0) {
            local_128.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar3,0,(ForAnyElementType *)&local_128,iVar3,&local_128.Data.ArrayMax);
            memcpy(local_128.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 2);
          }
          pFVar14 = &local_128;
        }
        else {
          bVar9 = true;
          pFVar14 = FConfigValue::ExpandValue(&local_80,pFVar14);
        }
        local_148.Data = (FScriptContainerElement *)0x0;
        local_140 = (pFVar14->Data).ArrayNum;
        lVar15 = (longlong)local_140;
        pFVar4 = (pFVar14->Data).AllocatorInstance.Data;
        if (local_140 == 0) {
          local_13c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_140,0,&local_148,local_140,&local_13c);
          memcpy(local_148.Data,pFVar4,lVar15 * 2);
        }
        if ((bVar8) &&
           (bVar8 = false, local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        if ((bVar9) &&
           (bVar9 = false, local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_140 != 0) {
          FVar16.Data = local_148.Data;
        }
        ::FString::FString(&local_a0,(wchar_t *)FVar16.Data);
        (*pcVar5)(local_res8,local_70,&local_a0);
        if (local_70[0] != (void *)0x0) {
          FMemory::Free(local_70[0]);
        }
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data);
        }
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
        iVar11 = TStack_110.CurrentBitIndex;
      } while (TStack_110.CurrentBitIndex < (int)*(longlong *)&(TStack_110.Array)->NumBits);
    }
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// DamageTarget @ 1476fade0

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

void __thiscall UCheatManager::DamageTarget(UCheatManager *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  TQuat<double> local_328;
  TQuatRotationTranslationMatrix<double> local_308;
  FHitResult local_288;
  undefined **local_188;
  UClass *local_180;
  float local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  FHitResult local_158;
  
  lVar6 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    lVar6 = this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  memset(&local_288,0,0x100);
  local_288.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_288.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_288.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_288.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_288.Time = 1.0;
  local_288.MyItem = -1;
  local_288.HitObjectHandle.ManagerInterface.InterfaceInstance._0_4_ = 0;
  local_288.HitObjectHandle.ManagerInterface.InterfaceInstance._4_4_ = 0;
  local_288.HitObjectHandle.InstanceIndex = -1;
  local_288.HitObjectHandle.ResolutionStatus = Invalid;
  local_288.HitObjectHandle._29_3_ = 0;
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x468))(this,lVar6,&local_288);
  if (plVar4 != (longlong *)0x0) {
    lVar1 = plVar4[0x37];
    if (lVar1 == 0) {
      local_328.X._0_4_ = 0;
      local_328.X._4_4_ = 0;
      local_328.Y._0_4_ = 0;
      local_328.Y._4_4_ = 0;
      local_328.Z = ___xmm_3ff00000000000000000000000000000;
      local_328.W = _UNK_15061cbc8;
    }
    else {
      local_328.X._0_4_ = *(undefined4 *)(lVar1 + 0x1f0);
      local_328.X._4_4_ = *(undefined4 *)(lVar1 + 500);
      local_328.Y._0_4_ = *(undefined4 *)(lVar1 + 0x1f8);
      local_328.Y._4_4_ = *(undefined4 *)(lVar1 + 0x1fc);
      local_328.Z = *(double *)(lVar1 + 0x200);
      local_328.W = *(double *)(lVar1 + 0x208);
    }
    UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
              (&local_308,&local_328,&UE::Math::TVector<double>::ZeroVector);
    pUVar5 = Z_Construct_UClass_UDamageType_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_180 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_188 = &___7FPointDamageEvent__6B_;
    local_170 = CONCAT44(local_308._4_4_ ^ uVar8,local_308._0_4_ ^ uVar7);
    local_168 = CONCAT44(local_308._12_4_ ^ uVar8,local_308._8_4_ ^ uVar7);
    local_160 = CONCAT44(local_308._20_4_ ^ uVar8,local_308._16_4_ ^ uVar7);
    local_178 = param_1;
    FHitResult::FHitResult(&local_158,&local_288);
    pcVar2 = *(code **)(*plVar4 + 0x6b0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(lVar6 + 0x310) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(lVar6 + 0x310));
    }
    (*pcVar2)(plVar4);
  }
  return;
}

// DebugCapsuleSweep @ 1476fb060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DebugCapsuleSweep(UCheatManager *this)

{
  TArray<FDebugTraceInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  
  uVar3 = *(undefined4 *)&this->field_0x38;
  pTVar1 = &this->DebugTraceInfoList;
  piVar2 = &(this->DebugTraceInfoList).ArrayNum;
  *(uint *)&this->field_0x38 = uVar3 ^ 1;
  if ((~ZPULL(uVar3,0,1) & 1) != 0) {
    this->CurrentTraceIndex = *piVar2;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,1,&pTVar1->AllocatorInstance,piVar2,&(this->DebugTraceInfoList).ArrayMax);
    return;
  }
  uVar4 = this->CurrentTraceIndex;
  uVar7 = 0;
  if ((int)uVar4 < *piVar2) {
    uVar7 = ~uVar4 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xa0;
  iVar8 = *piVar2 + ~uVar4;
  if (iVar8 != 0) {
    memmove(_Dst,_Dst + 0xa0,(longlong)iVar8 * 0xa0);
  }
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,&pTVar1->AllocatorInstance,*piVar2,&(this->DebugTraceInfoList).ArrayMax);
  return;
}

// DebugCapsuleSweepCapture @ 1476fb180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DebugCapsuleSweepCapture(UCheatManager *this)

{
  this->CurrentTraceIndex = this->CurrentTraceIndex + 1;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,8,1,&(this->DebugTraceInfoList).AllocatorInstance,
             &(this->DebugTraceInfoList).ArrayNum,&(this->DebugTraceInfoList).ArrayMax);
  return;
}

// DebugCapsuleSweepChannel @ 1476fb1c0

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
UCheatManager::DebugCapsuleSweepChannel(UCheatManager *this,ECollisionChannel param_1)

{
  (this->DebugTraceChannel).Value = (uchar)param_1;
  return;
}

// DebugCapsuleSweepClear @ 1476fb1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DebugCapsuleSweepClear(UCheatManager *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = &(this->DebugTraceInfoList).ArrayMax;
  this->CurrentTraceIndex = 0;
  piVar2 = &(this->DebugTraceInfoList).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,&(this->DebugTraceInfoList).AllocatorInstance,0,piVar1);
  }
  piVar3 = &(this->DebugTracePawnInfoList).ArrayMax;
  (this->DebugTracePawnInfoList).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,&(this->DebugTracePawnInfoList).AllocatorInstance,0,piVar3);
  }
  if (this->bDebugCapsuleSweep != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,1,&(this->DebugTraceInfoList).AllocatorInstance,piVar2,piVar1);
  }
  if (bDebugCapsuleSweepPawn != false) {
    this->CurrentTracePawnIndex = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,10,&(this->DebugTracePawnInfoList).AllocatorInstance,
               &(this->DebugTracePawnInfoList).ArrayNum,piVar3);
  }
  return;
}

// DebugCapsuleSweepComplex @ 1476fb2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DebugCapsuleSweepComplex(UCheatManager *this,bool param_1)

{
  this->bDebugCapsuleTraceComplex = 0;
  *(uint *)&this->field_0x38 = *(uint *)&this->field_0x38 | (uint)param_1 * 2;
  return;
}

// DebugCapsuleSweepPawn @ 1476fb300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DebugCapsuleSweepPawn(UCheatManager *this)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = !bDebugCapsuleSweepPawn;
  bVar1 = !bDebugCapsuleSweepPawn;
  bDebugCapsuleSweepPawn = bVar2;
  if (bVar1) {
    this->CurrentTracePawnIndex = 0;
    if ((this->DebugTracePawnInfoList).ArrayNum == 0) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,10,&(this->DebugTracePawnInfoList).AllocatorInstance,
                 &(this->DebugTracePawnInfoList).ArrayNum,&(this->DebugTracePawnInfoList).ArrayMax);
    }
  }
  return;
}

// DebugCapsuleSweepSize @ 1476fb360

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
UCheatManager::DebugCapsuleSweepSize(UCheatManager *this,float param_1,float param_2)

{
  this->DebugCapsuleHalfHeight = param_1;
  this->DebugCapsuleRadius = param_2;
  return;
}

// DestroyAll @ 1476fb530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DestroyAll(UCheatManager *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  AActor *this_00;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  UObject *local_res8;
  FString local_78;
  TActorIteratorBase<TActorIterator<AActor>_> local_68;
  
  pUVar2 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_68.Flags = OnlyActiveLevels|SkipPendingKill;
  local_68.State.bIsSet = false;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FActorIteratorState::FActorIteratorState
            (&local_68.State.TypedValue,pUVar6,(TSubclassOf<AActor>)&local_res8);
  local_68.State.bIsSet = true;
  while( true ) {
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_68);
    if (local_68.State.bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (local_68.State.TypedValue.ReachedEnd != false) {
      if (local_68.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_68.State.TypedValue.CurrentWorld,
                   local_68.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      return;
    }
    if (local_68.State.bIsSet == false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
    if (this_00 == (AActor *)0x0) break;
    if (((uint)this_00->_padding_ >> 0x1e & 1) == 0) {
      pUVar7 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar7->_padding_)) && (lVar3 = this_00[1].PrimaryActorTick._padding_, lVar3 != 0)) {
        pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          AActor::Destroy((AActor *)this_00[1].PrimaryActorTick._padding_,false,true);
        }
      }
      AActor::Destroy(this_00,false,true);
    }
  }
  pFVar8 = GetTypeName<AActor>(&local_78);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

// DestroyAllPawnsExceptTarget @ 1476fb760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DestroyAllPawnsExceptTarget(UCheatManager *this)

{
  int iVar1;
  AController *pAVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  APawn *pAVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  AActor *pAVar9;
  APawn *this_00;
  UClass *local_res8;
  TActorIteratorBase<TActorIterator<APawn>_> local_178;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    pAVar6 = (APawn *)this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pAVar6 = (APawn *)0x0;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  memset(local_118,0,0x100);
  local_60 = 0;
  uStack_58 = 0;
  local_114 = 0x3f800000;
  local_74 = 0xffffffff;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_44 = 0;
  pAVar6 = (APawn *)(**(code **)(this->_padding_ + 0x468))(this,pAVar6,local_118);
  if (pAVar6 != (APawn *)0x0) {
    pUVar7 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_1476fb853;
  }
  pAVar6 = (APawn *)0x0;
LAB_1476fb853:
  if (pAVar6 == (APawn *)0x0) {
    return;
  }
  pUVar7 = Z_Construct_UClass_APawn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_178.Flags = OnlyActiveLevels|SkipPendingKill;
  local_178.State.bIsSet = false;
  local_res8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FActorIteratorState::FActorIteratorState
            (&local_178.State.TypedValue,pUVar8,(TSubclassOf<AActor>)&local_res8);
  local_178.State.bIsSet = true;
LAB_1476fb8e7:
  do {
    TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_178);
    if ((local_178.State.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_178.State.TypedValue.ReachedEnd != false) {
      if (local_178.State.bIsSet == false) {
        return;
      }
      UWorld::RemoveOnActorSpawnedHandler
                (local_178.State.TypedValue.CurrentWorld,
                 local_178.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_178.State.TypedValue.ActorArray.AllocatorInstance.Data ==
          (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_178.State.TypedValue.ActorArray.AllocatorInstance.Data);
      return;
    }
    if ((local_178.State.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar9 = FActorIteratorState::GetActorChecked(&local_178.State.TypedValue);
    this_00 = CastChecked<APawn,AActor>(pAVar9);
    if ((this_00 == (APawn *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  } while ((((uint)this_00->_padding_ >> 0x1e & 1) != 0) || (this_00 == pAVar6));
  pAVar2 = (this_00->Controller).field0_0x0.DebugPtr;
  if (pAVar2 != (AController *)0x0) goto code_r0x0001476fb9b7;
  goto LAB_1476fb9de;
code_r0x0001476fb9b7:
  pUVar7 = Z_Construct_UClass_APlayerController_NoRegister();
  lVar3 = pAVar2->_padding_;
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) {
LAB_1476fb9de:
    pAVar2 = (this_00->Controller).field0_0x0.DebugPtr;
    if (pAVar2 != (AController *)0x0) {
      AActor::Destroy((AActor *)pAVar2,false,true);
    }
    AActor::Destroy((AActor *)this_00,false,true);
  }
  goto LAB_1476fb8e7;
}

// DestroyPawns @ 1476fbe10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DestroyPawns(UCheatManager *this,TSubclassOf<APawn> param_1)

{
  int iVar1;
  longlong lVar2;
  AController *pAVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  AActor *pAVar8;
  APawn *this_00;
  UClass *local_res8;
  TActorIteratorBase<TActorIterator<APawn>_> local_68;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_APawn_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (pUVar6 = *(UClass **)param_1.Class.field0_0x0, pUVar6 != (UClass *)0x0))
      goto LAB_1476fbe87;
    }
  }
  pUVar6 = Z_Construct_UClass_APawn_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  *(UClass **)param_1.Class.field0_0x0 = pUVar6;
LAB_1476fbe87:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar7 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_68.Flags = OnlyActiveLevels|SkipPendingKill;
  local_68.State.bIsSet = false;
  local_res8 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FActorIteratorState::FActorIteratorState
            (&local_68.State.TypedValue,pUVar7,(TSubclassOf<AActor>)&local_res8);
  local_68.State.bIsSet = true;
LAB_1476fbf0b:
  TActorIteratorBase<TActorIterator<APawn>_>::operator++(&local_68);
  if (local_68.State.bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_68.State.TypedValue.ReachedEnd != false) {
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    return;
  }
  if (local_68.State.bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pAVar8 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
  this_00 = CastChecked<APawn,AActor>(pAVar8);
  pAVar3 = (this_00->Controller).field0_0x0.DebugPtr;
  if (pAVar3 != (AController *)0x0) goto code_r0x0001476fbf9b;
  goto LAB_1476fbfc2;
code_r0x0001476fbf9b:
  pUVar6 = Z_Construct_UClass_APlayerController_NoRegister();
  lVar2 = pAVar3->_padding_;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
LAB_1476fbfc2:
    pAVar3 = (this_00->Controller).field0_0x0.DebugPtr;
    if (pAVar3 != (AController *)0x0) {
      AActor::Destroy((AActor *)pAVar3,false,true);
    }
    AActor::Destroy((AActor *)this_00,false,true);
  }
  goto LAB_1476fbf0b;
}

// DestroyServerStatReplicator @ 1476fc040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DestroyServerStatReplicator(UCheatManager *this)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  FName local_res8;
  FString local_18;
  
  lVar4 = (**(code **)(this->_padding_ + 0x180))();
  lVar4 = *(longlong *)(lVar4 + 0x1a8);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x328) != 0)) {
    if (4 < (byte)LogCheatManager._0_1_) {
      local_res8 = *(FName *)(*(longlong *)(lVar4 + 0x328) + 0x18);
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    AActor::Destroy(*(AActor **)(lVar4 + 0x328),true,true);
    lVar5 = 0;
    *(undefined8 *)(lVar4 + 0x328) = 0;
    if ((this->_padding_ & 0x10) == 0) {
      lVar5 = this->_padding_;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(longlong *)(lVar5 + 0x560) != 0) &&
       (lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x560) + 0x58), lVar4 != 0)) {
      pbVar1 = (byte *)(lVar4 + 0x32a);
      *pbVar1 = *pbVar1 & 0xef;
    }
  }
  return;
}

// DestroyTarget @ 1476fc160

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DestroyTarget(UCheatManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  AActor *this_00;
  UClass *pUVar4;
  longlong lVar5;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined4 local_64;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar5 = 0;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    lVar5 = this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  memset(local_108,0,0x100);
  local_50 = 0;
  uStack_48 = 0;
  local_104 = 0x3f800000;
  local_64 = 0xffffffff;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0xffffffff;
  uStack_34 = 0;
  this_00 = (AActor *)(**(code **)(this->_padding_ + 0x468))(this,lVar5,local_108);
  if (this_00 != (AActor *)0x0) {
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) && (lVar5 = this_00[1].PrimaryActorTick._padding_, lVar5 != 0)) {
      pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        AActor::Destroy((AActor *)this_00[1].PrimaryActorTick._padding_,false,true);
      }
    }
    AActor::Destroy(this_00,false,true);
  }
  return;
}

// DisableDebugCamera @ 1476fc2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DisableDebugCamera(UCheatManager *this)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) && ((longlong *)plVar2[0x116] != (longlong *)0x0)) &&
       (plVar2[0x115] != 0)) {
      (**(code **)(*(longlong *)plVar2[0x116] + 0x2b0))();
                    /* WARNING: Could not recover jumptable at 0x0001476fc325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xfb8))(plVar2,plVar2[0x115]);
      return;
    }
  }
  return;
}

// DoGameSpecificBugItLog @ 1476fc6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCheatManager::DoGameSpecificBugItLog(UCheatManager *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->CheatManagerExtensions).AllocatorInstance.Data;
  iVar2 = (this->CheatManagerExtensions).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CheatManagerExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCheatManagerExtension>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2c0))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// DumpChatState @ 147702610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DumpChatState(UCheatManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UOnlineEngineInterface *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = UOnlineEngineInterface::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar1 + 0x3f0);
  uVar2 = (**(code **)(this->_padding_ + 0x180))(this);
                    /* WARNING: Could not recover jumptable at 0x000147702658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,uVar2);
  return;
}

// DumpOnlineSessionState @ 147703450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DumpOnlineSessionState(UCheatManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UOnlineEngineInterface *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = UOnlineEngineInterface::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar1 + 0x3d8);
  uVar2 = (**(code **)(this->_padding_ + 0x180))(this);
                    /* WARNING: Could not recover jumptable at 0x000147703498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,uVar2);
  return;
}

// DumpPartyState @ 1477034b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DumpPartyState(UCheatManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UOnlineEngineInterface *pUVar1;
  undefined8 uVar2;
  
  pUVar1 = UOnlineEngineInterface::Get();
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)pUVar1 + 0x3e0);
  uVar2 = (**(code **)(this->_padding_ + 0x180))(this);
                    /* WARNING: Could not recover jumptable at 0x0001477034f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar1,uVar2);
  return;
}

// DumpVoiceMutingState @ 147703510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::DumpVoiceMutingState(UCheatManager *this)

{
  code *pcVar1;
  UOnlineEngineInterface *pUVar2;
  undefined8 uVar3;
  UWorld *pUVar4;
  FString local_18;
  
  if (((3 < (byte)LogCheatManager._0_1_) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager),
      3 < (byte)LogCheatManager._0_1_)) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager),
     3 < (byte)LogCheatManager._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
  }
  pUVar2 = UOnlineEngineInterface::Get();
  pcVar1 = *(code **)(*(longlong *)pUVar2 + 1000);
  uVar3 = (**(code **)(this->_padding_ + 0x180))(this);
  (*pcVar1)(pUVar2,uVar3);
  if (3 < (byte)LogCheatManager._0_1_) {
    pUVar4 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    DumpMutelistState(&local_18,pUVar4);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EnableDebugCamera @ 1477036b0

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

void __thiscall UCheatManager::EnableDebugCamera(UCheatManager *this)

{
  int iVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UWorld *this_01;
  UClass *pUVar5;
  ADebugCameraController *pAVar6;
  UClass *pUVar7;
  FString *pFVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (AActor *)this->_padding_;
  if (this_00 == (AActor *)0x0) {
    return;
  }
  if (this_00[1].AttachmentReplication.RotationOffset.Roll == 0.0) {
    return;
  }
  if (((ulonglong)this_00[1].AttachmentReplication.RotationOffset.Pitch & 2) == 0) {
    return;
  }
  cVar4 = (**(code **)(this_00->_padding_ + 0x7f0))(this_00);
  if (cVar4 == '\0') {
    return;
  }
  if ((this->DebugCameraControllerRef).field0_0x0.DebugPtr != (ADebugCameraController *)0x0)
  goto LAB_14770388c;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98._24_8_ = AActor::GetInstigator(this_00);
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pUVar7 = (this->DebugCameraControllerClass).Class.field0_0x0.DebugPtr;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar5 = Z_Construct_UClass_ADebugCameraController_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_1477037d8:
    pUVar7 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1477037d8;
    pUVar7 = (this->DebugCameraControllerClass).Class.field0_0x0.DebugPtr;
  }
  pAVar6 = (ADebugCameraController *)
           UWorld::SpawnActor(this_01,pUVar7,(TVector<double> *)0x0,(TRotator<double> *)0x0,
                              (FActorSpawnParameters *)local_98);
  if (pAVar6 == (ADebugCameraController *)0x0) {
    pAVar6 = (ADebugCameraController *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) {
      pFVar8 = GetTypeName<ADebugCameraController>(&local_b8);
      pwVar10 = L"";
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      pFVar8 = GetFullNameForCastLogError<AActor>(&local_a8,(AActor *)pAVar6);
      if ((pFVar8->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar6 != (ADebugCameraController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar6);
  }
  (this->DebugCameraControllerRef).field0_0x0.DebugPtr = pAVar6;
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
LAB_14770388c:
  pAVar6 = (this->DebugCameraControllerRef).field0_0x0.DebugPtr;
  if (pAVar6 != (ADebugCameraController *)0x0) {
    (**(code **)(pAVar6->_padding_ + 0xfb0))(pAVar6,this_00);
    plVar9 = (longlong *)this_00[1].AttachmentReplication.RotationOffset.Roll;
    (**(code **)(*plVar9 + 0x2b0))(plVar9,(this->DebugCameraControllerRef).field0_0x0.DebugPtr);
  }
  return;
}

// FindCheatManagerExtension @ 1477048c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCheatManagerExtension * __thiscall
UCheatManager::FindCheatManagerExtension(UCheatManager *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UCheatManagerExtension *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->CheatManagerExtensions).AllocatorInstance.Data;
  iVar2 = (this->CheatManagerExtensions).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CheatManagerExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCheatManagerExtension>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar4 = *(UCheatManagerExtension **)pFVar5;
    if (pUVar4 != (UCheatManagerExtension *)0x0) {
      iVar3 = (int)param_1->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &param_1->_padding_)) {
        return pUVar4;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UCheatManagerExtension *)0x0;
}

// FindCheatManagerExtensionInterface @ 147704950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCheatManagerExtension * __thiscall
UCheatManager::FindCheatManagerExtensionInterface(UCheatManager *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UCheatManagerExtension *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->CheatManagerExtensions).AllocatorInstance.Data;
  iVar2 = (this->CheatManagerExtensions).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CheatManagerExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCheatManagerExtension>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar3 = *(UCheatManagerExtension **)pFVar5;
    if ((pUVar3 != (UCheatManagerExtension *)0x0) &&
       (bVar4 = UClass::ImplementsInterface(*(UClass **)&pUVar3->field_0x10,param_1), bVar4)) {
      return pUVar3;
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UCheatManagerExtension *)0x0;
}

// FlushLog @ 147705ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::FlushLog(UCheatManager *this)

{
  FOutputDeviceRedirector *pFVar1;
  
  pFVar1 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(pFVar1,None);
  pFVar1 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(pFVar1);
}

// Fly @ 147705f10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::Fly(UCheatManager *this)

{
  int iVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  longlong lVar7;
  APlayerController *this_01;
  FString local_18;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    lVar7 = this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = 0;
  }
  this_00 = *(UObject **)(lVar7 + 0x310);
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
    }
    if (((uint)this->_padding_ >> 4 & 1) == 0) {
      this_01 = (APlayerController *)this->_padding_;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (APlayerController *)0x0;
    }
    ::FString::FString(&local_18,L"You feel much lighter");
    APlayerController::ClientMessage(this_01,&local_18,(FName)0x0,0.0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pUVar5 = ACharacter::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = UObject::FindFunctionChecked(this_00,NAME_ACharacter_ClientCheatFly);
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,0);
      cVar4 = (**(code **)(*(longlong *)this_00 + 0x818))(this_00);
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)this_00 + 0x9c8))(this_00);
      }
    }
  }
  return;
}

// FreezeFrame @ 1477061c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::FreezeFrame(UCheatManager *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  UObject *local_res8;
  code *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  lVar4 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar4 == 0) {
    return;
  }
  plVar1 = *(longlong **)(lVar4 + 0x1a8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    if (this->_padding_ != 0) goto LAB_14770629f;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetOuterAPlayerController() != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                     ,0x9a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14770629f:
  pUVar7 = (UObject *)0x0;
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar8 = (UObject *)this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar8 = pUVar7;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStack_a0 = 0;
  local_a8 = APlayerController::_vcall__3824__flat______;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_58);
  local_40 = &local_80;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VAPlayerController____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    puVar5[3] = 0;
    local_res8 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    puVar5[4] = local_a8;
    puVar5[5] = CONCAT44(uStack_9c,uStack_a0);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pcVar2 = *(code **)(*plVar1 + 0x800);
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_a8,
             (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_88);
  if ((this->_padding_ & 0x10) == 0) {
    pUVar7 = (UObject *)this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*pcVar2)(plVar1,pUVar7);
  *(double *)(lVar4 + 0x920) = (double)param_1 + *(double *)(lVar4 + 0x8f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  return;
}

// GetOuterAPlayerController @ 147708e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall UCheatManager::GetOuterAPlayerController(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  APlayerController *pAVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    return (APlayerController *)this->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6281605350772703132>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                     ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pAVar3 = (APlayerController *)(*pcVar1)();
    return pAVar3;
  }
  return (APlayerController *)0x0;
}

// GetPlayerController @ 147709b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall UCheatManager::GetPlayerController(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  APlayerController *pAVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    return (APlayerController *)this->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6281605350772703132>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                     ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pAVar3 = (APlayerController *)(*pcVar1)();
    return pAVar3;
  }
  return (APlayerController *)0x0;
}

// GetPrivateStaticClass @ 14770a130

UClass * __cdecl UCheatManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheatManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CheatManager",
               &Z_Registration_Info_UClass_UCheatManager.InnerSingleton,
               StaticRegisterNativesUCheatManager,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheatManager>,InternalVTableHelperCtorCaller<UCheatManager>,
               local_res8,UObject::StaticClass,APlayerController::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheatManager.InnerSingleton;
}

// GetTarget @ 14770abd0

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

AActor * __thiscall
UCheatManager::GetTarget(UCheatManager *this,APlayerController *param_1,FHitResult *param_2)

{
  APlayerCameraManager *pAVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  AActor *pAVar6;
  TStatId TVar7;
  UWorld *this_00;
  TVector<double> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  undefined1 auStackY_198 [32];
  undefined4 local_148 [2];
  undefined8 local_140;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TRotator<double> local_100;
  TVector<double> local_e8;
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1 == (APlayerController *)0x0) ||
     ((param_1->PlayerCameraManager).field0_0x0.DebugPtr == (APlayerCameraManager *)0x0)) {
    pAVar6 = (AActor *)0x0;
  }
  else {
    lVar5 = (**(code **)(this->_padding_ + 0x180))();
    if ((lVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetWorld() != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                           ,0x521,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pAVar6 = (AActor *)(*pcVar3)();
      return pAVar6;
    }
    pAVar1 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    (**(code **)(pAVar1->_padding_ + 0x848))(pAVar1,&local_138);
    pAVar1 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    (**(code **)(pAVar1->_padding_ + 0x840))(pAVar1,&local_100);
    pUVar2 = (UObject *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    TVar7 = FCollisionQueryParams::GetUnknownStatId();
    pAVar6 = (AActor *)0x0;
    local_c8.IgnoreComponents.ArrayMax = 8;
    local_c8.OwnerTag.ComparisonIndex.Value = 0;
    local_c8.OwnerTag.Number = 0;
    local_c8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c8.IgnoreComponents.ArrayNum = 0;
    local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    local_c8.IgnoreSourceObjects.ArrayNum = 0;
    local_c8.IgnoreSourceObjects.ArrayMax = 4;
    local_c8.bTraceComplex = true;
    local_c8.MobilityType = Any;
    local_c8.TraceTag.ComparisonIndex.Value = 0;
    local_c8.TraceTag.Number = 0;
    local_c8.StatId.StatIdPtr = *(TStatIdData **)&(TVar7.StatIdPtr)->Name;
    local_140 = 0;
    local_c8.bFindInitialOverlaps = true;
    local_c8.bReturnFaceIndex = false;
    local_c8.bReturnPhysicalMaterial = false;
    local_c8.bIgnoreBlocks = false;
    local_c8.bComponentListUnique = true;
    local_c8.IgnoreMask = '\0';
    local_c8.bIgnoreTouches = false;
    local_c8.bSkipNarrowPhase = false;
    if (pUVar2 != (UObject *)0x0) {
      local_148[0] = *(undefined4 *)&pUVar2->field_0xc;
      if (((&local_c8.IgnoreSourceObjects <= local_148) &&
          (local_148 < &local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pAVar6 = (AActor *)(*pcVar3)();
        return pAVar6;
      }
      if (local_c8.IgnoreSourceObjects.ArrayNum == local_c8.IgnoreSourceObjects.ArrayMax) {
        local_c8.IgnoreSourceObjects.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                       (0x404,&local_c8.IgnoreSourceObjects.AllocatorInstance,
                        &local_c8.IgnoreSourceObjects.ArrayMax);
      }
      lVar5 = (longlong)local_c8.IgnoreSourceObjects.ArrayNum;
      FVar9 = (ForElementType<unsigned_int>)&local_c8.IgnoreSourceObjects;
      if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar9 = local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
      }
      local_c8.IgnoreSourceObjects.ArrayNum = local_c8.IgnoreSourceObjects.ArrayNum + 1;
      *(undefined4 *)((longlong)FVar9 + lVar5 * 4) = local_148[0];
      local_c8.OwnerTag.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
      local_c8.OwnerTag.Number = *(uint *)&pUVar2->field_0x1c;
    }
    local_c8.bDebugQuery = false;
    local_c8.bTraceIntoSubComponents = true;
    local_c8.bReplaceHitWithSubComponents = true;
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pTVar8 = UE::Math::TRotator<double>::Vector(&local_100,&local_e8);
    local_120._s_0.Y = (pTVar8->field0_0x0)._s_0.Y * __real_40f86a0000000000 + local_138._s_0.Y;
    local_120._s_0.Z = (pTVar8->field0_0x0)._s_0.Z * __real_40f86a0000000000 + local_138._s_0.Z;
    local_120._s_0.X = (pTVar8->field0_0x0)._s_0.X * __real_40f86a0000000000 + local_138._s_0.X;
    bVar4 = UWorld::LineTraceSingleByChannel
                      (this_00,param_2,(TVector<double> *)&local_138._s_0,
                       (TVector<double> *)&local_120._s_0,ECC_Pawn,&local_c8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if (bVar4) {
      pAVar6 = FActorInstanceHandle::FetchActor(&param_2->HitObjectHandle);
      if ((pAVar6 == (AActor *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutHit.HitObjectHandle.FetchActor() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                             ,0x529,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pAVar6 = (AActor *)(*pcVar3)();
        return pAVar6;
      }
      pAVar6 = FActorInstanceHandle::FetchActor(&param_2->HitObjectHandle);
    }
    if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return pAVar6;
}

// GetWorld @ 14770b1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UCheatManager::GetWorld(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar2) {
    return (UWorld *)0x0;
  }
  if ((this->_padding_ & 0x10) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = AActor::GetWorld((AActor *)0x0);
    return pUVar3;
  }
  pUVar3 = AActor::GetWorld((AActor *)this->_padding_);
  return pUVar3;
}

// Ghost @ 14770b340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::Ghost(UCheatManager *this)

{
  int iVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  longlong lVar7;
  APlayerController *this_01;
  FString local_18;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    lVar7 = this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = 0;
  }
  this_00 = *(UObject **)(lVar7 + 0x310);
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
    }
    if (((uint)this->_padding_ >> 4 & 1) == 0) {
      this_01 = (APlayerController *)this->_padding_;
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (APlayerController *)0x0;
    }
    ::FString::FString(&local_18,L"You feel ethereal");
    APlayerController::ClientMessage(this_01,&local_18,(FName)0x0,0.0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pUVar5 = ACharacter::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = UObject::FindFunctionChecked(this_00,NAME_ACharacter_ClientCheatGhost);
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,0);
      cVar4 = (**(code **)(*(longlong *)this_00 + 0x818))(this_00);
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)this_00 + 0x9d0))(this_00);
      }
    }
  }
  return;
}

// God @ 14770b4b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::God(UCheatManager *this)

{
  AActor *this_00;
  code *pcVar1;
  bool bVar2;
  APlayerController *pAVar3;
  APlayerController *this_01;
  FString local_58;
  FString local_48;
  FString local_38;
  
  this_01 = (APlayerController *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pAVar3 = (APlayerController *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pAVar3 = this_01;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (AActor *)pAVar3->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (AActor *)0x0) goto LAB_14770b615;
  }
  else {
    if (this_00 == (AActor *)0x0) {
LAB_14770b615:
      if ((this->_padding_ & 0x10) == 0) {
        this_01 = (APlayerController *)this->_padding_;
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6281605350772703132>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                           ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ::FString::FString(&local_38,L"No APawn* possessed");
      APlayerController::ClientMessage(this_01,&local_38,(FName)0x0,0.0);
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      goto LAB_14770b67c;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00->bCanBeDamaged == '\0') {
    AActor::SetCanBeDamaged(this_00,true);
    if ((this->_padding_ & 0x10) == 0) {
      this_01 = (APlayerController *)this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::FString(&local_48,L"God Mode off");
    APlayerController::ClientMessage(this_01,&local_48,(FName)0x0,0.0);
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  }
  else {
    AActor::SetCanBeDamaged(this_00,false);
    if ((this->_padding_ & 0x10) == 0) {
      this_01 = (APlayerController *)this->_padding_;
    }
    else {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::FString(&local_58,L"God mode on");
    APlayerController::ClientMessage(this_01,&local_58,(FName)0x0,0.0);
  }
LAB_14770b67c:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// InitCheatManager @ 1477142c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::InitCheatManager(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  UFunction *pUVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  FName local_res8;
  FDestructionSentinel local_38;
  
  pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UCheatManager_ReceiveInitCheatManager);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar6,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnCheatManagerCreatedDelegate,(FWriteAccessScope *)&local_38);
  bVar4 = false;
  OnCheatManagerCreatedDelegate._28_4_ = OnCheatManagerCreatedDelegate._28_4_ + 1;
  lVar11 = 0;
  uVar8 = OnCheatManagerCreatedDelegate._16_4_ - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (int)OnCheatManagerCreatedDelegate._16_4_) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar10 + 8 + OnCheatManagerCreatedDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar10 + OnCheatManagerCreatedDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(**(longlong **)(lVar10 + OnCheatManagerCreatedDelegate._8_8_) + 0x68)
                  )(), cVar3 == '\0')) {
        bVar4 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  OnCheatManagerCreatedDelegate._28_4_ = OnCheatManagerCreatedDelegate._28_4_ + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnCheatManagerCreatedDelegate,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if ((this->_padding_ & 0x10) == 0) {
    lVar11 = this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar7 = strstr("&UCheatManager::OnPlayerEndPlayed","::");
  if (pcVar7 == (char *)0x0) {
LAB_14771447b:
    pcVar9 = &DAT_00000002;
  }
  else {
    do {
      pcVar9 = pcVar7;
      pcVar7 = strstr(pcVar9 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14771447b;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 != '0') goto LAB_1477144ae;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1477144ae:
  ::FName::FName(&local_res8,pcVar9);
  TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
  ::__Internal_AddDynamic<UCheatManager>
            ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
              *)(lVar11 + 0x217),this,(pmf_5529b7f1)0x14771c840,local_res8);
  return;
}

// InvertMouse @ 1477146e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::InvertMouse(UCheatManager *this)

{
  UPlayerInput *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FKey local_28;
  
  if ((this->_padding_ & 0x10) == 0) {
    lVar3 = this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = 0;
  }
  this_00 = *(UPlayerInput **)(lVar3 + 0x450);
  if (this_00 != (UPlayerInput *)0x0) {
    local_28.KeyName = EKeys::MouseY.KeyName;
    local_28.KeyDetails.Object = EKeys::MouseY.KeyDetails.Object;
    local_28.KeyDetails.SharedReferenceCount.ReferenceController =
         EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::MouseY.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    UPlayerInput::InvertAxisKey(this_00,&local_28);
  }
  return;
}

// IsDebugCameraActive @ 147714810

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCheatManager::IsDebugCameraActive(UCheatManager *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return true;
    }
  }
  return false;
}

// LogLoc @ 14771a060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::LogLoc(UCheatManager *this)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  plVar5 = (longlong *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    plVar5 = (longlong *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*plVar5 + 0x840))(plVar5,&local_78,&local_60);
  pUVar1 = (UObject *)plVar5[0x62];
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_14771a166;
  }
  else {
    if (pUVar1 == (UObject *)0x0) goto LAB_14771a166;
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (UObject *)plVar5[0x62];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  lVar2 = *(longlong *)(pUVar1 + 0xb);
  if (lVar2 == 0) {
    local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_6c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_68 = *(double *)(lVar2 + 0x220);
    local_78 = *(undefined4 *)(lVar2 + 0x210);
    uStack_74 = *(undefined4 *)(lVar2 + 0x214);
    uStack_70 = *(undefined4 *)(lVar2 + 0x218);
    uStack_6c = *(undefined4 *)(lVar2 + 0x21c);
  }
LAB_14771a166:
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_38 = local_50;
  local_28 = local_78;
  uStack_24 = uStack_74;
  uStack_20 = uStack_70;
  uStack_1c = uStack_6c;
  local_18 = local_68;
  (**(code **)(this->_padding_ + 0x408))(this,&local_28,&local_48,&local_88,&local_98);
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// LogOutBugItGoToLogFile @ 14771a1f0

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

void __thiscall
UCheatManager::LogOutBugItGoToLogFile
          (UCheatManager *this,FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  code *pcVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  FDateTime this_00;
  UWorld *this_01;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_968 [32];
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  TFunction<void___cdecl(wchar_t_const_*)> local_8e8;
  FOutputDeviceFile local_8b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_968;
  local_928.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2;
  pIVar2 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x60);
  pFVar3 = FPaths::GetPath(&local_938,param_2);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar2,pwVar4);
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
  FPaths::GetBaseFilename(&local_8f8,(FString *)local_928.Data.AllocatorInstance.Data,false);
  ::FString::ConcatFC(&local_918,&local_8f8,L".txt");
  local_8e8._0_8_ = 0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_918.Data.ArrayNum != 0) {
    FVar5.Data = local_918.Data.AllocatorInstance.Data;
  }
  local_8e8._40_8_ = 0;
  FOutputDeviceFile::FOutputDeviceFile(&local_8b8,(wchar_t *)FVar5.Data,false,false,true,&local_8e8)
  ;
  GetChangeListNumberForPerfTesting();
  FApp::GetBuildVersion();
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_938);
  FOutputDevice::LogfImpl
            ((FOutputDevice *)&local_8b8,
             L"Dumping BugIt data chart at %s using build %s built from changelist %i");
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  UWorld::GetMapName(this_01,&local_908);
  FOutputDevice::LogfImpl((FOutputDevice *)&local_8b8,L"MapName: %s");
  FOutputDevice::LogfImpl((FOutputDevice *)&local_8b8,L"Description: %s");
  FOutputDevice::LogfImpl((FOutputDevice *)&local_8b8,L"%s");
  FOutputDevice::LogfImpl((FOutputDevice *)&local_8b8,L"%s");
  FOutputDevice::Log((FOutputDevice *)&local_8b8,L" ---=== GameSpecificData ===--- ");
  (**(code **)(this->_padding_ + 0x450))(this,&local_8b8);
  FOutputDeviceFile::TearDown(&local_8b8);
  if ((param_3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar4);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_918.Data.ArrayNum != 0) {
    FVar5.Data = local_918.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_938,(wchar_t *)FVar5.Data);
  ::FString::FString(&local_928,L"UE_PROFILER!BUGIT:");
  SendDataToPCViaUnrealConsole(&local_928,&local_938);
  if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.Data.AllocatorInstance.Data);
  }
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  FOutputDeviceFile::~FOutputDeviceFile(&local_8b8);
  if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.Data.AllocatorInstance.Data);
  }
  if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPlayerEndPlayed @ 14771c840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::OnPlayerEndPlayed(UCheatManager *this,AActor *param_1,Type param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *this_00;
  UFunction *this_01;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->CheatManagerExtensions).AllocatorInstance.Data;
  iVar3 = (this->CheatManagerExtensions).ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->CheatManagerExtensions).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UCheatManagerExtension>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    this_00 = *(UObject **)pFVar5;
    this_01 = UObject::FindFunctionChecked
                        (this_00,NAME_UCheatManagerExtension_RemovedFromCheatManager);
    pUVar4 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,this_01);
      pFVar5 = pFVar5 + 8;
    }
    else {
      (**(code **)(*(longlong *)this_00 + 0x2b8))();
      pFVar5 = pFVar5 + 8;
    }
  }
  piVar1 = &(this->CheatManagerExtensions).ArrayMax;
  (this->CheatManagerExtensions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CheatManagerExtensions).AllocatorInstance,0,piVar1);
  }
  return;
}

// OnlyLoadLevel @ 14771d7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::OnlyLoadLevel(UCheatManager *this,FName param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014771d7b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x440))(this,param_1,1,0);
  return;
}

// PlayersOnly @ 147720c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::PlayersOnly(UCheatManager *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWorld()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                       ,0x1eb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((*(byte *)(lVar4 + 0x18d) & 8) == 0) {
    lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
    if ((*(byte *)(lVar4 + 0x18d) & 0x10) == 0) {
      lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
      bVar1 = *(byte *)(lVar4 + 0x18d);
      lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
      *(byte *)(lVar4 + 0x18d) =
           (~bVar1 ^ *(byte *)(lVar4 + 0x18d)) & 0x10 ^ *(byte *)(lVar4 + 0x18d);
      return;
    }
  }
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  *(byte *)(lVar4 + 0x18d) = *(byte *)(lVar4 + 0x18d) & 0xf7;
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  *(byte *)(lVar4 + 0x18d) = *(byte *)(lVar4 + 0x18d) & 0xef;
  return;
}

// ProcessConsoleExec @ 147721bf0

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
UCheatManager::ProcessConsoleExec
          (UCheatManager *this,wchar_t *param_1,FOutputDevice *param_2,UObject *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  UFunction *pUVar8;
  ForAnyElementType FVar9;
  APlayerController *this_00;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_68;
  undefined1 local_67 [7];
  FName local_60;
  wchar_t *local_58;
  FString local_50;
  FString local_40;
  
  this_00 = (APlayerController *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (APlayerController *)this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if ((char)this_00->_padding_ != '\x03') {
    local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.Data.ArrayNum = 0;
    local_50.Data.ArrayMax = 0;
    local_58 = param_1;
    bVar5 = FParse::Token(&local_58,&local_50,true,L'\0');
    if (bVar5) {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar9.Data = local_50.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_60,(wchar_t *)FVar9.Data,FNAME_Find);
      if (local_60 != (FName)0x0) {
        pUVar8 = UObject::FindFunction((UObject *)this,local_60);
        if (pUVar8 == (UFunction *)0x0) {
          pFVar10 = (this->CheatManagerExtensions).AllocatorInstance.Data;
          iVar2 = (this->CheatManagerExtensions).ArrayNum;
          pFVar1 = pFVar10 + (longlong)iVar2 * 8;
          while( true ) {
            if ((this->CheatManagerExtensions).ArrayNum != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<UCheatManagerExtension>,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res8);
            }
            if (pFVar10 == pFVar1) goto LAB_147721d73;
            if ((*(UObject **)pFVar10 != (UObject *)0x0) &&
               (pUVar8 = UObject::FindFunction(*(UObject **)pFVar10,local_60),
               pUVar8 != (UFunction *)0x0)) break;
            pFVar10 = pFVar10 + 8;
          }
        }
        if ((pUVar8->FunctionFlags & FUNC_BlueprintAuthorityOnly) != FUNC_None) {
          if ((GAllowActorScriptExecutionInEditor == false) ||
             (bVar5 = `UCheatManager::ProcessConsoleExec'::__l25::<lambda_1>::operator()(&local_68),
             bVar5)) {
            ::FString::FString(&local_40,param_1);
            APlayerController::ServerExec(this_00,&local_40);
            if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_40.Data.AllocatorInstance.Data);
            }
          }
          if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return true;
          }
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
          return true;
        }
      }
    }
LAB_147721d73:
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = (this->CheatManagerExtensions).AllocatorInstance.Data;
  iVar2 = (this->CheatManagerExtensions).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->CheatManagerExtensions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCheatManagerExtension>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_67);
    }
    if (pFVar10 == pFVar1) break;
    plVar3 = *(longlong **)pFVar10;
    if ((plVar3 != (longlong *)0x0) &&
       (cVar7 = (**(code **)(*plVar3 + 0x278))(plVar3,param_1,param_2,param_3), cVar7 != '\0')) {
      return true;
    }
    pFVar10 = pFVar10 + 8;
  }
  bVar5 = UObject::CallFunctionByNameWithArguments((UObject *)this,param_1,param_2,param_3,false);
  return bVar5;
}

// ReceiveEndPlay @ 147722ae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ReceiveEndPlay(UCheatManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCheatManager_ReceiveEndPlay);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147722b0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveInitCheatManager @ 147722b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ReceiveInitCheatManager(UCheatManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCheatManager_ReceiveInitCheatManager);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147722b4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// RegisterForOnCheatManagerCreated @ 147722bb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FDelegateHandle __cdecl
UCheatManager::RegisterForOnCheatManagerCreated
          (TDelegate<void___cdecl(UCheatManager_*),FDefaultDelegateUserPolicy> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  FDelegateHandle FVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_RDX;
  longlong lVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  TObjectIterator<UCheatManager> local_98;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  FReadAccessScope local_38;
  
  plVar13 = (longlong *)0x0;
  local_98.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ObjectArray.ArrayNum = 0;
  local_98.ObjectArray.ArrayMax = 0;
  local_98.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = StaticClass();
  GetObjectsOfClass(pUVar8,&local_98.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UCheatManager>::Advance(&local_98);
  while( true ) {
    lVar12 = (longlong)local_98.Index;
    if ((local_98.Index < 0) || (local_98.ObjectArray.ArrayNum <= local_98.Index)) {
      if (local_98.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.ObjectArray.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &OnCheatManagerCreatedDelegate,(FWriteAccessScope *)&local_80);
      *(undefined8 *)param_1 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_RDX,&local_68);
      if (((*(int *)&in_RDX->field_0x10 == 0) ||
          (*(longlong **)&in_RDX->field_0x8 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)&in_RDX->field_0x8 + 0x38))(), cVar4 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &OnCheatManagerCreatedDelegate,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_RDX,&local_38);
        if ((*(int *)&in_RDX->field_0x10 != 0) &&
           (plVar11 = *(longlong **)&in_RDX->field_0x8, plVar11 != (longlong *)0x0)) {
          puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0x40))(plVar11,local_res8);
          plVar13 = (longlong *)*puVar10;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        iVar7 = OnCheatManagerCreatedDelegate._16_4_;
        bVar3 = OnCheatManagerCreatedDelegate._16_4_ == OnCheatManagerCreatedDelegate._20_4_;
        *(longlong **)param_1 = plVar13;
        if (bVar3) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)&OnCheatManagerCreatedDelegate.field_0x8,
                             (int *)&OnCheatManagerCreatedDelegate.field_0x14);
        }
        OnCheatManagerCreatedDelegate._16_4_ = iVar7 + 1;
        TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>::
        TDelegateBase<FNotThreadSafeNotCheckedDelegateMode><FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
                   ((longlong)iVar7 * 0x10 + OnCheatManagerCreatedDelegate._8_8_),in_RDX);
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      return (FDelegateHandle)(ulong64)param_1;
    }
    uVar6 = 0;
    if (local_98.Index < local_98.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_98.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    lVar12 = *(longlong *)(local_98.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
    lVar1 = *(longlong *)(lVar12 + 0x20);
    pUVar8 = Z_Construct_UClass_APlayerController_NoRegister();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_RDX,&local_50);
      plVar11 = plVar13;
      if (*(int *)&in_RDX->field_0x10 != 0) {
        plVar11 = *(longlong **)&in_RDX->field_0x8;
      }
      (**(code **)(*plVar11 + 0x60))(plVar11,lVar12);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_50);
    }
    TObjectIterator<UCheatManager>::Advance(&local_98);
  }
  pcVar2 = (code *)swi(3);
  FVar9.ID = (*pcVar2)();
  return (FDelegateHandle)FVar9.ID;
}

// RemoveCheatManagerExtension @ 147723850

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
UCheatManager::RemoveCheatManagerExtension(UCheatManager *this,UCheatManagerExtension *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_1 == (UCheatManagerExtension *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8936125195328944760>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                       ,0x588,"CheatObject");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar2 = (this->CheatManagerExtensions).AllocatorInstance.Data;
    iVar6 = (this->CheatManagerExtensions).ArrayNum;
    pFVar8 = pFVar2;
    if (pFVar2 != pFVar2 + (longlong)iVar6 * 8) {
      while ((*(UCheatManagerExtension **)pFVar8 == (UCheatManagerExtension *)0x0 ||
             (*(UCheatManagerExtension **)pFVar8 != param_1))) {
        pFVar8 = pFVar8 + 8;
        if (pFVar8 == pFVar2 + (longlong)iVar6 * 8) {
          return;
        }
      }
      uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (uVar7 != 0xffffffff) {
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (this->CheatManagerExtensions).ArrayNum + ~uVar7;
        pFVar2 = (this->CheatManagerExtensions).AllocatorInstance.Data + (longlong)(int)uVar7 * 8;
        if (iVar6 != 0) {
          memmove(pFVar2,pFVar2 + 8,(longlong)iVar6 << 3);
        }
        piVar1 = &(this->CheatManagerExtensions).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->CheatManagerExtensions).AllocatorInstance,
                   (this->CheatManagerExtensions).ArrayNum,&(this->CheatManagerExtensions).ArrayMax)
        ;
        UCheatManagerExtension::RemovedFromCheatManager(param_1);
      }
    }
  }
  return;
}

// ServerToggleAILogging @ 147727ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ServerToggleAILogging(UCheatManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UCheatManager_ServerToggleAILogging);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x000147727add. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ServerToggleAILogging_Implementation @ 147727af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ServerToggleAILogging_Implementation(UCheatManager *this)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FVisualLogger *pFVar6;
  UWorld *this_00;
  APlayerController *pAVar7;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_28;
  FString local_18;
  
  pFVar6 = FVisualLogger::Get();
  if (pFVar6->bIsRecordingToFile) {
    pFVar6 = FVisualLogger::Get();
    FVisualLogger::SetIsRecordingToFile(pFVar6,false);
    pFVar6 = FVisualLogger::Get();
    FVisualLogger::SetIsRecording(pFVar6,false);
    this->bToggleAILogging = 0;
  }
  else {
    pFVar6 = FVisualLogger::Get();
    FVisualLogger::SetIsRecordingToFile(pFVar6,true);
    this->bToggleAILogging = 1;
  }
  pFVar6 = FVisualLogger::Get();
  pFVar6->field_0x2b0 =
       ((char)(*(uint *)&this->field_0x38 >> 2) << 3 ^ pFVar6->field_0x2b0) & 8U ^
       pFVar6->field_0x2b0;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 == (UWorld *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      pAVar7 = (APlayerController *)this->_padding_;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar7 = (APlayerController *)0x0;
    }
    APlayerController::OnServerStartedVisualLogger(pAVar7,this->bToggleAILogging);
    if ((this->_padding_ & 0x10) == 0) {
      pAVar7 = (APlayerController *)this->_padding_;
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar7 = (APlayerController *)0x0;
    }
    FVisualLogger::Get();
    ::FString::PrintfImpl(&local_18,L"VisLog recording is now %s");
    APlayerController::ClientMessage(pAVar7,&local_18,(FName)0x0,0.0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(this_00,&local_28);
    for (; (iVar3 = local_28.Index, pTVar2 = local_28.Container, -1 < local_28.Index &&
           (local_28.Index < (local_28.Container)->ArrayNum)); local_28.Index = local_28.Index + 1)
    {
      uVar5 = 0;
      if (local_28.Index < (local_28.Container)->ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar7 = (APlayerController *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if (pAVar7 != (APlayerController *)0x0) {
        APlayerController::OnServerStartedVisualLogger(pAVar7,this->bToggleAILogging);
      }
    }
  }
  return;
}

// ServerToggleAILogging_Validate @ 147727d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UCheatManager::ServerToggleAILogging_Validate(UCheatManager *this)

{
  return true;
}

// SetLevelStreamingStatus @ 147728810

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
UCheatManager::SetLevelStreamingStatus(UCheatManager *this,FName param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  FNameEntryId FVar8;
  uint uVar9;
  UWorld *this_00;
  undefined4 extraout_var;
  APlayerController *pAVar10;
  FName FVar11;
  undefined8 *puVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_res18;
  FScriptContainerElement local_res20;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  TArray<FUpdateLevelStreamingLevelStatus,TSizedDefaultAllocator<32>_> local_78;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_68;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_58;
  
  local_res18 = (FScriptContainerElement)param_2;
  local_res20 = (FScriptContainerElement)param_3;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar11.Number = 0;
  FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  if (param_1 == FVar11) {
    UWorld::GetPlayerControllerIterator(this_00,&local_58);
    for (; (iVar2 = local_58.Index, pTVar6 = local_58.Container, -1 < local_58.Index &&
           (local_58.Index < (local_58.Container)->ArrayNum)); local_58.Index = local_58.Index + 1)
    {
      uVar9 = 0;
      if (local_58.Index < (local_58.Container)->ArrayNum) {
        uVar9 = (uint)~local_58.Index >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar10 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar6->AllocatorInstance).Data + (longlong)iVar2 * 8));
      if (pAVar10 != (APlayerController *)0x0) {
        pFVar16 = (this_00->StreamingLevels).AllocatorInstance.Data;
        iVar2 = (this_00->StreamingLevels).ArrayNum;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        pFVar1 = pFVar16 + (longlong)iVar2 * 8;
        pFVar15 = (FScriptContainerElement *)0x0;
        while( true ) {
          uVar9 = (uint)pFVar15;
          if ((this_00->StreamingLevels).ArrayNum != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
            uVar9 = local_78.ArrayNum;
          }
          if (pFVar16 == pFVar1) break;
          plVar3 = *(longlong **)pFVar16;
          if (uVar9 == local_78.ArrayMax) {
            uVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&local_78.AllocatorInstance,&local_78.ArrayMax);
          }
          local_78.ArrayNum = uVar9 + 1;
          uVar13 = 0;
          if ((int)uVar9 < local_78.ArrayNum) {
            uVar13 = ~uVar9 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar14 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
          pFVar15 = (FScriptContainerElement *)0x0;
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            *(undefined8 *)pFVar14 = 0;
            *(undefined8 *)(pFVar14 + 8) = 0;
            pFVar15 = pFVar14;
          }
          puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x2e0))(plVar3,local_88);
          FVar11 = APlayerController::NetworkRemapPath(pAVar10,(FName)local_80,SUB81(*puVar12,0));
          pFVar16 = pFVar16 + 8;
          uVar4 = *(undefined8 *)FVar11;
          pFVar15[0xc] = local_res18;
          pFVar15[0xd] = local_res20;
          *(undefined8 *)pFVar15 = uVar4;
          *(undefined2 *)(pFVar15 + 0xe) = 0;
          *(undefined4 *)(pFVar15 + 8) = 0xffffffff;
          pFVar15 = (FScriptContainerElement *)(ulonglong)(uint)local_78.ArrayNum;
        }
        APlayerController::ClientUpdateMultipleLevelsStreamingStatus(pAVar10,&local_78);
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(this_00,&local_68);
    for (; (iVar2 = local_68.Index, pTVar6 = local_68.Container, -1 < local_68.Index &&
           (local_68.Index < (local_68.Container)->ArrayNum)); local_68.Index = local_68.Index + 1)
    {
      uVar9 = 0;
      if (local_68.Index < (local_68.Container)->ArrayNum) {
        uVar9 = (uint)~local_68.Index >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar10 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar6->AllocatorInstance).Data + (longlong)iVar2 * 8));
      if (pAVar10 != (APlayerController *)0x0) {
        FVar11 = APlayerController::NetworkRemapPath
                           (pAVar10,(FName)local_90,param_1.ComparisonIndex.Value._0_1_);
        APlayerController::ClientUpdateLevelStreamingStatus
                  (pAVar10,*(FName *)FVar11,param_2,param_3,false,-1,
                   (FNetLevelVisibilityTransactionId)0x0,false);
      }
    }
  }
  return;
}

// SetMouseSensitivityToDefault @ 147728b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::SetMouseSensitivityToDefault(UCheatManager *this)

{
  FName *pFVar1;
  int iVar2;
  UPlayerInput *this_00;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *this_01;
  FName *pFVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  if ((this->_padding_ & 0x10) == 0) {
    lVar7 = this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar7 = 0;
  }
  this_00 = *(UPlayerInput **)(lVar7 + 0x450);
  if (this_00 != (UPlayerInput *)0x0) {
    this_01 = Z_Construct_UClass_UInputSettings_NoRegister();
    if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_01);
    }
    pUVar3 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
    iVar2 = *(int *)&pUVar3[1].field_0x8;
    pFVar6 = *(FName **)(pUVar3 + 1);
    pFVar1 = pFVar6 + (longlong)iVar2 * 3;
    while( true ) {
      if (*(int *)&pUVar3[1].field_0x8 != iVar2) {
        `TCheckedPointerIterator<FInputAxisConfigEntry_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      if (*pFVar6 == EKeys::MouseX.KeyName) {
        fVar8 = UPlayerInput::GetMouseSensitivityY(this_00);
        fVar9 = (float)pFVar6[1].Number;
LAB_147728c11:
        UPlayerInput::SetMouseSensitivity(this_00,fVar9,fVar8);
      }
      else if (*pFVar6 == EKeys::MouseY.KeyName) {
        fVar8 = (float)pFVar6[1].Number;
        fVar9 = UPlayerInput::GetMouseSensitivityX(this_00);
        goto LAB_147728c11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar6 = pFVar6 + 3;
    }
  }
  return;
}

// SetWorldOrigin @ 147729830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::SetWorldOrigin(UCheatManager *this)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this_00;
  longlong *plVar5;
  TIntVector3<int>_u_0 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if ((this_00 == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                         ,0x498,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->_padding_ & 0x10) == 0) {
    plVar5 = (longlong *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar5 = (longlong *)0x0;
  }
  (**(code **)(*plVar5 + 0x840))(plVar5,&local_38,local_20);
  pUVar1 = (UObject *)plVar5[0x62];
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_147729942;
  }
  else {
    if (pUVar1 == (UObject *)0x0) goto LAB_147729942;
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (UObject *)plVar5[0x62];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  lVar2 = *(longlong *)(pUVar1 + 0xb);
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar2 != 0) {
    local_38 = *(undefined4 *)(lVar2 + 0x210);
    uStack_34 = *(undefined4 *)(lVar2 + 0x214);
    uStack_30 = *(undefined4 *)(lVar2 + 0x218);
    uStack_2c = *(undefined4 *)(lVar2 + 0x21c);
  }
LAB_147729942:
  local_28 = 0;
  local_48._s_0.X =
       (int)(double)CONCAT44(uStack_34,local_38) + (this_00->OriginLocation).field0_0x0._s_0.X;
  local_48._s_0.Y =
       (int)(double)CONCAT44(uStack_2c,uStack_30) + (this_00->OriginLocation).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this_00->OriginLocation).field0_0x0._s_0.Z;
  UWorld::RequestNewWorldOrigin(this_00,(TIntVector3<int> *)&local_48._s_0);
  return;
}

// Slomo @ 14772a670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::Slomo(UCheatManager *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  AWorldSettings *pAVar3;
  AActor *this_00;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (AActor *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (AActor *)0x0;
  }
  pAVar3 = AActor::GetWorldSettings(this_00);
                    /* WARNING: Could not recover jumptable at 0x00014772a6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pAVar3->_padding_ + 0x7a0))(pAVar3,param_1);
  return;
}

// SpawnServerStatReplicator @ 14772a6e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::SpawnServerStatReplicator(UCheatManager *this)

{
  DestroyServerStatReplicator(this);
                    /* WARNING: Could not recover jumptable at 0x00014772a6f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x180))(this);
  return;
}

// StaticRegisterNativesUCheatManager @ 14772bec0

void __cdecl UCheatManager::StaticRegisterNativesUCheatManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x37;
  local_18.DataPtr = Z_Construct_UClass_UCheatManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StreamLevelIn @ 14772d120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::StreamLevelIn(UCheatManager *this,FName param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014772d12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x440))(this,param_1,1);
  return;
}

// StreamLevelOut @ 14772d140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::StreamLevelOut(UCheatManager *this,FName param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014772d149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x440))(this,param_1,0,0);
  return;
}

// Summon @ 14772d8a0

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

void __thiscall UCheatManager::Summon(UCheatManager *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  APlayerController *this_00;
  TVector<double> *pTVar7;
  UWorld *this_01;
  AActor *pAVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  double local_110;
  TVector<double>_u_0 local_108;
  FString local_e8;
  TVector<double>_u_0 local_d8;
  TRotator<double> local_c0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (4 < (byte)LogCheatManager._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
  }
  local_118 = (undefined1  [8])0x0;
  local_110 = 0.0;
  iVar3 = ::FString::Find(param_1,L" ",1,IgnoreCase,FromStart,-1);
  if (iVar3 == -1) {
    bVar2 = FPackageName::IsShortPackageName(param_1);
    if (bVar2) {
LAB_14772da93:
      local_108._s_0.X = (double)(param_1->Data).AllocatorInstance.Data;
      iVar1 = (param_1->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      local_108._8_4_ = iVar3;
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      pUVar5 = (UClass *)
               UClass::TryFindTypeSlow(pUVar5,(TStringView<wchar_t> *)&local_108._s_0,None);
      if (pUVar5 == (UClass *)0x0) {
        pwVar10 = L"Failed to find class.";
      }
      else {
        pUVar6 = Z_Construct_UClass_AActor_NoRegister();
        if (pUVar6 != (UClass *)0x0) {
          iVar3 = (int)pUVar6->_padding_;
          if (((int)pUVar5->_padding_ < iVar3) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar3 * 8) !=
              &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            this_00 = GetOuterAPlayerController(this);
            if (this_00 != (APlayerController *)0x0) {
              (**(code **)(this_00->_padding_ + 0x7a8))(this_00,&local_c0);
              (**(code **)(this_00->_padding_ + 0xf20))(this_00,&local_108);
              pTVar7 = UE::Math::TRotator<double>::Vector
                                 (&local_c0,(TVector<double> *)&local_d8._s_0);
              local_108._s_0.X =
                   local_108._s_0.X + (pTVar7->field0_0x0)._s_0.X * __real_4052000000000000;
              local_108._s_0.Y =
                   local_108._s_0.Y + (pTVar7->field0_0x0)._s_0.Y * __real_4052000000000000;
              local_108._s_0.Z =
                   local_108._s_0.Z +
                   (pTVar7->field0_0x0)._s_0.Z * __real_4052000000000000 + __real_402e000000000000;
              FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
              local_a8._24_8_ = AActor::GetInstigator((AActor *)this_00);
              this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
              pAVar8 = UWorld::SpawnActor(this_01,pUVar5,(TVector<double> *)&local_108._s_0,
                                          &local_c0,(FActorSpawnParameters *)local_a8);
              if (pAVar8 == (AActor *)0x0) {
                ::FString::operator=((FString *)local_118,L"SpawnActor failed.");
              }
              if (local_a8._64_8_ != 0) {
                plVar9 = (longlong *)(local_a8 + 0x50);
                if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
                  plVar9 = (longlong *)local_a8._104_8_;
                }
                (**(code **)(*plVar9 + 0x10))();
              }
              if (pAVar8 != (AActor *)0x0) goto LAB_14772dc8d;
            }
            goto LAB_14772dc57;
          }
        }
        pwVar10 = L"Class is not derived from Actor.";
      }
    }
    else {
      iVar3 = ::FString::Find(param_1,L".",1,IgnoreCase,FromStart,-1);
      if (iVar3 != -1) {
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        local_d8._s_0.X = 0.0;
        local_d8._s_0.Y = 0.0;
        ::FString::FString((FString *)&local_108._s_0,L".");
        ::FString::Split(param_1,(FString *)&local_108._s_0,&local_e8,(FString *)&local_d8._s_0);
        if ((FScriptContainerElement *)local_108._s_0.X != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108._s_0.X);
        }
        FText::FText((FText *)&local_c0);
        local_108._8_4_ = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          local_108._8_4_ = 0;
        }
        local_108._s_0.X = (double)local_e8.Data.AllocatorInstance.Data;
        bVar2 = FPackageName::IsValidLongPackageName
                          ((TStringView<wchar_t> *)&local_108._s_0,true,(FText *)&local_c0);
        if (!bVar2) {
          pFVar4 = FText::ToString((FText *)&local_c0);
          ::FString::operator=((FString *)local_118,pFVar4);
        }
        if ((longlong *)local_c0.Pitch != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_c0.Pitch + 0x10))();
        }
        if ((void *)local_d8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_d8._s_0.X);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (!bVar2) goto LAB_14772dc57;
        goto LAB_14772da93;
      }
      pwVar10 = L"Class names with a path must contain a dot. (i.e /Script/Engine.StaticMeshActor)";
    }
    ::FString::operator=((FString *)local_118,pwVar10);
  }
  else {
    ::FString::PrintfImpl((FString *)&local_d8._s_0,L"ClassName contains a space.");
    if (local_118 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_118);
    }
    local_118 = (undefined1  [8])local_d8._s_0.X;
    local_110 = local_d8._s_0.Y;
  }
LAB_14772dc57:
  if (2 < (byte)LogCheatManager._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
  }
LAB_14772dc8d:
  if (local_118 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_118);
  }
  return;
}

// Teleport @ 14772dd20

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

void __thiscall UCheatManager::Teleport(UCheatManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UCheatManager::Teleport(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_TeleportTrace>
  FVar5;
  UWorld *this_00;
  TVector<double> *pTVar6;
  UClass *pUVar7;
  TRotator<double> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  AActor *this_01;
  longlong *plVar12;
  ForElementType<unsigned_int> FVar13;
  undefined1 auStackY_2f8 [32];
  undefined4 local_298 [2];
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined4 uStack_278;
  undefined1 uStack_274;
  undefined2 uStack_273;
  undefined1 uStack_271;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  FName local_240;
  FName local_238;
  TRotator<double> local_230;
  undefined1 local_218 [16];
  double local_208;
  double local_200;
  double local_1f8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  int local_174;
  FWeakObjectPtr local_160;
  FWeakObjectPtr FStack_158;
  IActorInstanceManagerInterface *local_150;
  undefined8 uStack_148;
  TVector<double> local_118;
  TRotator<double> local_100;
  TRotator<double> local_e8;
  FCollisionQueryParams local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    if (this->_padding_ == 0) goto LAB_14772ddaa;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_14772ddaa:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuterAPlayerController() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                       ,0xa8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar12 = &this->_padding_;
  plVar11 = (longlong *)0x0;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    plVar9 = (longlong *)*plVar12;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    plVar9 = plVar11;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*plVar9 + 0x840))(plVar9,&local_270,&local_230);
  memset(local_218,0,0x100);
  local_290 = 0;
  uStack_288 = 0;
  uStack_273 = 0;
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  FStack_158.ObjectIndex = 0;
  FStack_158.ObjectSerialNumber = 0;
  uStack_271 = 0;
  local_280 = 0;
  uStack_278 = 0xffffffff;
  uStack_274 = 0;
  uStack_148._0_4_ = -1;
  uStack_148._4_1_ = Invalid;
  uStack_148._5_3_ = 0;
  local_218._4_4_ = 1.0;
  local_174 = -1;
  local_150 = (IActorInstanceManagerInterface *)0x0;
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    plVar11 = (longlong *)*plVar12;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_01 = (AActor *)plVar11[0x62];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_TeleportTrace =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UCheatManager::Teleport(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_TeleportTrace>
          )0x0;
    pFVar4 = ::FName::FName(&local_240,"TeleportTrace");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_TeleportTrace,*pFVar4,L"TeleportTrace",
               "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true
               ,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar5 = StatPtr_TeleportTrace;
  if (StatPtr_TeleportTrace ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UCheatManager::Teleport(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_TeleportTrace>
       )0x0) {
    pFVar4 = ::FName::FName(&local_238,"TeleportTrace");
    FVar5 = (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_void___cdecl_UCheatManager::Teleport(void)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_TeleportTrace>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_TeleportTrace,*pFVar4,
                         L"TeleportTrace","STATGROUP_CollisionTags","STATCAT_Advanced",
                         L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"TeleportTrace");
    _Init_thread_footer(&::_TSS0);
  }
  local_c8.TraceTag = ::StaticName;
  local_c8.OwnerTag.ComparisonIndex.Value = 0;
  local_c8.OwnerTag.Number = 0;
  local_c8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.IgnoreComponents.ArrayNum = 0;
  local_c8.IgnoreComponents.ArrayMax = 8;
  local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.IgnoreSourceObjects.ArrayNum = 0;
  local_c8.IgnoreSourceObjects.ArrayMax = 4;
  local_c8.bTraceComplex = true;
  local_c8.bFindInitialOverlaps = true;
  local_c8.bReturnFaceIndex = false;
  local_c8.bReturnPhysicalMaterial = false;
  local_c8.MobilityType = Any;
  local_c8.bComponentListUnique = true;
  local_c8.IgnoreMask = '\0';
  local_c8.bIgnoreBlocks = false;
  local_c8.bIgnoreTouches = false;
  local_c8.bSkipNarrowPhase = false;
  local_c8.StatId.StatIdPtr = (TStatIdData *)FVar5;
  if (this_01 != (AActor *)0x0) {
    local_298[0] = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
    if (((&local_c8.IgnoreSourceObjects <= local_298) &&
        (local_298 < &local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_c8.IgnoreSourceObjects.ArrayNum == local_c8.IgnoreSourceObjects.ArrayMax) {
      local_c8.IgnoreSourceObjects.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                     (0x404,&local_c8.IgnoreSourceObjects.AllocatorInstance,
                      &local_c8.IgnoreSourceObjects.ArrayMax);
    }
    lVar10 = (longlong)local_c8.IgnoreSourceObjects.ArrayNum;
    FVar13 = (ForElementType<unsigned_int>)&local_c8.IgnoreSourceObjects;
    if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar13 = local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
    }
    local_c8.IgnoreSourceObjects.ArrayNum = local_c8.IgnoreSourceObjects.ArrayNum + 1;
    *(undefined4 *)((longlong)FVar13 + lVar10 * 4) = local_298[0];
    local_c8.OwnerTag = (FName)this_01->_padding_;
  }
  local_c8.bDebugQuery = false;
  local_c8.bTraceIntoSubComponents = true;
  local_c8.bReplaceHitWithSubComponents = true;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  pTVar6 = UE::Math::TRotator<double>::Vector(&local_230,&local_118);
  local_258._s_0.Z = (pTVar6->field0_0x0)._s_0.Z * __real_412e848000000000 + local_270._s_0.Z;
  local_258._s_0.Y = (pTVar6->field0_0x0)._s_0.Y * __real_412e848000000000 + local_270._s_0.Y;
  local_258._s_0.X = (pTVar6->field0_0x0)._s_0.X * __real_412e848000000000 + local_270._s_0.X;
  bVar3 = UWorld::LineTraceSingleByChannel
                    (this_00,(FHitResult *)local_218,(TVector<double> *)&local_270._s_0,
                     (TVector<double> *)&local_258._s_0,ECC_Pawn,&local_c8,
                     &FCollisionResponseParams::DefaultResponseParam);
  if (bVar3) {
    local_208 = local_208 + local_1d8 * __real_4010000000000000;
    local_200 = local_200 + local_1d0 * __real_4010000000000000;
    local_1f8 = local_1f8 + local_1c8 * __real_4010000000000000;
  }
  if (this_01 == (AActor *)0x0) {
    lVar10 = *plVar12;
    if (lVar10 == 0) goto LAB_14772e27b;
    pUVar7 = Z_Construct_UClass_ADebugCameraController_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
         != &pUVar7->_padding_)) || (*(longlong *)(lVar10 + 0x8a8) == 0)) goto LAB_14772e27b;
    this_01 = *(AActor **)(*(longlong *)(lVar10 + 0x8a8) + 0x310);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (this_01 == (AActor *)0x0) goto LAB_14772e27b;
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    if (this_01 == (AActor *)0x0) goto LAB_14772e27b;
    pTVar8 = &local_e8;
  }
  else {
    pTVar8 = &local_100;
  }
  pcVar2 = *(code **)(this_01->_padding_ + 0x5f8);
  pTVar8 = AActor::GetActorRotation(this_01,pTVar8);
  (*pcVar2)(this_01,&local_208,pTVar8,0);
LAB_14772e27b:
  if (local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_c8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_c8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return;
}

// TestCollisionDistance @ 14772e3b0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UCheatManager::TestCollisionDistance(UCheatManager *this)

{
  int iVar1;
  code *pcVar2;
  FUObjectItem *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  char cVar14;
  UWorld *pUVar15;
  UClass *pUVar16;
  FUObjectItem *pFVar17;
  UClass *pUVar18;
  longlong *plVar19;
  AActor *this_00;
  UObjectBase *pUVar20;
  float fVar21;
  FColor_u_0 local_res8 [2];
  float local_res10 [2];
  FName local_res18;
  TIterator local_128;
  UClass *local_110;
  EObjectFlags local_108;
  EInternalObjectFlags local_104;
  FString local_100;
  TVector<double>_u_0 local_f0;
  TVector<double> local_d8;
  undefined1 local_c0 [152];
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    plVar19 = (longlong *)this->_padding_;
  }
  else {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6281605350772703132>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                        ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar19 = (longlong *)0x0;
  }
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x840))(plVar19,&local_d8,local_c0);
    if (((uint)this->_padding_ >> 4 & 1) == 0) {
      this_00 = (AActor *)this->_padding_;
    }
    else {
      bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6281605350772703132>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                          ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (AActor *)0x0;
    }
    pUVar15 = AActor::GetWorld(this_00);
    FlushPersistentDebugLines(pUVar15);
    pUVar16 = Z_Construct_UClass_AVolume_NoRegister();
    local_128.Index = -1;
    local_128.Array = &GUObjectArray;
    local_128.CurrentObject = (FUObjectItem *)0x0;
    FUObjectArray::TIterator::Advance(&local_128);
    local_108 = RF_NoFlags;
    local_110 = pUVar16;
    local_104 = UE::GetAsyncLoadingInternalFlagsExclusion();
    local_104 = local_104 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
    if ((pUVar16 == (UClass *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Class",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                            ,0x70,L""), bVar13)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&(local_128.Array)->ObjObjectsCritical);
    do {
      pFVar3 = local_128.CurrentObject;
      if (local_128.CurrentObject == (FUObjectItem *)0x0) {
        pUVar20 = (UObjectBase *)0x0;
      }
      else {
        pUVar20 = ((local_128.CurrentObject)->field1_0x8).Object;
      }
      if (((local_108 & pUVar20->ObjectFlags) == RF_NoFlags) &&
         (pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar20->InternalIndex),
         (local_104 &
         (EInternalObjectFlags)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed)) {
        pUVar18 = Z_Construct_UClass_UObject_NoRegister();
        fVar21 = __real_3f800000;
        fVar4 = __real_447a0000;
        fVar5 = __real_3a83126f;
        fVar6 = __real_bf800000;
        fVar7 = __real_437f0000;
        fVar8 = __real_437f0000;
        fVar9 = __real_bf800000;
        fVar10 = __real_3a83126f;
        fVar11 = __real_447a0000;
        fVar12 = __real_3f800000;
        if (pUVar16 == pUVar18) break;
        pUVar18 = (pUVar20->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar16->_padding_;
        if ((iVar1 <= (int)pUVar18->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar1 * 8) ==
            &pUVar16->_padding_)) break;
      }
      bVar13 = FUObjectArray::TIterator::Advance(&local_128);
      pUVar16 = local_110;
      pFVar3 = local_128.CurrentObject;
      fVar21 = __real_3f800000;
      fVar4 = __real_447a0000;
      fVar5 = __real_3a83126f;
      fVar6 = __real_bf800000;
      fVar7 = __real_437f0000;
      fVar8 = __real_437f0000;
      fVar9 = __real_bf800000;
      fVar10 = __real_3a83126f;
      fVar11 = __real_447a0000;
      fVar12 = __real_3f800000;
    } while (bVar13);
joined_r0x00014772e581:
    __real_3f800000 = fVar12;
    __real_447a0000 = fVar11;
    __real_3a83126f = fVar10;
    __real_bf800000 = fVar9;
    __real_437f0000 = fVar8;
    fVar8 = __real_437f0000;
    fVar9 = __real_bf800000;
    fVar10 = __real_3a83126f;
    fVar11 = __real_447a0000;
    fVar12 = __real_3f800000;
    __real_3f800000 = fVar21;
    __real_447a0000 = fVar4;
    __real_3a83126f = fVar5;
    __real_bf800000 = fVar6;
    __real_437f0000 = fVar7;
    if (pFVar3 != (FUObjectItem *)0x0) {
      pUVar20 = (pFVar3->field1_0x8).Object;
      if (pUVar20 == (UObjectBase *)0x0) {
LAB_14772e62d:
        pUVar20 = (UObjectBase *)0x0;
      }
      else {
        pUVar18 = Z_Construct_UClass_AVolume_NoRegister();
        pUVar16 = (pUVar20->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar18->_padding_;
        if (((int)pUVar16->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar18->_padding_)) goto LAB_14772e62d;
      }
      pUVar16 = (pUVar20->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      if ((pUVar16->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar16);
      }
      if ((UObjectBase *)(pUVar16->ClassDefaultObject).field0_0x0.DebugPtr != pUVar20) {
        local_f0._s_0.Z = 0.0;
        local_f0._s_0.X = 0.0;
        local_f0._s_0.Y = 0.0;
        local_res10[0] = -1.0;
        cVar14 = (**(code **)(**(longlong **)&pUVar20[0x12].ObjectFlags + 0x820))
                           (*(longlong **)&pUVar20[0x12].ObjectFlags,&local_d8,local_res10,&local_f0
                           );
        fVar21 = fVar9;
        if (cVar14 != '\0') {
          fVar21 = SQRT(local_res10[0]);
        }
        local_res8[0]._s_0.B = '\0';
        if (fVar11 <= fVar21) {
          fVar21 = fVar11;
        }
        local_res8[0]._s_0.A = 0xff;
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        local_res8[0]._1_1_ = (undefined1)(int)((fVar12 - fVar21 * fVar10) * fVar8);
        local_res8[0]._2_1_ = (undefined1)(int)(fVar21 * fVar10 * fVar8);
        pUVar15 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        DrawDebugLine(pUVar15,&local_d8,(TVector<double> *)&local_f0._s_0,
                      (FColor *)&local_res8[0]._s_0,true,fVar9,'\0',0.0);
        if (4 < (byte)LogCheatManager._0_1_) {
          local_res18 = (pUVar20->NamePrivate).Name;
          ::FName::ToString(&local_res18,&local_100);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCheatManager);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
        }
      }
LAB_14772e770:
      do {
        do {
          bVar13 = FUObjectArray::TIterator::Advance(&local_128);
          pFVar3 = local_128.CurrentObject;
          fVar21 = __real_3f800000;
          fVar4 = __real_447a0000;
          fVar5 = __real_3a83126f;
          fVar6 = __real_bf800000;
          fVar7 = __real_437f0000;
          if (!bVar13) goto joined_r0x00014772e581;
          if (local_128.CurrentObject == (FUObjectItem *)0x0) {
            pUVar20 = (UObjectBase *)0x0;
          }
          else {
            pUVar20 = ((local_128.CurrentObject)->field1_0x8).Object;
          }
        } while ((local_108 & pUVar20->ObjectFlags) != RF_NoFlags);
        pUVar16 = Z_Construct_UClass_UObject_NoRegister();
        if (local_110 != pUVar16) {
          pUVar16 = (pUVar20->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar1 = (int)local_110->_padding_;
          if (((int)pUVar16->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar1 * 8) !=
              &local_110->_padding_)) goto LAB_14772e770;
        }
        pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar20->InternalIndex);
        fVar21 = __real_3f800000;
        fVar4 = __real_447a0000;
        fVar5 = __real_3a83126f;
        fVar6 = __real_bf800000;
        fVar7 = __real_437f0000;
      } while ((local_104 &
               (EInternalObjectFlags)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x00014772e581;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&(local_128.Array)->ObjObjectsCritical);
  }
  return;
}

// TickCollisionDebug @ 14772ec90

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

void __thiscall UCheatManager::TickCollisionDebug(UCheatManager *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_UCheatManager::TickCollisionDebug(void)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_TickCollisionDebug>
  FVar16;
  UObject *pUVar17;
  UWorld *pUVar18;
  FColor_u_0 *pFVar19;
  ForElementType<unsigned_int> FVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_3c8 [32];
  undefined4 local_368 [2];
  FColor_u_0 local_360;
  FColor_u_0 local_35c;
  FColor_u_0 local_358;
  FColor_u_0 local_354;
  FColor_u_0 local_350;
  FColor_u_0 local_34c;
  FColor_u_0 local_348;
  FColor_u_0 local_344;
  FColor_u_0 local_340;
  FColor_u_0 local_33c;
  FString local_338;
  TVector<double>_u_0 local_328;
  FName local_310;
  FCollisionShape local_308;
  TVector<double>_u_0 local_2f8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  TVector<double>_u_0 local_2c0;
  FName local_2a8;
  FName local_2a0;
  FString local_298;
  undefined1 local_288 [48];
  double dStack_258;
  double local_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  double dStack_220;
  int local_1e4;
  byte local_1db;
  FActorInstanceHandle local_1d0;
  FWeakObjectPtr local_1b0 [5];
  TRotator<double> local_188;
  FCollisionQueryParams local_168;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  uVar23 = 0;
  uVar13 = 0;
  if (this->bDebugCapsuleSweep != 0) {
    if ((this->_padding_ & 0x10) == 0) {
      plVar7 = (longlong *)this->_padding_;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x840))(plVar7,&local_328,&local_188);
        UE::Math::TRotator<double>::Vector(&local_188,(TVector<double> *)&local_2c0._s_0);
        pUVar17 = (UObject *)plVar7[0x62];
        dVar29 = (double)this->DebugTraceDistance;
        local_2f8._s_0.X = local_2c0._s_0.X * dVar29 + local_328._s_0.X;
        local_2f8._s_0.Y = local_2c0._s_0.Y * dVar29 + local_328._s_0.Y;
        local_2f8._s_0.Z = local_2c0._s_0.Z * dVar29 + local_328._s_0.Z;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar17);
        }
        lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          StatPtr_TickCollisionDebug =
               (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_UCheatManager::TickCollisionDebug(void)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_TickCollisionDebug>
                )0x0;
          pFVar15 = ::FName::FName(&local_2a8,"TickCollisionDebug");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)&StatPtr_TickCollisionDebug,*pFVar15,
                     L"TickCollisionDebug","STATGROUP_CollisionTags","STATCAT_Advanced",
                     L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
          _Init_thread_footer(&::_TSS0);
        }
        FVar16 = StatPtr_TickCollisionDebug;
        if (StatPtr_TickCollisionDebug ==
            (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_UCheatManager::TickCollisionDebug(void)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_TickCollisionDebug>
             )0x0) {
          pFVar15 = ::FName::FName(&local_2a0,"TickCollisionDebug");
          FVar16 = (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_UCheatManager::TickCollisionDebug(void)_::_8_::<lambda_2>::operator()(void)const_::_2_::FStat_TickCollisionDebug>
                    )FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_TickCollisionDebug,*pFVar15,
                                L"TickCollisionDebug","STATGROUP_CollisionTags","STATCAT_Advanced",
                                L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
        }
        if ((*(int *)(lVar26 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
        {
          ::FName::FName(&::StaticName,"TickCollisionDebug");
          _Init_thread_footer(&::_TSS0);
        }
        local_168.TraceTag = ::StaticName;
        local_168.OwnerTag.ComparisonIndex.Value = 0;
        local_168.OwnerTag.Number = 0;
        local_168.IgnoreComponents.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_168.IgnoreComponents.ArrayNum = 0;
        local_168.IgnoreComponents.ArrayMax = 8;
        local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_168.IgnoreSourceObjects.ArrayNum = 0;
        local_168.IgnoreSourceObjects.ArrayMax = 4;
        local_168.bTraceComplex = false;
        local_168.bFindInitialOverlaps = true;
        local_168.bReturnFaceIndex = false;
        local_168.bReturnPhysicalMaterial = false;
        local_168.MobilityType = Any;
        local_168.bComponentListUnique = true;
        local_168.IgnoreMask = '\0';
        local_168.bIgnoreBlocks = false;
        local_168.bIgnoreTouches = false;
        local_168.bSkipNarrowPhase = false;
        local_168.StatId.StatIdPtr = (TStatIdData *)FVar16;
        if (pUVar17 != (UObject *)0x0) {
          local_368[0] = *(undefined4 *)&pUVar17->field_0xc;
          if (((&local_168.IgnoreSourceObjects <= local_368) &&
              (local_368 < &local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (local_168.IgnoreSourceObjects.ArrayNum == local_168.IgnoreSourceObjects.ArrayMax) {
            local_168.IgnoreSourceObjects.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                           (0x404,&local_168.IgnoreSourceObjects.AllocatorInstance,
                            &local_168.IgnoreSourceObjects.ArrayMax);
          }
          FVar20 = (ForElementType<unsigned_int>)&local_168.IgnoreSourceObjects;
          if (local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
          }
          lVar26 = (longlong)local_168.IgnoreSourceObjects.ArrayNum;
          local_168.IgnoreSourceObjects.ArrayNum = local_168.IgnoreSourceObjects.ArrayNum + 1;
          *(undefined4 *)((longlong)FVar20 + lVar26 * 4) = local_368[0];
          local_168.OwnerTag.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
          local_168.OwnerTag.Number = *(uint *)&pUVar17->field_0x1c;
        }
        local_168.bDebugQuery = false;
        local_168.bTraceIntoSubComponents = true;
        local_168.bReplaceHitWithSubComponents = true;
        local_168._16_4_ =
             CONCAT31(local_168._17_3_,(char)((uint)*(undefined4 *)&this->field_0x38 >> 1)) &
             0xffffff01;
        if (ZPULL(*(undefined4 *)&this->field_0x38,0,1) != 0) {
          memset(local_288,0,0x100);
          local_2e0 = 0;
          uStack_2d8 = 0;
          local_1d0.ReferenceObject.WeakPtr.ObjectIndex = 0;
          local_1d0.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
          local_1d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
          local_1d0.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
          local_2d0 = 0;
          uStack_2c8 = 0xffffffff;
          uStack_2c4 = 0;
          local_288._4_4_ = 1.0;
          local_1e4 = -1;
          local_1d0.ManagerInterface.InterfaceInstance._0_4_ = 0;
          local_1d0.ManagerInterface.InterfaceInstance._4_4_ = 0;
          local_1d0.InstanceIndex = -1;
          local_1d0.ResolutionStatus = Invalid;
          local_1d0._29_3_ = 0;
          pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          local_308.field1_0x4.Box.HalfExtentX = this->DebugCapsuleRadius;
          local_308.field1_0x4.Box.HalfExtentY = this->DebugCapsuleHalfHeight;
          local_308.ShapeType = Capsule;
          bVar12 = UWorld::SweepSingleByChannel
                             (pUVar18,(FHitResult *)local_288,(TVector<double> *)&local_328._s_0,
                              (TVector<double> *)&local_2f8._s_0,&UE::Math::TQuat<double>::Identity,
                              (uint)(this->DebugTraceChannel).Value,&local_308,&local_168,
                              &FCollisionResponseParams::DefaultResponseParam);
          if (bVar12) {
            if (((local_1db & 2) == 0) || (uVar21 = 1, (local_1db & 1) == 0)) {
              uVar21 = 0;
            }
            uVar24 = this->CurrentTraceIndex;
            fVar1 = this->DebugCapsuleRadius;
            fVar2 = this->DebugCapsuleHalfHeight;
            uVar14 = uVar13;
            if ((int)uVar24 < (this->DebugTraceInfoList).ArrayNum) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar22 = (this->DebugTraceInfoList).AllocatorInstance.Data;
            lVar26 = (longlong)(int)uVar24 * 0xa0;
            *(double *)(pFVar22 + lVar26) = local_328._s_0.X;
            *(double *)(pFVar22 + lVar26 + 8) = local_328._s_0.Y;
            *(double *)(pFVar22 + lVar26 + 0x10) = local_328._s_0.Z;
            *(double *)(pFVar22 + lVar26 + 0x18) = local_2f8._s_0.X;
            *(double *)(pFVar22 + lVar26 + 0x18 + 8) = local_2f8._s_0.Y;
            *(double *)(pFVar22 + lVar26 + 0x28) = local_2f8._s_0.Z;
            *(float *)(pFVar22 + lVar26 + 0x90) = fVar2;
            *(float *)(pFVar22 + lVar26 + 0x94) = fVar1;
            *(undefined8 *)(pFVar22 + lVar26 + 0x78) = local_288._16_8_;
            *(undefined8 *)(pFVar22 + lVar26 + 0x78 + 8) = local_288._24_8_;
            *(undefined8 *)(pFVar22 + lVar26 + 0x88) = local_288._32_8_;
            *(undefined8 *)(pFVar22 + lVar26 + 0x30) = local_288._40_8_;
            *(double *)(pFVar22 + lVar26 + 0x30 + 8) = dStack_258;
            *(double *)(pFVar22 + lVar26 + 0x40) = local_250;
            dVar30 = (double)this->DebugTraceDrawNormalLength;
            dVar29 = dStack_238 * dVar30 + local_250;
            *(double *)(pFVar22 + lVar26 + 0x48) = local_248 * dVar30 + (double)local_288._40_8_;
            auVar9._8_4_ = SUB84(dVar29,0);
            auVar9._0_8_ = local_240 * dVar30 + dStack_258;
            auVar9._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
            *(undefined1 (*) [16])(pFVar22 + lVar26 + 0x50) = auVar9;
            dVar29 = (double)this->DebugTraceDrawNormalLength;
            local_250 = dStack_220 * dVar29 + local_250;
            *(double *)(pFVar22 + lVar26 + 0x60) = local_230 * dVar29 + (double)local_288._40_8_;
            auVar10._8_4_ = SUB84(local_250,0);
            auVar10._0_8_ = local_228 * dVar29 + dStack_258;
            auVar10._12_4_ = (int)((ulonglong)local_250 >> 0x20);
            *(undefined1 (*) [16])(pFVar22 + lVar26 + 0x68) = auVar10;
            *(uint *)(pFVar22 + lVar26 + 0x98) = *(uint *)(pFVar22 + lVar26 + 0x98) & 0xfffffffe;
            *(uint *)(pFVar22 + lVar26 + 0x98) = *(uint *)(pFVar22 + lVar26 + 0x98) | uVar21;
            if (4 < (byte)LogCollision._0_1_) {
              FActorInstanceHandle::GetName(&local_1d0,&local_298);
              pUVar17 = FWeakObjectPtr::Get(local_1b0);
              if (pUVar17 == (UObject *)0x0) {
                ::FString::FString(&local_338,L"None");
              }
              else {
                local_310.ComparisonIndex.Value = *(uint *)&pUVar17->field_0x18;
                local_310.Number = *(uint *)&pUVar17->field_0x1c;
                ::FName::ToString(&local_310,&local_338);
              }
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogCollision);
              if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.Data.AllocatorInstance.Data);
              }
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
            }
          }
        }
        if (local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
        }
        if (local_168.IgnoreComponents.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_168.IgnoreComponents.AllocatorInstance.SecondaryData);
        }
      }
    }
    else {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6281605350772703132>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                          ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  fVar2 = __real_bf800000;
  fVar1 = __real_40a00000;
  uVar25 = uVar23;
  if (0 < (this->DebugTraceInfoList).ArrayNum) {
    do {
      fVar3 = __real_41200000;
      uVar24 = (uint)uVar23;
      uVar21 = uVar13;
      if ((int)uVar24 < (this->DebugTraceInfoList).ArrayNum) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar22 = (this->DebugTraceInfoList).AllocatorInstance.Data + uVar25;
      pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      DrawDebugDirectionalArrow
                (pUVar18,(TVector<double> *)pFVar22,(TVector<double> *)(pFVar22 + 0x18),fVar3,
                 &FColor::White,false,fVar2,'\0',0.0);
      fVar3 = *(float *)(pFVar22 + 0x94);
      fVar4 = *(float *)&pFVar22[0x90].field_0x0;
      lVar26 = this->_padding_;
      if (this->CurrentTraceIndex == uVar24) {
        if ((*(uint *)(pFVar22 + 0x98) & 1) == 0) {
          local_35c.Bits = 0xffffc880;
          pUVar18 = (UWorld *)(**(code **)(lVar26 + 0x180))(this);
          pFVar19 = &local_35c;
        }
        else {
          local_360.Bits = 0xffff6440;
          pUVar18 = (UWorld *)(**(code **)(lVar26 + 0x180))();
          pFVar19 = &local_360;
        }
      }
      else if ((*(uint *)(pFVar22 + 0x98) & 1) == 0) {
        local_354.Bits = 0xff80c8ff;
        pUVar18 = (UWorld *)(**(code **)(lVar26 + 0x180))(this);
        pFVar19 = &local_354;
      }
      else {
        local_358.Bits = 0xff4064ff;
        pUVar18 = (UWorld *)(**(code **)(lVar26 + 0x180))();
        pFVar19 = &local_358;
      }
      DrawDebugCapsule(pUVar18,(TVector<double> *)(pFVar22 + 0x78),fVar4,fVar3,
                       &UE::Math::TQuat<double>::Identity,(FColor *)&pFVar19->_s_0,false,fVar2,'\0',
                       0.0);
      local_350.Bits = 0xffff4040;
      pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      DrawDebugDirectionalArrow
                (pUVar18,(TVector<double> *)(pFVar22 + 0x30),(TVector<double> *)(pFVar22 + 0x48),
                 fVar1,(FColor *)&local_350._s_0,false,fVar2,'\0',0.0);
      local_34c.Bits = 0xff4040ff;
      pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      DrawDebugDirectionalArrow
                (pUVar18,(TVector<double> *)(pFVar22 + 0x30),(TVector<double> *)(pFVar22 + 0x60),
                 fVar1,(FColor *)&local_34c._s_0,false,fVar2,'\0',0.0);
      uVar23 = (ulonglong)(uVar24 + 1);
      uVar25 = uVar25 + 0xa0;
    } while ((int)(uVar24 + 1) < (this->DebugTraceInfoList).ArrayNum);
  }
  fVar11 = __real_3d7f65cd;
  fVar4 = __real_437f0000;
  fVar3 = __real_3f000000;
  if (0 < (this->DebugTracePawnInfoList).ArrayNum) {
    uVar21 = this->CurrentTracePawnIndex;
    lVar26 = 10;
    fVar31 = __real_3ec0c0c1;
    fVar32 = __real_3ec0c0c1;
    do {
      fVar5 = __real_41200000;
      uVar24 = uVar13;
      if ((int)uVar21 < (this->DebugTracePawnInfoList).ArrayNum) {
        uVar24 = ~uVar21 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_348.Bits = 0xffc8c864;
      pFVar22 = (this->DebugTracePawnInfoList).AllocatorInstance.Data + (longlong)(int)uVar21 * 0xa0
      ;
      pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      DrawDebugDirectionalArrow
                (pUVar18,(TVector<double> *)pFVar22,(TVector<double> *)(pFVar22 + 0x18),fVar5,
                 (FColor *)&local_348._s_0,false,fVar2,'\0',0.0);
      fVar5 = *(float *)(pFVar22 + 0x94);
      fVar6 = *(float *)&pFVar22[0x90].field_0x0;
      if (((byte)pFVar22[0x98] & 1) == 0) {
        local_340.Bits._2_2_ = 0xffff;
        fVar27 = fVar32;
        if (fVar32 <= 0.0) {
          fVar27 = 0.0;
        }
        fVar28 = fVar31;
        if (fVar31 <= 0.0) {
          fVar28 = 0.0;
        }
        if (__real_3f800000 <= fVar27) {
          fVar27 = __real_3f800000;
        }
        if (__real_3f800000 <= fVar28) {
          fVar28 = __real_3f800000;
        }
        local_340._s_0.B = (uchar)(int)(fVar27 * fVar4 + fVar3);
        local_340._s_0.G = (uchar)(int)(fVar28 * fVar4 + fVar3);
        pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        pFVar19 = &local_340;
      }
      else {
        local_344.Bits = 0xff4040ff;
        pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
        pFVar19 = &local_344;
      }
      DrawDebugCapsule(pUVar18,(TVector<double> *)(pFVar22 + 0x78),fVar6,fVar5,
                       &UE::Math::TQuat<double>::Identity,(FColor *)&pFVar19->_s_0,false,fVar2,'\0',
                       0.0);
      local_33c.Bits = 0xffff4040;
      pUVar18 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      DrawDebugDirectionalArrow
                (pUVar18,(TVector<double> *)(pFVar22 + 0x30),(TVector<double> *)(pFVar22 + 0x48),
                 fVar1,(FColor *)&local_33c._s_0,false,fVar2,'\0',0.0);
      uVar21 = uVar21 - 1;
      fVar31 = fVar31 + fVar11;
      fVar32 = fVar32 + fVar11;
      if ((int)uVar21 < 0) {
        uVar21 = 9;
      }
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  return;
}

// ToggleAILogging @ 14772fd50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ToggleAILogging(UCheatManager *this)

{
  APlayerController *this_00;
  code *pcVar1;
  bool bVar2;
  ENetMode EVar3;
  UWorld *this_01;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (APlayerController *)this->_padding_;
    if (this_00 != (APlayerController *)0x0) {
      this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
      if ((this_01 != (UWorld *)0x0) &&
         (EVar3 = UWorld::InternalGetNetMode(this_01), EVar3 == NM_Client)) {
        APlayerController::ServerToggleAILogging(this_00);
        return;
      }
      (**(code **)(this->_padding_ + 0x388))(this);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ToggleDebugCamera @ 14772fdf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ToggleDebugCamera(UCheatManager *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x378))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014772fe11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x460))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014772fe1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x458))(this);
  return;
}

// ToggleServerStatReplicatorClientOverwrite @ 14772fe30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ToggleServerStatReplicatorClientOverwrite(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if ((this->_padding_ & 0x10) == 0) {
    if ((AActor *)this->_padding_ != (AActor *)0x0) {
      pUVar3 = AActor::GetLevel((AActor *)this->_padding_);
      pUVar4 = Z_Construct_UClass_AServerStatReplicator_NoRegister();
      local_18._12_4_ = uStack_1c;
      local_18.Size = 0x18;
      local_18.DataPtr = L"ServerStatReplicatorInst";
      pUVar5 = StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      pUVar5[0x11].field_0x19 = pUVar5[0x11].field_0x19 == '\0';
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8936125195328944802>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                     ,0x55e,"PlayerController");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ToggleServerStatReplicatorUpdateStatNet @ 14772ff10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ToggleServerStatReplicatorUpdateStatNet(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  if ((this->_padding_ & 0x10) == 0) {
    if ((AActor *)this->_padding_ != (AActor *)0x0) {
      pUVar3 = AActor::GetLevel((AActor *)this->_padding_);
      pUVar4 = Z_Construct_UClass_AServerStatReplicator_NoRegister();
      local_18._12_4_ = uStack_1c;
      local_18.Size = 0x18;
      local_18.DataPtr = L"ServerStatReplicatorInst";
      pUVar5 = StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      pUVar5[0x11].field_0x18 = pUVar5[0x11].field_0x18 == '\0';
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8936125195328944789>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                     ,0x56b,"PlayerController");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// UnregisterFromOnCheatManagerCreated @ 147731130

void __cdecl UCheatManager::UnregisterFromOnCheatManagerCreated(FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnCheatManagerCreatedDelegate,
               param_1);
    return;
  }
  return;
}

// UpdateSafeArea @ 147732500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::UpdateSafeArea(UCheatManager *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnSafeFrameChangedEvent,(FWriteAccessScope *)&local_28);
  bVar2 = false;
  FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
       FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + 1;
  uVar6 = FCoreDelegates::OnSafeFrameChangedEvent._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)FCoreDelegates::OnSafeFrameChangedEvent._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == 0) ||
          (*(longlong **)(lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == (longlong *)0x0)
          ) || (cVar4 = (**(code **)(**(longlong **)
                                       (lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) +
                                    0x68))(), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
       FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ViewActor @ 147732f10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ViewActor(UCheatManager *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  AActor *pAVar4;
  longlong *plVar5;
  longlong *plVar6;
  UClass *local_res8;
  undefined4 uStack_94;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  TActorIteratorBase<FActorIterator> local_78;
  
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  local_78.Flags = OnlyActiveLevels|SkipPendingKill;
  local_78.State.bIsSet = false;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FActorIteratorState::FActorIteratorState
            (&local_78.State.TypedValue,pUVar3,(TSubclassOf<AActor>)&local_res8);
  local_78.State.bIsSet = true;
  do {
    TActorIteratorBase<FActorIterator>::operator++(&local_78);
    if ((local_78.State.bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_78.State.TypedValue.ReachedEnd != false) goto LAB_147733101;
    if ((local_78.State.bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pAVar4 = FActorIteratorState::GetActorChecked(&local_78.State.TypedValue);
  } while (((pAVar4 == (AActor *)0x0) || (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0)) ||
          ((FName)pAVar4->_padding_ != param_1));
  plVar6 = (longlong *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    plVar5 = (longlong *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    plVar5 = plVar6;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uStack_7c = uStack_8c & 0xfffffffe;
  uStack_94 = CONCAT31(uStack_94._1_3_,1);
  local_88 = 0;
  uStack_84 = uStack_94;
  uStack_80 = 0x40000000;
  (**(code **)(*plVar5 + 0xef8))(0,pAVar4,&local_88);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_ThirdPerson,L"ThirdPerson");
    _Init_thread_footer(&::_TSS0);
  }
  if ((this->_padding_ & 0x10) == 0) {
    plVar6 = (longlong *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*plVar6 + 0xf80))(plVar6,NAME_ThirdPerson);
LAB_147733101:
  if (local_78.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_78.State.TypedValue.CurrentWorld,
               local_78.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_78.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  return;
}

// ViewClass @ 147733190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UCheatManager::ViewClass(UCheatManager *this,TSubclassOf<AActor> param_1)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  UWorld *pUVar6;
  APlayerController *pAVar7;
  APlayerController *pAVar8;
  FName *pFVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  wchar_t *pwVar14;
  APlayerController *pAVar15;
  APlayerController *pAVar16;
  UObject *local_res8;
  FName local_res10;
  undefined4 uStack_114;
  uint uStack_10c;
  TActorIteratorBase<TActorIterator<AActor>_> local_108;
  FText local_a8;
  FText local_98;
  void *local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  FString local_68;
  FText local_58;
  FTextFormat local_48;
  
  pUVar1 = *(UObject **)param_1.Class.field0_0x0;
  pAVar16 = (APlayerController *)0x0;
  bVar5 = false;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_108.Flags = OnlyActiveLevels|SkipPendingKill;
  local_108.State.bIsSet = false;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FActorIteratorState::FActorIteratorState
            (&local_108.State.TypedValue,pUVar6,(TSubclassOf<AActor>)&local_res8);
  local_108.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_108);
  pAVar15 = pAVar16;
  while( true ) {
    if ((local_108.State.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar7 = pAVar15;
    if (local_108.State.TypedValue.ReachedEnd != false) break;
    if ((local_108.State.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar7 = (APlayerController *)FActorIteratorState::GetActorChecked(&local_108.State.TypedValue);
    if (pAVar7 == (APlayerController *)0x0) {
      pFVar10 = GetTypeName<AActor>(&local_68);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar14);
    }
    if (((uint)pAVar7->_padding_ >> 0x1e & 1) == 0) {
      if (((bVar5) || (pAVar15 == (APlayerController *)0x0)) && (pAVar15 = pAVar7, bVar5)) break;
      if ((this->_padding_ & 0x10) == 0) {
        pAVar8 = (APlayerController *)this->_padding_;
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6281605350772703132>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                           ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        pAVar8 = pAVar16;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pAVar8 = (APlayerController *)
               APlayerCameraManager::GetViewTarget
                         ((pAVar8->PlayerCameraManager).field0_0x0.DebugPtr);
      if (pAVar7 == pAVar8) {
        bVar5 = true;
      }
    }
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_108);
  }
  if (local_108.State.bIsSet != false) {
    UWorld::RemoveOnActorSpawnedHandler
              (local_108.State.TypedValue.CurrentWorld,
               local_108.State.TypedValue.ActorSpawnedDelegateHandle);
    if (local_108.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
    }
    if (local_108.State.TypedValue.ActorArray.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.State.TypedValue.ActorArray.AllocatorInstance.Data);
    }
  }
  if (pAVar7 == (APlayerController *)0x0) {
    (**(code **)(this->_padding_ + 0x338))(this);
  }
  else {
    if ((this->_padding_ & 0x10) == 0) {
      pAVar15 = (APlayerController *)this->_padding_;
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      pAVar15 = pAVar16;
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar9 = ::FName::FName(&local_res10,L"Event");
    FVar2 = *pFVar9;
    pFVar10 = (FString *)(**(code **)(pAVar7->_padding_ + 0x6f0))(pAVar7,local_88);
    pFVar11 = FText::FromString(&local_58,pFVar10);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"CheatManager",L"ViewPlayer",L"Viewing from {0}");
    pFVar13 = FTextFormat::FTextFormat(&local_48,pFVar12,Default);
    pFVar11 = FText::Format<FText>(&local_a8,pFVar13,pFVar11);
    pFVar10 = FText::ToString(pFVar11);
    APlayerController::ClientMessage(pAVar15,pFVar10,FVar2,0.0);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    if ((this->_padding_ & 0x10) == 0) {
      pAVar16 = (APlayerController *)this->_padding_;
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uStack_6c = uStack_10c & 0xfffffffe;
    uStack_114 = CONCAT31(uStack_114._1_3_,1);
    local_78 = 0;
    uStack_74 = uStack_114;
    uStack_70 = 0x40000000;
    (**(code **)(pAVar16->_padding_ + 0xef8))(pAVar16,pAVar7,&local_78);
  }
  return;
}

// ViewPlayer @ 147733530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UCheatManager::ViewPlayer(UCheatManager *this,FString *param_1)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  int iVar6;
  UWorld *this_00;
  APlayerController *pAVar7;
  FString *pFVar8;
  FName *pFVar9;
  FText *pFVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  APlayerController *pAVar15;
  APlayerController *pAVar16;
  FName local_res8;
  undefined4 uStack_b4;
  uint uStack_ac;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_a8;
  FString local_98;
  FText local_88;
  FText local_78;
  FString local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  FText local_48;
  FTextFormat local_38;
  
  pAVar16 = (APlayerController *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  UWorld::GetControllerIterator(this_00,&local_a8);
  pAVar7 = pAVar16;
  pAVar15 = pAVar16;
  for (; (iVar6 = local_a8.Index, pTVar4 = local_a8.Container, -1 < local_a8.Index &&
         (local_a8.Index < (local_a8.Container)->ArrayNum)); local_a8.Index = local_a8.Index + 1) {
    if ((local_a8.Index < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar7 = (APlayerController *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar4->AllocatorInstance).Data + (longlong)iVar6 * 8));
    if ((APlayerState *)pAVar7->_padding_ == (APlayerState *)0x0) {
LAB_147733636:
      bVar5 = false;
    }
    else {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pAVar15 = (APlayerController *)&DAT_00000001;
      pFVar8 = APlayerState::GetPlayerName((APlayerState *)pAVar7->_padding_,&local_98);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
      if (iVar6 != 0) goto LAB_147733636;
      bVar5 = true;
    }
    if ((pAVar15 != (APlayerController *)0x0) &&
       (pAVar15 = (APlayerController *)0x0,
       local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar5) break;
  }
  if (pAVar7 != (APlayerController *)0x0) {
    pUVar1 = (UObject *)pAVar7->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 == (UObject *)0x0) {
        return;
      }
    }
    else {
      if (pUVar1 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((this->_padding_ & 0x10) == 0) {
      pAVar15 = (APlayerController *)this->_padding_;
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      pAVar15 = pAVar16;
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar9 = ::FName::FName(&local_res8,L"Event");
    FVar2 = *pFVar9;
    pFVar8 = APlayerState::GetPlayerName((APlayerState *)pAVar7->_padding_,&local_68);
    pFVar10 = FText::FromString(&local_48,pFVar8);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_78,L"CheatManager",L"ViewPlayer",L"Viewing from {0}");
    pFVar12 = FTextFormat::FTextFormat(&local_38,pFVar11,Default);
    pFVar10 = FText::Format<FText>(&local_88,pFVar12,pFVar10);
    pFVar8 = FText::ToString(pFVar10);
    APlayerController::ClientMessage(pAVar15,pFVar8,FVar2,0.0);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((this->_padding_ & 0x10) == 0) {
      pAVar16 = (APlayerController *)this->_padding_;
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6281605350772703132>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                         ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar1 = (UObject *)pAVar7->_padding_;
    pcVar3 = *(code **)(pAVar16->_padding_ + 0xef8);
    uStack_b4 = CONCAT31(uStack_b4._1_3_,1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_58 = 0;
    uStack_54 = uStack_b4;
    uStack_50 = 0x40000000;
    uStack_4c = uStack_ac & 0xfffffffe;
    (*pcVar3)(pAVar16,pUVar1,&local_58);
  }
  return;
}

// ViewSelf @ 147733860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::ViewSelf(UCheatManager *this)

{
  UObject *pUVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  APlayerController *pAVar5;
  FName *pFVar6;
  FText *this_00;
  FString *pFVar7;
  APlayerController *pAVar8;
  APlayerController *this_01;
  FName local_res8;
  undefined4 uStack_74;
  uint uStack_6c;
  undefined4 uStack_64;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  FText local_38 [2];
  
  this_01 = (APlayerController *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    pAVar5 = (APlayerController *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pAVar5 = this_01;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(pAVar5->_padding_ + 0xf88))();
  if ((this->_padding_ & 0x10) == 0) {
    pAVar5 = (APlayerController *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pAVar5 = this_01;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = (UObject *)pAVar5->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_147733a09;
  }
  else {
    if (pUVar1 == (UObject *)0x0) {
LAB_147733a09:
      if ((this->_padding_ & 0x10) == 0) {
        pAVar5 = (APlayerController *)this->_padding_;
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6281605350772703132>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                           ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        pAVar5 = this_01;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uStack_64 = CONCAT31(uStack_64._1_3_,1);
      pcVar3 = *(code **)(pAVar5->_padding_ + 0xef8);
      if ((this->_padding_ & 0x10) == 0) {
        pAVar8 = (APlayerController *)this->_padding_;
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6281605350772703132>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                           ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
        pAVar8 = this_01;
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_48 = 0;
      uStack_44 = uStack_64;
      uStack_40 = 0x40000000;
      uStack_3c = uStack_5c & 0xfffffffe;
      (*pcVar3)(pAVar5,pAVar8,&local_48);
      goto LAB_147733aaa;
    }
    UE::GC::MarkAsReachable(pUVar1);
  }
  if ((this->_padding_ & 0x10) == 0) {
    pAVar5 = (APlayerController *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pAVar5 = this_01;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_74 = CONCAT31(uStack_74._1_3_,1);
  pcVar3 = *(code **)(pAVar5->_padding_ + 0xef8);
  if ((this->_padding_ & 0x10) == 0) {
    pAVar8 = (APlayerController *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pAVar8 = this_01;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = (UObject *)pAVar8->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_58 = 0;
  uStack_54 = uStack_74;
  uStack_50 = 0x40000000;
  uStack_4c = uStack_6c & 0xfffffffe;
  (*pcVar3)(pAVar5,pUVar1,&local_58);
LAB_147733aaa:
  if ((this->_padding_ & 0x10) == 0) {
    this_01 = (APlayerController *)this->_padding_;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = ::FName::FName(&local_res8,L"Event");
  FVar2 = *pFVar6;
  this_00 = FText::AsLocalizable_Advanced_LocText
                      (local_38,L"CheatManager",L"OwnCamera",L"Viewing from own camera");
  pFVar7 = FText::ToString(this_00);
  APlayerController::ClientMessage(this_01,pFVar7,FVar2,0.0);
  if (local_38[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38[0].TextData.Reference + 0x10))();
  }
  return;
}

// Walk @ 147733b80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCheatManager::Walk(UCheatManager *this)

{
  int iVar1;
  UObject *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UClass *pUVar5;
  UFunction *pUVar6;
  longlong lVar7;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    lVar7 = this->_padding_;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar7 = 0;
  }
  this_00 = *(UObject **)(lVar7 + 0x310);
  if (this_00 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(this_00);
    }
    pUVar5 = ACharacter::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar6 = UObject::FindFunctionChecked(this_00,NAME_ACharacter_ClientCheatWalk);
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar6,0);
      cVar4 = (**(code **)(*(longlong *)this_00 + 0x818))(this_00);
      if (cVar4 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147733c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)this_00 + 0x9c0))(this_00);
        return;
      }
    }
  }
  return;
}

// execBugIt @ 1477343e0

void __cdecl UCheatManager::execBugIt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x400))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execBugItGo @ 147734490

void __cdecl UCheatManager::execBugItGo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  local_20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  local_24 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_24,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_24);
  }
  local_28 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0x3f0))
            (param_1,local_20[0],local_24,local_28,local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execBugItStringCreator @ 147734680

void __cdecl UCheatManager::execBugItStringCreator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void **ppvVar3;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88 = (void *)0x0;
  local_80 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  ppvVar3 = &local_88;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  ppvVar2 = &local_98;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  local_48 = local_78;
  uStack_40 = uStack_70;
  local_38 = local_68;
  local_28 = local_60;
  uStack_24 = uStack_5c;
  uStack_20 = uStack_58;
  uStack_1c = uStack_54;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_50;
  (**(code **)(*(longlong *)param_1 + 0x408))(param_1,&local_28,&local_48,ppvVar3,ppvVar2);
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

// execChangeSize @ 147734a10

void __cdecl UCheatManager::execChangeSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,local_res8[0]);
  return;
}

// execCheatScript @ 147734aa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UCheatManager::execCheatScript(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  CheatScript((UCheatManager *)param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execDamageTarget @ 147735d70

void __cdecl UCheatManager::execDamageTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  (**(code **)(*(longlong *)param_1 + 0x300))(param_1,local_res8[0]);
  return;
}

// execDebugCapsuleSweep @ 147735e00

void __cdecl UCheatManager::execDebugCapsuleSweep(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147735e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x390))();
  return;
}

// execDebugCapsuleSweepCapture @ 147735e30

void __cdecl
UCheatManager::execDebugCapsuleSweepCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147735e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3b0))();
  return;
}

// execDebugCapsuleSweepChannel @ 147735e60

void __cdecl
UCheatManager::execDebugCapsuleSweepChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x3a0))(param_1,local_res8[0]);
  return;
}

// execDebugCapsuleSweepClear @ 147735ef0

void __cdecl
UCheatManager::execDebugCapsuleSweepClear(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147735f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3c0))();
  return;
}

// execDebugCapsuleSweepComplex @ 147735f20

void __cdecl
UCheatManager::execDebugCapsuleSweepComplex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x3a8))(param_1,local_res8[0] != 0);
  return;
}

// execDebugCapsuleSweepPawn @ 147735fc0

void __cdecl
UCheatManager::execDebugCapsuleSweepPawn(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147735fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3b8))();
  return;
}

// execDebugCapsuleSweepSize @ 147735ff0

void __cdecl
UCheatManager::execDebugCapsuleSweepSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  (**(code **)(*(longlong *)param_1 + 0x398))(param_1,local_res10[0],local_res8[0]);
  return;
}

// execDestroyAll @ 1477360d0

void __cdecl UCheatManager::execDestroyAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x310);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(param_1,&local_res10);
  return;
}

// execDestroyAllPawnsExceptTarget @ 147736180

void __cdecl
UCheatManager::execDestroyAllPawnsExceptTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x318))();
  return;
}

// execDestroyPawns @ 1477361b0

void __cdecl UCheatManager::execDestroyPawns(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 800);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(param_1,&local_res10);
  return;
}

// execDestroyServerStatReplicator @ 147736260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCheatManager::execDestroyServerStatReplicator(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DestroyServerStatReplicator((UCheatManager *)param_1);
  return;
}

// execDestroyTarget @ 147736280

void __cdecl UCheatManager::execDestroyTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x308))();
  return;
}

// execDisableDebugCamera @ 1477362b0

void __cdecl UCheatManager::execDisableDebugCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477362c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x460))();
  return;
}

// execDumpChatState @ 1477362e0

void __cdecl UCheatManager::execDumpChatState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477362f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3e0))();
  return;
}

// execDumpOnlineSessionState @ 147736310

void __cdecl
UCheatManager::execDumpOnlineSessionState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3d0))();
  return;
}

// execDumpPartyState @ 147736340

void __cdecl UCheatManager::execDumpPartyState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3d8))();
  return;
}

// execDumpVoiceMutingState @ 147736370

void __cdecl UCheatManager::execDumpVoiceMutingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 1000))();
  return;
}

// execEnableDebugCamera @ 1477363a0

void __cdecl UCheatManager::execEnableDebugCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477363b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x458))();
  return;
}

// execFlushLog @ 1477363d0

void __cdecl UCheatManager::execFlushLog(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477363e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x410))();
  return;
}

// execFly @ 147736400

void __cdecl UCheatManager::execFly(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d8))();
  return;
}

// execFreezeFrame @ 147736430

void __cdecl UCheatManager::execFreezeFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8[0]);
  return;
}

// execGetPlayerController @ 147736770

void __cdecl UCheatManager::execGetPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    *(undefined8 *)param_3 = *(undefined8 *)&param_1->field_0x20;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6281605350772703132>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                     ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGhost @ 147736a20

void __cdecl UCheatManager::execGhost(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e8))();
  return;
}

// execGod @ 147736a50

void __cdecl UCheatManager::execGod(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f0))();
  return;
}

// execInvertMouse @ 147736ad0

void __cdecl UCheatManager::execInvertMouse(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x428))();
  return;
}

// execLogLoc @ 147736d60

void __cdecl UCheatManager::execLogLoc(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147736d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x418))();
  return;
}

// execOnPlayerEndPlayed @ 147736dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UCheatManager::execOnPlayerEndPlayed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  AActor *local_res20;
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPlayerEndPlayed((UCheatManager *)param_1,local_res20,(uint)local_res10[0]);
  return;
}

// execOnlyLoadLevel @ 147737280

void __cdecl UCheatManager::execOnlyLoadLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x360))(param_1,local_res8);
  return;
}

// execPlayersOnly @ 147737430

void __cdecl UCheatManager::execPlayersOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147737448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x330))();
  return;
}

// execServerToggleAILogging @ 147738ce0

void __cdecl
UCheatManager::execServerToggleAILogging(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerToggleAILogging_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147738d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1);
  return;
}

// execSetMouseSensitivityToDefault @ 147738d40

void __cdecl
UCheatManager::execSetMouseSensitivityToDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147738d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x420))();
  return;
}

// execSetWorldOrigin @ 147738f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UCheatManager::execSetWorldOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this;
  longlong *plVar5;
  TIntVector3<int>_u_0 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  plVar5 = (longlong *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
  if ((this == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                         ,0x498,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    plVar5 = *(longlong **)&param_1->field_0x20;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(*plVar5 + 0x840))(plVar5,&local_38,local_20);
  pUVar1 = (UObject *)plVar5[0x62];
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UObject *)0x0) goto LAB_14773902a;
  }
  else {
    if (pUVar1 == (UObject *)0x0) goto LAB_14773902a;
    UE::GC::MarkAsReachable(pUVar1);
  }
  pUVar1 = (UObject *)plVar5[0x62];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  lVar2 = *(longlong *)(pUVar1 + 0xb);
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_2c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar2 != 0) {
    local_38 = *(undefined4 *)(lVar2 + 0x210);
    uStack_34 = *(undefined4 *)(lVar2 + 0x214);
    uStack_30 = *(undefined4 *)(lVar2 + 0x218);
    uStack_2c = *(undefined4 *)(lVar2 + 0x21c);
  }
LAB_14773902a:
  local_28 = 0;
  local_48._s_0.X =
       (int)(double)CONCAT44(uStack_34,local_38) + (this->OriginLocation).field0_0x0._s_0.X;
  local_48._s_0.Y =
       (int)(double)CONCAT44(uStack_2c,uStack_30) + (this->OriginLocation).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->OriginLocation).field0_0x0._s_0.Z;
  UWorld::RequestNewWorldOrigin(this,(TIntVector3<int> *)&local_48._s_0);
  return;
}

// execSlomo @ 147739090

void __cdecl UCheatManager::execSlomo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,local_res8[0]);
  return;
}

// execSpawnServerStatReplicator @ 147739120

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UCheatManager::execSpawnServerStatReplicator(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DestroyServerStatReplicator((UCheatManager *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014773914e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  return;
}

// execStreamLevelIn @ 147739690

void __cdecl UCheatManager::execStreamLevelIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x358))(param_1,local_res8);
  return;
}

// execStreamLevelOut @ 147739720

void __cdecl UCheatManager::execStreamLevelOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x368))(param_1,local_res8);
  return;
}

// execSummon @ 1477397b0

void __cdecl UCheatManager::execSummon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x328))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execTeleport @ 147739860

void __cdecl UCheatManager::execTeleport(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147739878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c8))();
  return;
}

// execTestCollisionDistance @ 147739890

void __cdecl
UCheatManager::execTestCollisionDistance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477398a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x3c8))();
  return;
}

// execToggleAILogging @ 1477398c0

void __cdecl UCheatManager::execToggleAILogging(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001477398d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x380))();
  return;
}

// execToggleDebugCamera @ 1477398f0

void __cdecl UCheatManager::execToggleDebugCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147739908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x370))();
  return;
}

// execToggleServerStatReplicatorClientOverwrite @ 147739920

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
UCheatManager::execToggleServerStatReplicatorClientOverwrite
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    if (*(AActor **)&param_1->field_0x20 != (AActor *)0x0) {
      pUVar3 = AActor::GetLevel(*(AActor **)&param_1->field_0x20);
      pUVar4 = Z_Construct_UClass_AServerStatReplicator_NoRegister();
      local_18._12_4_ = uStack_1c;
      local_18.Size = 0x18;
      local_18.DataPtr = L"ServerStatReplicatorInst";
      pUVar5 = StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      pUVar5[0x11].field_0x19 = pUVar5[0x11].field_0x19 == '\0';
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8936125195328944802>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                     ,0x55e,"PlayerController");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// execToggleServerStatReplicatorUpdateStatNet @ 147739a20

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
UCheatManager::execToggleServerStatReplicatorUpdateStatNet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(uint *)&param_1->field_0x8 & 0x10) == 0) {
    if (*(AActor **)&param_1->field_0x20 != (AActor *)0x0) {
      pUVar3 = AActor::GetLevel(*(AActor **)&param_1->field_0x20);
      pUVar4 = Z_Construct_UClass_AServerStatReplicator_NoRegister();
      local_18._12_4_ = uStack_1c;
      local_18.Size = 0x18;
      local_18.DataPtr = L"ServerStatReplicatorInst";
      pUVar5 = StaticFindObject(pUVar4,(UObject *)pUVar3,&local_18,None);
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      pUVar5[0x11].field_0x18 = pUVar5[0x11].field_0x18 == '\0';
      return;
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6281605350772703132>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\CheatManager.h"
                       ,100,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8936125195328944789>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CheatManager.cpp"
                     ,0x56b,"PlayerController");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// execUpdateSafeArea @ 147739bf0

void __cdecl UCheatManager::execUpdateSafeArea(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnSafeFrameChangedEvent,(FWriteAccessScope *)&local_28);
  bVar2 = false;
  FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
       FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + 1;
  uVar6 = FCoreDelegates::OnSafeFrameChangedEvent._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)FCoreDelegates::OnSafeFrameChangedEvent._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == 0) ||
          (*(longlong **)(lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) == (longlong *)0x0)
          ) || (cVar4 = (**(code **)(**(longlong **)
                                       (lVar7 + FCoreDelegates::OnSafeFrameChangedEvent._8_8_) +
                                    0x68))(), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  FCoreDelegates::OnSafeFrameChangedEvent._28_4_ =
       FCoreDelegates::OnSafeFrameChangedEvent._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSafeFrameChangedEvent,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// execViewActor @ 147739d30

void __cdecl UCheatManager::execViewActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x348))(param_1,local_res8);
  return;
}

// execViewClass @ 147739dc0

void __cdecl UCheatManager::execViewClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x350);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(param_1,&local_res10);
  return;
}

// execViewPlayer @ 147739e70

void __cdecl UCheatManager::execViewPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x340))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execViewSelf @ 147739f20

void __cdecl UCheatManager::execViewSelf(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147739f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x338))();
  return;
}

// execWalk @ 147739f50

void __cdecl UCheatManager::execWalk(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147739f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e0))();
  return;
}

// operator() @ 15050fbf0

bool __thiscall `UCheatManager::ProcessConsoleExec'::__l25::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8936125195328946050>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8936125195328946050>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

