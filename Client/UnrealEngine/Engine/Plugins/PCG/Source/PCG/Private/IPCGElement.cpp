// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 34

// ~IPCGElement @ 149725d70

void __thiscall IPCGElement::~IPCGElement(IPCGElement *this)

{
  return;
}

// AbortInternal @ 1497265e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGElement::AbortInternal(IPCGElement *this,FPCGContext *param_1)

{
  return;
}

// CanExecuteOnlyOnMainThread @ 149726700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::CanExecuteOnlyOnMainThread(IPCGElement *this,FPCGContext *param_1)

{
  return false;
}

// ExecutionLoopMode @ 149726cc0

EPCGElementExecutionLoopMode __thiscall
IPCGElement::ExecutionLoopMode(IPCGElement *this,UPCGSettings *param_1)

{
  return NotALoop;
}

// IsCancellable @ 149727a20

bool __thiscall IPCGElement::IsCancellable(IPCGElement *this)

{
  return true;
}

// IsGridLinkage @ 149727a60

bool __thiscall IPCGElement::IsGridLinkage(IPCGElement *this)

{
  return false;
}

// IsPassthrough @ 149727ab0

bool __thiscall IPCGElement::IsPassthrough(IPCGElement *this,UPCGSettings *param_1)

{
  return false;
}

// PostExecuteInternal @ 149727ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGElement::PostExecuteInternal(IPCGElement *this,FPCGContext *param_1)

{
  return;
}

// ShouldComputeFullOutputDataCrc @ 149727ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::ShouldComputeFullOutputDataCrc(IPCGElement *this,FPCGContext *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149728050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::SupportsBasePointDataInputs(IPCGElement *this,FPCGContext *param_1)

{
  return false;
}

// SupportsGPUResidentData @ 149728070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::SupportsGPUResidentData(IPCGElement *this,FPCGContext *param_1)

{
  return false;
}

// operator() @ 149ef0b90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
`IPCGElement::DisabledPassThroughData'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  UPCGData *pUVar1;
  FPCGDataTypeBaseId *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  bool bVar4;
  FPCGDataTypeIdentifier local_58;
  FPCGDataTypeIdentifier local_40;
  FPCGDataTypeIdentifier local_28;
  
  pUVar1 = (param_1->Data).Data.field0_0x0.DebugPtr;
  bVar4 = pUVar1 == (UPCGData *)0x0;
  if (bVar4) {
    local_58._20_4_ = 0;
    pFVar3 = &local_58;
    local_58.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Ids.ArrayNum = 0;
    local_58.Ids.ArrayMax = 0;
    local_58.CustomSubtype = -1;
  }
  else {
    pFVar2 = (FPCGDataTypeBaseId *)(**(code **)(pUVar1->_padding_ + 0x2b8))();
    pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,pFVar2);
  }
  local_40.Ids.AllocatorInstance.Data = (pFVar3->Ids).AllocatorInstance.Data;
  (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Ids.ArrayNum = (pFVar3->Ids).ArrayNum;
  local_40.Ids.ArrayMax = (pFVar3->Ids).ArrayMax;
  (pFVar3->Ids).ArrayNum = 0;
  (pFVar3->Ids).ArrayMax = 0;
  local_40.CustomSubtype = pFVar3->CustomSubtype;
  if (bVar4) {
    if (local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Ids.AllocatorInstance.Data);
    }
  }
  if ((!bVar4) && (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  bVar4 = FPCGDataTypeIdentifier::IsWider(&local_40,this);
  if (bVar4) {
LAB_149ef0cb9:
    bVar4 = false;
  }
  else {
    pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    bVar4 = FPCGDataTypeIdentifier::IsSameType(&local_40,pFVar3);
    if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Ids.AllocatorInstance.Data);
    }
    if (bVar4) {
      pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
      bVar4 = FPCGDataTypeIdentifier::IsSameType(this,pFVar3);
      if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Ids.AllocatorInstance.Data);
      }
      if (!bVar4) goto LAB_149ef0cb9;
    }
    bVar4 = true;
  }
  if (local_40.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Ids.AllocatorInstance.Data);
  }
  return bVar4;
}

// operator() @ 149ef1df0

bool __thiscall
`IPCGElement::PreExecutePrimaryLoopElement'::__l25::<lambda_2>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)**(longlong **)this;
  plVar3 = plVar2 + (longlong)(int)(*(longlong **)this)[1] * 0xf;
  while( true ) {
    if (plVar2 == plVar3) {
      return false;
    }
    if (((((UPCGData *)*plVar2 == (param_1->Data).Data.field0_0x0.DebugPtr) &&
         ((int)plVar2[3] - *(int *)((longlong)plVar2 + 0x44) ==
          *(int *)&(param_1->Tags).Elements.field_0x8 - *(int *)&(param_1->Tags).Elements.field_0x34
         )) && (bVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                                   (plVar2 + 2),&param_1->Tags), bVar1)) &&
       (*(FName *)(plVar2 + 0xc) == param_1->Pin)) break;
    plVar2 = plVar2 + 0xf;
  }
  return true;
}

// Abort @ 149ef2c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGElement::Abort(IPCGElement *this,FPCGContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149ef2c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x68))();
  return;
}

