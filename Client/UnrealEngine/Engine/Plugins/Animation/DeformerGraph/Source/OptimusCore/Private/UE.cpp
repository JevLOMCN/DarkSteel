// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 490

// Copy<FRigVMTrait_SetDeformerFloatVariable> @ 14e100d60

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerFloatVariable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FOptimusVariableAction_RenameVariable> @ 14e101260

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusVariableAction_RenameVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusVariableAction_RenameVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusGraphVariableDescription> @ 14e1012d0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusGraphVariableDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  FOptimusGraphVariableDescription::FOptimusGraphVariableDescription(param_1);
  return;
}

// ConstructForTests<FOptimusVariableAction_RenameVariable> @ 14e1013f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusVariableAction_RenameVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusVariableAction_RenameVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusGraphVariableDescription> @ 14e101420

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusGraphVariableDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x78))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x78),0);
  return;
}

// Destruct<FOptimusVariableAction_RenameVariable> @ 14e101430

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusVariableAction_RenameVariable>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Destruct<FOptimusGraphVariableDescription> @ 14e101450

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusGraphVariableDescription>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  DestructItems<FArrayShaderValue,int>
            (*(FArrayShaderValue **)((longlong)param_1 + 0x50),*(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOptimusVariableAction_RenameVariable> @ 14e1017c0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusVariableAction_RenameVariable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Copy<FOptimusGraphVariableDescription> @ 14e101920

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusGraphVariableDescription>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x20) =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(int *)((longlong)param_1 + 0x28) = *(int *)((longlong)param_2 + 0x28);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
    FShaderValueContainer::operator=
              ((FShaderValueContainer *)((longlong)param_1 + 0x40),
               (FShaderValueContainer *)((longlong)param_2 + 0x40));
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x60),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x60));
    param_2 = (void *)((longlong)param_2 + 0x88);
    param_1 = (int *)((longlong)param_1 + 0x88);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerNameVariable> @ 14e1025a0

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerNameVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerNameVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_RemoveNode> @ 14e102670

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_RemoveNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerNameVariable> @ 14e1026c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerNameVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerNameVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_RemoveNode> @ 14e102810

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_RemoveNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerNameVariable> @ 14e102850

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerNameVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_RemoveNode> @ 14e1028d0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_RemoveNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusValueDescription> @ 14e102980

void __cdecl UE::CoreUObject::Private::Construct<FOptimusValueDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FOptimusValueDescription::FOptimusValueDescription(param_1);
  return;
}

// ConstructForTests<FOptimusValueDescription> @ 14e102a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusValueDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x38));
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Construct<FOptimusNodeAction_MoveNode> @ 14e102a90

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_MoveNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_MoveNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FOptimusValueDescription> @ 14e102ac0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusValueDescription>(void *param_1)

{
  DestructItems<FArrayShaderValue,int>
            (*(FArrayShaderValue **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// ConstructForTests<FOptimusNodeAction_MoveNode> @ 14e102b20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_MoveNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_MoveNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FOptimusNodeAction_MoveNode> @ 14e102c40

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_MoveNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerNameVariable> @ 14e102c80

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerNameVariable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_RemoveNode> @ 14e102d10

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_RemoveNode>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50));
    param_2 = (void *)((longlong)param_2 + 0x60);
    param_1 = (void *)((longlong)param_1 + 0x60);
  }
  return true;
}

// Copy<FOptimusValueDescription> @ 14e102dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusValueDescription>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 8),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 8));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      if ((FInstancedStruct *)((longlong)param_1 + 0x38) !=
          (FInstancedStruct *)((longlong)param_2 + 0x38)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 0x38),
                   (((FInstancedStruct *)((longlong)param_2 + 0x38))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)param_2 + 0x40));
      }
      FShaderValueContainer::operator=
                ((FShaderValueContainer *)((longlong)param_1 + 0x48),
                 (FShaderValueContainer *)((longlong)param_2 + 0x48));
      param_2 = (void *)((longlong)param_2 + 0x68);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x68);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusNodeAction_MoveNode> @ 14e102e90

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_MoveNode>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FOptimusConstantIndex> @ 14e102ff0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusConstantIndex>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// ConstructForTests<FOptimusConstantIndex> @ 14e103050

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusConstantIndex>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// Destruct<FOptimusConstantIndex> @ 14e103070

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusConstantIndex>(void *param_1)

{
  return;
}

// Copy<FOptimusConstantIndex> @ 14e103110

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusConstantIndex>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerInt4ArrayVariable> @ 14e1031a0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerInt4ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt4ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerInt4ArrayVariable> @ 14e103290

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerInt4ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt4ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerInt4ArrayVariable> @ 14e1032c0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerInt4ArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerInt4ArrayVariable> @ 14e1033d0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerInt4ArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FOptimusVariableAction_RemoveVariable> @ 14e103720

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusVariableAction_RemoveVariable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FOptimusVariableAction_RemoveVariable::FOptimusVariableAction_RemoveVariable(param_1);
  return;
}

// ConstructForTests<FOptimusVariableAction_RemoveVariable> @ 14e103760

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusVariableAction_RemoveVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusVariableAction_RemoveVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FOptimusVariableAction_RemoveVariable> @ 14e103770

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusVariableAction_RemoveVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusVariableAction_RemoveVariable> @ 14e1038a0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusVariableAction_RemoveVariable>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x68));
    param_2 = (void *)((longlong)param_2 + 0x78);
    param_1 = (void *)((longlong)param_1 + 0x78);
  }
  return true;
}

// Construct<FOptimusValueIdentifier> @ 14e103b50

void __cdecl UE::CoreUObject::Private::Construct<FOptimusValueIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusValueIdentifier> @ 14e103ba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusValueIdentifier>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FOptimusValueIdentifier> @ 14e103bf0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusValueIdentifier>(void *param_1)

{
  return;
}

// Copy<FOptimusValueIdentifier> @ 14e103c50

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusValueIdentifier>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerTransformArrayVariable> @ 14e103d20

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerTransformArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerTransformArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_DuplicateNode> @ 14e103d50

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_DuplicateNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_DuplicateNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerTransformArrayVariable> @ 14e103dc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerTransformArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerTransformArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_DuplicateNode> @ 14e103df0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_DuplicateNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_DuplicateNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerTransformArrayVariable> @ 14e103e50

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerTransformArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_DuplicateNode> @ 14e103ea0

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_DuplicateNode>(void *param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(longlong *)((longlong)param_1 + 0x50) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x60);
    if (*(longlong **)((longlong)param_1 + 0x78) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x78);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// GetStructTypeHash<FOptimusValueIdentifier> @ 14e103f70

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FOptimusValueIdentifier>(void *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 4);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  bVar1 = *(byte *)param_1;
  return (uint)bVar1 * 0x40 + uVar3 + (int)((ulonglong)uVar2 >> 0x20) + (bVar1 >> 2) + 0x9e3779b9 ^
         (uint)bVar1;
}

// Construct<FOptimusNodeAction_RenameNode> @ 14e104040

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_RenameNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_RenameNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x28));
  FText::FText((FText *)((longlong)param_1 + 0x38));
  return;
}

// ConstructForTests<FOptimusNodeAction_RenameNode> @ 14e1040b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_RenameNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_RenameNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x28));
  FText::FText((FText *)((longlong)param_1 + 0x38));
  return;
}

// Destruct<FOptimusNodeAction_RenameNode> @ 14e104100

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_RenameNode>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x38) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x28) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerTransformArrayVariable> @ 14e104160

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerTransformArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x60);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_DuplicateNode> @ 14e104250

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_DuplicateNode>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    TFunction<bool___cdecl(UOptimusNode_*)>::operator=
              ((TFunction<bool___cdecl(UOptimusNode_*)> *)((longlong)param_1 + 0x50),
               (TFunction<bool___cdecl(UOptimusNode_*)> *)((longlong)param_2 + 0x50));
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x80));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x90),(FString *)((longlong)param_2 + 0x90));
    param_2 = (void *)((longlong)param_2 + 0xa0);
    param_1 = (void *)((longlong)param_1 + 0xa0);
  }
  return true;
}

// Copy<FOptimusNodeAction_RenameNode> @ 14e1045d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_RenameNode>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    plVar2 = *(longlong **)((longlong)param_2 + 0x28);
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
    if (plVar3 != plVar2) {
      *(longlong **)((longlong)param_1 + 0x28) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res18);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    plVar2 = *(longlong **)((longlong)param_2 + 0x38);
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
    if (plVar3 != plVar2) {
      *(longlong **)((longlong)param_1 + 0x38) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,local_res8);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    puVar1 = (undefined4 *)((longlong)param_2 + 0x40);
    param_2 = (void *)((longlong)param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x40) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x48);
  }
  return true;
}

// Construct<FOptimusConstant> @ 14e1046c0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusConstant>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FOptimusConstant> @ 14e1046f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusConstant>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FOptimusConstant> @ 14e104720

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusConstant>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x30);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimusConstant> @ 14e104790

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusConstant>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    puVar3[2] = puVar1[2];
    uVar2 = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3[3] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    puVar3[4] = uVar2;
    puVar3[5] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    ::FString::operator=
              ((FString *)(puVar3 + 6),
               (FString *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1)));
    puVar1 = puVar1 + 9;
    *(undefined4 *)(puVar3 + 8) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined4 *)((longlong)puVar3 + 0x44) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x44 - (longlong)param_1));
    puVar3 = puVar3 + 9;
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerInt4Variable> @ 14e104b40

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerInt4Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt4Variable__6B_;
  ((TIntVector4<int>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TIntVector4<int>_u_0_s_0)UE::Math::TIntVector4<int>::ZeroValue.field0_0x0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerInt4Variable> @ 14e104bc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerInt4Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt4Variable__6B_;
  ((TIntVector4<int>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TIntVector4<int>_u_0_s_0)UE::Math::TIntVector4<int>::ZeroValue.field0_0x0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerInt4Variable> @ 14e104c30

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerInt4Variable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Construct<FOptimusDebugDrawParameters> @ 14e104e70

void __cdecl UE::CoreUObject::Private::Construct<FOptimusDebugDrawParameters>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 10000;
  *(undefined4 *)((longlong)param_1 + 8) = 2000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 2000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 8;
  return;
}

// ConstructForTests<FOptimusDebugDrawParameters> @ 14e104ea0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusDebugDrawParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 10000;
  *(undefined4 *)((longlong)param_1 + 8) = 2000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 2000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 8;
  return;
}

