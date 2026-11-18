// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// AreShaderTypesInitialized @ 145df8c00

bool __cdecl FShaderTypeRegistration::AreShaderTypesInitialized(void)

{
  return bShaderTypesInitialized;
}

// CommitAll @ 145dfdf60

void __cdecl FShaderTypeRegistration::CommitAll(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if ((GShaderTypeRegistrationInstances ==
       (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4 = ::operator_new(0x10),
     GShaderTypeRegistrationInstances =
          (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0,
     pTVar4 != (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0)) {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    GShaderTypeRegistrationInstances = pTVar4;
  }
  pTVar4 = GShaderTypeRegistrationInstances;
  pFVar5 = (GShaderTypeRegistrationInstances->AllocatorInstance).Data;
  iVar3 = GShaderTypeRegistrationInstances->ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (pTVar4->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FShaderTypeRegistration_const_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    (*(code *)**(undefined8 **)pFVar5)((*(undefined8 **)pFVar5)[1]);
    pFVar5 = pFVar5 + 8;
  }
  if ((GShaderTypeRegistrationInstances ==
       (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4 = ::operator_new(0x10),
     GShaderTypeRegistrationInstances =
          (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0,
     pTVar4 != (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0)) {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    GShaderTypeRegistrationInstances = pTVar4;
  }
  pTVar4 = GShaderTypeRegistrationInstances;
  piVar1 = &GShaderTypeRegistrationInstances->ArrayMax;
  GShaderTypeRegistrationInstances->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  bShaderTypesInitialized = true;
  return;
}

// GetInstances @ 145e0f740

TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> * __cdecl
FShaderTypeRegistration::GetInstances(void)

{
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (GShaderTypeRegistrationInstances ==
      (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar1 = ::operator_new(0x10);
    GShaderTypeRegistrationInstances =
         (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar1 != (TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar1->ArrayNum = 0;
      pTVar1->ArrayMax = 0;
      GShaderTypeRegistrationInstances = pTVar1;
      return pTVar1;
    }
  }
  return GShaderTypeRegistrationInstances;
}

