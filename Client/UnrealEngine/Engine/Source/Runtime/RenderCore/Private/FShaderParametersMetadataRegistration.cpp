// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// CommitAll @ 145e925a0

void __cdecl FShaderParametersMetadataRegistration::CommitAll(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if ((GShaderParametersMetadataRegistrationInstances ==
       (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4 = ::operator_new(0x10),
     GShaderParametersMetadataRegistrationInstances =
          (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0,
     pTVar4 != (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)
               0x0)) {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    GShaderParametersMetadataRegistrationInstances = pTVar4;
  }
  pTVar4 = GShaderParametersMetadataRegistrationInstances;
  pFVar5 = (GShaderParametersMetadataRegistrationInstances->AllocatorInstance).Data;
  iVar3 = GShaderParametersMetadataRegistrationInstances->ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (pTVar4->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FShaderParametersMetadataRegistration_const_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    (*(code *)**(undefined8 **)pFVar5)((*(undefined8 **)pFVar5)[1]);
    pFVar5 = pFVar5 + 8;
  }
  if ((GShaderParametersMetadataRegistrationInstances ==
       (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4 = ::operator_new(0x10),
     GShaderParametersMetadataRegistrationInstances =
          (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0,
     pTVar4 != (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)
               0x0)) {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    GShaderParametersMetadataRegistrationInstances = pTVar4;
  }
  pTVar4 = GShaderParametersMetadataRegistrationInstances;
  piVar1 = &GShaderParametersMetadataRegistrationInstances->ArrayMax;
  GShaderParametersMetadataRegistrationInstances->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  return;
}

// GetInstances @ 145e9dab0

TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderParametersMetadataRegistration::GetInstances(void)

{
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (GShaderParametersMetadataRegistrationInstances ==
      (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar1 = ::operator_new(0x10);
    GShaderParametersMetadataRegistrationInstances =
         (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar1 != (TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_>
                   *)0x0) {
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar1->ArrayNum = 0;
      pTVar1->ArrayMax = 0;
      GShaderParametersMetadataRegistrationInstances = pTVar1;
      return pTVar1;
    }
  }
  return GShaderParametersMetadataRegistrationInstances;
}

// IsReadyForRegistration @ 145ea5c90

bool __cdecl FShaderParametersMetadataRegistration::IsReadyForRegistration(void)

{
  bool bVar1;
  int iVar2;
  IPluginManager *pIVar3;
  
  bVar1 = FCommandLine::IsInitialized();
  if (bVar1) {
    pIVar3 = IPluginManager::Get();
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3);
    if (0 < iVar2) {
      return true;
    }
  }
  return false;
}