// Destruct<FOptimusDebugDrawParameters> @ 14e104ff0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusDebugDrawParameters>(void *param_1)

{
  return;
}

// Copy<FRigVMTrait_SetDeformerInt4Variable> @ 14e105120

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerInt4Variable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x28);
  }
  return true;
}

// Copy<FOptimusDebugDrawParameters> @ 14e105380

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDebugDrawParameters>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusVariableAction_AddVariable> @ 14e105590

void __cdecl UE::CoreUObject::Private::Construct<FOptimusVariableAction_AddVariable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  FOptimusVariableAction_AddVariable::FOptimusVariableAction_AddVariable(param_1);
  return;
}

// ConstructForTests<FOptimusVariableAction_AddVariable> @ 14e105600

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusVariableAction_AddVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusVariableAction_AddVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Destruct<FOptimusVariableAction_AddVariable> @ 14e105610

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusVariableAction_AddVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusVariableAction_AddVariable> @ 14e105660

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusVariableAction_AddVariable>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x50);
    param_1 = (void *)((longlong)param_1 + 0x50);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerTransformVariable> @ 14e1058d0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerTransformVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerTransformVariable__6B_;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Construct<FOptimusNodeGraphAction_AddNode> @ 14e105950

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_AddNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerTransformVariable> @ 14e1059b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerTransformVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerTransformVariable__6B_;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_AddNode> @ 14e105ad0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_AddNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerTransformVariable> @ 14e105b20

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerTransformVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_AddNode> @ 14e105b60

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_AddNode>(void *param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x50);
    if (*(longlong **)((longlong)param_1 + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerTransformVariable> @ 14e105c40

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerTransformVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x40) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x50) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x60) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x70) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x78) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x80);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_AddNode> @ 14e105ce0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_AddNode>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    TFunction<bool___cdecl(UOptimusNode_*)>::operator=
              ((TFunction<bool___cdecl(UOptimusNode_*)> *)((longlong)param_1 + 0x40),
               (TFunction<bool___cdecl(UOptimusNode_*)> *)((longlong)param_2 + 0x40));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x70),(FString *)((longlong)param_2 + 0x70));
    puVar1 = (undefined8 *)((longlong)param_2 + 0x80);
    param_2 = (void *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x80) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x90);
  }
  return true;
}

// Construct<FOptimusShaderText> @ 14e106300

void __cdecl UE::CoreUObject::Private::Construct<FOptimusShaderText>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Construct<FOptimusConstantDefinition> @ 14e106540

void __cdecl UE::CoreUObject::Private::Construct<FOptimusConstantDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusShaderText> @ 14e106560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusShaderText>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FOptimusConstantDefinition> @ 14e106580

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusConstantDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FOptimusShaderText> @ 14e1065a0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusShaderText>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct<FOptimusConstantDefinition> @ 14e1065e0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusConstantDefinition>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimusShaderText> @ 14e106800

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusShaderText>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusConstantDefinition> @ 14e106900

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusConstantDefinition>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_1 + lVar2 + 0x18)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerInt3ArrayVariable> @ 14e106bd0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerInt3ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt3ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerInt3ArrayVariable> @ 14e106c00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerInt3ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt3ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerInt3ArrayVariable> @ 14e106c30

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerInt3ArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerInt3ArrayVariable> @ 14e106c80

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerInt3ArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0xc);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FOptimusResourceAction_SetDataDomain> @ 14e106f30

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusResourceAction_SetDataDomain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_SetDataDomain__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x20));
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x60));
  return;
}

// ConstructForTests<FOptimusResourceAction_SetDataDomain> @ 14e106fa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusResourceAction_SetDataDomain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_SetDataDomain__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x20));
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x60));
  return;
}

// Destruct<FOptimusResourceAction_SetDataDomain> @ 14e106fe0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusResourceAction_SetDataDomain>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusResourceAction_SetDataDomain> @ 14e107150

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusResourceAction_SetDataDomain>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50));
    *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x68));
    *(undefined4 *)((longlong)param_1 + 0x78) = *(undefined4 *)((longlong)param_2 + 0x78);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x80),(FString *)((longlong)param_2 + 0x80));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x90));
    param_2 = (void *)((longlong)param_2 + 0xa0);
    param_1 = (void *)((longlong)param_1 + 0xa0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerRotatorArrayVariable> @ 14e107b30

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerRotatorArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerRotatorArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_RenameGraph> @ 14e107bc0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_RenameGraph>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RenameGraph__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerRotatorArrayVariable> @ 14e107c00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerRotatorArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerRotatorArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_RenameGraph> @ 14e107c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_RenameGraph>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RenameGraph__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerRotatorArrayVariable> @ 14e107cb0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerRotatorArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_RenameGraph> @ 14e107d00

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_RenameGraph>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerRotatorArrayVariable> @ 14e107e60

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerRotatorArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x18);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_RenameGraph> @ 14e107f50

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_RenameGraph>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    param_1 = (void *)((longlong)param_1 + 0x48);
    param_2 = (void *)((longlong)param_2 + 0x48);
  }
  return true;
}

// Construct<FOptimusConstantIdentifier> @ 14e108210

void __cdecl UE::CoreUObject::Private::Construct<FOptimusConstantIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusConstantIdentifier> @ 14e108270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusConstantIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FOptimusConstantIdentifier> @ 14e1082d0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusConstantIdentifier>(void *param_1)

{
  return;
}

// Copy<FOptimusConstantIdentifier> @ 14e108520

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusConstantIdentifier>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerInt3Variable> @ 14e1085e0

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerInt3Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt3Variable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x20) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// Construct<FOptimusComponentBindingAction_SetComponentSource> @ 14e108620

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusComponentBindingAction_SetComponentSource>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_SetComponentSource__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerInt3Variable> @ 14e108650

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerInt3Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt3Variable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x20) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FOptimusComponentBindingAction_SetComponentSource> @ 14e1086d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusComponentBindingAction_SetComponentSource>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_SetComponentSource__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerInt3Variable> @ 14e108740

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerInt3Variable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Construct<FOptimusAnimAttributeArray> @ 14e108780

void __cdecl UE::CoreUObject::Private::Construct<FOptimusAnimAttributeArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusComponentBindingAction_SetComponentSource> @ 14e108790

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusComponentBindingAction_SetComponentSource>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ConstructForTests<FOptimusAnimAttributeArray> @ 14e1087b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusAnimAttributeArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// GetStructTypeHash<FOptimusConstantIdentifier> @ 14e1087c0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FOptimusConstantIdentifier>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x10);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar4 = uVar4 + (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)param_1;
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar5 = uVar5 + (int)((ulonglong)uVar2 >> 0x20);
  return (uVar5 >> 2) + 0x9e3779b9 +
         (uVar4 * 0x40 + uVar3 + (int)((ulonglong)uVar1 >> 0x20) + -0x61c88647 + (uVar4 >> 2) ^
         uVar4) + uVar5 * 0x40 ^ uVar5;
}

// Destruct<FOptimusAnimAttributeArray> @ 14e1087d0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusAnimAttributeArray>(void *param_1)

{
  DestructItems<FOptimusAnimAttributeDescription,int>
            (*(FOptimusAnimAttributeDescription **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerInt3Variable> @ 14e108990

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerInt3Variable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x20) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Copy<FOptimusComponentBindingAction_SetComponentSource> @ 14e108a10

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusComponentBindingAction_SetComponentSource>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x40);
  }
  return true;
}

// Copy<FOptimusAnimAttributeArray> @ 14e108aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusAnimAttributeArray>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FOptimusAnimAttributeDescription *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FOptimusAnimAttributeDescription,int>
                  ((FOptimusAnimAttributeDescription *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FOptimusAnimAttributeDescription *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FOptimusAnimAttributeDescription,FOptimusAnimAttributeDescription,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusResourceAction_SetDataType> @ 14e108c60

void __cdecl UE::CoreUObject::Private::Construct<FOptimusResourceAction_SetDataType>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FOptimusResourceAction_SetDataType::FOptimusResourceAction_SetDataType(param_1);
  return;
}

// ConstructForTests<FOptimusResourceAction_SetDataType> @ 14e108c90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusResourceAction_SetDataType>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_SetDataType__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Destruct<FOptimusResourceAction_SetDataType> @ 14e108ca0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusResourceAction_SetDataType>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusResourceAction_SetDataType> @ 14e108d30

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusResourceAction_SetDataType>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x58),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x58));
    param_2 = (void *)((longlong)param_2 + 0x80);
    param_1 = (void *)((longlong)param_1 + 0x80);
  }
  return true;
}

// Construct<FOptimusFunctionReferenceData> @ 14e108fb0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusFunctionReferenceData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Construct<FRigVMTrait_SetDeformerRotatorVariable> @ 14e109030

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerRotatorVariable>(void *param_1)

{
  double dVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerRotatorVariable__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x20) = dVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// Construct<FOptimusNodeGraphAction_RemoveGraph> @ 14e109070

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_RemoveGraph>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveGraph__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FOptimusFunctionReferenceData> @ 14e1090b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionReferenceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerRotatorVariable> @ 14e1090e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerRotatorVariable>(void *param_1)

{
  double dVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerRotatorVariable__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x20) = dVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_RemoveGraph> @ 14e109120

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_RemoveGraph>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveGraph__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FOptimusFunctionReferenceData> @ 14e109160

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusFunctionReferenceData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Destruct<FRigVMTrait_SetDeformerRotatorVariable> @ 14e1091a0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerRotatorVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_RemoveGraph> @ 14e109220

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_RemoveGraph>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusFunctionNodeGraphHeaderWithGuidArray> @ 14e1093c0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusFunctionNodeGraphHeaderWithGuidArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FOptimusFunctionReferenceData> @ 14e1093d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionReferenceData>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FOptimusFunctionReferenceNodeSet>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FOptimusFunctionNodeGraphHeaderWithGuidArray> @ 14e109460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionNodeGraphHeaderWithGuidArray>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FRigVMTrait_SetDeformerRotatorVariable> @ 14e109470

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerRotatorVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x30);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_RemoveGraph> @ 14e109500

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_RemoveGraph>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x48),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x48));
    param_2 = (void *)((longlong)param_2 + 0x58);
    param_1 = (void *)((longlong)param_1 + 0x58);
  }
  return true;
}

