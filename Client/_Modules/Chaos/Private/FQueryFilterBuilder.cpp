// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// BuildFromLegacyQueryFilter @ 1438a1140

FQueryFilterData * __cdecl
Chaos::Filter::FQueryFilterBuilder::BuildFromLegacyQueryFilter
          (FQueryFilterData *__return_storage_ptr__,FCollisionFilterData *param_1)

{
  __return_storage_ptr__->Word0 = param_1->Word0;
  __return_storage_ptr__->Word1 = param_1->Word1;
  __return_storage_ptr__->Word2 = param_1->Word2;
  __return_storage_ptr__->Word3 = param_1->Word3;
  return __return_storage_ptr__;
}

// CreateLegacyObjectTypeFilter @ 1438abbf0

FQueryFilterData * __cdecl
Chaos::Filter::FQueryFilterBuilder::CreateLegacyObjectTypeFilter
          (FQueryFilterData *__return_storage_ptr__,uint param_1,bool param_2,uchar param_3,
          EFilterFlags param_4)

{
  __return_storage_ptr__->Word1 = param_1;
  __return_storage_ptr__->Word0 = 0;
  __return_storage_ptr__->Word2 = 0;
  __return_storage_ptr__->Word3 = ((uint)param_3 << 5 | (uint)param_2) << 0x15 | (uint)param_4;
  return __return_storage_ptr__;
}

// CreateLegacyTraceFilter @ 1438abc20

FQueryFilterData * __cdecl
Chaos::Filter::FQueryFilterBuilder::CreateLegacyTraceFilter
          (FQueryFilterData *__return_storage_ptr__,uchar param_1,uint param_2,uint param_3,
          uchar param_4,EFilterFlags param_5)

{
  __return_storage_ptr__->Word1 = param_2;
  __return_storage_ptr__->Word0 = 1;
  __return_storage_ptr__->Word2 = param_3;
  __return_storage_ptr__->Word3 = ((uint)param_4 << 5 | (uint)param_1) << 0x15 | (uint)param_5;
  return __return_storage_ptr__;
}

// GetLegacyQueryFilter @ 1438ba7b0

FCollisionFilterData * __cdecl
Chaos::Filter::FQueryFilterBuilder::GetLegacyQueryFilter
          (FCollisionFilterData *__return_storage_ptr__,FQueryFilterData *param_1)

{
  __return_storage_ptr__->Word0 = param_1->Word0;
  __return_storage_ptr__->Word1 = param_1->Word1;
  __return_storage_ptr__->Word2 = param_1->Word2;
  __return_storage_ptr__->Word3 = param_1->Word3;
  return __return_storage_ptr__;
}

