// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147510ec0

UScriptStruct * __cdecl FAnimSubsystem_PropertyAccess::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_PropertyAccess,(UObject *)pUVar1,
                         L"AnimSubsystem_PropertyAccess");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystem_PropertyAccess.OuterSingleton;
}

// OnPreUpdate_GameThread @ 147510f00

void __thiscall
FAnimSubsystem_PropertyAccess::OnPreUpdate_GameThread
          (FAnimSubsystem_PropertyAccess *this,FAnimSubsystemUpdateContext *param_1)

{
  FCopyBatchId local_res8 [8];
  
  local_res8[0].Id = 3;
  PropertyAccess::ProcessCopies((UObject *)param_1->AnimInstance,&this->Library,local_res8);
  return;
}

// OnPostUpdate_GameThread @ 147510f30

void __thiscall
FAnimSubsystem_PropertyAccess::OnPostUpdate_GameThread
          (FAnimSubsystem_PropertyAccess *this,FAnimSubsystemUpdateContext *param_1)

{
  FCopyBatchId local_res8 [8];
  
  local_res8[0].Id = 4;
  PropertyAccess::ProcessCopies((UObject *)param_1->AnimInstance,&this->Library,local_res8);
  return;
}

// OnPreUpdate_WorkerThread @ 147510f60

void __thiscall
FAnimSubsystem_PropertyAccess::OnPreUpdate_WorkerThread
          (FAnimSubsystem_PropertyAccess *this,FAnimSubsystemParallelUpdateContext *param_1)

{
  FCopyBatchId local_res8 [8];
  
  local_res8[0].Id = 1;
  PropertyAccess::ProcessCopies(param_1->Proxy->AnimInstanceObject,&this->Library,local_res8);
  return;
}

// OnPostUpdate_WorkerThread @ 147510fa0

void __thiscall
FAnimSubsystem_PropertyAccess::OnPostUpdate_WorkerThread
          (FAnimSubsystem_PropertyAccess *this,FAnimSubsystemParallelUpdateContext *param_1)

{
  FCopyBatchId local_res8 [8];
  
  local_res8[0].Id = 2;
  PropertyAccess::ProcessCopies(param_1->Proxy->AnimInstanceObject,&this->Library,local_res8);
  return;
}

// OnPostLoad @ 147510fe0

void __thiscall
FAnimSubsystem_PropertyAccess::OnPostLoad
          (FAnimSubsystem_PropertyAccess *this,FAnimSubsystemPostLoadContext *param_1)

{
  PropertyAccess::PatchPropertyOffsets(&this->Library);
  return;
}