// Destruct<FOptimusFunctionNodeGraphHeaderWithGuidArray> @ 14e1095b0

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusFunctionNodeGraphHeaderWithGuidArray>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimusFunctionNodeGraphHeaderWithGuidArray> @ 14e109800

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionNodeGraphHeaderWithGuidArray>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 5);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerInt2ArrayVariable> @ 14e109af0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerInt2ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt2ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusComponentBindingAction_RenameBinding> @ 14e109b60

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusComponentBindingAction_RenameBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_RenameBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerInt2ArrayVariable> @ 14e109b90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerInt2ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt2ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusComponentBindingAction_RenameBinding> @ 14e109c40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusComponentBindingAction_RenameBinding>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_RenameBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerInt2ArrayVariable> @ 14e109c70

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerInt2ArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Construct<FOptimusAnimAttributeDescription> @ 14e109e10

void __cdecl UE::CoreUObject::Private::Construct<FOptimusAnimAttributeDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FOptimusAnimAttributeDescription::FOptimusAnimAttributeDescription(param_1);
  return;
}

// Destruct<FOptimusComponentBindingAction_RenameBinding> @ 14e109f00

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusComponentBindingAction_RenameBinding>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ConstructForTests<FOptimusAnimAttributeDescription> @ 14e109f20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusAnimAttributeDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x38),0);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x38),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x48));
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FOptimusAnimAttributeDescription> @ 14e109f70

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusAnimAttributeDescription>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerInt2ArrayVariable> @ 14e10a280

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerInt2ArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 3);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Copy<FOptimusComponentBindingAction_RenameBinding> @ 14e10a370

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusComponentBindingAction_RenameBinding>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Copy<FOptimusAnimAttributeDescription> @ 14e10a440

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusAnimAttributeDescription>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  UObject *pUVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x20),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x20));
    if ((FInstancedStruct *)((longlong)param_1 + 0x48) !=
        (FInstancedStruct *)((longlong)param_2 + 0x48)) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)param_1 + 0x48),
                 (((FInstancedStruct *)((longlong)param_2 + 0x48))->ScriptStruct).field0_0x0.
                 DebugPtr,(uchar *)(((FString *)((longlong)param_2 + 0x50))->Data).AllocatorInstance
                                   .Data);
    }
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x58),(FString *)((longlong)param_2 + 0x58));
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (UObject *)(((FString *)((longlong)param_2 + 0x70))->Data).AllocatorInstance.Data,
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    pFVar1 = (FString *)((longlong)param_2 + 0x70);
    param_2 = (void *)((longlong)param_2 + 0x78);
    *(FScriptContainerElement **)((longlong)param_1 + 0x70) = (pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x78);
  }
  return true;
}

// Construct<FOptimusResourceAction_RenameResource> @ 14e10a930

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusResourceAction_RenameResource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_RenameResource__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusResourceAction_RenameResource> @ 14e10a9e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusResourceAction_RenameResource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_RenameResource__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FOptimusResourceAction_RenameResource> @ 14e10aa10

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusResourceAction_RenameResource>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimusResourceAction_RenameResource> @ 14e10aac0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusResourceAction_RenameResource>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FOptimusFunctionReferenceNodeSet> @ 14e10b5f0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusFunctionReferenceNodeSet>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Construct<FRigVMTrait_SetDeformerQuatArrayVariable> @ 14e10b630

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerQuatArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerQuatArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_AddGraph> @ 14e10b660

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_AddGraph>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddGraph__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FOptimusFunctionReferenceNodeSet> @ 14e10b6b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionReferenceNodeSet>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerQuatArrayVariable> @ 14e10b6e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerQuatArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerQuatArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_AddGraph> @ 14e10b710

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_AddGraph>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddGraph__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FOptimusFunctionReferenceNodeSet> @ 14e10b750

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusFunctionReferenceNodeSet>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<UOptimusNode_FunctionReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<UOptimusNode_FunctionReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Destruct<FRigVMTrait_SetDeformerQuatArrayVariable> @ 14e10b850

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerQuatArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_AddGraph> @ 14e10b8a0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_AddGraph>(void *param_1)

{
  longlong *plVar1;
  
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(longlong *)((longlong)param_1 + 0x40) != 0) {
    plVar1 = (longlong *)((longlong)param_1 + 0x50);
    if (*(longlong **)((longlong)param_1 + 0x68) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)param_1 + 0x68);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusFunctionNodeGraphHeaderWithGuid> @ 14e10bb70

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusFunctionNodeGraphHeaderWithGuid>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Copy<FOptimusFunctionReferenceNodeSet> @ 14e10bb90

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionReferenceNodeSet>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FOptimusFunctionNodeGraphHeaderWithGuid> @ 14e10bca0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionNodeGraphHeaderWithGuid>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Copy<FRigVMTrait_SetDeformerQuatArrayVariable> @ 14e10bcc0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerQuatArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 5);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_AddGraph> @ 14e10bdb0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_AddGraph>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
    TFunction<bool___cdecl(UOptimusNodeGraph_*)>::operator=
              ((TFunction<bool___cdecl(UOptimusNodeGraph_*)> *)((longlong)param_1 + 0x40),
               (TFunction<bool___cdecl(UOptimusNodeGraph_*)> *)((longlong)param_2 + 0x40));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x70),(FString *)((longlong)param_2 + 0x70));
    param_2 = (void *)((longlong)param_2 + 0x80);
    param_1 = (void *)((longlong)param_1 + 0x80);
  }
  return true;
}

// Destruct<FOptimusFunctionNodeGraphHeaderWithGuid> @ 14e10be70

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusFunctionNodeGraphHeaderWithGuid>(void *param_1)

{
  return;
}

// Copy<FOptimusFunctionNodeGraphHeaderWithGuid> @ 14e10be80

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionNodeGraphHeaderWithGuid>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerInt2Variable> @ 14e10c400

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerInt2Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt2Variable__6B_;
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return;
}

// Construct<FOptimusComponentBindingAction_RemoveBinding> @ 14e10c430

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusComponentBindingAction_RemoveBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_RemoveBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerInt2Variable> @ 14e10c470

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerInt2Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerInt2Variable__6B_;
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  return;
}

// ConstructForTests<FOptimusComponentBindingAction_RemoveBinding> @ 14e10c4a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusComponentBindingAction_RemoveBinding>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_RemoveBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerInt2Variable> @ 14e10c4e0

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerInt2Variable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusComponentBindingAction_RemoveBinding> @ 14e10c520

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusComponentBindingAction_RemoveBinding>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerInt2Variable> @ 14e10c820

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerInt2Variable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar1 + 0x18) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Copy<FOptimusComponentBindingAction_RemoveBinding> @ 14e10c8a0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusComponentBindingAction_RemoveBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
    puVar1 = (undefined4 *)((longlong)param_2 + 0x40);
    param_2 = (void *)((longlong)param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x40) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x48);
  }
  return true;
}

// Construct<FOptimusNode_ResourceAccessorBase_DuplicationInfo> @ 14e10d040

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNode_ResourceAccessorBase_DuplicationInfo>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FOptimusNode_ResourceAccessorBase_DuplicationInfo::
  FOptimusNode_ResourceAccessorBase_DuplicationInfo(param_1);
  return;
}

// ConstructForTests<FOptimusNode_ResourceAccessorBase_DuplicationInfo> @ 14e10d0b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNode_ResourceAccessorBase_DuplicationInfo>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x38));
  return;
}

// Destruct<FOptimusNode_ResourceAccessorBase_DuplicationInfo> @ 14e10d170

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNode_ResourceAccessorBase_DuplicationInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Construct<FOptimusResourceAction_RemoveResource> @ 14e10d290

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusResourceAction_RemoveResource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FOptimusResourceAction_RemoveResource::FOptimusResourceAction_RemoveResource(param_1);
  return;
}

// ConstructForTests<FOptimusResourceAction_RemoveResource> @ 14e10d320

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusResourceAction_RemoveResource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_RemoveResource__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FOptimusResourceAction_RemoveResource> @ 14e10d350

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusResourceAction_RemoveResource>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNode_ResourceAccessorBase_DuplicationInfo> @ 14e10d410

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNode_ResourceAccessorBase_DuplicationInfo>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x10),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x10));
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40));
      *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x58),(FString *)((longlong)param_2 + 0x58));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x68));
      param_2 = (void *)((longlong)param_2 + 0x78);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x78);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusResourceAction_RemoveResource> @ 14e10dd80

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusResourceAction_RemoveResource>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    param_2 = (void *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FOptimusFunctionNodeGraphHeaderArray> @ 14e10e630

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusFunctionNodeGraphHeaderArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusFunctionNodeGraphHeaderArray> @ 14e10e700

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionNodeGraphHeaderArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusFunctionNodeGraphHeaderArray> @ 14e10e7d0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusFunctionNodeGraphHeaderArray>(void *param_1)

{
  DestructItems<FOptimusFunctionNodeGraphHeader,int>
            (*(FOptimusFunctionNodeGraphHeader **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOptimusFunctionNodeGraphHeaderArray> @ 14e10ebf0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionNodeGraphHeaderArray>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FOptimusFunctionNodeGraphHeader *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FOptimusFunctionNodeGraphHeader,int>
                  ((FOptimusFunctionNodeGraphHeader *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FOptimusFunctionNodeGraphHeader *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FOptimusFunctionNodeGraphHeader,FOptimusFunctionNodeGraphHeader,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerQuatVariable> @ 14e10f160

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerQuatVariable>(void *param_1)

{
  double dVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerQuatVariable__6B_;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerQuatVariable> @ 14e10f350

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerQuatVariable>(void *param_1)

{
  double dVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerQuatVariable__6B_;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x28) = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  return;
}

// Destruct<FRigVMTrait_SetDeformerQuatVariable> @ 14e10f390

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerQuatVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerQuatVariable> @ 14e10f8e0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerQuatVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x40);
  }
  return true;
}

// Construct<FOptimusParameterBindingArray> @ 14e10fe80

void __cdecl UE::CoreUObject::Private::Construct<FOptimusParameterBindingArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusParameterBindingArray> @ 14e10fe90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusParameterBindingArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusParameterBindingArray> @ 14e10fea0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusParameterBindingArray>(void *param_1)

{
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOptimusParameterBindingArray> @ 14e110070

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusParameterBindingArray>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerIntArrayVariable> @ 14e110150

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerIntArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerIntArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusComponentBindingAction_AddBinding> @ 14e110190

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusComponentBindingAction_AddBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_AddBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerIntArrayVariable> @ 14e1101c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerIntArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerIntArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusComponentBindingAction_AddBinding> @ 14e1101f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusComponentBindingAction_AddBinding>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusComponentBindingAction_AddBinding__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerIntArrayVariable> @ 14e110220

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerIntArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusComponentBindingAction_AddBinding> @ 14e1102b0

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusComponentBindingAction_AddBinding>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerIntArrayVariable> @ 14e1103e0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerIntArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 2);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Copy<FOptimusComponentBindingAction_AddBinding> @ 14e1104d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusComponentBindingAction_AddBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x30);
  }
  return true;
}

