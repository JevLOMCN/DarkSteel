// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~FSceneUniformBufferMemberRegistration @ 1448ee910

void __thiscall
FSceneUniformBufferMemberRegistration::~FSceneUniformBufferMemberRegistration
          (FSceneUniformBufferMemberRegistration *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->DefaultValueConstructor != 0) {
    plVar1 = *(longlong **)&(this->DefaultValueConstructor).field_0x28;
    plVar3 = (longlong *)&(this->DefaultValueConstructor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// CommitAll @ 1454e4a80

void __cdecl FSceneUniformBufferMemberRegistration::CommitAll(void)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if ((GSceneUniformBufferMemberRegistrationInstances ==
       (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4 = ::operator_new(0x10),
     GSceneUniformBufferMemberRegistrationInstances =
          (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0,
     pTVar4 != (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0))
  {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    GSceneUniformBufferMemberRegistrationInstances = pTVar4;
  }
  pTVar4 = GSceneUniformBufferMemberRegistrationInstances;
  pFVar5 = (GSceneUniformBufferMemberRegistrationInstances->AllocatorInstance).Data;
  iVar3 = GSceneUniformBufferMemberRegistrationInstances->ArrayNum;
  pFVar2 = pFVar5 + (longlong)iVar3 * 8;
  while( true ) {
    if (pTVar4->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FSceneUniformBufferMemberRegistration_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    (**(code **)**(undefined8 **)pFVar5)();
    pFVar5 = pFVar5 + 8;
  }
  if ((GSceneUniformBufferMemberRegistrationInstances ==
       (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (pTVar4 = ::operator_new(0x10),
     GSceneUniformBufferMemberRegistrationInstances =
          (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0,
     pTVar4 != (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0))
  {
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
    GSceneUniformBufferMemberRegistrationInstances = pTVar4;
  }
  pTVar4 = GSceneUniformBufferMemberRegistrationInstances;
  piVar1 = &GSceneUniformBufferMemberRegistrationInstances->ArrayMax;
  GSceneUniformBufferMemberRegistrationInstances->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  return;
}

// GetInstances @ 1454f72f0

TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> * __cdecl
FSceneUniformBufferMemberRegistration::GetInstances(void)

{
  TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *pTVar1;
  
  if (GSceneUniformBufferMemberRegistrationInstances ==
      (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar1 = ::operator_new(0x10);
    GSceneUniformBufferMemberRegistrationInstances =
         (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0;
    if (pTVar1 != (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0
       ) {
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar1->ArrayNum = 0;
      pTVar1->ArrayMax = 0;
      GSceneUniformBufferMemberRegistrationInstances = pTVar1;
      return pTVar1;
    }
  }
  return GSceneUniformBufferMemberRegistrationInstances;
}

// Register @ 145501dc0

void __cdecl
FSceneUniformBufferMemberRegistration::Register(FSceneUniformBufferMemberRegistration *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FSceneUniformBufferMemberRegistration *local_18 [2];
  
  if ((GSceneUniformBufferMemberRegistrationInstances ==
       (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (GSceneUniformBufferMemberRegistrationInstances = ::operator_new(0x10),
     GSceneUniformBufferMemberRegistrationInstances !=
     (TArray<FSceneUniformBufferMemberRegistration_*,TSizedDefaultAllocator<32>_> *)0x0)) {
    (GSceneUniformBufferMemberRegistrationInstances->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    GSceneUniformBufferMemberRegistrationInstances->ArrayNum = 0;
    GSceneUniformBufferMemberRegistrationInstances->ArrayMax = 0;
  }
  pTVar3 = GSceneUniformBufferMemberRegistrationInstances;
  pFVar1 = (GSceneUniformBufferMemberRegistrationInstances->AllocatorInstance).Data;
  local_18[0] = param_1;
  if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       pFVar1 + (longlong)GSceneUniformBufferMemberRegistrationInstances->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = pTVar3->ArrayNum;
  if (iVar5 == pTVar3->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar5 + 1;
  *(FSceneUniformBufferMemberRegistration **)
   ((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

