// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 5

// GetInputSettings<UPCGAppendMeshesFromPointsSettings> @ 14cedfcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGAppendMeshesFromPointsSettings * __thiscall
FPCGContext::GetInputSettings<UPCGAppendMeshesFromPointsSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGAppendMeshesFromPointsSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGAppendMeshesFromPointsSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGAppendMeshesFromPointsSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGAppendMeshesFromPointsSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAppendMeshesFromPointsSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGAppendMeshesFromPointsSettings *)local_res8.Handle ==
            (UPCGAppendMeshesFromPointsSettings *)0x0) {
          return (UPCGAppendMeshesFromPointsSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGAppendMeshesFromPointsSettings *)local_res8.Handle !=
          (UPCGAppendMeshesFromPointsSettings *)0x0) {
        pUVar3 = UPCGAppendMeshesFromPointsSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGAppendMeshesFromPointsSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGAppendMeshesFromPointsSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGAppendMeshesFromPointsSettings *)0x0) {
      pUVar3 = UPCGAppendMeshesFromPointsSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGAppendMeshesFromPointsSettings *)0x0;
}

// GetInputSettings<UPCGMeshSamplerSettings> @ 14cee0330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGMeshSamplerSettings * __thiscall
FPCGContext::GetInputSettings<UPCGMeshSamplerSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGMeshSamplerSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGMeshSamplerSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGMeshSamplerSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGMeshSamplerSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMeshSamplerSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGMeshSamplerSettings *)local_res8.Handle == (UPCGMeshSamplerSettings *)0x0) {
          return (UPCGMeshSamplerSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGMeshSamplerSettings *)local_res8.Handle != (UPCGMeshSamplerSettings *)0x0) {
        pUVar3 = UPCGMeshSamplerSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGMeshSamplerSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGMeshSamplerSettings *)FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGMeshSamplerSettings *)0x0) {
      pUVar3 = UPCGMeshSamplerSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGMeshSamplerSettings *)0x0;
}

// GetInputSettings<UPCGStaticMeshToDynamicMeshSettings> @ 14cee07d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGStaticMeshToDynamicMeshSettings * __thiscall
FPCGContext::GetInputSettings<UPCGStaticMeshToDynamicMeshSettings>(FPCGContext *this)

{
  TObjectPtr<UPCGSettings> *this_00;
  int iVar1;
  UPCGNode *this_01;
  bool bVar2;
  UClass *pUVar3;
  UPCGSettings *pUVar4;
  UPCGStaticMeshToDynamicMeshSettings *pUVar5;
  FObjectPtr_u_0 *pFVar6;
  FObjectPtr_u_0 local_res8;
  
  this_00 = &this->SettingsWithOverride;
  if ((this_00->field0_0x0).DebugPtr != (UPCGSettings *)0x0) {
    pUVar3 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      return (UPCGStaticMeshToDynamicMeshSettings *)(this_00->field0_0x0).DebugPtr;
    }
    return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
  }
  this_01 = this->Node;
  if ((this_01 == (UPCGNode *)0x0) ||
     (pUVar4 = UPCGNode::GetSettings(this_01), pUVar4 == (UPCGSettings *)0x0)) {
    pFVar6 = (FObjectPtr_u_0 *)
             TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshToDynamicMeshSettings>_::__l2::<lambda_1>_>
                       (&(this->InputData).TaggedData,(<lambda_1>)local_res8._0_1_);
    if (pFVar6 != (FObjectPtr_u_0 *)0x0) {
      local_res8 = (FObjectPtr_u_0)pFVar6->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if ((UPCGStaticMeshToDynamicMeshSettings *)local_res8.Handle ==
            (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
          return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
        }
        UE::GC::MarkAsReachable(local_res8.Handle);
      }
      if ((UPCGStaticMeshToDynamicMeshSettings *)local_res8.Handle !=
          (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
        pUVar3 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar3);
        if (bVar2) {
          return (UPCGStaticMeshToDynamicMeshSettings *)local_res8.Handle;
        }
      }
    }
  }
  else {
    pUVar4 = UPCGNode::GetSettings(this_01);
    pUVar5 = (UPCGStaticMeshToDynamicMeshSettings *)
             FPCGDataCollection::GetSettings(&this->InputData,pUVar4);
    if (pUVar5 != (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
      pUVar3 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
  }
  return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
}

// NewObject_AnyThread<UDynamicMesh> @ 14cee2f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDynamicMesh * __cdecl FPCGContext::NewObject_AnyThread<UDynamicMesh>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UDynamicMesh *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UDynamicMesh>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UDynamicMesh *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UDynamicMesh>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UDynamicMesh *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UDynamicMesh *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UDynamicMesh>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPCGDynamicMeshData> @ 14cee3060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDynamicMeshData * __cdecl
FPCGContext::NewObject_AnyThread<UPCGDynamicMeshData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGDynamicMeshData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPCGDynamicMeshData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPCGDynamicMeshData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGDynamicMeshData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPCGDynamicMeshData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPCGDynamicMeshData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGDynamicMeshData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UPCGDynamicMeshData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGDynamicMeshData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPCGDynamicMeshData>(pUVar4);
  return pUVar3;
}