// CleanupAndValidateOutput @ 149ef7380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGElement::CleanupAndValidateOutput(IPCGElement *this,FPCGContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UPCGSettingsInterface *pUVar5;
  UPCGSettings *this_00;
  int iVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_28;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x3e3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->Node == (UPCGNode *)0x0) {
    pUVar5 = FPCGDataCollection::GetSettingsInterface(&param_1->InputData);
  }
  else {
    pUVar5 = FPCGDataCollection::GetSettingsInterface
                       (&param_1->InputData,(param_1->Node->SettingsInterface).field0_0x0.DebugPtr);
  }
  if (((pUVar5 != (UPCGSettingsInterface *)0x0) &&
      (this_00 = (UPCGSettings *)(**(code **)(pUVar5->_padding_ + 0x380))(pUVar5),
      this_00 != (UPCGSettings *)0x0)) &&
     (cVar4 = (**(code **)((longlong)*this + 0x78))(this,this_00), cVar4 == '\0')) {
    UPCGSettings::AllOutputPinProperties(this_00,&local_28);
    iVar6 = local_28.ArrayNum;
    if (iVar6 == 1) {
      pFVar8 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
      iVar1 = (param_1->OutputData).TaggedData.ArrayNum;
      pFVar9 = pFVar8 + (longlong)iVar1 * 0x78;
      uVar7 = local_28._8_8_;
      while( true ) {
        if ((param_1->OutputData).TaggedData.ArrayNum != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
          uVar7 = local_28._8_8_;
        }
        iVar6 = (int)uVar7;
        if (pFVar8 == pFVar9) break;
        if (pFVar8[0x68] == (FScriptContainerElement)0x0) {
          if ((iVar6 < 1) &&
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
          *(undefined8 *)(pFVar8 + 0x60) = *(undefined8 *)local_28.AllocatorInstance.Data;
          uVar7 = local_28._8_8_;
        }
        pFVar8 = pFVar8 + 0x78;
      }
    }
    DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)local_28.AllocatorInstance.Data,iVar6)
    ;
    if ((FPCGPinProperties *)local_28.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// ConvertInputsIfNeeded @ 149ef90e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall IPCGElement::ConvertInputsIfNeeded(IPCGElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  int iVar4;
  FPCGContextHandle *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UPCGNode *this_00;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  UClass *pUVar13;
  TWeakPtr<FPCGContextHandle,1> *pTVar14;
  FTSTicker *this_01;
  UPCGData *pUVar15;
  UPCGSettings *pUVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  FString *pFVar19;
  FObjectPtr_u_0 FVar20;
  undefined ***pppuVar21;
  FObjectPtr_u_0 *pFVar22;
  longlong lVar23;
  IPCGGraphExecutionSource *pIVar24;
  FObjectPtr_u_0 *pFVar25;
  undefined1 auStackY_268 [32];
  undefined1 local_238;
  undefined1 local_237 [3];
  undefined1 local_234 [4];
  FObjectPtr_u_0 local_230;
  FObjectPtr_u_0 local_228;
  FText local_220;
  IPCGElement *local_210;
  FName local_208;
  FString local_200;
  FString local_1f0;
  FText local_1e0;
  TWeakPtr<FTSTicker::FElement,1> local_1d0;
  TWeakPtr<FPCGContextHandle,1> local_1c0;
  FText local_1b0;
  FText local_1a0;
  FString local_190;
  FText local_180;
  FText local_170;
  FTextFormat local_160;
  FString local_150;
  code *local_138 [2];
  undefined **local_128;
  FPCGContextHandle *local_120;
  TReferenceControllerBase<1> *local_118;
  undefined ***local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  FReadbackResult local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((param_1->InputData).TaggedData.ArrayNum != 0) {
    local_210 = this;
    cVar9 = (**(code **)((longlong)*this + 0xa8))();
    if (cVar9 == '\0') {
      iVar3 = (param_1->InputData).TaggedData.ArrayNum;
      bVar12 = false;
      pFVar22 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
      pFVar25 = pFVar22 + (longlong)iVar3 * 0xf;
      while( true ) {
        if ((param_1->InputData).TaggedData.ArrayNum != iVar3) {
          local_238 = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_238);
        }
        if (pFVar22 == pFVar25) break;
        local_230 = (FObjectPtr_u_0)pFVar22->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ef9191:
          if ((UPCGProxyForGPUData *)local_230.Handle == (UPCGProxyForGPUData *)0x0)
          goto LAB_149ef91b1;
          pUVar13 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
          bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_230,pUVar13);
          FVar20 = local_230;
          if (!bVar10) goto LAB_149ef91b1;
        }
        else {
          if ((UPCGProxyForGPUData *)local_230.Handle != (UPCGProxyForGPUData *)0x0) {
            UE::GC::MarkAsReachable(local_230.Handle);
            goto LAB_149ef9191;
          }
LAB_149ef91b1:
          FVar20.Handle = (UObject *)0x0;
        }
        if ((UPCGProxyForGPUData *)FVar20.Handle != (UPCGProxyForGPUData *)0x0) {
          UPCGProxyForGPUData::GetCPUData((UPCGProxyForGPUData *)FVar20.Handle,&local_c8,param_1);
          if (local_c8.bComplete == false) {
            bVar12 = true;
          }
          else {
            if ((local_c8.TaggedData.Data.Data.field0_0x0.DebugPtr ==
                 (TObjectPtr<UPCGData_const_>_u_0)0x0) &&
               (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<7664289111586374105>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                                    ,0x1d9,"Result.TaggedData.Data"), bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)pFVar22,&local_c8.TaggedData.Data);
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
            Append<FDefaultSetAllocator>
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                       (pFVar22 + 2),&local_c8.TaggedData.Tags);
            param_1->bInputDataModified = true;
          }
          local_c8.TaggedData.Tags.HashSize = 0;
          if (local_c8.TaggedData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c8.TaggedData.Tags.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_c8.TaggedData.Tags.Elements);
          FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_c8.TaggedData.Data);
        }
        pFVar22 = pFVar22 + 0xf;
      }
      this = local_210;
      if (bVar12) {
        param_1->bIsPaused = true;
        pTVar14 = FPCGContext::GetOrCreateHandle(param_1,&local_1c0);
        pFVar5 = pTVar14->Object;
        pTVar6 = (pTVar14->WeakReferenceCount).ReferenceController;
        (pTVar14->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar14->Object = (FPCGContextHandle *)0x0;
        this_01 = FTSTicker::GetCoreTicker();
        local_110 = (undefined ***)0x0;
        local_128 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::`23'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                     ::_vftable_;
        local_138[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`ExecuteOnGameThread<`IPCGElement::ConvertInputsIfNeeded'::__l23::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                       ::Call;
        local_120 = pFVar5;
        local_118 = pTVar6;
        FTSTicker::AddTicker
                  (this_01,&local_1d0,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp(492)"
                   ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_138);
        if (local_1d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_1d0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) &&
             (local_1d0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             )) {
            (**(code **)((local_1d0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_1d0.WeakReferenceCount.ReferenceController,1);
          }
        }
        if (local_138[0] != (code *)0x0) {
          pppuVar21 = &local_128;
          if (local_110 != (undefined ***)0x0) {
            pppuVar21 = local_110;
          }
          (*(code *)(*pppuVar21)[2])();
        }
        if (local_1c0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_1c0.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if ((aVar2 == (atomic<int>)0x1) &&
             (local_1c0.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
             )) {
            (**(code **)((local_1c0.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_1c0.WeakReferenceCount.ReferenceController,1);
          }
        }
        return false;
      }
    }
    cVar9 = (**(code **)((longlong)*this + 0xb0))(this,param_1);
    if (cVar9 == '\0') {
      iVar3 = (param_1->InputData).TaggedData.ArrayNum;
      bVar12 = false;
      pFVar22 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
      pFVar25 = pFVar22 + (longlong)iVar3 * 0xf;
      while( true ) {
        if ((param_1->InputData).TaggedData.ArrayNum != iVar3) {
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_237);
        }
        pTVar8 = CVarPCGEnablePointArrayDataToPointDataConversionWarnings.Ref;
        if (pFVar22 == pFVar25) break;
        local_228 = (FObjectPtr_u_0)pFVar22->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ef93c0:
          if (local_228.Handle != (UObject *)0x0) {
            pUVar13 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
            bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_228,pUVar13);
            FVar20 = local_228;
            if ((bVar10) && (local_228.Handle != (UObject *)0x0)) {
              pUVar13 = Z_Construct_UClass_UPCGPointData_NoRegister();
              iVar4 = (int)pUVar13->_padding_;
              if ((*(int *)(*(longlong *)&(FVar20.Handle)->field_0x10 + 0x38) < iVar4) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&(FVar20.Handle)->field_0x10 + 0x30) +
                   (longlong)iVar4 * 8) != &pUVar13->_padding_)) {
                cVar9 = '\0';
              }
              else {
                cVar9 = '\x01';
              }
              if (cVar9 == '\0') {
                local_d7 = 0;
                local_d3 = 0;
                local_d1 = 0;
                local_108 = 0;
                uStack_100 = 0;
                local_f8 = 0;
                uStack_f0 = 0;
                local_e8 = 0;
                uStack_e0 = 0;
                local_d8 = cVar9;
                pUVar15 = (UPCGData *)
                          (**(code **)(*(longlong *)FVar20.Handle + 0x3b0))
                                    (FVar20.Handle,param_1,&local_108);
                FPCGDataPtrWrapper::operator=((FPCGDataPtrWrapper *)pFVar22,pUVar15);
                bVar12 = true;
              }
            }
          }
        }
        else if (local_228.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_228.Handle);
          goto LAB_149ef93c0;
        }
        pFVar22 = pFVar22 + 0xf;
      }
      if (bVar12) {
        bVar12 = IsInParallelGameThread();
        if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
          lVar23 = 0;
        }
        else {
          lVar23 = 1;
        }
        pIVar24 = (IPCGGraphExecutionSource *)0x0;
        if (pTVar8->ShadowedValue[lVar23] != false) {
          this_00 = param_1->Node;
          if ((this_00 == (UPCGNode *)0x0) ||
             (pUVar16 = UPCGNode::GetSettings(this_00), pUVar16 == (UPCGSettings *)0x0)) {
            pUVar16 = FPCGDataCollection::GetSettings<UPCGSettings>(&param_1->InputData);
          }
          else {
            pUVar16 = UPCGNode::GetSettings(this_00);
            pUVar16 = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar16);
          }
          if (pUVar16 == (UPCGSettings *)0x0) {
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_1a0,L"PCGElement",L"UnknownSettings",L"Unknown");
            FText::FText(&local_220,pFVar17);
            if (local_1a0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
            }
          }
          else {
            local_208 = (FName)pUVar16->_padding_;
            ::FName::ToString(&local_208,&local_1f0);
            pFVar17 = FText::FromString(&local_1b0,&local_1f0);
            FText::FText(&local_220,pFVar17);
            if (local_1b0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
            }
            if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
            }
          }
          if (2 < (byte)LogPCG._0_1_) {
            local_1e0.TextData.Reference = local_220.TextData.Reference;
            if (local_220.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_220.TextData.Reference + 8))
                        (local_220.TextData.Reference,local_234);
            }
            local_1e0.Flags = local_220.Flags;
            pFVar17 = FText::AsLocalizable_Advanced_LocText
                                (&local_170,L"PCGElement",L"UnsupportedPointArrayData",
                                 L"ToPointData was called on inputs of node \'{0}\'. Consider implementing support for UPCGBasePointData (IPCGElement::SupportsBasePointDataInputs)."
                                );
            pFVar18 = FTextFormat::FTextFormat(&local_160,pFVar17,Default);
            pFVar17 = FText::Format<FText>(&local_180,pFVar18,&local_1e0);
            FText::ToString(pFVar17);
            FPCGContext::GetTaskName(param_1,&local_190);
            pFVar19 = ::FString::FString(&local_150,L"Non-PCG Component");
            if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
               (bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource),
               bVar12)) {
              pIVar24 = (param_1->ExecutionSource).InterfaceInstance;
            }
            PCGLog::GetExecutionSourceName(&local_200,pIVar24,false,pFVar19);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
            }
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            if (local_180.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
            }
            if (local_170.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
            }
          }
          if (local_220.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
          }
        }
      }
    }
  }
  return true;
}

// CreateContext @ 149efa3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall IPCGElement::CreateContext(IPCGElement *this)

{
  FPCGContext *pFVar1;
  
  pFVar1 = ::operator_new(600);
  if (pFVar1 != (FPCGContext *)0x0) {
    memset(pFVar1,0,600);
    pFVar1 = FPCGContext::FPCGContext(pFVar1);
    return pFVar1;
  }
  return (FPCGContext *)0x0;
}

// DisabledPassThroughData @ 149efba30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall IPCGElement::DisabledPassThroughData(IPCGElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *this_00;
  int *piVar1;
  UPCGNode *pUVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  UPCGPin *this_01;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  int iVar14;
  FPCGTaggedData *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res10 [8];
  FName *local_res18;
  UPCGSettings *local_res20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b8;
  FPCGDataTypeIdentifier local_a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_90;
  FPCGDataCollection *local_80;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  FPCGDataTypeIdentifier local_68;
  FPCGDataTypeIdentifier local_50;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x315,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res20 = FPCGContext::GetInputSettings<UPCGSettings>(param_1);
  if ((local_res20 == (UPCGSettings *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x318,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = param_1->Node;
  if (pUVar2 == (UPCGNode *)0x0) {
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
    return;
  }
  if ((pUVar2->InputPins).ArrayNum == 0) {
    return;
  }
  if ((pUVar2->OutputPins).ArrayNum == 0) {
    return;
  }
  lVar8 = (**(code **)(pUVar2->_padding_ + 0x2b0))();
  this_01 = (UPCGPin *)(**(code **)(param_1->Node->_padding_ + 0x2b8))();
  if (lVar8 == 0) {
    return;
  }
  if (this_01 == (UPCGPin *)0x0) {
    return;
  }
  UPCGPin::GetCurrentTypesID(this_01,&local_68);
  local_res18 = (FName *)(lVar8 + 0x48);
  local_80 = &param_1->InputData;
  pTVar9 = FPCGDataCollection::GetInputsByPin(local_80,&local_78,local_res18);
  this_00 = &param_1->OutputData;
  if (this_00 != (FPCGDataCollection *)pTVar9) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(this_00->TaggedData).AllocatorInstance.Data,
               (param_1->OutputData).TaggedData.ArrayNum);
    pFVar12 = (this_00->TaggedData).AllocatorInstance.Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (this_00->TaggedData).AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->OutputData).TaggedData.ArrayNum = pTVar9->ArrayNum;
    (param_1->OutputData).TaggedData.ArrayMax = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  iVar10 = (param_1->OutputData).TaggedData.ArrayNum;
  pFVar12 = (this_00->TaggedData).AllocatorInstance.Data;
  pFVar16 = pFVar12 + (longlong)iVar10 * 0x78;
  while( true ) {
    if ((param_1->OutputData).TaggedData.ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    FVar13.Data = local_68.Ids.AllocatorInstance.Data;
    if (pFVar12 == pFVar16) break;
    *(FName *)(pFVar12 + 0x60) = (this_01->Properties).Label;
    pFVar12 = pFVar12 + 0x78;
  }
  local_a8.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar10 = local_68.Ids.ArrayNum;
  local_a8.Ids.ArrayNum = iVar10;
  if (iVar10 == 0) {
    local_a8.Ids.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar10,0,(ForAnyElementType *)&local_a8,iVar10,&local_a8.Ids.ArrayMax);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              (local_a8.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar13.Data,iVar10);
  }
  local_a8.CustomSubtype = local_68.CustomSubtype;
  cVar6 = (**(code **)(local_res20->_padding_ + 0x428))();
  if (cVar6 == '\0') {
    FPCGDataCollection::GetInputsByPin(local_80,&local_b8,local_res18);
    iVar10 = local_b8.ArrayNum;
    uVar11 = iVar10 - 1;
    if (-1 < (int)uVar11) {
      lVar8 = (longlong)(int)uVar11 * 0x78;
      do {
        uVar7 = 0;
        if ((int)uVar11 < local_b8.ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar5 = `IPCGElement::DisabledPassThroughData'::__l2::<lambda_1>::operator()
                          (&local_a8,(FPCGTaggedData *)(local_b8.AllocatorInstance.Data + lVar8));
        if (!bVar5) {
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this_00->TaggedData,uVar11,Default);
        }
        iVar10 = local_b8.ArrayNum;
        lVar8 = lVar8 + -0x78;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_b8.AllocatorInstance.Data,iVar10);
    local_90.AllocatorInstance.Data = local_b8.AllocatorInstance.Data;
    goto LAB_149efbe24;
  }
  FPCGDataCollection::GetInputsByPin(&param_1->InputData,&local_90,local_res18);
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_50,&local_a8);
  FVar4.Data = local_90.AllocatorInstance.Data;
  pFVar15 = (FPCGTaggedData *)(local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x78)
  ;
  for (FVar13.Data = local_90.AllocatorInstance.Data; (FPCGTaggedData *)FVar13.Data != pFVar15;
      FVar13.Data = FVar13.Data + 0x78) {
    bVar5 = `IPCGElement::DisabledPassThroughData'::__l2::<lambda_1>::operator()
                      (&local_50,(FPCGTaggedData *)FVar13.Data);
    if (bVar5) {
      lVar8 = ((longlong)FVar13.Data - (longlong)FVar4.Data) +
              SUB168(SEXT816(-0x7777777777777777) *
                     SEXT816((longlong)FVar13.Data - (longlong)FVar4.Data),8);
      iVar14 = (int)(lVar8 >> 6) - (int)(lVar8 >> 0x3f);
      if (local_50.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Ids.AllocatorInstance.Data);
      }
      iVar10 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar14 != -1) goto joined_r0x000149efbd5c;
      goto LAB_149efbcce;
    }
  }
  if (local_50.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Ids.AllocatorInstance.Data);
  }
  iVar10 = (param_1->OutputData).TaggedData.ArrayNum;
LAB_149efbcce:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data,iVar10);
  piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
  (param_1->OutputData).TaggedData.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)&param_1->OutputData,0,piVar1);
  }
LAB_149efbd02:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_90.AllocatorInstance.Data,local_90.ArrayNum);
LAB_149efbe24:
  if ((FPCGTaggedData *)local_90.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_a8.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Ids.AllocatorInstance.Data);
  }
  if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Ids.AllocatorInstance.Data);
  }
  return;
joined_r0x000149efbd5c:
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    if (iVar10 != iVar14) {
      TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAt
                (&this_00->TaggedData,iVar10,Default);
    }
  }
  goto LAB_149efbd02;
}

// Execute @ 149efc750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::Execute(IPCGElement *this,FPCGContext *param_1)

{
  EPCGExecutionPhase EVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((((param_1 == (FPCGContext *)0x0) || ((param_1->AsyncState).NumAvailableTasks == 0)) ||
      (Done < param_1->CurrentPhase)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context && Context->AsyncState.NumAvailableTasks != 0 && Context->CurrentPhase <= EPCGExecutionPhase::Done"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0xd0,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((((param_1->AsyncState).bIsRunningOnMainThread == false) &&
      (cVar6 = (**(code **)((longlong)*this + 0x18))(this), cVar6 != '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context->AsyncState.bIsRunningOnMainThread || !CanExecuteOnlyOnMainThread(Context)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0xd1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  EVar1 = param_1->CurrentPhase;
  while (EVar1 != Done) {
    bVar4 = false;
    if (EVar1 == NotExecuted) {
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId222,"EPCGExecutionPhase::NotExecuted",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                   ,0xde);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
      }
      bVar4 = PreExecute(this,param_1);
      bVar4 = !bVar4;
LAB_149efca0b:
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar4) break;
    }
    else {
      if (EVar1 == PrepareData) {
        bVar9 = -1 < CpuChannel->Enabled;
        if (bVar9) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId235,"EPCGExecutionPhase::PrepareData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                     ,0xeb);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId235);
        }
        bVar7 = ConvertInputsIfNeeded(this,param_1);
        if ((bVar7) && (cVar6 = (**(code **)((longlong)*this + 0x50))(this), cVar6 != '\0')) {
          param_1->CurrentPhase = Execute;
        }
        else {
LAB_149efc945:
          bVar4 = true;
        }
        goto LAB_149efca0b;
      }
      if (EVar1 == Execute) {
        bVar9 = -1 < CpuChannel->Enabled;
        if (bVar9) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId251,"EPCGExecutionPhase::Execute",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                     ,0xfb);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId251);
        }
        pTVar3 = PCGSystemSwitches::CVarPCGDebugDrawGeneratedCells.Ref;
        bVar7 = IsInParallelGameThread();
        if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
          lVar8 = 0;
        }
        else {
          lVar8 = 1;
        }
        if (pTVar3->ShadowedValue[lVar8] != false) {
          PCGHelpers::DebugDrawGenerationVolume(param_1,(FColor *)0x0);
        }
        cVar6 = (**(code **)((longlong)*this + 0x58))(this);
        if (cVar6 == '\0') goto LAB_149efc945;
        param_1->CurrentPhase = PostExecute;
        goto LAB_149efca0b;
      }
      if (EVar1 == PostExecute) {
        if (CpuChannel->Enabled < 0) {
          PostExecute(this,param_1);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId274,"EPCGExecutionPhase::PostExecute",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                     ,0x112);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId274);
          PostExecute(this,param_1);
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                           ,0x11b,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
    }
    bVar4 = FPCGAsyncState::ShouldStop(&param_1->AsyncState);
    if ((bVar4) ||
       (((param_1->AsyncState).bIsRunningOnMainThread == false &&
        (cVar6 = (**(code **)((longlong)*this + 0x18))(this), cVar6 != '\0')))) break;
    EVar1 = param_1->CurrentPhase;
  }
  return param_1->CurrentPhase == Done;
}

// GetDependenciesCrc @ 149eff7a0

void __thiscall
IPCGElement::GetDependenciesCrc
          (IPCGElement *this,FPCGDataCollection *param_1,UPCGSettings *param_2,
          UPCGComponent *param_3,FPCGCrc *param_4)

{
  return;
}

// GetDependenciesCrc @ 149eff7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IPCGElement::GetDependenciesCrc
          (IPCGElement *this,FPCGGetDependenciesCrcParams *param_1,FPCGCrc *param_2)

{
  UPCGSettings *pUVar1;
  FPCGCrc FVar2;
  FScriptContainerElement *pFVar3;
  FPCGDataCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  UClass *pUVar10;
  FString *pFVar11;
  longlong *plVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  FPCGCrc local_res8;
  uint local_res10 [2];
  int local_res18;
  char local_res1c;
  FName local_res20;
  bool bStack_94;
  FName local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res10[0] = 0;
  pUVar1 = param_1->Settings;
  if (pUVar1 != (UPCGSettings *)0x0) {
    local_res20 = (FName)pUVar1->_padding_;
    ::FName::ToString(&local_res20,&local_78);
  }
  ::FString::PrintfImpl(&local_88,L"IPCGElement::GetDependenciesCrc (%s)");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar13.Data = local_88.Data.AllocatorInstance.Data;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar13.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
               ,0x482);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((pUVar1 != (UPCGSettings *)0x0) &&
     (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((param_1->InputData == (FPCGDataCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParams.InputData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x484,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar2 = *param_2;
  pcVar5 = *(code **)((longlong)*this + 0x38);
  if ((param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0) &&
     (lVar9 = (**(code **)((longlong)*param_1->ExecutionSource + 8))(), lVar9 != 0)) {
    pUVar10 = UPCGComponent::StaticClass();
    iVar8 = (int)pUVar10->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar10->_padding_)) goto LAB_149eff903;
  }
  lVar9 = 0;
LAB_149eff903:
  (*pcVar5)(this,param_1->InputData,param_1->Settings,lVar9,param_2);
  if ((param_2->bValid == false) ||
     ((bStack_94 = FVar2.bValid, bStack_94 != false && (FVar2.Value == param_2->Value)))) {
    pFVar4 = param_1->InputData;
    uVar14 = 0xf4243;
    local_res8._5_3_ = SUB83((ulonglong)this >> 0x28,0);
    local_res8.Value = 0xf4243;
    local_res8.bValid = true;
    pFVar15 = (pFVar4->DataCrcs).AllocatorInstance.Data;
    iVar8 = (pFVar4->DataCrcs).ArrayNum;
    pFVar3 = pFVar15 + (longlong)iVar8 * 8;
    while( true ) {
      if ((pFVar4->DataCrcs).ArrayNum != iVar8) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<FPCGCrc_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar15 == pFVar3) break;
      uVar14 = uVar14 ^ uVar14 * 0x40 + -0x61c88647 + (uVar14 >> 2) + *(int *)pFVar15;
      pFVar15 = pFVar15 + 8;
    }
    local_res8.Value = uVar14;
    if (param_1->Settings != (UPCGSettings *)0x0) {
      UPCGSettings::GetSettingsCrc(param_1->Settings);
      if (local_res1c == '\0') {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7664289111586374809>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                           ,0x499,"SettingsCrc.IsValid()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar14 = uVar14 ^ local_res18 + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2);
        local_res8.Value = uVar14;
      }
    }
    if ((param_1->ExecutionSource != (IPCGGraphExecutionSource *)0x0) &&
       ((param_1->Settings == (UPCGSettings *)0x0 ||
        (cVar7 = (**(code **)(param_1->Settings->_padding_ + 0x3c8))(), cVar7 != '\0')))) {
      plVar12 = (longlong *)(**(code **)((longlong)*param_1->ExecutionSource + 0x18))();
      iVar8 = (**(code **)(*plVar12 + 0x10))(plVar12);
      local_res8.Value = uVar14 ^ iVar8 + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2);
    }
    *param_2 = local_res8;
  }
  else {
    bVar6 = param_1->Settings == (UPCGSettings *)0x0;
    if (bVar6) {
      pFVar11 = ::FString::FString(&local_58,L"Unknown");
    }
    else {
      local_90 = (FName)param_1->Settings->_padding_;
      ::FName::ToString(&local_90,&local_68);
      pFVar11 = &local_68;
    }
    pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
    if ((bVar6) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((!bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Initialize @ 149f06a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
IPCGElement::Initialize
          (IPCGElement *this,FPCGDataCollection *param_1,
          TWeakObjectPtr<UPCGComponent,FWeakObjectPtr> param_2,UPCGNode *param_3)

{
  return (FPCGContext *)0x0;
}

// Initialize @ 149f06a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
IPCGElement::Initialize(IPCGElement *this,FPCGInitializeElementParams *param_1)

{
  int iVar1;
  UPCGNode *pUVar2;
  IPCGGraphExecutionSource *pIVar3;
  code *pcVar4;
  bool bVar5;
  FPCGContext *pFVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  FString *pFVar10;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  UObject *local_res18;
  FName local_res20;
  FString local_68;
  FString local_58;
  
  if ((param_1->InputData == (FPCGDataCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InParams.InputData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x447,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FPCGContext *)(*pcVar4)();
    return pFVar6;
  }
  pUVar2 = param_1->Node;
  pcVar4 = *(code **)((longlong)*this + 8);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1->ExecutionSource);
  if (pUVar7 == (UObject *)0x0) {
LAB_149f06ab7:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar8 = UPCGComponent::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_149f06ab7;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pFVar6 = (FPCGContext *)(*pcVar4)(this,param_1->InputData,local_res8,pUVar2);
  if (pFVar6 != (FPCGContext *)0x0) {
    pIVar3 = (param_1->ExecutionSource).InterfaceInstance;
    (pFVar6->ExecutionSource).ObjectInstance.WeakPtr =
         (param_1->ExecutionSource).ObjectInstance.WeakPtr;
    (pFVar6->ExecutionSource).InterfaceInstance = pIVar3;
    if ((param_1->Node == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(param_1->Node), pUVar9 == (UPCGSettings *)0x0)) {
      pFVar10 = ::FString::FString(&local_58,L"Unknown");
      local_68.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      local_res20 = (FName)pUVar9->_padding_;
      ::FName::ToString(&local_res20,&local_68);
    }
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return pFVar6;
    }
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return pFVar6;
  }
  pFVar6 = (FPCGContext *)(**(code **)((longlong)*this + 0xa0))(this);
  pIVar3 = (param_1->ExecutionSource).InterfaceInstance;
  (pFVar6->ExecutionSource).ObjectInstance.WeakPtr =
       (param_1->ExecutionSource).ObjectInstance.WeakPtr;
  (pFVar6->ExecutionSource).InterfaceInstance = pIVar3;
  FPCGDataCollection::operator=(&pFVar6->InputData,param_1->InputData);
  pFVar6->Node = param_1->Node;
  if (((((pFVar6->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
       (bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pFVar6->ExecutionSource), bVar5)) &&
      (pIVar3 = (pFVar6->ExecutionSource).InterfaceInstance,
      pIVar3 != (IPCGGraphExecutionSource *)0x0)) &&
     (local_res18 = (UObject *)(**(code **)((longlong)*pIVar3 + 8))(), local_res18 != (UObject *)0x0
     )) {
    pUVar8 = UPCGComponent::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res18->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_149f06bac;
  }
  local_res18 = (UObject *)0x0;
LAB_149f06bac:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  FWeakObjectPtr::operator=(&(pFVar6->SourceComponent).WeakPtr,(FObjectPtr)&local_res18);
  return pFVar6;
}

// IsCacheable @ 149f07970

bool __thiscall IPCGElement::IsCacheable(IPCGElement *this,UPCGSettings *param_1)

{
  char cVar1;
  
  if (param_1 != (UPCGSettings *)0x0) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x4a8))(param_1);
    if (cVar1 != '\0') {
      return false;
    }
  }
  return true;
}

// IsCacheableInstance @ 149f079a0

bool __thiscall IPCGElement::IsCacheableInstance(IPCGElement *this,UPCGSettingsInterface *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (UPCGSettingsInterface *)0x0) && (param_1->bEnabled != false)) {
    UNRECOVERED_JUMPTABLE = *(code **)((longlong)*this + 0x20);
    uVar2 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000149f079df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(this,uVar2);
    return (bool)uVar1;
  }
  return false;
}

// PostExecute @ 149f0b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall IPCGElement::PostExecute(IPCGElement *this,FPCGContext *param_1)

{
  atomic<int> aVar1;
  int iVar2;
  FPCGGraphExecutor *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  char cVar7;
  atomic<int> aVar8;
  UPCGSettings *pUVar9;
  UPCGSettingsInterface *pUVar10;
  UPCGSettings *this_00;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> FVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  TReferenceControllerBase<1> *pTVar23;
  uint uVar24;
  ulonglong uVar25;
  uint *puVar26;
  FScriptContainerElement *pFVar27;
  bool bVar28;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4 [4];
  uint local_1b0;
  int local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1a0;
  undefined4 local_198;
  uint uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_188;
  undefined1 local_178 [4];
  FName local_174;
  ulonglong local_168;
  undefined8 local_160;
  UPCGNode *local_158;
  FString local_150;
  FString local_140;
  TSet<TTuple<UPCGData_const_*,int>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>,FDefaultSetAllocator>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  IPCGElement *local_108;
  FPCGCrc local_100;
  ulonglong *local_f8;
  uint *local_f0;
  undefined1 local_e8 [32];
  uint *local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  TSet<UPCGData_const_*,DefaultKeyFuncs<UPCGData_const_*,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1ac = 0;
  pUVar9 = FPCGContext::GetInputSettings<UPCGSettings>(param_1);
  if (pUVar9 != (UPCGSettings *)0x0) {
    local_174 = (FName)pUVar9->_padding_;
    ::FName::ToString(&local_174,&local_140);
  }
  ::FString::PrintfImpl(&local_150,L"IPCGElement::PostExecute::PostExecuteInternal (%s)");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_150.Data.ArrayNum != 0) {
    FVar18.Data = local_150.Data.AllocatorInstance.Data;
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar18.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
               ,0x222);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  if ((pUVar9 != (UPCGSettings *)0x0) &&
     (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  (**(code **)((longlong)*this + 0x60))(this,param_1);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId551,"IPCGElement::PostExecute::CleanupAndValidateOutput",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
               ,0x227);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId551);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x3e3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->Node == (UPCGNode *)0x0) {
    pUVar10 = FPCGDataCollection::GetSettingsInterface(&param_1->InputData);
  }
  else {
    pUVar10 = FPCGDataCollection::GetSettingsInterface
                        (&param_1->InputData,(param_1->Node->SettingsInterface).field0_0x0.DebugPtr)
    ;
  }
  if (((pUVar10 != (UPCGSettingsInterface *)0x0) &&
      (this_00 = (UPCGSettings *)(**(code **)(pUVar10->_padding_ + 0x380))(pUVar10),
      this_00 != (UPCGSettings *)0x0)) &&
     (cVar7 = (**(code **)((longlong)*this + 0x78))(this,this_00), cVar7 == '\0')) {
    UPCGSettings::AllOutputPinProperties(this_00,&local_188);
    iVar15 = local_188.ArrayNum;
    if (iVar15 == 1) {
      iVar2 = (param_1->OutputData).TaggedData.ArrayNum;
      pFVar22 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
      pFVar27 = pFVar22 + (longlong)iVar2 * 0x78;
      uVar12 = local_188._8_8_;
      while( true ) {
        if ((param_1->OutputData).TaggedData.ArrayNum != iVar2) {
          local_1b8 = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1b8);
          uVar12 = local_188._8_8_;
        }
        iVar15 = (int)uVar12;
        if (pFVar22 == pFVar27) break;
        if (pFVar22[0x68] == (FScriptContainerElement)0x0) {
          if (iVar15 < 1) {
            local_1c0 = (longlong)iVar15;
            local_1c8 = 0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          *(undefined8 *)(pFVar22 + 0x60) = *(undefined8 *)local_188.AllocatorInstance.Data;
          uVar12 = local_188._8_8_;
        }
        pFVar22 = pFVar22 + 0x78;
      }
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_188.AllocatorInstance.Data,iVar15);
    if ((FPCGPinProperties *)local_188.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar5 = CVarPCGAllowPerDataCaching.Ref;
  bVar28 = IsInParallelGameThread();
  if ((bVar28) || (bVar28 = IsInGameThread(), bVar28)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 1;
  }
  if (pTVar5->ShadowedValue[lVar11] != false) {
    bVar28 = -1 < CpuChannel->Enabled;
    if (bVar28) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId558,
                 "IPCGElement::PostExecute::PostExecutePrimaryLoopElement",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                 ,0x22e);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId558);
    }
    if ((((param_1->OutputData).bCancelExecution == false) &&
        (cVar7 = (**(code **)((longlong)*this + 0x88))(this,pUVar9), cVar7 != '\0')) &&
       ((pUVar9 != (UPCGSettings *)0x0 && ((char)pUVar9->_padding_ != '\0')))) {
      pcVar4 = *(code **)((longlong)*this + 0x20);
      uVar12 = (**(code **)(pUVar9->_padding_ + 0x380))(pUVar9);
      cVar7 = (*pcVar4)(this,uVar12);
      if (cVar7 != '\0') {
        (**(code **)((longlong)*this + 0x98))(this,param_1);
      }
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId567,"IPCGElement::PostExecute::CRC",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
               ,0x237);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId567);
  }
  bVar6 = (bool)(**(code **)((longlong)*this + 0x30))(this,param_1);
  FPCGDataCollection::ComputeCrcs(&param_1->OutputData,bVar6);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId585,"IPCGElement::PostExecute::StoreInCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
               ,0x249);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId585);
  }
  if (((((param_1->OutputData).bCancelExecution == false) &&
       ((param_1->DependenciesCrc).bValid != false)) && (pUVar9 != (UPCGSettings *)0x0)) &&
     ((char)pUVar9->_padding_ != '\0')) {
    pcVar4 = *(code **)((longlong)*this + 0x20);
    uVar12 = (**(code **)(pUVar9->_padding_ + 0x380))(pUVar9);
    cVar7 = (*pcVar4)(this,uVar12);
    if (cVar7 != '\0') {
      local_1b0 = (param_1->OutputData).TaggedData.ArrayNum;
      uVar16 = (ulonglong)(int)local_1b0;
      pFVar22 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
      pFVar27 = pFVar22 + uVar16 * 0x78;
      while( true ) {
        if ((param_1->OutputData).TaggedData.ArrayNum != (int)uVar16) {
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1b7);
        }
        if (pFVar22 == pFVar27) {
          pTVar23 = (param_1->GraphExecutor).WeakReferenceCount.ReferenceController;
          local_100 = param_1->DependenciesCrc;
          local_108 = this;
          if (pTVar23 == (TReferenceControllerBase<1> *)0x0) goto LAB_149f0b5b0;
          aVar8 = pTVar23->SharedReferenceCount;
          if (aVar8 == (atomic<int>)0x0) goto LAB_149f0b5ae;
          goto LAB_149f0b5a0;
        }
        if ((*(longlong **)pFVar22 != (longlong *)0x0) &&
           (cVar7 = (**(code **)(**(longlong **)pFVar22 + 0x2d0))(), cVar7 == '\0')) break;
        uVar16 = (ulonglong)local_1b0;
        pFVar22 = pFVar22 + 0x78;
      }
    }
  }
  goto LAB_149f0b5b8;
  while (aVar8 != (atomic<int>)0x0) {
LAB_149f0b5a0:
    LOCK();
    aVar1 = pTVar23->SharedReferenceCount;
    bVar6 = aVar8 == aVar1;
    if (bVar6) {
      pTVar23->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
      aVar1 = aVar8;
    }
    aVar8 = aVar1;
    UNLOCK();
    if (bVar6) {
      pFVar3 = (param_1->GraphExecutor).Object;
      if (pFVar3 != (FPCGGraphExecutor *)0x0) {
        plVar17 = &(pFVar3->GraphCache)._padding_;
        (**(code **)(*plVar17 + 8))(plVar17,&local_108);
      }
      goto LAB_149f0b5b0;
    }
  }
LAB_149f0b5ae:
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
LAB_149f0b5b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
LAB_149f0b5b8:
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  cVar7 = (**(code **)((longlong)*this + 0x28))(this,pUVar9);
  if (cVar7 == '\0') {
LAB_149f0bbae:
    param_1->CurrentPhase = Done;
    return;
  }
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId614,
               "IPCGElement::PostExecute::ShouldVerifyIfOutputsAreUsedMultipleTimes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
               ,0x266);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId614);
  }
  uVar21 = (param_1->OutputData).TaggedData.ArrayNum;
  uVar16 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8._0_8_ = 0;
  local_e8._8_8_ = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (uVar21 == 0) goto LAB_149f0b8f5;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,uVar21);
  if (uVar21 < 4) {
    uVar21 = 1;
  }
  else {
    uVar19 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar21 <= (int)local_a0)) goto LAB_149f0b8f5;
  local_a0 = uVar21;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar21 != 0) {
    uVar24 = uVar21;
    if (uVar21 < 2) {
      if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
        uVar24 = 0;
        goto LAB_149f0b724;
      }
    }
    else {
LAB_149f0b724:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar24,4);
    }
    if (0 < (int)uVar21) {
      uVar25 = (ulonglong)uVar21;
      uVar19 = uVar16;
      do {
        FVar18.Data = (FScriptContainerElement *)local_b0;
        if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar18.Data = local_a8.Data;
        }
        uVar13 = uVar19 & (longlong)(int)uVar21 - 1U;
        uVar19 = uVar19 + 1;
        *(undefined4 *)((longlong)FVar18.Data + uVar13 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_1a8 = 0;
    uStack_1a4 = 1;
    uStack_194 = 0;
    uStack_190 = 0;
    if (local_c0 != 0) {
      puVar26 = (uint *)(local_e8 + 0x10);
      if (local_c8 != (uint *)0x0) {
        puVar26 = local_c8;
      }
      uVar21 = *puVar26;
      uVar19 = uVar16;
      while (uVar21 == 0) {
        uStack_190 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_190;
        iVar15 = (int)uVar16;
        local_1a8 = iVar15 + 1;
        uVar16 = (ulonglong)local_1a8;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1a8)
        goto LAB_149f0b82f;
        uVar21 = puVar26[(longlong)iVar15 + 1];
      }
      uStack_1a4 = -uVar21 & uVar21;
      uVar16 = (ulonglong)uStack_1a4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uStack_194 = (uStack_190 - 1) + (int)lVar11;
      uVar16 = (ulonglong)uStack_194;
      if ((int)local_c0 < (int)uStack_194) {
LAB_149f0b82f:
        uVar16 = (ulonglong)local_c0;
        uStack_194 = local_c0;
      }
    }
    local_198 = 0xffffffff;
    local_128._padding_ = CONCAT44(uStack_1a4,local_1a8);
    local_128.CurrentBitIndex = uStack_194;
    local_128.UnvisitedBitMask = 0xffffffff;
    local_128._28_4_ = uStack_18c;
    local_128.BaseBitIndex = uStack_190;
    local_130 = (TSet<TTuple<UPCGData_const_*,int>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>,FDefaultSetAllocator>
                 *)local_e8;
    local_128.Array = pTStack_1a0;
    if ((int)uVar16 < (int)local_c0) {
      do {
        iVar15 = (int)uVar16;
        lVar11 = *(longlong *)&local_130->Elements + (longlong)iVar15 * 0x18;
        uVar16 = *(ulonglong *)(*(longlong *)&local_130->Elements + (longlong)iVar15 * 0x18);
        uVar21 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        uVar21 = (uVar21 >> 0x10 ^ uVar21) & local_a0 - 1;
        *(uint *)(lVar11 + 0x14) = uVar21;
        FVar18.Data = (FScriptContainerElement *)local_b0;
        if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar18.Data = local_a8.Data;
        }
        uVar16 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(lVar11 + 0x10) = *(undefined4 *)((longlong)FVar18.Data + uVar16 * 4);
        *(int *)((longlong)FVar18.Data + uVar16 * 4) = iVar15;
        local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
        uVar16 = (ulonglong)(uint)local_128.CurrentBitIndex;
      } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
    }
  }
LAB_149f0b8f5:
  iVar15 = (param_1->OutputData).TaggedData.ArrayNum;
  pFVar22 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  pFVar27 = pFVar22 + (longlong)iVar15 * 0x78;
  while( true ) {
    if ((param_1->OutputData).TaggedData.ArrayNum != iVar15) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1b6);
    }
    if (pFVar22 == pFVar27) break;
    local_168 = *(ulonglong *)pFVar22;
    local_1b0 = 0;
    uVar21 = ((uint)(local_168 >> 0x14) & 0xffff ^ (uint)(local_168 >> 4)) * -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    uVar21 = uVar21 >> 0x10 ^ uVar21;
    if (local_e8._8_4_ != local_b4) {
      FVar18.Data = (FScriptContainerElement *)local_b0;
      if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
        FVar18.Data = local_a8.Data;
      }
      iVar2 = *(int *)((longlong)FVar18.Data + (ulonglong)(local_a0 - 1 & uVar21) * 4);
      while (iVar2 != -1) {
        lVar11 = local_e8._0_8_ + (longlong)iVar2 * 0x18;
        if (*(ulonglong *)(local_e8._0_8_ + (longlong)iVar2 * 0x18) == local_168) {
          if (lVar11 != 0) goto LAB_149f0b9df;
          break;
        }
        iVar2 = *(int *)(lVar11 + 0x10);
      }
    }
    local_f8 = &local_168;
    local_1c8 = 0;
    local_f0 = &local_1b0;
    TSet<TTuple<UPCGData_const_*,int>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<UPCGData_const_*_&&,int_&&>_>
              ((TSet<TTuple<UPCGData_const_*,int>,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>,FDefaultSetAllocator>
                *)local_e8,(uint)&local_1ac,
               (TPairInitializer<UPCGData_const_*_&&,int_&&> *)(ulonglong)uVar21,(bool *)&local_f8);
    lVar11 = local_e8._0_8_ + (longlong)local_1ac * 0x18;
LAB_149f0b9df:
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    pFVar22 = pFVar22 + 0x78;
  }
  iVar15 = (param_1->InputData).TaggedData.ArrayNum;
  pFVar22 = (param_1->InputData).TaggedData.AllocatorInstance.Data;
  pFVar27 = pFVar22 + (longlong)iVar15 * 0x78;
  while( true ) {
    if ((param_1->InputData).TaggedData.ArrayNum != iVar15) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1b5);
    }
    if (pFVar22 == pFVar27) break;
    local_160 = *(undefined8 *)pFVar22;
    TSet<UPCGData_const_*,DefaultKeyFuncs<UPCGData_const_*,0>,FDefaultSetAllocator>::
    Emplace<UPCGData_const_*>(&local_98,(UPCGData **)local_178,(bool *)&local_160);
    pFVar22 = pFVar22 + 0x78;
  }
  iVar15 = (param_1->OutputData).TaggedData.ArrayNum;
  pFVar22 = (param_1->OutputData).TaggedData.AllocatorInstance.Data;
  pFVar27 = pFVar22 + (longlong)iVar15 * 0x78;
LAB_149f0ba46:
  do {
    if ((param_1->OutputData).TaggedData.ArrayNum != iVar15) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b4);
    }
    if (pFVar22 == pFVar27) break;
    piVar14 = TMapBase<UPCGData_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>_>
              ::FindChecked((TMapBase<UPCGData_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGData_const_*,int,0>_>
                             *)local_e8,*(UPCGData **)pFVar22);
    if (((*piVar14 < 2) && (pFVar22[0x68] == (FScriptContainerElement)0x0)) &&
       ((pUVar9 == (UPCGSettings *)0x0 ||
        ((cVar7 = (**(code **)(pUVar9->_padding_ + 0x398))(pUVar9), cVar7 == '\0' ||
         (*(char *)((longlong)&pUVar9->_padding_ + 1) == '\0')))))) {
      if (pFVar22[0x69] != (FScriptContainerElement)0x0) {
        uVar16 = *(ulonglong *)pFVar22;
        uVar21 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar20 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar20 = local_98.Hash.SecondaryData;
          }
          for (iVar2 = *(int *)((longlong)FVar20 +
                               (ulonglong)(local_98.HashSize - 1U & (uVar21 >> 0x10 ^ uVar21)) * 4);
              iVar2 != -1; iVar2 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
            if (*(ulonglong *)(local_98.Elements._0_8_ + (longlong)iVar2 * 0x10) == uVar16)
            goto LAB_149f0bb60;
          }
        }
        local_158 = param_1->Node;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_158 != (UPCGNode *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_158);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar22 + 0x6c),(FObjectPtr)&local_158);
        pFVar22[0x69] = (FScriptContainerElement)0x0;
        pFVar22 = pFVar22 + 0x78;
        goto LAB_149f0ba46;
      }
    }
    else {
      pFVar22[0x69] = (FScriptContainerElement)0x1;
    }
LAB_149f0bb60:
    pFVar22 = pFVar22 + 0x78;
  } while( true );
  local_a0 = 0;
  if ((ForElementType<FSetElementId>)local_a8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_a8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPCGData_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_e8);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UPCGData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UPCGData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  goto LAB_149f0bbae;
}

// PostExecutePrimaryLoopElement @ 149f0bbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IPCGElement::PostExecutePrimaryLoopElement
          (IPCGElement *this,FPCGContext *param_1,UPCGSettings *param_2)

{
  int *piVar1;
  UPCGData *pUVar2;
  FPCGGraphExecutor *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  EPCGElementExecutionLoopMode EVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  atomic<int> aVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  FPCGTaggedData *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FPCGTaggedData *pFVar23;
  uint uVar24;
  TReferenceControllerBase<1> *pTVar25;
  longlong lVar26;
  FPCGTaggedData *pFVar27;
  FScriptContainerElement *pFVar28;
  FPCGDataCollection *pFVar29;
  longlong lVar30;
  ForAnyElementType FVar31;
  FIdentityFunctor local_res10;
  undefined1 local_res20 [8];
  undefined1 local_148;
  bool local_147;
  undefined1 local_146;
  undefined1 local_145 [5];
  ForAnyElementType local_140;
  undefined8 local_138;
  undefined1 local_130 [4];
  uint local_12c;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> local_128;
  undefined4 local_118;
  uint uStack_114;
  longlong local_110;
  FPCGDataCollection local_108;
  FScriptContainerElement *local_d8;
  longlong local_d0;
  FPCGDataCollection local_c8;
  FPCGDataCollection local_98;
  IPCGElement *local_68;
  undefined8 local_60;
  FPCGDataCollection *local_58;
  UPCGSettings *local_50;
  IPCGGraphExecutionSource *local_48;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x299,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2 != (UPCGSettings *)0x0) {
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    local_c8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.TaggedData.ArrayNum = 0;
    local_c8.TaggedData.ArrayMax = 0;
    local_c8.bCancelExecutionOnEmpty = false;
    local_c8.bCancelExecution = false;
    local_c8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.DataCrcs.ArrayNum = 0;
    local_c8.DataCrcs.ArrayMax = 0;
    local_c8.InactiveOutputPinBitmask = 0;
    if ((param_1->OutputData).bCancelExecution == false) {
      EVar7 = (**(code **)((longlong)*this + 0x88))(this,param_2);
      bVar6 = PCGElementHelpers::SplitDataPerPrimaryPin
                        (param_2,&param_1->InputData,EVar7,&local_128,&local_c8);
      if (bVar6) {
        local_147 = (bool)(**(code **)((longlong)*this + 0x30))(this,param_1);
        local_res10 = SUB81(param_1,0);
        uVar15 = (ulonglong)local_128.ArrayNum;
        local_12c = local_128.ArrayNum;
        pFVar29 = (FPCGDataCollection *)(local_128.AllocatorInstance.Data + uVar15 * 0x30);
        FVar31.Data = local_128.AllocatorInstance.Data;
LAB_149f0bd15:
        if (local_128.ArrayNum != (int)uVar15) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FPCGDataCollection,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((FPCGDataCollection *)FVar31.Data != pFVar29) {
          iVar14 = (((FPCGDataCollection *)FVar31.Data)->TaggedData).ArrayNum;
          if (iVar14 != 0) {
            if ((iVar14 < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar20.Data = (FScriptContainerElement *)0x0;
            iVar14 = *(int *)((((FPCGDataCollection *)FVar31.Data)->TaggedData).AllocatorInstance.
                              Data + 0x74);
            if (iVar14 == -1) goto LAB_149f0c0e4;
            local_108.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_108.InactiveOutputPinBitmask = 0;
            local_108.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            pFVar23 = (FPCGTaggedData *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
            local_108.TaggedData.ArrayNum = 0;
            local_108.TaggedData.ArrayMax = 0;
            pFVar18 = pFVar23 + (param_1->OutputData).TaggedData.ArrayNum;
            local_108.bCancelExecutionOnEmpty = false;
            local_108.bCancelExecution = false;
            local_108.DataCrcs.ArrayNum = 0;
            local_108.DataCrcs.ArrayMax = 0;
            local_140.Data = (FScriptContainerElement *)0x0;
            local_138 = 0;
            pFVar27 = (FPCGTaggedData *)FVar20.Data;
            if (pFVar23 != pFVar18) {
              do {
                if (pFVar23->OriginalIndex == iVar14) {
                  iVar10 = (int)pFVar27;
                  if ((FVar20.Data <= pFVar23) &&
                     (pFVar23 < (FPCGTaggedData *)
                                ((longlong)FVar20.Data + (longlong)local_138._4_4_ * 0x78))) {
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar6) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    FVar20.Data = local_140.Data;
                    iVar10 = (int)local_138;
                  }
                  if (iVar10 == local_138._4_4_) {
                    iVar10 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x878,&local_140,(int *)((longlong)&local_138 + 4));
                    FVar20.Data = local_140.Data;
                  }
                  local_138 = CONCAT44(local_138._4_4_,iVar10 + 1);
                  FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)((longlong)FVar20.Data + (longlong)iVar10 * 0x78),
                             pFVar23);
                  pFVar27 = (FPCGTaggedData *)(local_138 & 0xffffffff);
                  FVar20.Data = local_140.Data;
                }
                pFVar23 = pFVar23 + 1;
              } while (pFVar23 != pFVar18);
              FVar20.Data = (FScriptContainerElement *)(local_108.TaggedData._8_8_ & 0xffffffff);
            }
            DestructItems<FPCGTaggedData,int>
                      ((FPCGTaggedData *)local_108.TaggedData.AllocatorInstance.Data,
                       (int)FVar20.Data);
            if ((FPCGTaggedData *)local_108.TaggedData.AllocatorInstance.Data !=
                (FPCGTaggedData *)0x0) {
              FMemory::Free(local_108.TaggedData.AllocatorInstance.Data);
            }
            local_108.TaggedData.AllocatorInstance.Data = local_140.Data;
            local_108.TaggedData._8_8_ = local_138;
            local_138 = 0;
            local_140.Data = (FScriptContainerElement *)0x0;
            DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
            if (local_140.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_140.Data);
            }
            iVar14 = local_108.TaggedData.ArrayNum;
            pFVar23 = (FPCGTaggedData *)
                      (local_108.TaggedData.AllocatorInstance.Data +
                      (longlong)local_108.TaggedData.ArrayNum * 0x78);
            FVar20.Data = local_108.TaggedData.AllocatorInstance.Data;
            while( true ) {
              if (local_108.TaggedData.ArrayNum != iVar14) {
                local_148 = 0;
                `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_148);
              }
              if ((FPCGTaggedData *)FVar20.Data == pFVar23) {
                FPCGDataCollection::FPCGDataCollection(&local_98,(FPCGDataCollection *)FVar31.Data);
                iVar14 = local_c8.TaggedData.ArrayNum;
                if (local_c8.TaggedData.ArrayNum != 0) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x78,8,local_c8.TaggedData.ArrayNum,
                                      (ForAnyElementType *)&local_98,&local_98.TaggedData.ArrayNum,
                                      &local_98.TaggedData.ArrayMax);
                  ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                            (local_98.TaggedData.AllocatorInstance.Data + (longlong)iVar10 * 0x78,
                             (FPCGTaggedData *)local_c8.TaggedData.AllocatorInstance.Data,iVar14);
                }
                AlgoImpl::
                IntroSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PostExecutePrimaryLoopElement_::__l35::<lambda_2>_>_>
                          ((FPCGTaggedData *)local_98.TaggedData.AllocatorInstance.Data,
                           local_98.TaggedData.ArrayNum,local_res10,(<lambda_2> *)local_130);
                bVar6 = local_147;
                FPCGDataCollection::ComputeCrcs(&local_98,local_147);
                local_118 = 0;
                uStack_114 = uStack_114 & 0xffffff00;
                pcVar4 = *(code **)((longlong)*this + 0x40);
                if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0
                    ) || (bVar9 = FWeakObjectPtr::IsValid
                                            ((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar9))
                {
                  local_48 = (IPCGGraphExecutionSource *)0x0;
                }
                else {
                  local_48 = (param_1->ExecutionSource).InterfaceInstance;
                }
                local_58 = &local_98;
                local_50 = param_2;
                (*pcVar4)(this,&local_58,&local_118);
                FPCGDataCollection::ComputeCrcs(&local_108,bVar6);
                local_60 = CONCAT44(uStack_114,local_118);
                pTVar25 = (param_1->GraphExecutor).WeakReferenceCount.ReferenceController;
                local_68 = this;
                if (pTVar25 == (TReferenceControllerBase<1> *)0x0) goto LAB_149f0c060;
                aVar5 = pTVar25->SharedReferenceCount;
                goto joined_r0x000149f0c04e;
              }
              pUVar2 = (((FPCGTaggedData *)FVar20.Data)->Data).Data.field0_0x0.DebugPtr;
              if ((pUVar2 != (UPCGData *)0x0) &&
                 (cVar8 = (**(code **)(pUVar2->_padding_ + 0x2d0))(), cVar8 == '\0')) break;
              FVar20.Data = FVar20.Data + 0x78;
            }
            goto LAB_149f0c0bc;
          }
          goto LAB_149f0c0e4;
        }
      }
    }
    iVar14 = (param_1->CachedInputToOutputInternalResults).ArrayNum;
    if ((iVar14 != 0) && (uVar24 = iVar14 - 1, -1 < (int)uVar24)) {
      local_110 = (longlong)(int)uVar24;
      local_d8 = (FScriptContainerElement *)&param_1->OutputData;
      lVar30 = local_110 * 0x60;
      do {
        uVar12 = 0;
        if ((int)uVar24 < (param_1->CachedInputToOutputInternalResults).ArrayNum) {
          uVar12 = ~uVar24 >> 0x1f;
        }
        local_d0 = lVar30;
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar28 = (param_1->CachedInputToOutputInternalResults).AllocatorInstance.Data + lVar30;
        if (*(int *)(pFVar28 + 8) == 0) {
          iVar14 = -1;
        }
        else {
          if ((*(int *)(pFVar28 + 8) < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar14 = *(int *)(*(longlong *)pFVar28 + 0x74);
        }
        local_12c = *(uint *)(pFVar28 + 8);
        uVar15 = (ulonglong)(int)local_12c;
        pFVar23 = *(FPCGTaggedData **)pFVar28;
        pFVar27 = pFVar23 + uVar15;
        while( true ) {
          if (*(int *)(pFVar28 + 8) != (int)uVar15) {
            local_146 = 0;
            `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_146);
          }
          if (pFVar23 == pFVar27) break;
          if (iVar14 == -1) {
            pFVar18 = (FPCGTaggedData *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
LAB_149f0c353:
            if (((pFVar18 <= pFVar23) &&
                (pFVar23 < pFVar18 + (param_1->InputData).TaggedData.ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = (param_1->InputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&param_1->InputData,piVar1);
              (param_1->InputData).TaggedData.ArrayNum = iVar10;
            }
            (param_1->InputData).TaggedData.ArrayNum = iVar10 + 1;
            FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       ((param_1->InputData).TaggedData.AllocatorInstance.Data +
                       (longlong)iVar10 * 0x78),pFVar23);
            uVar15 = (ulonglong)local_12c;
            pFVar23 = pFVar23 + 1;
          }
          else {
            pFVar21 = (param_1->InputData).TaggedData.AllocatorInstance.Data;
            for (pFVar17 = pFVar21;
                pFVar17 != pFVar21 + (longlong)(param_1->InputData).TaggedData.ArrayNum * 0x78;
                pFVar17 = pFVar17 + 0x78) {
              if (pFVar23->OriginalIndex < *(int *)(pFVar17 + 0x74)) {
                lVar30 = ((longlong)pFVar17 - (longlong)pFVar21) +
                         SUB168(SEXT816(-0x7777777777777777) *
                                SEXT816((longlong)pFVar17 - (longlong)pFVar21),8);
                iVar10 = (int)(lVar30 >> 6) - (int)(lVar30 >> 0x3f);
                goto LAB_149f0c258;
              }
            }
            iVar10 = -1;
LAB_149f0c258:
            pFVar18 = (FPCGTaggedData *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
            pFVar29 = &param_1->InputData;
            if (iVar10 == -1) goto LAB_149f0c353;
            if (((pFVar18 <= pFVar23) &&
                (pFVar23 < pFVar18 + (param_1->InputData).TaggedData.ArrayMax)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar13 = (param_1->InputData).TaggedData.ArrayNum;
            piVar1 = &(param_1->InputData).TaggedData.ArrayMax;
            if (iVar13 == *piVar1) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)pFVar29,piVar1);
            }
            pFVar21 = (pFVar29->TaggedData).AllocatorInstance.Data;
            (param_1->InputData).TaggedData.ArrayNum = iVar13 + 1;
            pFVar21 = pFVar21 + (longlong)iVar10 * 0x78;
            memmove(pFVar21 + 0x78,pFVar21,(longlong)(iVar13 - iVar10) * 0x78);
            FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       ((pFVar29->TaggedData).AllocatorInstance.Data + (longlong)iVar10 * 0x78),
                       pFVar23);
            uVar15 = (ulonglong)local_12c;
            pFVar23 = pFVar23 + 1;
          }
        }
        uVar12 = 0;
        if ((int)uVar24 < (param_1->CachedInputToOutputInternalResults).ArrayNum) {
          uVar12 = ~uVar24 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar30 = local_d0;
        pFVar28 = (param_1->CachedInputToOutputInternalResults).AllocatorInstance.Data +
                  local_d0 + 0x30;
        iVar10 = *(int *)(pFVar28 + 8);
        lVar22 = *(longlong *)pFVar28;
        lVar26 = (longlong)iVar10 * 0x78 + lVar22;
        while( true ) {
          if (*(int *)(pFVar28 + 8) != iVar10) {
            local_145[0] = 0;
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_145);
          }
          pFVar21 = local_d8;
          if (lVar22 == lVar26) break;
          *(int *)(lVar22 + 0x74) = iVar14;
          lVar22 = lVar22 + 0x78;
        }
        if (iVar14 == -1) {
LAB_149f0c581:
          if ((local_d8 == pFVar28) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)(pFVar28 + 8);
          if (iVar10 != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x78,8,iVar10,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 8),
                                (int *)(pFVar21 + 0xc));
            pFVar21 = (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->
                      AllocatorInstance).Data + (longlong)iVar14 * 0x78;
            goto LAB_149f0c5eb;
          }
        }
        else {
          pFVar17 = (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&local_d8->field_0x0)->
                    AllocatorInstance).Data;
          for (pFVar19 = pFVar17;
              pFVar19 != pFVar17 + (longlong)*(int *)&local_d8[8].field_0x0 * 0x78;
              pFVar19 = pFVar19 + 0x78) {
            if (iVar14 < *(int *)(pFVar19 + 0x74)) {
              lVar22 = ((longlong)pFVar19 - (longlong)pFVar17) +
                       SUB168(SEXT816(-0x7777777777777777) *
                              SEXT816((longlong)pFVar19 - (longlong)pFVar17),8);
              iVar14 = (int)(lVar22 >> 6) - (int)(lVar22 >> 0x3f);
              goto LAB_149f0c4c8;
            }
          }
          iVar14 = -1;
LAB_149f0c4c8:
          if (iVar14 == -1) goto LAB_149f0c581;
          if ((local_d8 == pFVar28) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(const void*)this != (const void*)&Items",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x767,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = *(int *)(pFVar28 + 8);
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x78,8,iVar10,(ForAnyElementType *)pFVar21,(int *)(pFVar21 + 8),
                              (int *)(pFVar21 + 0xc));
          pFVar17 = (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->
                    AllocatorInstance).Data + (longlong)iVar14 * 0x78;
          memmove(pFVar17 + (longlong)iVar10 * 0x78,pFVar17,(longlong)(iVar13 - iVar14) * 0x78);
          pFVar21 = (((TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)&pFVar21->field_0x0)->
                    AllocatorInstance).Data + (longlong)iVar14 * 0x78;
LAB_149f0c5eb:
          ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                    (pFVar21,*(FPCGTaggedData **)pFVar28,iVar10);
        }
        lVar30 = lVar30 + -0x60;
        uVar24 = uVar24 - 1;
        local_110 = local_110 + -1;
        local_d0 = lVar30;
      } while (-1 < (int)uVar24);
    }
    if (local_c8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_c8.TaggedData.AllocatorInstance.Data,
               local_c8.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_c8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_c8.TaggedData.AllocatorInstance.Data);
    }
    DestructItems<FPCGDataCollection,int>
              ((FPCGDataCollection *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if ((FPCGDataCollection *)local_128.AllocatorInstance.Data != (FPCGDataCollection *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
  }
  return;
  while( true ) {
    LOCK();
    aVar11 = pTVar25->SharedReferenceCount;
    bVar6 = aVar5 == aVar11;
    if (bVar6) {
      pTVar25->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
      aVar11 = aVar5;
    }
    UNLOCK();
    aVar5 = aVar11;
    if (bVar6) break;
joined_r0x000149f0c04e:
    if (aVar5 == (atomic<int>)0x0) {
      pTVar25 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_149f0c060;
    }
  }
  pFVar3 = (param_1->GraphExecutor).Object;
  if (pFVar3 != (FPCGGraphExecutor *)0x0) {
    plVar16 = &(pFVar3->GraphCache)._padding_;
    (**(code **)(*plVar16 + 8))(plVar16,&local_68,&local_108);
  }
LAB_149f0c060:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  if (local_98.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_98.TaggedData.AllocatorInstance.Data,
             local_98.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_98.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_98.TaggedData.AllocatorInstance.Data);
  }
LAB_149f0c0bc:
  if (local_108.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_108.TaggedData.AllocatorInstance.Data,
             local_108.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_108.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_108.TaggedData.AllocatorInstance.Data);
  }
LAB_149f0c0e4:
  uVar15 = (ulonglong)local_12c;
  FVar31.Data = FVar31.Data + 0x30;
  goto LAB_149f0bd15;
}

// PreExecute @ 149f0d290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::PreExecute(IPCGElement *this,FPCGContext *param_1)

{
  FWeakObjectPtr FVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  UPCGSettingsInterface *pUVar7;
  UPCGSettings *pUVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x12d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_1->InputData).bCancelExecution == false) {
    FVar1 = (param_1->ExecutionSource).ObjectInstance.WeakPtr;
    if (((FVar1.ObjectIndex == 0) && (FVar1.ObjectSerialNumber == 0)) ||
       (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0 &&
        (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar4))))
    goto LAB_149f0d324;
  }
  (param_1->OutputData).bCancelExecution = true;
  cVar6 = (**(code **)((longlong)*this + 0x70))(this);
  if (cVar6 != '\0') {
    param_1->CurrentPhase = Done;
    return true;
  }
LAB_149f0d324:
  param_1->CurrentPhase = PrepareData;
  if (param_1->Node == (UPCGNode *)0x0) {
    pUVar7 = FPCGDataCollection::GetSettingsInterface(&param_1->InputData);
  }
  else {
    pUVar7 = FPCGDataCollection::GetSettingsInterface
                       (&param_1->InputData,(param_1->Node->SettingsInterface).field0_0x0.DebugPtr);
  }
  if (pUVar7 != (UPCGSettingsInterface *)0x0) {
    if ((pUVar7->bEnabled == false) ||
       ((pUVar8 = FPCGContext::GetOriginalSettings<UPCGSettings>(param_1),
        pUVar8 != (UPCGSettings *)0x0 &&
        (cVar6 = (**(code **)(pUVar8->_padding_ + 0x4a8))(pUVar8), cVar6 != '\0')))) {
      (**(code **)((longlong)*this + 0x80))(this,param_1);
      param_1->CurrentPhase = PostExecute;
      return true;
    }
    bVar4 = ReadbackGPUDataForOverrides(this,param_1);
    if (!bVar4) {
      param_1->CurrentPhase = NotExecuted;
      return false;
    }
    FPCGContext::OverrideSettings(param_1);
    pUVar8 = FPCGContext::GetInputSettings<UPCGSettings>(param_1);
    pTVar3 = CVarPCGAllowPerDataCaching.Ref;
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar9 = 0;
    }
    else {
      lVar9 = 1;
    }
    if ((((pTVar3->ShadowedValue[lVar9] != false) &&
         (cVar6 = (**(code **)((longlong)*this + 0x88))(this,pUVar8), cVar6 != '\0')) &&
        (pUVar8 != (UPCGSettings *)0x0)) && ((char)pUVar8->_padding_ != '\0')) {
      pcVar2 = *(code **)((longlong)*this + 0x20);
      uVar10 = (**(code **)(pUVar8->_padding_ + 0x380))(pUVar8);
      cVar6 = (*pcVar2)(this,uVar10);
      if (cVar6 != '\0') {
        (**(code **)((longlong)*this + 0x90))(this,param_1,pUVar8);
      }
    }
  }
  return true;
}

// PreExecutePrimaryLoopElement @ 149f0d480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
IPCGElement::PreExecutePrimaryLoopElement
          (IPCGElement *this,FPCGContext *param_1,UPCGSettings *param_2)

{
  FPCGDataCollection *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  FPCGTaggedData *pFVar4;
  void *pvVar5;
  TReferenceControllerBase<1> *pTVar6;
  FPCGGraphExecutor *pFVar7;
  ForAnyElementType FVar8;
  code *pcVar9;
  atomic<int> aVar10;
  int iVar11;
  bool bVar12;
  EPCGElementExecutionLoopMode EVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  atomic<int> aVar18;
  int iVar19;
  IPCGGraphExecutionSource *pIVar20;
  longlong *plVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  TReferenceControllerBase<1> *pTVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  FIdentityFunctor local_res10;
  undefined1 local_158 [4];
  uint local_154;
  int local_150;
  TArray<FPCGDataCollection,TSizedDefaultAllocator<32>_> local_148;
  FPCGDataCollection local_138;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined2 local_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  FScriptContainerElement *local_d8;
  FPCGDataCollection *local_d0;
  longlong local_c8;
  longlong local_c0;
  FPCGDataCollection local_b8;
  UPCGNode *local_88;
  IPCGElement *local_80;
  undefined8 local_78;
  IPCGGraphExecutionSource *local_70;
  undefined8 local_68;
  FPCGDataCollection *local_60;
  UPCGSettings *local_58;
  IPCGGraphExecutionSource *local_50;
  
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                          ,0x174,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (param_2 != (UPCGSettings *)0x0) {
    uVar23 = 0;
    pFVar1 = &param_1->InputData;
    uVar27 = uVar23;
    local_d0 = pFVar1;
    if (0 < (param_1->InputData).TaggedData.ArrayNum) {
      do {
        uVar22 = (uint)uVar23;
        uVar31 = 0;
        if ((int)uVar22 < (param_1->InputData).TaggedData.ArrayNum) {
          uVar31 = ~uVar22 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(uint *)((pFVar1->TaggedData).AllocatorInstance.Data + uVar27 + 0x74) = uVar22;
        uVar23 = (ulonglong)(uVar22 + 1);
        uVar27 = uVar27 + 0x78;
      } while ((int)(uVar22 + 1) < (param_1->InputData).TaggedData.ArrayNum);
    }
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_b8.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.TaggedData.ArrayNum = 0;
    local_b8.TaggedData.ArrayMax = 0;
    local_b8.bCancelExecutionOnEmpty = false;
    local_b8.bCancelExecution = false;
    local_b8.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.DataCrcs.ArrayNum = 0;
    local_b8.DataCrcs.ArrayMax = 0;
    local_b8.InactiveOutputPinBitmask = 0;
    EVar13 = (**(code **)((longlong)*this + 0x88))(this,param_2);
    bVar12 = PCGElementHelpers::SplitDataPerPrimaryPin(param_2,pFVar1,EVar13,&local_148,&local_b8);
    if ((bVar12) && (1 < local_148.ArrayNum)) {
      bVar12 = (bool)(**(code **)((longlong)*this + 0x30))(this,param_1);
      uVar31 = local_148.ArrayNum - 1;
      local_154 = uVar31;
      if (-1 < (int)uVar31) {
        local_res10 = SUB81(param_1,0);
        local_c8 = (longlong)(int)uVar31;
        lVar28 = local_c8 * 0x30;
        do {
          uVar22 = 0;
          if ((int)uVar31 < local_148.ArrayNum) {
            uVar22 = ~uVar31 >> 0x1f;
          }
          local_154 = uVar31;
          local_c0 = lVar28;
          if ((uVar22 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar32 = local_148.AllocatorInstance.Data + lVar28;
          local_138.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar19 = *(int *)(pFVar32 + 8);
          pFVar4 = *(FPCGTaggedData **)pFVar32;
          local_138.TaggedData.ArrayNum = iVar19;
          if (iVar19 == 0) {
            local_138.TaggedData.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,iVar19,0,(ForAnyElementType *)&local_138,iVar19,
                       &local_138.TaggedData.ArrayMax);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      (local_138.TaggedData.AllocatorInstance.Data,pFVar4,iVar19);
          }
          local_138.bCancelExecutionOnEmpty = *(bool *)(pFVar32 + 0x10);
          local_138.bCancelExecution = *(bool *)(pFVar32 + 0x11);
          local_138.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.DataCrcs.ArrayNum = *(int *)(pFVar32 + 0x20);
          lVar28 = (longlong)local_138.DataCrcs.ArrayNum;
          pvVar5 = *(void **)(pFVar32 + 0x18);
          if (local_138.DataCrcs.ArrayNum == 0) {
            local_138.DataCrcs.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_138.DataCrcs.ArrayNum,0,&local_138.DataCrcs.AllocatorInstance,
                       local_138.DataCrcs.ArrayNum,&local_138.DataCrcs.ArrayMax);
            memcpy(local_138.DataCrcs.AllocatorInstance.Data,pvVar5,lVar28 << 3);
          }
          local_138.InactiveOutputPinBitmask = *(ulong64 *)(pFVar32 + 0x28);
          iVar19 = local_b8.TaggedData.ArrayNum;
          if (local_b8.TaggedData.ArrayNum != 0) {
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x78,8,local_b8.TaggedData.ArrayNum,(ForAnyElementType *)&local_138,
                                &local_138.TaggedData.ArrayNum,&local_138.TaggedData.ArrayMax);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      (local_138.TaggedData.AllocatorInstance.Data + (longlong)iVar17 * 0x78,
                       (FPCGTaggedData *)local_b8.TaggedData.AllocatorInstance.Data,iVar19);
          }
          AlgoImpl::
          IntroSortInternal<FPCGTaggedData,int,FIdentityFunctor,TDereferenceWrapper<FPCGTaggedData,_IPCGElement::PreExecutePrimaryLoopElement_::__l22::<lambda_1>_>_>
                    ((FPCGTaggedData *)local_138.TaggedData.AllocatorInstance.Data,
                     local_138.TaggedData.ArrayNum,local_res10,(<lambda_1> *)local_158);
          FPCGDataCollection::ComputeCrcs(&local_138,bVar12);
          local_88 = param_1->Node;
          pIVar20 = (IPCGGraphExecutionSource *)0x0;
          local_78 = 0;
          local_80 = this;
          if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
             (bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar14)
             ) {
            pIVar20 = (param_1->ExecutionSource).InterfaceInstance;
          }
          local_68 = 0;
          pcVar9 = *(code **)((longlong)*this + 0x40);
          local_70 = pIVar20;
          if (((param_1->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
             (bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), !bVar14
             )) {
            local_50 = (IPCGGraphExecutionSource *)0x0;
          }
          else {
            local_50 = (param_1->ExecutionSource).InterfaceInstance;
          }
          local_60 = &local_138;
          local_58 = param_2;
          (*pcVar9)(this,&local_60,&local_68);
          pTVar6 = (param_1->GraphExecutor).WeakReferenceCount.ReferenceController;
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = 0;
          local_f8 = 0;
          local_f0 = (void *)0x0;
          local_e8 = 0;
          local_e0 = 0;
          pTVar25 = pTVar6;
          if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_149f0d897:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar25);
          }
          else {
            aVar10 = pTVar6->SharedReferenceCount;
            do {
              pTVar25 = (TReferenceControllerBase<1> *)0x0;
              if (aVar10 == (atomic<int>)0x0) goto LAB_149f0d897;
              LOCK();
              aVar18 = pTVar6->SharedReferenceCount;
              bVar14 = aVar10 == aVar18;
              if (bVar14) {
                pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
                aVar18 = aVar10;
              }
              UNLOCK();
              aVar10 = aVar18;
            } while (!bVar14);
            pFVar7 = (param_1->GraphExecutor).Object;
            pTVar25 = pTVar6;
            if (pFVar7 == (FPCGGraphExecutor *)0x0) goto LAB_149f0d897;
            plVar21 = &(pFVar7->GraphCache)._padding_;
            cVar15 = (**(code **)*plVar21)(plVar21,&local_88,&local_108);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            if (cVar15 != '\0') {
              iVar19 = (param_1->CachedInputToOutputInternalResults).ArrayNum;
              piVar3 = &(param_1->CachedInputToOutputInternalResults).ArrayMax;
              if (iVar19 == *piVar3) {
                iVar19 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x860,&(param_1->CachedInputToOutputInternalResults).
                                           AllocatorInstance,piVar3);
              }
              pFVar29 = (param_1->CachedInputToOutputInternalResults).AllocatorInstance.Data;
              (param_1->CachedInputToOutputInternalResults).ArrayNum = iVar19 + 1;
              pFVar29 = pFVar29 + (longlong)iVar19 * 0x60;
              pFVar30 = pFVar29 + 0xc;
              pFVar2 = pFVar29 + 0x18;
              *(undefined4 *)(pFVar29 + 0x12) = 0;
              *(undefined2 *)(pFVar29 + 0x16) = 0;
              *(undefined8 *)pFVar29 = 0;
              *(undefined4 *)(pFVar29 + 8) = 0;
              *(int *)pFVar30 = 0;
              *(undefined2 *)(pFVar29 + 0x10) = 0;
              *(FScriptContainerElement **)pFVar2 = (FScriptContainerElement *)0x0;
              *(undefined8 *)(pFVar29 + 0x20) = 0;
              *(undefined8 *)(pFVar29 + 0x28) = 0;
              *(undefined4 *)(pFVar29 + 0x42) = 0;
              *(undefined2 *)(pFVar29 + 0x46) = 0;
              *(undefined8 *)(pFVar29 + 0x30) = 0;
              *(undefined8 *)(pFVar29 + 0x38) = 0;
              *(undefined2 *)(pFVar29 + 0x40) = 0;
              *(undefined8 *)(pFVar29 + 0x48) = 0;
              *(undefined8 *)(pFVar29 + 0x50) = 0;
              *(undefined8 *)(pFVar29 + 0x58) = 0;
              if (pFVar29 != pFVar32) {
                DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)0x0,0);
                iVar19 = *(int *)(pFVar32 + 8);
                pFVar4 = *(FPCGTaggedData **)pFVar32;
                *(int *)(pFVar29 + 8) = iVar19;
                if ((iVar19 == 0) && (*(int *)pFVar30 == 0)) {
                  *(int *)pFVar30 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x78,8,iVar19,*(int *)pFVar30,(ForAnyElementType *)pFVar29,iVar19,
                             (int *)pFVar30);
                  ConstructItems<FPCGTaggedData,FPCGTaggedData,int>(*(void **)pFVar29,pFVar4,iVar19)
                  ;
                }
              }
              iVar19 = 0;
              pFVar29[0x10] = pFVar32[0x10];
              pFVar29[0x11] = pFVar32[0x11];
              if (pFVar2 != pFVar32 + 0x18) {
                iVar17 = *(int *)(pFVar32 + 0x20);
                pFVar30 = pFVar29 + 0x24;
                    /* WARNING: Load size is inaccurate */
                FVar8.Data = pFVar32[0x18];
                *(int *)(pFVar29 + 0x20) = iVar17;
                if ((iVar17 == 0) && (*(int *)pFVar30 == 0)) {
                  *(int *)pFVar30 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,iVar17,*(int *)pFVar30,(ForAnyElementType *)pFVar2,iVar17,
                             (int *)pFVar30);
                  if (iVar17 != 0) {
                    /* WARNING: Load size is inaccurate */
                    memcpy(*pFVar2,FVar8.Data,(longlong)iVar17 << 3);
                  }
                }
              }
              *(undefined8 *)(pFVar29 + 0x28) = *(undefined8 *)(pFVar32 + 0x28);
              pFVar30 = pFVar29 + 0x30;
              if (pFVar30 != (FScriptContainerElement *)&local_108) {
                DestructItems<FPCGTaggedData,int>
                          (*(FPCGTaggedData **)pFVar30,*(int *)(pFVar29 + 0x38));
                FVar8.Data = local_108.Data;
                iVar17 = (int)local_100;
                pFVar2 = pFVar29 + 0x3c;
                *(int *)(pFVar29 + 0x38) = (int)local_100;
                if (((int)local_100 == 0) && (*(int *)pFVar2 == 0)) {
                  *(int *)pFVar2 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x78,8,(int)local_100,*(int *)pFVar2,(ForAnyElementType *)pFVar30,
                             (int)local_100,(int *)pFVar2);
                  ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                            (*(void **)pFVar30,(FPCGTaggedData *)FVar8.Data,iVar17);
                }
              }
              pvVar5 = local_f0;
              pFVar30 = pFVar29 + 0x48;
              pFVar29[0x40] = local_f8._0_1_;
              pFVar29[0x41] = local_f8._1_1_;
              if (pFVar30 != (FScriptContainerElement *)&local_f0) {
                iVar17 = (int)local_e8;
                lVar28 = (longlong)(int)local_e8;
                pFVar2 = pFVar29 + 0x54;
                *(int *)(pFVar29 + 0x50) = (int)local_e8;
                if (((int)local_e8 == 0) && (*(int *)pFVar2 == 0)) {
                  *(int *)pFVar2 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,(int)local_e8,*(int *)pFVar2,(ForAnyElementType *)pFVar30,
                             (int)local_e8,(int *)pFVar2);
                  if (iVar17 != 0) {
                    /* WARNING: Load size is inaccurate */
                    memcpy(*pFVar30,pvVar5,lVar28 << 3);
                  }
                }
              }
              *(undefined8 *)(pFVar29 + 0x58) = local_e0;
              iVar17 = (local_d0->TaggedData).ArrayNum;
              uVar31 = local_154;
              local_d8 = pFVar32;
              if (iVar17 != 0) {
                pFVar4 = (FPCGTaggedData *)(local_d0->TaggedData).AllocatorInstance.Data;
                bVar14 = `IPCGElement::PreExecutePrimaryLoopElement'::__l25::<lambda_2>::operator()
                                   (&local_d8,pFVar4);
                bVar14 = !bVar14;
                iVar26 = iVar19;
                do {
                  iVar11 = iVar26;
                  do {
                    iVar11 = iVar11 + 1;
                    if (iVar17 <= iVar11) break;
                    bVar16 = `IPCGElement::PreExecutePrimaryLoopElement'::__l25::<lambda_2>::
                             operator()(&local_d8,pFVar4 + iVar11);
                  } while (bVar14 == !bVar16);
                  iVar24 = iVar11 - iVar26;
                  if (bVar14 == false) {
                    DestructItems<FPCGTaggedData,int>(pFVar4 + iVar26,iVar24);
                  }
                  else {
                    if (iVar19 != iVar26) {
                      memmove(pFVar4 + iVar19,pFVar4 + iVar26,(longlong)iVar24 * 0x78);
                    }
                    iVar19 = iVar19 + iVar24;
                  }
                  bVar14 = (bool)(bVar14 ^ 1);
                  iVar26 = iVar11;
                } while (iVar11 < iVar17);
                (local_d0->TaggedData).ArrayNum = iVar19;
                uVar31 = local_154;
                local_150 = iVar19;
              }
            }
          }
          if (local_f0 != (void *)0x0) {
            FMemory::Free(local_f0);
          }
          DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_108.Data,(int)local_100);
          if ((FPCGTaggedData *)local_108.Data != (FPCGTaggedData *)0x0) {
            FMemory::Free(local_108.Data);
          }
          if (local_138.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.DataCrcs.AllocatorInstance.Data);
          }
          DestructItems<FPCGTaggedData,int>
                    ((FPCGTaggedData *)local_138.TaggedData.AllocatorInstance.Data,
                     local_138.TaggedData.ArrayNum);
          if ((FPCGTaggedData *)local_138.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0
             ) {
            FMemory::Free(local_138.TaggedData.AllocatorInstance.Data);
          }
          uVar31 = uVar31 - 1;
          local_c8 = local_c8 + -1;
          lVar28 = local_c0 + -0x30;
          local_154 = uVar31;
          local_c0 = lVar28;
          if ((int)uVar31 < 0) break;
        } while( true );
      }
    }
    if (local_b8.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.DataCrcs.AllocatorInstance.Data);
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_b8.TaggedData.AllocatorInstance.Data,
               local_b8.TaggedData.ArrayNum);
    if ((FPCGTaggedData *)local_b8.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_b8.TaggedData.AllocatorInstance.Data);
    }
    DestructItems<FPCGDataCollection,int>
              ((FPCGDataCollection *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
    if ((FPCGDataCollection *)local_148.AllocatorInstance.Data != (FPCGDataCollection *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  return;
}

// PrepareData @ 149f0dd00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::PrepareData(IPCGElement *this,FPCGContext *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = ConvertInputsIfNeeded(this,param_1);
  if (!bVar1) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x000149f0dd37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((longlong)*this + 0x50))(this,param_1);
  return (bool)uVar2;
}

// PrepareDataInternal @ 149f0dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::PrepareDataInternal(IPCGElement *this,FPCGContext *param_1)

{
  return true;
}

// ReadbackGPUDataForOverrides @ 149f0e170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall IPCGElement::ReadbackGPUDataForOverrides(IPCGElement *this,FPCGContext *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  UPCGNode *this_00;
  FPCGContextHandle *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  UPCGSettings *pUVar10;
  longlong *plVar11;
  UClass *pUVar12;
  TWeakPtr<FPCGContextHandle,1> *pTVar13;
  FTSTicker *this_01;
  longlong *plVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  FObjectPtr_u_0 *this_02;
  FObjectPtr_u_0 *pFVar17;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  FObjectPtr_u_0 local_110;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  TWeakPtr<FPCGContextHandle,1> local_f8;
  code *local_e8 [2];
  undefined **local_d8;
  FPCGContextHandle *local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined ***local_c0;
  FReadbackResult local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                         ,0x4d0,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_1->InputData).TaggedData.ArrayNum != 0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar10 = UPCGNode::GetSettings(this_00), pUVar10 == (UPCGSettings *)0x0)) {
      pUVar10 = FPCGDataCollection::GetSettings<UPCGSettings>(&param_1->InputData);
    }
    else {
      pUVar10 = UPCGNode::GetSettings(this_00);
      pUVar10 = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar10);
    }
    if ((pUVar10 != (UPCGSettings *)0x0) &&
       (plVar11 = (longlong *)(**(code **)(pUVar10->_padding_ + 0x480))(pUVar10),
       (int)plVar11[1] != 0)) {
      this_02 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
      iVar3 = (param_1->InputData).TaggedData.ArrayNum;
      bVar7 = false;
      pFVar17 = this_02 + (longlong)iVar3 * 0xf;
      while( true ) {
        if ((param_1->InputData).TaggedData.ArrayNum != iVar3) {
          local_118[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_118);
        }
        if (this_02 == pFVar17) break;
        local_110 = (FObjectPtr_u_0)this_02->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f0e2a5:
          if ((UPCGProxyForGPUData *)local_110.Handle == (UPCGProxyForGPUData *)0x0)
          goto LAB_149f0e3a3;
          pUVar12 = Z_Construct_UClass_UPCGProxyForGPUData_NoRegister();
          bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_110,pUVar12);
          if ((!bVar9) || ((UPCGProxyForGPUData *)local_110.Handle == (UPCGProxyForGPUData *)0x0))
          goto LAB_149f0e3a3;
          plVar14 = (longlong *)*plVar11;
          plVar16 = plVar14 + (longlong)(int)plVar11[1] * 0x11;
          if (plVar14 == plVar16) goto LAB_149f0e3a3;
          do {
            if ((UObject *)*plVar14 == this_02[0xc].Handle) {
              UPCGProxyForGPUData::GetCPUData
                        ((UPCGProxyForGPUData *)local_110.Handle,&local_b8,param_1);
              if (local_b8.bComplete == false) {
                bVar7 = true;
              }
              else {
                if ((local_b8.TaggedData.Data.Data.field0_0x0.DebugPtr ==
                     (TObjectPtr<UPCGData_const_>_u_0)0x0) &&
                   (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<7664289111586374907>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp"
                                       ,0x4fb,"Result.TaggedData.Data"), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                FPCGDataPtrWrapper::operator=
                          ((FPCGDataPtrWrapper *)this_02,&local_b8.TaggedData.Data);
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Append<FDefaultSetAllocator>
                          ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                           (this_02 + 2),&local_b8.TaggedData.Tags);
                param_1->bInputDataModified = true;
              }
              local_b8.TaggedData.Tags.HashSize = 0;
              if (local_b8.TaggedData.Tags.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0)
              {
                FMemory::Free((void *)local_b8.TaggedData.Tags.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_b8.TaggedData.Tags.Elements);
              FPCGDataPtrWrapper::~FPCGDataPtrWrapper(&local_b8.TaggedData.Data);
              goto LAB_149f0e3a3;
            }
            plVar14 = plVar14 + 0x11;
          } while (plVar14 != plVar16);
          this_02 = this_02 + 0xf;
        }
        else {
          if ((UPCGProxyForGPUData *)local_110.Handle != (UPCGProxyForGPUData *)0x0) {
            UE::GC::MarkAsReachable(local_110.Handle);
            goto LAB_149f0e2a5;
          }
LAB_149f0e3a3:
          this_02 = this_02 + 0xf;
        }
      }
      if (bVar7) {
        param_1->bIsPaused = true;
        pTVar13 = FPCGContext::GetOrCreateHandle(param_1,&local_f8);
        pFVar4 = pTVar13->Object;
        pTVar5 = (pTVar13->WeakReferenceCount).ReferenceController;
        (pTVar13->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar13->Object = (FPCGContextHandle *)0x0;
        this_01 = FTSTicker::GetCoreTicker();
        local_c0 = (undefined ***)0x0;
        local_d8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::`33'::<lambda_2>_>'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        local_e8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`ExecuteOnGameThread<`IPCGElement::ReadbackGPUDataForOverrides'::__l33::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
                      ::Call;
        local_d0 = pFVar4;
        local_c8 = pTVar5;
        FTSTicker::AddTicker
                  (this_01,&local_108,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGElement.cpp(1294)"
                   ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_e8);
        if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar1 = &(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_108.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_108.WeakReferenceCount.ReferenceController,1);
          }
        }
        if (local_e8[0] != (code *)0x0) {
          pppuVar15 = &local_d8;
          if (local_c0 != (undefined ***)0x0) {
            pppuVar15 = local_c0;
          }
          (*(code *)(*pppuVar15)[2])();
        }
        if (local_f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_f8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_f8.WeakReferenceCount.ReferenceController,1);
          }
        }
        return false;
      }
    }
  }
  return true;
}

