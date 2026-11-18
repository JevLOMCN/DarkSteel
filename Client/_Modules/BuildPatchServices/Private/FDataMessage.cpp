// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// FDataMessage @ 143221570

/* WARNING: Enum "Type": Some values do not have unique names */

FDataMessage * __thiscall
BuildPatchServices::FDataMessage::FDataMessage(FDataMessage *this,long64 param_1)

{
  int *piVar1;
  
  this->DataInfo = param_1;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Memory).ArrayMax;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  (this->Memory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Memory).ArrayNum = 0;
  *piVar1 = 0;
  if ((param_1 < 0) && (1 < (byte)LogChunkDatabaseWriter._0_1_)) {
    UE::Logging::Private::BasicLog<2>
              (&`public:___cdecl_BuildPatchServices::FDataMessage::FDataMessage(__int64)___ptr64'::
                __l6::LOG_Static,(FLogCategoryBase *)&LogChunkDatabaseWriter);
  }
  (this->Memory).ArrayNum = 0;
  if (*piVar1 < 0x200000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0x200000,&(this->Memory).AllocatorInstance,0,piVar1);
  }
  return this;
}