// Construct<FOptimusComputeGraphInfo> @ 14e110620

void __cdecl UE::CoreUObject::Private::Construct<FOptimusComputeGraphInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusComputeGraphInfo> @ 14e110640

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusComputeGraphInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FOptimusComputeGraphInfo> @ 14e110660

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusComputeGraphInfo>(void *param_1)

{
  return;
}

// Construct<FOptimusAnimAttributeBufferArray> @ 14e110770

void __cdecl UE::CoreUObject::Private::Construct<FOptimusAnimAttributeBufferArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusAnimAttributeBufferArray> @ 14e110780

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusAnimAttributeBufferArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusAnimAttributeBufferArray> @ 14e110790

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusAnimAttributeBufferArray>(void *param_1)

{
  DestructItems<FOptimusAnimAttributeBufferDescription,int>
            (*(FOptimusAnimAttributeBufferDescription **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOptimusComputeGraphInfo> @ 14e1107d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusComputeGraphInfo>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_1 + lVar2 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusResourceAction_AddResource> @ 14e110870

void __cdecl UE::CoreUObject::Private::Construct<FOptimusResourceAction_AddResource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  FOptimusResourceAction_AddResource::FOptimusResourceAction_AddResource(param_1);
  return;
}

// ConstructForTests<FOptimusResourceAction_AddResource> @ 14e1108b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusResourceAction_AddResource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusResourceAction_AddResource__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x50));
  return;
}

// Destruct<FOptimusResourceAction_AddResource> @ 14e1108c0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusResourceAction_AddResource>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusAnimAttributeBufferArray> @ 14e1108d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusAnimAttributeBufferArray>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FOptimusAnimAttributeBufferDescription *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FOptimusAnimAttributeBufferDescription,int>
                  ((FOptimusAnimAttributeBufferDescription *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FOptimusAnimAttributeBufferDescription *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FOptimusAnimAttributeBufferDescription,FOptimusAnimAttributeBufferDescription,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusLoopTerminalInfo> @ 14e110a70

void __cdecl UE::CoreUObject::Private::Construct<FOptimusLoopTerminalInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FOptimusResourceAction_AddResource> @ 14e110a90

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusResourceAction_AddResource>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x70),(FString *)((longlong)param_2 + 0x70));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x80));
    param_2 = (void *)((longlong)param_2 + 0x90);
    param_1 = (void *)((longlong)param_1 + 0x90);
  }
  return true;
}

// Construct<FOptimusNodeAction_MovePin> @ 14e110b60

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_MovePin>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_MovePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FOptimusLoopTerminalInfo> @ 14e110ba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusLoopTerminalInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusNodeAction_MovePin> @ 14e110c80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_MovePin>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_MovePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FOptimusLoopTerminalInfo> @ 14e110cc0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusLoopTerminalInfo>(void *param_1)

{
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Destruct<FOptimusNodeAction_MovePin> @ 14e110d00

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_MovePin>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusFunctionNodeGraphHeader> @ 14e110e10

void __cdecl UE::CoreUObject::Private::Construct<FOptimusFunctionNodeGraphHeader>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FOptimusFunctionNodeGraphHeader> @ 14e110e60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionNodeGraphHeader>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FOptimusFunctionNodeGraphHeader> @ 14e110eb0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusFunctionNodeGraphHeader>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimusLoopTerminalInfo> @ 14e110f10

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusLoopTerminalInfo>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)(puVar1 + 2),
                 (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusNodeAction_MovePin> @ 14e110fb0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_MovePin>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
    param_2 = (void *)((longlong)param_2 + 0x48);
    param_1 = (void *)((longlong)param_1 + 0x48);
  }
  return true;
}

// Copy<FOptimusFunctionNodeGraphHeader> @ 14e111110

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionNodeGraphHeader>
          (void *param_1,void *param_2,int param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TPersistentObjectPtr<FSoftObjectPath> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TPersistentObjectPtr<FSoftObjectPath>::operator=(this,pTVar1);
      this[1].WeakPtr = pTVar1[1].WeakPtr;
      this[1].ObjectID.AssetPath.PackageName = pTVar1[1].ObjectID.AssetPath.PackageName;
      param_3 = param_3 + -1;
      this = (TPersistentObjectPtr<FSoftObjectPath> *)&this[1].ObjectID.AssetPath.AssetName;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerLinearColorArrayVariable> @ 14e1112c0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerLinearColorArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerLinearColorArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerLinearColorArrayVariable> @ 14e1112f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerLinearColorArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerLinearColorArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerLinearColorArrayVariable> @ 14e111320

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerLinearColorArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerLinearColorArrayVariable> @ 14e111430

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerLinearColorArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FOptimusParameterBinding> @ 14e1116d0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusParameterBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FOptimusParameterBinding::FOptimusParameterBinding(param_1);
  return;
}

// ConstructForTests<FOptimusParameterBinding> @ 14e111700

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusParameterBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x38));
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FOptimusParameterBinding> @ 14e111710

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusParameterBinding>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FOptimusParameterBinding> @ 14e111770

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusParameterBinding>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined8 *)((longlong)pvVar1 + 8);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 2),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar1 + 0x10));
      *(undefined4 *)(puVar2 + 7) = *(undefined4 *)((longlong)pvVar1 + 0x38);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar2 + 8),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x40));
      *(undefined4 *)(puVar2 + 10) = *(undefined4 *)((longlong)pvVar1 + 0x50);
      ::FString::operator=((FString *)(puVar2 + 0xb),(FString *)((longlong)pvVar1 + 0x58));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar2 + 0xd),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x68));
      *(undefined1 *)(puVar2 + 0xf) = *(undefined1 *)((longlong)pvVar1 + 0x78);
      *(undefined1 *)((longlong)puVar2 + 0x79) = *(undefined1 *)((longlong)pvVar1 + 0x79);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x80);
      puVar2 = puVar2 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerIntVariable> @ 14e111880

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerIntVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerIntVariable__6B_;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerIntVariable> @ 14e1118a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerIntVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerIntVariable__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerIntVariable> @ 14e1118c0

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerIntVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerIntVariable> @ 14e111a00

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerIntVariable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FOptimusAnimAttributeBufferDescription> @ 14e111d40

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusAnimAttributeBufferDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FOptimusAnimAttributeBufferDescription::FOptimusAnimAttributeBufferDescription(param_1);
  return;
}

// ConstructForTests<FOptimusAnimAttributeBufferDescription> @ 14e111d70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusAnimAttributeBufferDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x40));
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FOptimusAnimAttributeBufferDescription> @ 14e111d80

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusAnimAttributeBufferDescription>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOptimusAnimAttributeBufferDescription> @ 14e111e10

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusAnimAttributeBufferDescription>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x18),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x18));
    if ((FInstancedStruct *)((longlong)param_1 + 0x40) !=
        (FInstancedStruct *)((longlong)param_2 + 0x40)) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)param_1 + 0x40),
                 (((FInstancedStruct *)((longlong)param_2 + 0x40))->ScriptStruct).field0_0x0.
                 DebugPtr,*(uchar **)((longlong)param_2 + 0x48));
    }
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x50),(FString *)((longlong)param_2 + 0x50));
    pFVar1 = (FString *)((longlong)param_2 + 0x60);
    param_2 = (void *)((longlong)param_2 + 0x68);
    *(FScriptContainerElement **)((longlong)param_1 + 0x60) = (pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FOptimusNodeGraphAction_UnpackageKernelFunction> @ 14e111ed0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_UnpackageKernelFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_UnpackageKernelFunction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_UnpackageKernelFunction> @ 14e111f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_UnpackageKernelFunction>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_UnpackageKernelFunction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FOptimusNodeGraphAction_UnpackageKernelFunction> @ 14e111f90

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_UnpackageKernelFunction>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusPinPairInfo> @ 14e1120b0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusPinPairInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Construct<FOptimusNodeAction_RemovePin> @ 14e1120d0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_RemovePin>(void *param_1)

{
  memset(param_1,0,0xb8);
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  *(undefined ***)param_1 = &___7FOptimusNodeAction_RemovePin__6B_;
  return;
}

// ConstructForTests<FOptimusPinPairInfo> @ 14e112110

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusPinPairInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FOptimusNodeAction_RemovePin> @ 14e112130

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_RemovePin>(void *param_1)

{
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  *(undefined ***)param_1 = &___7FOptimusNodeAction_RemovePin__6B_;
  return;
}

// Destruct<FOptimusPinPairInfo> @ 14e112160

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusPinPairInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Destruct<FOptimusNodeAction_RemovePin> @ 14e112260

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_RemovePin>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNodeGraphAction_UnpackageKernelFunction> @ 14e112270

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_UnpackageKernelFunction>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x50),(FString *)((longlong)param_2 + 0x50));
    param_2 = (void *)((longlong)param_2 + 0x60);
    param_1 = (void *)((longlong)param_1 + 0x60);
  }
  return true;
}

