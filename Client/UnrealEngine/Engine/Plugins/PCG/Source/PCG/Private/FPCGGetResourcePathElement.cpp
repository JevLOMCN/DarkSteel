// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ExecuteInternal @ 149c0c380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGetResourcePathElement::ExecuteInternal(FPCGGetResourcePathElement *this,FPCGContext *param_1)

{
  int *piVar1;
  int iVar2;
  UPCGMetadata *this_00;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  FObjectPtr_u_0 FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UPCGParamData *pUVar11;
  FSoftObjectPath *pFVar12;
  FName *pFVar13;
  FPCGTaggedData *this_01;
  FObjectPtr_u_0 *pFVar14;
  FObjectPtr_u_0 *pFVar15;
  bool bVar16;
  undefined1 local_res18 [8];
  FGCScopeGuard local_res20 [8];
  TObjectPtr<UObject> local_78;
  FObjectPtr_u_0 local_70;
  UPCGParamData *local_68;
  FName local_60;
  undefined1 local_58 [16];
  void *local_48;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId35,"FPCGGetResourcePathElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetResourcePath.cpp"
               ,0x23);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId35);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetResourcePath.cpp"
                         ,0x25,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar2 = (param_1->InputData).TaggedData.ArrayNum;
  pFVar15 = (FObjectPtr_u_0 *)(param_1->InputData).TaggedData.AllocatorInstance.Data;
  pFVar14 = pFVar15 + (longlong)iVar2 * 0xf;
  do {
    if ((param_1->InputData).TaggedData.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar15 == pFVar14) {
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return true;
    }
    local_70 = (FObjectPtr_u_0)pFVar15->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c0c49b:
      if (local_70.Handle != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UPCGResourceData_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_70,pUVar9);
        FVar5 = local_70;
        if ((bVar6) && (local_70.Handle != (UObject *)0x0)) {
          bVar6 = IsInGameThread();
          if (param_1 == (FPCGContext *)0x0) {
            if ((!bVar6) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<4331830188552749225>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                   ,0xa9,"Context != nullptr || IsInGameThread()"), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
LAB_149c0c504:
            pUVar10 = GetTransientPackageAsObject();
            pUVar11 = NewObject<UPCGParamData>(pUVar10);
          }
          else {
            if (bVar6) goto LAB_149c0c504;
            if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
               (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<4331830188552749348>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                   ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            FGCScopeGuard::FGCScopeGuard(local_res20);
            pUVar10 = GetTransientPackageAsObject();
            pUVar11 = NewObject<UPCGParamData>(pUVar10);
            FGCScopeGuard::~FGCScopeGuard(local_res20);
            if ((pUVar11 == (UPCGParamData *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Object",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                   ,0x12a,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            local_68 = pUVar11;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar11 != (UPCGParamData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar11);
            }
            TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
            Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_78,(bool *)&local_68);
          }
          if ((pUVar11 == (UPCGParamData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParamData",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetResourcePath.cpp"
                                 ,0x31,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          if ((pUVar11->_padding_ == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ParamData->Metadata",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGGetResourcePath.cpp"
                                 ,0x32,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          this_00 = (UPCGMetadata *)pUVar11->_padding_;
          pFVar12 = (FSoftObjectPath *)
                    (**(code **)(*(longlong *)FVar5.Handle + 0x380))(FVar5.Handle,local_58);
          pFVar13 = ::FName::FName(&local_60,L"ResourceReference");
          UPCGMetadata::CreateSoftObjectPathAttribute(this_00,*pFVar13,pFVar12,false,false);
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          UPCGMetadata::AddEntry((UPCGMetadata *)pUVar11->_padding_,-1);
          pFVar3 = (FObjectPtr_u_0 *)(param_1->OutputData).TaggedData.AllocatorInstance.Data;
          if (((pFVar3 <= pFVar15) &&
              (pFVar15 < pFVar3 + (longlong)(param_1->OutputData).TaggedData.ArrayMax * 0xf)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
          piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,(ForAnyElementType *)&param_1->OutputData,piVar1);
          }
          (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
          this_01 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((param_1->OutputData).TaggedData.AllocatorInstance.Data +
                               (longlong)iVar8 * 0x78),(FPCGTaggedData *)pFVar15);
          FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)pUVar11);
        }
      }
    }
    else if (local_70.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_70.Handle);
      goto LAB_149c0c49b;
    }
    pFVar15 = pFVar15 + 0xf;
  } while( true );
}

// SupportsGPUResidentData @ 149c35900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGGetResourcePathElement::SupportsGPUResidentData
          (FPCGGetResourcePathElement *this,FPCGContext *param_1)

{
  return true;
}

