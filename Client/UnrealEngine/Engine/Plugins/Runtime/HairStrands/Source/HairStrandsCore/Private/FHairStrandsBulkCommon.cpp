// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 9

// ~FHairStrandsBulkCommon @ 14dfb0800

void __thiscall FHairStrandsBulkCommon::~FHairStrandsBulkCommon(FHairStrandsBulkCommon *this)

{
  *this = (FHairStrandsBulkCommon)&___7FHairStrandsBulkCommon__6B_;
  return;
}

// GetResourceVersion @ 14dfc9220

void __thiscall
FHairStrandsBulkCommon::GetResourceVersion(FHairStrandsBulkCommon *this,FArchive *param_1)

{
  return;
}

// Read_DDC @ 14e0a9a50

void __thiscall
FHairStrandsBulkCommon::Read_DDC
          (FHairStrandsBulkCommon *this,FHairStreamingRequest *param_1,
          TArray<UE::DerivedData::FCacheGetChunkRequest,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// Read_IO @ 14e0a9a60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FHairStrandsBulkCommon::Read_IO
          (FHairStrandsBulkCommon *this,FHairStreamingRequest *param_1,
          FBulkDataBatchRequest *param_2)

{
  int iVar1;
  uint uVar2;
  FBuilder local_48;
  undefined4 local_30 [2];
  FHairStreamingRequest *local_28;
  FBuilder *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar1 = (**(code **)((longlong)*this + 0x10))();
  FBulkDataBatchRequest::FBatchBuilder::FBatchBuilder((FBatchBuilder *)&local_48,iVar1);
  local_20 = &local_48;
  local_30[0] = 3;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = param_1;
  uVar2 = (**(code **)((longlong)*this + 0x10))(this);
  if (-1 < (int)uVar2) {
    if ((param_1->Chunks).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar2,&(param_1->Chunks).AllocatorInstance,(param_1->Chunks).ArrayNum,
                 &(param_1->Chunks).ArrayMax);
    }
    (**(code **)((longlong)*this + 0x18))(this,local_30);
    FBulkDataBatchRequest::FBatchBuilder::Issue((FBatchBuilder *)local_20,param_2);
    FBulkDataBatchRequest::FBuilder::~FBuilder(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Serialize @ 14e0ac460

void __thiscall
FHairStrandsBulkCommon::Serialize(FHairStrandsBulkCommon *this,FArchive *param_1,UObject *param_2)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  FArchive *local_20;
  UObject *local_18;
  
  (**(code **)((longlong)*this + 8))();
  (**(code **)((longlong)*this + 0x20))(this,param_1);
  local_38[0] = 4;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = param_1;
  local_18 = param_2;
  (**(code **)((longlong)*this + 0x18))(this,local_38);
  return;
}

// SerializeData @ 14e0ac4d0

void __thiscall
FHairStrandsBulkCommon::SerializeData
          (FHairStrandsBulkCommon *this,FArchive *param_1,UObject *param_2)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  FArchive *local_20;
  UObject *local_18;
  
  (**(code **)((longlong)*this + 0x20))();
  local_38[0] = 4;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = param_1;
  local_18 = param_2;
  (**(code **)((longlong)*this + 0x18))(this,local_38);
  return;
}

// Unload @ 14e0b15c0

void __thiscall
FHairStrandsBulkCommon::Unload(FHairStrandsBulkCommon *this,FHairStreamingRequest *param_1)

{
  uint uVar1;
  undefined4 local_38 [2];
  FHairStreamingRequest *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_38[0] = 5;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = param_1;
  uVar1 = (**(code **)((longlong)*this + 0x10))();
  if (-1 < (int)uVar1) {
    if ((param_1->Chunks).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar1,&(param_1->Chunks).AllocatorInstance,(param_1->Chunks).ArrayNum,
                 &(param_1->Chunks).ArrayMax);
    }
    (**(code **)((longlong)*this + 0x18))(this,local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// Write_DDC @ 14e0b1a90

void __thiscall
FHairStrandsBulkCommon::Write_DDC
          (FHairStrandsBulkCommon *this,UObject *param_1,
          TArray<UE::DerivedData::FCachePutValueRequest,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// Write_IO @ 14e0b1aa0

void __thiscall
FHairStrandsBulkCommon::Write_IO(FHairStrandsBulkCommon *this,UObject *param_1,FArchive *param_2)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  FArchive *local_20;
  UObject *local_18;
  
  (**(code **)((longlong)*this + 0x20))(this,param_2);
  local_38[0] = 4;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  (**(code **)((longlong)*this + 0x18))(this,local_38);
  return;
}