// Construct<FOptimusFunctionGraphIdentifier> @ 14e112360

void __cdecl UE::CoreUObject::Private::Construct<FOptimusFunctionGraphIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusFunctionGraphIdentifier> @ 14e112380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusFunctionGraphIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FOptimusFunctionGraphIdentifier> @ 14e1123e0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusFunctionGraphIdentifier>(void *param_1)

{
  return;
}

// Copy<FOptimusPinPairInfo> @ 14e1123f0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusPinPairInfo>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusNodeAction_RemovePin> @ 14e112470

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_RemovePin>
          (void *param_1,void *param_2,int param_3)

{
  FOptimusNodeAction_AddRemovePin *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FOptimusNodeAction_AddRemovePin::operator=
                (this,(FOptimusNodeAction_AddRemovePin *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusFunctionGraphIdentifier> @ 14e1124c0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusFunctionGraphIdentifier>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      uVar2 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerLinearColorVariable> @ 14e1126a0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerLinearColorVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerLinearColorVariable__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerLinearColorVariable> @ 14e1126d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerLinearColorVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerLinearColorVariable__6B_;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerLinearColorVariable> @ 14e112700

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerLinearColorVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerLinearColorVariable> @ 14e1127c0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerLinearColorVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x28);
  }
  return true;
}

// Construct<FOptimus_ShaderBinding> @ 14e112850

void __cdecl UE::CoreUObject::Private::Construct<FOptimus_ShaderBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FOptimus_ShaderBinding::FOptimus_ShaderBinding(param_1);
  return;
}

// ConstructForTests<FOptimus_ShaderBinding> @ 14e112870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimus_ShaderBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Destruct<FOptimus_ShaderBinding> @ 14e112930

void __cdecl UE::CoreUObject::Private::Destruct<FOptimus_ShaderBinding>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimus_ShaderBinding> @ 14e1129d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimus_ShaderBinding>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x10),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_OptimusVariableBase> @ 14e112a80

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_OptimusVariableBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_OptimusVariableBase__6B_;
  return;
}

// ConstructForTests<FRigVMTrait_OptimusVariableBase> @ 14e112aa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_OptimusVariableBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_OptimusVariableBase__6B_;
  return;
}

// Destruct<FRigVMTrait_OptimusVariableBase> @ 14e112ac0

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_OptimusVariableBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_OptimusVariableBase> @ 14e112b40

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_OptimusVariableBase>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FString *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (8 - (longlong)param_1);
      this = (FString *)((longlong)pvVar2 + 8);
      pvVar2 = (void *)((longlong)pvVar2 + 0x18);
      ::FString::operator=(this,(FString *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusNodeGraphAction_PackageKernelFunction> @ 14e112ca0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_PackageKernelFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_PackageKernelFunction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_PackageKernelFunction> @ 14e112d20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_PackageKernelFunction>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_PackageKernelFunction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Destruct<FOptimusNodeGraphAction_PackageKernelFunction> @ 14e112d90

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_PackageKernelFunction>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusNodeAction_AddGroupingPin> @ 14e112de0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_AddGroupingPin>(void *param_1)

{
  memset(param_1,0,0xb8);
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  *(undefined ***)param_1 = &___7FOptimusNodeAction_AddGroupingPin__6B_;
  return;
}

// ConstructForTests<FOptimusNodeAction_AddGroupingPin> @ 14e112e20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_AddGroupingPin>(void *param_1)

{
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  *(undefined ***)param_1 = &___7FOptimusNodeAction_AddGroupingPin__6B_;
  return;
}

// Destruct<FOptimusNodeAction_AddGroupingPin> @ 14e112e50

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_AddGroupingPin>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNodeGraphAction_PackageKernelFunction> @ 14e112e60

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_PackageKernelFunction>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x60),
               (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x60));
    TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x70),
               (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x70));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x80),(FString *)((longlong)param_2 + 0x80));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x90),(FString *)((longlong)param_2 + 0x90));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0xa0),(FString *)((longlong)param_2 + 0xa0));
    param_2 = (void *)((longlong)param_2 + 0xb0);
    param_1 = (void *)((longlong)param_1 + 0xb0);
  }
  return true;
}

// Construct<FOptimusNode_GetVariable_DuplicationInfo> @ 14e113130

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNode_GetVariable_DuplicationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  FOptimusNode_GetVariable_DuplicationInfo::FOptimusNode_GetVariable_DuplicationInfo(param_1);
  return;
}

// ConstructForTests<FOptimusNode_GetVariable_DuplicationInfo> @ 14e113160

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNode_GetVariable_DuplicationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FOptimusNode_GetVariable_DuplicationInfo> @ 14e113170

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNode_GetVariable_DuplicationInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FOptimusNodeAction_AddGroupingPin> @ 14e1131b0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_AddGroupingPin>
          (void *param_1,void *param_2,int param_3)

{
  FOptimusNodeAction_AddRemovePin *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FOptimusNodeAction_AddRemovePin::operator=
                (this,(FOptimusNodeAction_AddRemovePin *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusNode_GetVariable_DuplicationInfo> @ 14e113300

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNode_GetVariable_DuplicationInfo>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x10),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x10));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
      param_2 = (void *)((longlong)param_2 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusDataTypeRef> @ 14e113460

void __cdecl UE::CoreUObject::Private::Construct<FOptimusDataTypeRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ConstructForTests<FOptimusDataTypeRef> @ 14e1134e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusDataTypeRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Destruct<FOptimusDataTypeRef> @ 14e113560

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusDataTypeRef>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// PostSerialize<FOptimusDataTypeRef> @ 14e1135c0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FOptimusDataTypeRef>(FArchive *param_1,void *param_2)

{
  longlong lVar1;
  FOptimusDataTypeRegistry *pFVar2;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  UObject *local_res8;
  
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar2 = FOptimusDataTypeRegistry::Get();
    pTVar3 = TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                     *)&pFVar2->RegisteredTypes,*(FName *)param_2);
    plVar4 = (longlong *)&pTVar3->field_0x10;
    if (pTVar3 == (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 == (longlong *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      lVar1 = *plVar4;
      pTVar5 = (TReferenceControllerBase<1> *)plVar4[1];
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (lVar1 != 0) {
        local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar1 + 0x2c));
        if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_res8);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_2 + 8),(FObjectPtr)&local_res8)
        ;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// Construct<FRigVMTrait_SetDeformerVector4ArrayVariable> @ 14e1136a0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerVector4ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector4ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerVector4ArrayVariable> @ 14e113710

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerVector4ArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector4ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerVector4ArrayVariable> @ 14e113800

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerVector4ArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FOptimusDataTypeRef> @ 14e113850

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDataTypeRef>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar1 + 1),
                 (TPersistentObjectPtr<FSoftObjectPath> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FRigVMTrait_SetDeformerVector4ArrayVariable> @ 14e113970

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerVector4ArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 5);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FRigUnit_AddOptimusDeformer> @ 14e113ce0

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_AddOptimusDeformer>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_AddOptimusDeformer__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FRigUnit_AddOptimusDeformer> @ 14e113dd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_AddOptimusDeformer>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_AddOptimusDeformer__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRigUnit_AddOptimusDeformer> @ 14e113e00

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_AddOptimusDeformer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_AddOptimusDeformer> @ 14e113fa0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_AddOptimusDeformer>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    pvVar3 = param_1;
    do {
      puVar1 = (undefined8 *)((longlong)param_2 + (0x10 - (longlong)param_1) + (longlong)pvVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)((longlong)pvVar3 + 0x10) = *puVar1;
      *(undefined8 *)((longlong)pvVar3 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusNodeGraphAction_ConnectAdderPin> @ 14e1141d0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_ConnectAdderPin>(void *param_1)

{
  memset(param_1,0,0xa0);
  FOptimusNodeGraphAction_ConnectAdderPin::FOptimusNodeGraphAction_ConnectAdderPin(param_1);
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_ConnectAdderPin> @ 14e114200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_ConnectAdderPin>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_ConnectAdderPin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x68));
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FOptimusNodeGraphAction_ConnectAdderPin> @ 14e114210

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_ConnectAdderPin>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x90),*(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(longlong **)((longlong)param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x68) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusNodeAction_AddPin> @ 14e114220

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_AddPin>(void *param_1)

{
  memset(param_1,0,0xb8);
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  *(undefined ***)param_1 = &___7FOptimusNodeAction_AddPin__6B_;
  return;
}

// ConstructForTests<FOptimusNodeAction_AddPin> @ 14e1142a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_AddPin>(void *param_1)

{
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  *(undefined ***)param_1 = &___7FOptimusNodeAction_AddPin__6B_;
  return;
}

// Destruct<FOptimusNodeAction_AddPin> @ 14e114390

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_AddPin>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNodeGraphAction_ConnectAdderPin> @ 14e1143a0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_ConnectAdderPin>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined1 *)((longlong)param_1 + 0x58) = *(undefined1 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x5c) = *(undefined8 *)((longlong)param_2 + 0x5c);
    plVar4 = *(longlong **)((longlong)param_2 + 0x68);
    plVar5 = *(longlong **)((longlong)param_1 + 0x68);
    if (plVar5 != plVar4) {
      *(longlong **)((longlong)param_1 + 0x68) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,local_res18);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
    *(undefined1 *)((longlong)param_1 + 0x78) = *(undefined1 *)((longlong)param_2 + 0x78);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x80),(FString *)((longlong)param_2 + 0x80));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x90);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x90)) {
      DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)((longlong)param_1 + 0x98));
      iVar3 = *(int *)((longlong)param_2 + 0x98);
      piVar1 = (int *)((longlong)param_1 + 0x9c);
      pFVar6 = ((ForAnyElementType *)((longlong)param_2 + 0x90))->Data;
      *(int *)((longlong)param_1 + 0x98) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<FString,FString,int>(pFVar2->Data,(FString *)pFVar6,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0xa0);
    param_2 = (void *)((longlong)param_2 + 0xa0);
  }
  return true;
}

