// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Transform @ 14add20b0

bool __thiscall
Metasound::Frontend::SourceInterface::FUpdateInterface::Transform
          (FUpdateInterface *this,TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  code *pcVar1;
  FMetasoundFrontendVersionNumber FVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  FMetasoundFrontendVersion *pFVar6;
  char local_res10 [8];
  char *local_res18;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_108;
  TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_> local_f8;
  TSharedRef<Metasound::Frontend::IDocumentController,1> local_e8;
  code *local_d8;
  char **local_d0;
  FModifyRootGraphInterfaces local_c8;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FName local_28;
  FName FStack_20;
  FName local_18;
  FName FStack_10;
  
  local_res10[0] = '\0';
  puVar5 = (undefined8 *)
           (**(code **)(*(longlong *)param_1->Object + 0x100))(param_1->Object,local_38);
  local_res18 = local_res10;
  local_d0 = &local_res18;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::SourceInterface::FUpdateInterface::Transform'::__l2::<lambda_1>,void,TSharedRef<Metasound::Frontend::INodeController_const_,1>_>
             ::Call;
  (**(code **)(*(longlong *)*puVar5 + 0x118))((longlong *)*puVar5,&local_d8,3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  pFVar6 = SourceInterfaceV1_0::GetVersion();
  local_e8.Object = *(IDocumentController **)&pFVar6->Name;
  local_e8.SharedReferenceCount.ReferenceController._0_4_ = (pFVar6->Number).Major;
  local_e8.SharedReferenceCount.ReferenceController._4_4_ = (pFVar6->Number).Minor;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_f8.AllocatorInstance,1,&local_f8.ArrayMax);
  local_28 = (FName)local_e8.Object;
  FStack_20 = (FName)local_e8.SharedReferenceCount.ReferenceController;
  *(IDocumentController **)local_f8.AllocatorInstance.Data = local_e8.Object;
  *(TReferenceControllerBase<1> **)(local_f8.AllocatorInstance.Data + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  pFVar6 = SourceInterface::GetVersion();
  local_e8.Object = *(IDocumentController **)&pFVar6->Name;
  local_e8.SharedReferenceCount.ReferenceController._0_4_ = (pFVar6->Number).Major;
  local_e8.SharedReferenceCount.ReferenceController._4_4_ = (pFVar6->Number).Minor;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_108.AllocatorInstance,1,&local_108.ArrayMax);
  local_18 = (FName)local_e8.Object;
  FStack_10 = (FName)local_e8.SharedReferenceCount.ReferenceController;
  *(IDocumentController **)local_108.AllocatorInstance.Data = local_e8.Object;
  *(TReferenceControllerBase<1> **)(local_108.AllocatorInstance.Data + 8) =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_res10[0] != '\0') {
    pFVar6 = SourceOneShotInterface::GetVersion();
    if (((local_108.AllocatorInstance.Data <= pFVar6) &&
        (pFVar6 < (FMetasoundFrontendVersion *)
                  (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x10))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    if (local_108.ArrayNum == local_108.ArrayMax) {
      local_108.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&local_108.AllocatorInstance,&local_108.ArrayMax);
    }
    FVar2 = pFVar6->Number;
    *(FName *)&local_108.AllocatorInstance.Data[(longlong)local_108.ArrayNum * 0x10].field_0x0 =
         pFVar6->Name;
    *(FMetasoundFrontendVersionNumber *)
     (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10 + 8) = FVar2;
    local_108.ArrayNum = local_108.ArrayNum + 1;
  }
  FModifyRootGraphInterfaces::FModifyRootGraphInterfaces(&local_c8,&local_f8,&local_108);
  local_e8.Object = param_1->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FModifyRootGraphInterfaces::Transform(&local_c8,&local_e8);
  if (local_c8.OutputsToRemove.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.OutputsToRemove.AllocatorInstance.Data);
  }
  if (local_c8.OutputsToAdd.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.OutputsToAdd.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            ((FMetasoundFrontendClassInput *)local_c8.InputsToRemove.AllocatorInstance.Data,
             local_c8.InputsToRemove.ArrayNum);
  if ((FMetasoundFrontendClassInput *)local_c8.InputsToRemove.AllocatorInstance.Data !=
      (FMetasoundFrontendClassInput *)0x0) {
    FMemory::Free(local_c8.InputsToRemove.AllocatorInstance.Data);
  }
  DestructItems<Metasound::Frontend::FModifyRootGraphInterfaces::FInputData,int>
            ((FInputData *)local_c8.InputsToAdd.AllocatorInstance.Data,local_c8.InputsToAdd.ArrayNum
            );
  if ((FInputData *)local_c8.InputsToAdd.AllocatorInstance.Data != (FInputData *)0x0) {
    FMemory::Free(local_c8.InputsToAdd.AllocatorInstance.Data);
  }
  if (local_c8.PairedOutputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PairedOutputs.AllocatorInstance.Data);
  }
  if (local_c8.PairedInputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PairedInputs.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)local_c8.InterfacesToAdd.AllocatorInstance.Data,
             local_c8.InterfacesToAdd.ArrayNum);
  if ((FMetasoundFrontendInterface *)local_c8.InterfacesToAdd.AllocatorInstance.Data !=
      (FMetasoundFrontendInterface *)0x0) {
    FMemory::Free(local_c8.InterfacesToAdd.AllocatorInstance.Data);
  }
  DestructItems<FMetasoundFrontendInterface,int>
            ((FMetasoundFrontendInterface *)local_c8.InterfacesToRemove.AllocatorInstance.Data,
             local_c8.InterfacesToRemove.ArrayNum);
  if ((FMetasoundFrontendInterface *)local_c8.InterfacesToRemove.AllocatorInstance.Data !=
      (FMetasoundFrontendInterface *)0x0) {
    FMemory::Free(local_c8.InterfacesToRemove.AllocatorInstance.Data);
  }
  if ((FMetasoundFrontendVersion *)local_108.AllocatorInstance.Data !=
      (FMetasoundFrontendVersion *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if ((FName *)local_f8.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar3;
}

