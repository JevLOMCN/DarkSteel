// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// RemoveConnection @ 14424dd60

void __thiscall
UE::Net::FSharedConnectionFilterStatus::RemoveConnection
          (FSharedConnectionFilterStatus *this,FConnectionHandle param_1)

{
  int iVar1;
  uint uVar2;
  FConnectionHandle local_res10 [3];
  
  uVar2 = param_1.ParentConnectionId;
  if (uVar2 == this->ParentConnectionId) {
    local_res10[0].ChildConnectionId = param_1.ChildConnectionId;
    if ((uVar2 != 0) && (local_res10[0].ChildConnectionId == 0)) {
      if (*(int *)&(this->AllowConnections).Elements.field_0x38 !=
          *(int *)&(this->AllowConnections).Elements.field_0x5c) {
        local_res10[0] = param_1;
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::UnhashElements(&this->AllowConnections);
        iVar1 = *(int *)&(this->AllowConnections).Elements.field_0x3c;
        *(undefined4 *)&(this->AllowConnections).Elements.field_0x38 = 0;
        if (iVar1 < 0) {
          Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                    (0xc,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>
                              *)this,0,(int *)&(this->AllowConnections).Elements.field_0x3c);
        }
        *(undefined4 *)&(this->AllowConnections).Elements.field_0x58 = 0xffffffff;
        *(undefined4 *)&(this->AllowConnections).Elements.field_0x5c = 0;
        *(undefined4 *)&(this->AllowConnections).Elements.field_0x50 = 0;
      }
      this->ParentConnectionId = 0;
      return;
    }
    local_res10[0].ParentConnectionId = 0;
    if (uVar2 != 0) {
      local_res10[0].ParentConnectionId = local_res10[0].ChildConnectionId;
    }
    if (*(int *)&(this->AllowConnections).Elements.field_0x38 !=
        *(int *)&(this->AllowConnections).Elements.field_0x5c) {
      TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::RemoveImpl<unsigned_int>
                (&this->AllowConnections,local_res10[0].ParentConnectionId,
                 &local_res10[0].ParentConnectionId);
    }
  }
  return;
}

// SetFilterStatus @ 144251d30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Net::FSharedConnectionFilterStatus::SetFilterStatus
          (FSharedConnectionFilterStatus *this,FConnectionHandle param_1,ENetFilterStatus param_2)

{
  uint uVar1;
  FConnectionHandle local_res10 [2];
  uint local_res20 [2];
  
  uVar1 = param_1.ParentConnectionId;
  local_res10[0] = param_1;
  if (uVar1 == 0) {
    if (1 < (byte)LogIrisFiltering._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      return false;
    }
  }
  else {
    if ((this->ParentConnectionId == 0) || (uVar1 == this->ParentConnectionId)) {
      this->ParentConnectionId = uVar1;
      local_res10[0].ChildConnectionId = param_1.ChildConnectionId;
      if (param_2 == Allow) {
        local_res10[0].ParentConnectionId = 0;
        if (uVar1 != 0) {
          local_res10[0].ParentConnectionId = local_res10[0].ChildConnectionId;
        }
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::Emplace<unsigned_int>(&this->AllowConnections,local_res20,(bool *)local_res10);
        return true;
      }
      local_res10[0].ParentConnectionId = 0;
      if (uVar1 != 0) {
        local_res10[0].ParentConnectionId = local_res10[0].ChildConnectionId;
      }
      if (*(int *)&(this->AllowConnections).Elements.field_0x38 !=
          *(int *)&(this->AllowConnections).Elements.field_0x5c) {
        TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::RemoveImpl<unsigned_int>
                  (&this->AllowConnections,local_res10[0].ParentConnectionId,
                   &local_res10[0].ParentConnectionId);
      }
      return true;
    }
    if (1 < (byte)LogIrisFiltering._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
    }
  }
  return false;
}