// Copy<FOptimusNodeAction_AddPin> @ 14e1145f0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_AddPin>(void *param_1,void *param_2,int param_3)

{
  FOptimusNodeAction_AddRemovePin *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FOptimusNodeAction_AddRemovePin::operator=
                (this,(FOptimusNodeAction_AddRemovePin *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerVector4Variable> @ 14e1148c0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerVector4Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector4Variable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerVector4Variable> @ 14e114930

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerVector4Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector4Variable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Construct<FOptimusExecutionDomain> @ 14e114960

void __cdecl UE::CoreUObject::Private::Construct<FOptimusExecutionDomain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerVector4Variable> @ 14e114980

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerVector4Variable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// ConstructForTests<FOptimusExecutionDomain> @ 14e1149c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusExecutionDomain>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FOptimusExecutionDomain> @ 14e1149e0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusExecutionDomain>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerVector4Variable> @ 14e114da0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerVector4Variable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x30) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x38) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x40);
  }
  return true;
}

// Copy<FOptimusExecutionDomain> @ 14e114e30

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusExecutionDomain>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_1 + lVar1 + 4);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_1 + lVar1 + 0x10)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_OptimusDeformerSettings> @ 14e1152a0

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_OptimusDeformerSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_OptimusDeformerSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_OptimusDeformerSettings> @ 14e1152e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_OptimusDeformerSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_OptimusDeformerSettings__6B_;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// Destruct<FRigVMTrait_OptimusDeformerSettings> @ 14e115310

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_OptimusDeformerSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_OptimusDeformerSettings> @ 14e115390

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_OptimusDeformerSettings>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x24) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x24 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x30);
  }
  return true;
}

// Construct<FOptimusSecondaryInputBindingsGroup> @ 14e115b80

void __cdecl UE::CoreUObject::Private::Construct<FOptimusSecondaryInputBindingsGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusSecondaryInputBindingsGroup> @ 14e115bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusSecondaryInputBindingsGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Construct<FOptimusDataType> @ 14e115bd0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusDataType>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  FVar1 = FLinearColor::Black;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FOptimusSecondaryInputBindingsGroup> @ 14e115d40

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusSecondaryInputBindingsGroup>(void *param_1)

{
  DestructItems<FOptimusParameterBinding,int>
            (*(FOptimusParameterBinding **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// ConstructForTests<FOptimusDataType> @ 14e115d80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusDataType>(void *param_1)

{
  FLinearColor FVar1;
  
  *(undefined8 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  FVar1 = FLinearColor::Black;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  ((FLinearColor_u_0 *)((longlong)param_1 + 0x38))->_s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

// Destruct<FOptimusDataType> @ 14e115e10

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusDataType>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e115e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Construct<FOptimusNodeGraphAction_RemoveLink> @ 14e115eb0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_RemoveLink>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveLink__6B_;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_RemoveLink> @ 14e115ef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_RemoveLink>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveLink__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_RemoveLink> @ 14e115f20

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_RemoveLink>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusSecondaryInputBindingsGroup> @ 14e115f70

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusSecondaryInputBindingsGroup>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)(puVar1 + 1),
                 (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusDataType> @ 14e116010

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDataType>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      plVar1 = *(longlong **)((longlong)param_1 + lVar4 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x24);
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x2c);
      *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x34);
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar4 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar3;
      *(undefined1 *)((longlong)param_1 + 0x48) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x48);
      *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x49);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusNodeAction_AddRemovePin> @ 14e1160f0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_AddRemovePin>(void *param_1)

{
  memset(param_1,0,0xb8);
  FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin(param_1);
  return;
}

// ConstructForTests<FOptimusNodeAction_AddRemovePin> @ 14e116120

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_AddRemovePin>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_AddRemovePin__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x38));
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  return;
}

// Destruct<FOptimusNodeAction_AddRemovePin> @ 14e116130

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_AddRemovePin>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNodeGraphAction_RemoveLink> @ 14e116140

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_RemoveLink>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    puVar1 = (undefined1 *)((longlong)param_2 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x40);
    *(undefined1 *)((longlong)param_1 + 0x38) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Copy<FOptimusNodeAction_AddRemovePin> @ 14e116350

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_AddRemovePin>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
    *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_2 + 0x31);
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40));
    *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x58),(FString *)((longlong)param_2 + 0x58));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x68),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x68));
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x80),(FString *)((longlong)param_2 + 0x80));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x90),(FString *)((longlong)param_2 + 0x90));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0xa0),(FString *)((longlong)param_2 + 0xa0));
    puVar1 = (undefined1 *)((longlong)param_2 + 0xb0);
    param_2 = (void *)((longlong)param_2 + 0xb8);
    *(undefined1 *)((longlong)param_1 + 0xb0) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0xb8);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerVectorArrayVariable> @ 14e116710

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerVectorArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVectorArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerVectorArrayVariable> @ 14e116740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerVectorArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVectorArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerVectorArrayVariable> @ 14e1167f0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerVectorArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerVectorArrayVariable> @ 14e116c40

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerVectorArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x18);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FOptimusDeformerInstanceComponentBinding> @ 14e1171a0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusDeformerInstanceComponentBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusDeformerInstanceComponentBinding> @ 14e1171b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusDeformerInstanceComponentBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusDeformerInstanceComponentBinding> @ 14e117200

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusDeformerInstanceComponentBinding>(void *param_1)

{
  return;
}

// Construct<FRigVMTrait_OptimusDeformer> @ 14e117220

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_OptimusDeformer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_OptimusDeformer__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  return;
}

// ConstructForTests<FRigVMTrait_OptimusDeformer> @ 14e117260

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_OptimusDeformer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_OptimusDeformer__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  return;
}

// Copy<FOptimusDeformerInstanceComponentBinding> @ 14e1172a0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDeformerInstanceComponentBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FRigVMTrait_OptimusDeformer> @ 14e1172d0

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_OptimusDeformer>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_OptimusDeformer> @ 14e117320

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_OptimusDeformer>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar1 + 0x18),
               (TPersistentObjectPtr<FSoftObjectPath> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// Construct<FOptimusNodeGraphAction_AddLink> @ 14e117580

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_AddLink>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddLink__6B_;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_AddLink> @ 14e1175c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_AddLink>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddLink__6B_;
  return;
}

// Construct<FOptimusDataDomain> @ 14e1175f0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusDataDomain>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FOptimusDataDomain::FOptimusDataDomain(param_1);
  return;
}

// Destruct<FOptimusNodeGraphAction_AddLink> @ 14e117690

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_AddLink>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// ConstructForTests<FOptimusDataDomain> @ 14e1176e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusDataDomain>(void *param_1)

{
  ForAnyElementType *pFVar1;
  FName FStackX_8;
  
  *(undefined4 *)((longlong)param_1 + 0x18) = 1;
  *(undefined4 *)param_1 = 0;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x30);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  ::FName::FName(&FStackX_8,"Vertex");
  pFVar1->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,pFVar1,1,(int *)((longlong)param_1 + 0x3c));
  *(FName *)pFVar1->Data = FStackX_8;
  return;
}

// Destruct<FOptimusDataDomain> @ 14e1176f0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusDataDomain>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusNodeAction_SetPinDataDomain> @ 14e117780

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_SetPinDataDomain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinDataDomain__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x28));
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x68));
  return;
}

// PostSerialize<FOptimusDataDomain> @ 14e1177f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FOptimusDataDomain>(FArchive *param_1,void *param_2)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FOptimusObjectVersion::GUID);
    if (iVar1 < 7) {
      FOptimusDataDomain::BackCompFixupLevels(param_2);
      return;
    }
  }
  return;
}

// ConstructForTests<FOptimusNodeAction_SetPinDataDomain> @ 14e117830

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_SetPinDataDomain>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinDataDomain__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x28));
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((longlong)param_1 + 0x68));
  return;
}

// Destruct<FOptimusNodeAction_SetPinDataDomain> @ 14e1178c0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_SetPinDataDomain>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNodeGraphAction_AddLink> @ 14e1178d0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_AddLink>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    puVar1 = (undefined1 *)((longlong)param_2 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x40);
    *(undefined1 *)((longlong)param_1 + 0x38) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Copy<FOptimusDataDomain> @ 14e117970

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDataDomain>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 8));
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
      param_2 = (void *)((longlong)param_2 + 0x40);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FOptimusDataDomain> @ 14e117a10

bool __cdecl
UE::CoreUObject::Private::Identical<FOptimusDataDomain>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = FOptimusDataDomain::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// Copy<FOptimusNodeAction_SetPinDataDomain> @ 14e117a30

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_SetPinDataDomain>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30));
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x48),(FString *)((longlong)param_2 + 0x48));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x58),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x58));
    *(undefined4 *)((longlong)param_1 + 0x68) = *(undefined4 *)((longlong)param_2 + 0x68);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70));
    *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x80);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x88),(FString *)((longlong)param_2 + 0x88));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x98),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x98));
    param_2 = (void *)((longlong)param_2 + 0xa8);
    param_1 = (void *)((longlong)param_1 + 0xa8);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerVectorVariable> @ 14e117d10

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerVectorVariable>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVectorVariable__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerVectorVariable> @ 14e117d50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerVectorVariable>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVectorVariable__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FRigVMTrait_SetDeformerVectorVariable> @ 14e117d90

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerVectorVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerVectorVariable> @ 14e117f20

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerVectorVariable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    *(undefined8 *)((longlong)pvVar2 + 0x28) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x30);
  }
  return true;
}

// Construct<FOptimusDeformerInstanceExecInfo> @ 14e118180

