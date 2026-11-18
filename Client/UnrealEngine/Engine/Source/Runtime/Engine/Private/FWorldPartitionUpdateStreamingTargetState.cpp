// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148aa8bf0

UScriptStruct * __cdecl FWorldPartitionUpdateStreamingTargetState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionUpdateStreamingTargetState,
                         (UObject *)pUVar1,L"WorldPartitionUpdateStreamingTargetState");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionUpdateStreamingTargetState.OuterSingleton;
}

// IsEmpty @ 148ad4450

bool __thiscall
FWorldPartitionUpdateStreamingTargetState::IsEmpty(FWorldPartitionUpdateStreamingTargetState *this)

{
  if (((((this->ToLoadCells).ArrayNum == 0) && ((this->ToActivateCells).ArrayNum == 0)) &&
      ((this->ToUnloadCells).ArrayNum == 0)) && ((this->ToDeactivateCells).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Reset @ 148ad9ca0

void __thiscall
FWorldPartitionUpdateStreamingTargetState::Reset(FWorldPartitionUpdateStreamingTargetState *this)

{
  (this->ToLoadCells).ArrayNum = 0;
  if ((this->ToLoadCells).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->ToLoadCells).ArrayMax);
  }
  (this->ToActivateCells).ArrayNum = 0;
  if ((this->ToActivateCells).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ToActivateCells).AllocatorInstance,0,&(this->ToActivateCells).ArrayMax)
    ;
  }
  (this->ToDeactivateCells).ArrayNum = 0;
  if ((this->ToDeactivateCells).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ToDeactivateCells).AllocatorInstance,0,
               &(this->ToDeactivateCells).ArrayMax);
  }
  (this->ToUnloadCells).ArrayNum = 0;
  if ((this->ToUnloadCells).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ToUnloadCells).AllocatorInstance,0,&(this->ToUnloadCells).ArrayMax);
  }
  this->StreamingPerformance = Good;
  return;
}

