// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 16

// ~FFoliageISMActor @ 145eda100

void __thiscall FFoliageISMActor::~FFoliageISMActor(FFoliageISMActor *this)

{
  *(undefined ***)&this->field_0x8 = &___7IISMPartitionInstanceManager__6B_;
  *(undefined ***)this = &___7FFoliageImpl__6B_;
  return;
}

// CanEditISMPartitionInstance @ 145edf290

bool __thiscall
FFoliageISMActor::CanEditISMPartitionInstance(FFoliageISMActor *this,FISMClientInstanceId *param_1)

{
  return false;
}

// CanMoveISMPartitionInstance @ 145edf2b0

bool __thiscall
FFoliageISMActor::CanMoveISMPartitionInstance
          (FFoliageISMActor *this,FISMClientInstanceId *param_1,ETypedElementWorldType param_2)

{
  return false;
}

// DeleteISMPartitionInstances @ 145edfc50

bool __thiscall
FFoliageISMActor::DeleteISMPartitionInstances
          (FFoliageISMActor *this,TArrayView<FISMClientInstanceId_const_,int> *param_1)

{
  return false;
}

// DuplicateISMPartitionInstances @ 145ee04d0

bool __thiscall
FFoliageISMActor::DuplicateISMPartitionInstances
          (FFoliageISMActor *this,TArrayView<FISMClientInstanceId_const_,int> *param_1,
          TArray<FISMClientInstanceId,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetISMPartitionInstanceDisplayName @ 145ee3680

FText * __thiscall
FFoliageISMActor::GetISMPartitionInstanceDisplayName
          (FFoliageISMActor *this,FText *__return_storage_ptr__,FISMClientInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetISMPartitionInstanceTooltip @ 145ee36c0

FText * __thiscall
FFoliageISMActor::GetISMPartitionInstanceTooltip
          (FFoliageISMActor *this,FText *__return_storage_ptr__,FISMClientInstanceId *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetISMPartitionInstanceTransform @ 145ee3700

bool __thiscall
FFoliageISMActor::GetISMPartitionInstanceTransform
          (FFoliageISMActor *this,FISMClientInstanceId *param_1,TTransform<double> *param_2,
          bool param_3)

{
  return false;
}

// NotifyISMPartitionInstanceMovementEnded @ 145ee7cc0

void __thiscall
FFoliageISMActor::NotifyISMPartitionInstanceMovementEnded
          (FFoliageISMActor *this,FISMClientInstanceId *param_1)

{
  return;
}

// NotifyISMPartitionInstanceMovementOngoing @ 145ee7cd0

void __thiscall
FFoliageISMActor::NotifyISMPartitionInstanceMovementOngoing
          (FFoliageISMActor *this,FISMClientInstanceId *param_1)

{
  return;
}

// NotifyISMPartitionInstanceMovementStarted @ 145ee7ce0

void __thiscall
FFoliageISMActor::NotifyISMPartitionInstanceMovementStarted
          (FFoliageISMActor *this,FISMClientInstanceId *param_1)

{
  return;
}

// NotifyISMPartitionInstanceSelectionChanged @ 145ee7cf0

void __thiscall
FFoliageISMActor::NotifyISMPartitionInstanceSelectionChanged
          (FFoliageISMActor *this,FISMClientInstanceId *param_1,bool param_2)

{
  return;
}

// PostLoad @ 145ee89c0

void __thiscall FFoliageISMActor::PostLoad(FFoliageISMActor *this)

{
  return;
}

// PostSerialize @ 145ee8a40

void __thiscall FFoliageISMActor::PostSerialize(FFoliageISMActor *this,FArchive *param_1)

{
  return;
}

// Serialize @ 145eeb250

void __thiscall FFoliageISMActor::Serialize(FFoliageISMActor *this,FArchive *param_1)

{
  return;
}

// SetISMPartitionInstanceTransform @ 145eeb640

bool __thiscall
FFoliageISMActor::SetISMPartitionInstanceTransform
          (FFoliageISMActor *this,FISMClientInstanceId *param_1,TTransform<double> *param_2,
          bool param_3,bool param_4)

{
  return false;
}