void __cdecl UE::CoreUObject::Private::Construct<FOptimusDeformerInstanceExecInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FOptimusDeformerInstanceExecInfo> @ 14e118200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusDeformerInstanceExecInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FOptimusDeformerInstanceExecInfo> @ 14e118270

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusDeformerInstanceExecInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FOptimusDeformerInstanceExecInfo> @ 14e118490

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDeformerInstanceExecInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      *puVar5 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((longlong)pvVar4 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar4 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar4 + 0x10));
      }
      pFVar6 = (ForAnyElementType *)(puVar5 + 3);
      puVar5[2] = *(undefined8 *)((longlong)pvVar4 + 0x10);
      if (pFVar6 != (ForAnyElementType *)((longlong)pvVar4 + 0x18)) {
        iVar2 = *(int *)((longlong)pvVar4 + 0x20);
        piVar1 = (int *)((longlong)puVar5 + 0x24);
        pFVar3 = ((ForAnyElementType *)((longlong)pvVar4 + 0x18))->Data;
        *(int *)(puVar5 + 4) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,*piVar1,pFVar6,iVar2,piVar1);
          ConstructItems<TObjectPtr<UComputeDataProvider>,TObjectPtr<UComputeDataProvider>,int>
                    (pFVar6->Data,(TObjectPtr<UComputeDataProvider> *)pFVar3,iVar2);
        }
      }
      *(undefined1 *)(puVar5 + 5) = *(undefined1 *)((longlong)pvVar4 + 0x28);
      *(undefined1 *)((longlong)puVar5 + 0x29) = *(undefined1 *)((longlong)pvVar4 + 0x29);
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x30);
      puVar5 = puVar5 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOptimusNodeGraphAction_AddRemoveLink> @ 14e118b90

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_AddRemoveLink>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddRemoveLink__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_AddRemoveLink> @ 14e118bd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_AddRemoveLink>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddRemoveLink__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FOptimusNodeGraphAction_AddRemoveLink> @ 14e118c40

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_AddRemoveLink>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusNodeAction_SetPinType> @ 14e118d90

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_SetPinType>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinType__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FOptimusNodeAction_SetPinType> @ 14e118dc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_SetPinType>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinType__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FOptimusNodeAction_SetPinType> @ 14e118df0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_SetPinType>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusNodeGraphAction_AddRemoveLink> @ 14e118e70

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_AddRemoveLink>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    puVar1 = (undefined1 *)((longlong)param_2 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x40);
    *(undefined1 *)((longlong)param_1 + 0x38) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Copy<FOptimusNodeAction_SetPinType> @ 14e119110

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_SetPinType>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FOptimusVariableMetaDataEntry> @ 14e119490

void __cdecl UE::CoreUObject::Private::Construct<FOptimusVariableMetaDataEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusVariableMetaDataEntry> @ 14e1194b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusVariableMetaDataEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FOptimusVariableMetaDataEntry> @ 14e119510

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusVariableMetaDataEntry>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FRigVMTrait_SetDeformerVector2ArrayVariable> @ 14e119570

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerVector2ArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector2ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerVector2ArrayVariable> @ 14e1196a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerVector2ArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector2ArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerVector2ArrayVariable> @ 14e1196d0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerVector2ArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FOptimusVariableMetaDataEntry> @ 14e119720

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusVariableMetaDataEntry>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      ::FString::operator=
                ((FString *)(puVar1 + 1),
                 (FString *)((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FRigVMTrait_SetDeformerVector2ArrayVariable> @ 14e119800

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerVector2ArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FOptimusNode_ComponentSource_DuplicationInfo> @ 14e119e30

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNode_ComponentSource_DuplicationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusNode_ComponentSource_DuplicationInfo> @ 14e119ea0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNode_ComponentSource_DuplicationInfo>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusNode_ComponentSource_DuplicationInfo> @ 14e119fc0

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNode_ComponentSource_DuplicationInfo>(void *param_1)

{
  return;
}

// Construct<FRigVMTrait_SetDeformerBoolArrayVariable> @ 14e11a050

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerBoolArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerBoolArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_RemoveNodePair> @ 14e11a080

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_RemoveNodePair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveNodePair__6B_;
  return;
}

// Copy<FOptimusNode_ComponentSource_DuplicationInfo> @ 14e11a0f0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNode_ComponentSource_DuplicationInfo>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FRigVMTrait_SetDeformerBoolArrayVariable> @ 14e11a180

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerBoolArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerBoolArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_RemoveNodePair> @ 14e11a1b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_RemoveNodePair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_RemoveNodePair__6B_;
  return;
}

// Destruct<FRigVMTrait_SetDeformerBoolArrayVariable> @ 14e11a1e0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerBoolArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_RemoveNodePair> @ 14e11a230

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_RemoveNodePair>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusCompoundAction> @ 14e11a280

void __cdecl UE::CoreUObject::Private::Construct<FOptimusCompoundAction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusCompoundAction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusCompoundAction> @ 14e11a2b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusCompoundAction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusCompoundAction__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FOptimusCompoundAction> @ 14e11a360

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusCompoundAction>(void *param_1)

{
  DestructItems<TSharedPtr<FOptimusAction,1>,int>
            (*(TSharedPtr<FOptimusAction,1> **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusNodeAction_SetPinName> @ 14e11a3b0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_SetPinName>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinName__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FOptimusNodeAction_SetPinName> @ 14e11a3f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_SetPinName>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinName__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FOptimusNodeAction_SetPinName> @ 14e11a430

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_SetPinName>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerBoolArrayVariable> @ 14e11a470

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerBoolArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_RemoveNodePair> @ 14e11a590

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_RemoveNodePair>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x38);
  }
  return true;
}

// Copy<FOptimusCompoundAction> @ 14e11a720

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusCompoundAction>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Copy<FOptimusNodeAction_SetPinName> @ 14e11a730

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_SetPinName>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerVector2Variable> @ 14e11aa70

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerVector2Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector2Variable__6B_;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerVector2Variable> @ 14e11aaa0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerVector2Variable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerVector2Variable__6B_;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x18))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerVector2Variable> @ 14e11ab50

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerVector2Variable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerVector2Variable> @ 14e11ae10

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerVector2Variable>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar2 + 8),
               (FString *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)));
    uVar1 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x18) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar2 + 0x20) = uVar1;
    pvVar2 = (void *)((longlong)pvVar2 + 0x28);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerBoolVariable> @ 14e11bdf0

void __cdecl UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerBoolVariable>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerBoolVariable__6B_;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_AddNodePair> @ 14e11bea0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_AddNodePair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddNodePair__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerBoolVariable> @ 14e11bf20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerBoolVariable>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerBoolVariable__6B_;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_AddNodePair> @ 14e11bf40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_AddNodePair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddNodePair__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerBoolVariable> @ 14e11bf80

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerBoolVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_AddNodePair> @ 14e11c0c0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_AddNodePair>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Construct<FOptimusAction> @ 14e11c210

void __cdecl UE::CoreUObject::Private::Construct<FOptimusAction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FOptimusAction> @ 14e11c230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusAction>(void *param_1)

{
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FOptimusAction> @ 14e11c300

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusAction>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Construct<FOptimusNodeAction_SetPinValue> @ 14e11c320

void __cdecl UE::CoreUObject::Private::Construct<FOptimusNodeAction_SetPinValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinValue__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FOptimusNodeAction_SetPinValue> @ 14e11c3e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeAction_SetPinValue>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeAction_SetPinValue__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FOptimusNodeAction_SetPinValue> @ 14e11c540

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusNodeAction_SetPinValue>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerBoolVariable> @ 14e11c5a0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerBoolVariable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_AddNodePair> @ 14e11c660

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_AddNodePair>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    lVar3 = *(longlong *)((longlong)param_2 + 0x40);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x38);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)((longlong)param_1 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar4;
    *(longlong *)((longlong)param_1 + 0x40) = lVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    lVar3 = *(longlong *)((longlong)param_2 + 0x50);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)((longlong)param_1 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar4;
    *(longlong *)((longlong)param_1 + 0x50) = lVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    param_2 = (void *)((longlong)param_2 + 0x58);
    param_1 = (void *)((longlong)param_1 + 0x58);
  }
  return true;
}

// Construct<FOptimusValueContainerStruct> @ 14e11c9b0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusValueContainerStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FInstancedStruct::FInstancedStruct(param_1);
  return;
}

// ConstructForTests<FOptimusValueContainerStruct> @ 14e11c9d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusValueContainerStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FOptimusAction> @ 14e11c9e0

bool __cdecl UE::CoreUObject::Private::Copy<FOptimusAction>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FString *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (8 - (longlong)param_1);
      this = (FString *)((longlong)pvVar2 + 8);
      pvVar2 = (void *)((longlong)pvVar2 + 0x18);
      ::FString::operator=(this,(FString *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FOptimusValueContainerStruct> @ 14e11ca40

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusValueContainerStruct>(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    if ((*(longlong *)param_1 != 0) && ((*(uint *)(*(longlong *)param_1 + 8) & 0x40018000) == 0)) {
      (**(code **)(**(longlong **)param_1 + 0x300))
                (*(longlong **)param_1,*(undefined8 *)((longlong)param_1 + 8),1);
    }
    FMemory::Free(pvVar1);
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
    return;
  }
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  return;
}

// Copy<FOptimusNodeAction_SetPinValue> @ 14e11cb20

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeAction_SetPinValue>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
    param_2 = (void *)((longlong)param_2 + 0x48);
    param_1 = (void *)((longlong)param_1 + 0x48);
  }
  return true;
}

// Construct<FOptimusConstantContainer> @ 14e11ccd0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusConstantContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOptimusConstantContainer> @ 14e11cce0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusConstantContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOptimusConstantContainer> @ 14e11cd50

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusConstantContainer>(void *param_1)

{
  DestructItems<FOptimusKernelConstantContainer,int>
            (*(FOptimusKernelConstantContainer **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOptimusValueContainerStruct> @ 14e11cea0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusValueContainerStruct>
          (void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  FInstancedStruct *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FInstancedStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pFVar1) {
        FInstancedStruct::InitializeAs
                  (this,(pFVar1->ScriptStruct).field0_0x0.DebugPtr,pFVar1->StructMemory);
      }
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusConstantContainer> @ 14e11d110

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusConstantContainer>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FOptimusKernelConstantContainer *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FOptimusKernelConstantContainer,int>
                  ((FOptimusKernelConstantContainer *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FOptimusKernelConstantContainer *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FOptimusKernelConstantContainer,FOptimusKernelConstantContainer,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerFloatArrayVariable> @ 14e11d640

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerFloatArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerFloatArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerFloatArrayVariable> @ 14e11d790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerFloatArrayVariable>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerFloatArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerFloatArrayVariable> @ 14e11d880

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerFloatArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigVMTrait_SetDeformerFloatArrayVariable> @ 14e11db80

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerFloatArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar4 + 8),
               (FString *)((longlong)pvVar4 + (longlong)param_2 + (8 - (longlong)param_1)));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pFVar5 = (ForAnyElementType *)((longlong)pvVar4 + 0x18);
    if (pFVar5 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar4 + 0x24);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar4 + 0x20) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 3);
        }
      }
    }
    pvVar4 = (void *)((longlong)pvVar4 + 0x28);
  }
  return true;
}