// RetrieveResultsFromCache @ 149f116a0

EPCGCachingStatus __thiscall
IPCGElement::RetrieveResultsFromCache
          (IPCGElement *this,IPCGGraphCache *param_1,UPCGNode *param_2,FPCGDataCollection *param_3,
          IPCGGraphExecutionSource *param_4,FPCGDataCollection *param_5,FPCGCrc *param_6)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  EPCGCachingStatus EVar4;
  UPCGSettingsInterface *pUVar5;
  FPCGDataCollection *local_58;
  longlong local_50;
  IPCGGraphExecutionSource *local_48;
  UPCGNode *local_40;
  IPCGElement *local_38;
  undefined8 local_30;
  IPCGGraphExecutionSource *local_28;
  FPCGCrc local_20;
  
  if (param_1 == (IPCGGraphCache *)0x0) {
    return NotInCache;
  }
  if (param_2 == (UPCGNode *)0x0) {
    pUVar5 = (UPCGSettingsInterface *)0x0;
  }
  else {
    pUVar5 = (param_2->SettingsInterface).field0_0x0.DebugPtr;
  }
  pUVar5 = FPCGDataCollection::GetSettingsInterface(param_3,pUVar5);
  if (pUVar5 == (UPCGSettingsInterface *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = (**(code **)(pUVar5->_padding_ + 0x380))(pUVar5);
    if (pUVar5->bEnabled != false) {
      pcVar1 = *(code **)((longlong)*this + 0x20);
      (**(code **)(pUVar5->_padding_ + 0x380))(pUVar5);
      cVar2 = (*pcVar1)(this);
      goto LAB_149f11729;
    }
  }
  cVar2 = '\0';
LAB_149f11729:
  local_20.Value = 0;
  local_20.bValid = false;
  local_20._5_3_ = 0;
  local_30 = 0;
  local_28 = param_4;
  if ((local_50 != 0) && (cVar2 != '\0')) {
    local_48 = param_4;
    pcVar1 = *(code **)((longlong)*this + 0x40);
    local_58 = param_3;
    local_40 = param_2;
    local_38 = this;
    if ((param_3 == (FPCGDataCollection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                           ,0x7c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
    (*pcVar1)(this,&local_58,&local_20);
    if (param_6 != (FPCGCrc *)0x0) {
      *param_6 = local_20;
    }
    if (local_20.bValid != false) {
      cVar2 = (**(code **)*param_1)(param_1,&local_40,param_5);
      return (cVar2 != '\0') + NotInCache;
    }
  }
  return NotInCache;
}

// ShouldVerifyIfOutputsAreUsedMultipleTimes @ 149f12a60

bool __thiscall
IPCGElement::ShouldVerifyIfOutputsAreUsedMultipleTimes(IPCGElement *this,UPCGSettings *param_1)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarPCGShouldVerifyIfOutputsAreUsedMultipleTimes.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

