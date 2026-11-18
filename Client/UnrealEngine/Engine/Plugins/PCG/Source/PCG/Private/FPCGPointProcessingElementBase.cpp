// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ProcessPoints @ 149c31e90

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

void __thiscall
FPCGPointProcessingElementBase::ProcessPoints
          (FPCGPointProcessingElementBase *this,FPCGContext *param_1,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *param_3,
          TFunction<bool___cdecl(FPCGPoint_const_&,FPCGPoint_&)> *param_4)

{
  FObjectPtr_u_0 *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  FPCGTaggedData *this_00;
  UClass *pUVar10;
  UPCGSpatialData *pUVar11;
  FText *pFVar12;
  UObject *pUVar13;
  UPCGPointData *this_01;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  TRefCountPtr<ITextData> TVar16;
  FObjectPtr_u_0 *pFVar17;
  bool bVar18;
  undefined1 auStackY_178 [32];
  undefined1 local_128;
  FGCScopeGuard local_127 [7];
  FObjectPtr_u_0 *local_120;
  uint local_118;
  FObjectPtr_u_0 local_110;
  TObjectPtr<UObject> local_108;
  UPCGPointData *local_100;
  TFunction<bool___cdecl(FPCGPoint_const_&,FPCGPoint_&)> *local_f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_e8;
  FObjectPtr_u_0 *local_e0;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  FString local_a8;
  FString local_98;
  FText local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_118 = param_2->ArrayNum;
  uVar15 = (ulonglong)(int)local_118;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  pFVar17 = (FObjectPtr_u_0 *)(param_2->AllocatorInstance).Data;
  local_e0 = pFVar17 + uVar15 * 0xf;
  local_f8 = param_4;
  local_f0 = param_3;
  local_e8 = param_2;
  do {
    pFVar1 = local_e0;
    pTVar7 = local_f0;
    local_120 = pFVar17;
    if (local_e8->ArrayNum != (int)uVar15) {
      local_128 = 0;
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_128);
    }
    if (pFVar17 == pFVar1) {
      return;
    }
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId17,"FPCGPointProcessingElement::Execute::InputLoop",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGPointProcessingElementBase.cpp"
                 ,0x11);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId17);
    }
    pFVar1 = (FObjectPtr_u_0 *)(pTVar7->AllocatorInstance).Data;
    if (((pFVar1 <= pFVar17) && (pFVar17 < pFVar1 + (longlong)pTVar7->ArrayMax * 0xf)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = pTVar7->ArrayNum;
    if (iVar9 == pTVar7->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x878,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar9 + 1;
    this_00 = FPCGTaggedData::FPCGTaggedData
                        ((FPCGTaggedData *)
                         ((pTVar7->AllocatorInstance).Data + (longlong)iVar9 * 0x78),
                         (FPCGTaggedData *)pFVar17);
    local_110 = (FObjectPtr_u_0)pFVar17->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c3200e:
      if (local_110.Handle == (UObject *)0x0) goto LAB_149c32306;
      pUVar10 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar8 = FObjectPtr::IsA((FObjectPtr *)&local_110,pUVar10);
      if ((!bVar8) || (local_110.Handle == (UObject *)0x0)) goto LAB_149c32306;
      local_48 = 0;
      local_47 = 0;
      local_43 = 0;
      local_41 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pUVar11 = (UPCGSpatialData *)(**(code **)(*(longlong *)local_110.Handle + 0x3b0))();
      if (pUVar11 == (UPCGSpatialData *)0x0) {
        if (1 < (byte)LogPCG._0_1_) {
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_b8,L"PCGPointProcessingElementBase",L"InputMissingPointData",
                               L"Unable to get Point data from input");
          FText::ToString(pFVar12);
          if (param_1 != (FPCGContext *)0x0) {
            FPCGContext::GetTaskName(param_1,&local_c8);
            bVar4 = true;
            bVar3 = true;
            FPCGContext::GetExecutionSourceName(param_1,&local_d8);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if ((bVar3) &&
             (bVar3 = false, local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          TVar16.Reference = local_b8.TextData.Reference;
          if ((bVar4) &&
             (bVar4 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            TVar16.Reference = local_b8.TextData.Reference;
          }
          goto LAB_149c3216a;
        }
        goto LAB_149c3217a;
      }
      bVar8 = IsInGameThread();
      if (param_1 == (FPCGContext *)0x0) {
        if ((!bVar8) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0xa9,"Context != nullptr || IsInGameThread()"), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
LAB_149c321cb:
        pUVar13 = GetTransientPackageAsObject();
        this_01 = NewObject<UPCGPointData>(pUVar13);
      }
      else {
        if (bVar8) goto LAB_149c321cb;
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749348>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FGCScopeGuard::FGCScopeGuard(local_127);
        pUVar13 = GetTransientPackageAsObject();
        this_01 = NewObject<UPCGPointData>(pUVar13);
        FGCScopeGuard::~FGCScopeGuard(local_127);
        if ((this_01 == (UPCGPointData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x12a,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_100 = this_01;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_01 != (UPCGPointData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_108,(bool *)&local_100);
      }
      UPCGSpatialData::InitializeFromData
                ((UPCGSpatialData *)this_01,pUVar11,(UPCGMetadata *)0x0,true,true);
      pTVar14 = UPCGPointData::GetMutablePoints(this_01);
      FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)this_01);
      FPCGAsync::AsyncPointProcessing
                (param_1,(TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *)
                         &pUVar11[2].CachedLastSelector.field_0x28,pTVar14,local_f8);
      pFVar17 = local_120;
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
        pFVar17 = local_120;
      }
    }
    else {
      if (local_110.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_110.Handle);
        goto LAB_149c3200e;
      }
LAB_149c32306:
      if (1 < (byte)LogPCG._0_1_) {
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_88,L"PCGPointProcessingElementBase",L"InputMissingSpatialData",
                             L"Unable to get Spatial data from input");
        FText::ToString(pFVar12);
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_98);
          bVar6 = true;
          bVar5 = true;
          FPCGContext::GetExecutionSourceName(param_1,&local_a8);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((bVar5) &&
           (bVar5 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        TVar16.Reference = local_88.TextData.Reference;
        if ((bVar6) &&
           (bVar6 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          TVar16.Reference = local_88.TextData.Reference;
        }
LAB_149c3216a:
        pFVar17 = local_120;
        if (TVar16.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar16.Reference + 0x10))();
          pFVar17 = local_120;
        }
      }
LAB_149c3217a:
      if (bVar18) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pFVar17 = pFVar17 + 0xf;
    uVar15 = (ulonglong)local_118;
  } while( true );
}