// Construct<FOptimusVariableAction_SetDataType> @ 14e11de10

void __cdecl UE::CoreUObject::Private::Construct<FOptimusVariableAction_SetDataType>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FOptimusVariableAction_SetDataType::FOptimusVariableAction_SetDataType(param_1);
  return;
}

// ConstructForTests<FOptimusVariableAction_SetDataType> @ 14e11de90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusVariableAction_SetDataType>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusVariableAction_SetDataType__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Destruct<FOptimusVariableAction_SetDataType> @ 14e11dea0

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusVariableAction_SetDataType>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FOptimusVariableAction_SetDataType> @ 14e11e000

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusVariableAction_SetDataType>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28));
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    TPersistentObjectPtr<FSoftObjectPath>::operator=
              ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x58),
               (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x58));
    param_2 = (void *)((longlong)param_2 + 0x80);
    param_1 = (void *)((longlong)param_1 + 0x80);
  }
  return true;
}

// Construct<FRigVMTrait_SetDeformerNameArrayVariable> @ 14e11e3f0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerNameArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerNameArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Construct<FOptimusNodeGraphAction_AddRemoveNodePair> @ 14e11e420

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusNodeGraphAction_AddRemoveNodePair>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerNameArrayVariable> @ 14e11e490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerNameArrayVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerNameArrayVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusNodeGraphAction_AddRemoveNodePair> @ 14e11e4c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusNodeGraphAction_AddRemoveNodePair>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusNodeGraphAction_AddRemoveNodePair__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerNameArrayVariable> @ 14e11e4f0

void __cdecl
UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerNameArrayVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Destruct<FOptimusNodeGraphAction_AddRemoveNodePair> @ 14e11e540

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusNodeGraphAction_AddRemoveNodePair>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Construct<FOptimusCommentNodeAction_ResizeNode> @ 14e11e5e0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusCommentNodeAction_ResizeNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusCommentNodeAction_ResizeNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FOptimusCommentNodeAction_ResizeNode> @ 14e11e610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusCommentNodeAction_ResizeNode>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FOptimusCommentNodeAction_ResizeNode__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FOptimusCommentNodeAction_ResizeNode> @ 14e11e680

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusCommentNodeAction_ResizeNode>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FOptimusAction__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FRigVMTrait_SetDeformerNameArrayVariable> @ 14e11e6c0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigVMTrait_SetDeformerNameArrayVariable>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=
              ((FString *)((longlong)pvVar1 + 8),
               (FString *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x18),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Copy<FOptimusNodeGraphAction_AddRemoveNodePair> @ 14e11e740

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusNodeGraphAction_AddRemoveNodePair>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (void *)((longlong)param_1 + 0x38);
  }
  return true;
}

// Construct<FOptimusValidatedName> @ 14e11e810

void __cdecl UE::CoreUObject::Private::Construct<FOptimusValidatedName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FOptimusValidatedName> @ 14e11e860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOptimusValidatedName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FOptimusValidatedName> @ 14e11e870

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusValidatedName>(void *param_1)

{
  return;
}

// Copy<FOptimusCommentNodeAction_ResizeNode> @ 14e11e880

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusCommentNodeAction_ResizeNode>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    param_1 = (void *)((longlong)param_1 + 0x38);
    param_2 = (void *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FOptimusKernelConstantContainer> @ 14e11e9e0

void __cdecl UE::CoreUObject::Private::Construct<FOptimusKernelConstantContainer>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FOptimusKernelConstantContainer> @ 14e11ea30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusKernelConstantContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FOptimusKernelConstantContainer> @ 14e11ea70

void __cdecl UE::CoreUObject::Private::Destruct<FOptimusKernelConstantContainer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  DestructItems<FOptimusConstant,int>
            (*(FOptimusConstant **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FOptimusConstant,int>(*(FOptimusConstant **)param_1,*(int *)((longlong)param_1 + 8))
  ;
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FOptimusValidatedName> @ 14e11ead0

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusValidatedName>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FOptimusKernelConstantContainer> @ 14e11eb00

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusKernelConstantContainer>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FOptimusConstant,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<FOptimusConstant,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FOptimusConstant,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FOptimusConstant,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)((longlong)param_1 + 0x20),
               (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x70);
    param_1 = (TArray<FOptimusConstant,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70);
  }
  return true;
}

// Construct<FOptimusDataInterfacePropertyOverrideInfo> @ 14e11ebc0

void __cdecl
UE::CoreUObject::Private::Construct<FOptimusDataInterfacePropertyOverrideInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FOptimusDataInterfacePropertyOverrideInfo> @ 14e11ec40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOptimusDataInterfacePropertyOverrideInfo>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// StructuredSerializeFromMismatchedTag<FOptimusValidatedName> @ 14e11ecb0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FOptimusValidatedName>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName *pFVar4;
  FName FVar5;
  int iVar6;
  FName FVar7;
  FName local_res8;
  FString local_18;
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar7) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),param_3);
    bVar2 = true;
  }
  else {
    FVar1 = param_1->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_res8);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 == FVar5) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_18);
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                              FNAME_Add);
      *(FName *)param_3 = *pFVar4;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

// Destruct<FOptimusDataInterfacePropertyOverrideInfo> @ 14e11edd0

void __cdecl
UE::CoreUObject::Private::Destruct<FOptimusDataInterfacePropertyOverrideInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Construct<FRigVMTrait_SetDeformerFloatVariable> @ 14e11eed0

void __cdecl
UE::CoreUObject::Private::Construct<FRigVMTrait_SetDeformerFloatVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerFloatVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FRigVMTrait_SetDeformerFloatVariable> @ 14e11ef00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigVMTrait_SetDeformerFloatVariable>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FRigVMTrait_SetDeformerFloatVariable__6B_;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FRigVMTrait_SetDeformerFloatVariable> @ 14e11efa0

void __cdecl UE::CoreUObject::Private::Destruct<FRigVMTrait_SetDeformerFloatVariable>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRigVMTrait__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FOptimusDataInterfacePropertyOverrideInfo> @ 14e11f080

bool __cdecl
UE::CoreUObject::Private::Copy<FOptimusDataInterfacePropertyOverrideInfo>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&> @ 14e1298a0

FOptimusDataTypeRegistry * __cdecl
UE::Core::Private::DereferenceIfNecessary<FOptimusDataTypeRegistry,FOptimusDataTypeRegistry_*_&>
          (FOptimusDataTypeRegistry **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOptimusDeformerDynamicInstanceManager,UOptimusDeformerDynamicInstanceManager_*_&> @ 14e1298c0

UOptimusDeformerDynamicInstanceManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UOptimusDeformerDynamicInstanceManager,UOptimusDeformerDynamicInstanceManager_*_&>
          (UOptimusDeformerDynamicInstanceManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&> @ 14e1298e0

UOptimusDeformerInstance * __cdecl
UE::Core::Private::DereferenceIfNecessary<UOptimusDeformerInstance,UOptimusDeformerInstance_*_&>
          (UOptimusDeformerInstance **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOptimusNode,UOptimusNode_*_&> @ 14e129900

UOptimusNode * __cdecl
UE::Core::Private::DereferenceIfNecessary<UOptimusNode,UOptimusNode_*_&>(UOptimusNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOptimusNode_GraphTerminal,UOptimusNode_GraphTerminal_*_&> @ 14e129920

UOptimusNode_GraphTerminal * __cdecl
UE::Core::Private::DereferenceIfNecessary<UOptimusNode_GraphTerminal,UOptimusNode_GraphTerminal_*_&>
          (UOptimusNode_GraphTerminal **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UOptimusNode_SubGraphReference,UOptimusNode_SubGraphReference_*_&> @ 14e129940

UOptimusNode_SubGraphReference * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UOptimusNode_SubGraphReference,UOptimusNode_SubGraphReference_*_&>
          (UOptimusNode_SubGraphReference **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_> @ 14e143bf0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<IOptimusNodePinRouter_const_*> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<IOptimusNodePinRouter_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_> @ 14e143c90

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
          *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
  ::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_> @ 14e143d30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
          (ushort param_1,ForElementType<IOptimusNodePinRouter_const_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<IOptimusNodePinRouter_const_*>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_> @ 14e143df0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_>
          (ushort param_1,
          ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_> @ 14e143f90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
          (ushort param_1,ForElementType<Optimus::Expression::FParseLocation> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Optimus::Expression::FParseLocation>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_> @ 14e144060

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
          (ushort param_1,ForElementType<TStringView<wchar_t>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_> @ 14e144130

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
          (ushort param_1,
          ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_> @ 14e144200

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
          (ushort param_1,
          ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 14e1442d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_> @ 14e144390

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
          (uint param_1,uint param_2,ForElementType<IOptimusNodePinRouter_const_*> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<IOptimusNodePinRouter_const_*>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_> @ 14e144450

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<enum_Optimus::Expression::FEngine::EOperatorToken,Optimus::Expression::FParseLocation>_>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_> @ 14e1445d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<Optimus::Expression::FParseLocation>_>
          (uint param_1,uint param_2,ForElementType<Optimus::Expression::FParseLocation> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<Optimus::Expression::FParseLocation>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_> @ 14e144690

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
          (uint param_1,uint param_2,
          ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_> @ 14e144750

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TVariant<Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
          *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TVariant<enum_Optimus::Expression::FExpressionObject::EOperator,FName,Optimus::Expression::FExpressionObject::FFunctionRef,float>_>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

