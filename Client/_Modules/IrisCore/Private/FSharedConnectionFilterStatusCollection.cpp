// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// FindOrAddSharedConnectionFilterStatus @ 14423a380

FSharedConnectionFilterStatus * __thiscall
UE::Net::FSharedConnectionFilterStatusCollection::FindOrAddSharedConnectionFilterStatus
          (FSharedConnectionFilterStatusCollection *this,uint param_1)

{
  FConnectionHandle FVar1;
  FSharedConnectionFilterStatus *this_00;
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  this_00 = TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
            ::FindOrAddImpl<unsigned_int_const_&>
                      ((TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
                        *)this,param_1,local_res10);
  FVar1.ChildConnectionId = 0;
  FVar1.ParentConnectionId = local_res10[0];
  FSharedConnectionFilterStatus::SetFilterStatus(this_00,FVar1,Disallow);
  return this_00;
}

// FindSharedConnectionFilterStatus @ 14423a3d0

FSharedConnectionFilterStatus * __thiscall
UE::Net::FSharedConnectionFilterStatusCollection::FindSharedConnectionFilterStatus
          (FSharedConnectionFilterStatusCollection *this,uint param_1)

{
  int iVar1;
  FSharedConnectionFilterStatus *pFVar2;
  FSharedConnectionFilterStatus *pFVar3;
  undefined1 *puVar4;
  FSharedConnectionFilterStatus *pFVar5;
  
  pFVar5 = (FSharedConnectionFilterStatus *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->ParentToFilterStatus).field_0x8 !=
      *(int *)&(this->ParentToFilterStatus).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ParentToFilterStatus).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToFilterStatus).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ParentToFilterStatus).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        pFVar2 = (FSharedConnectionFilterStatus *)
                 ((longlong)iVar1 * 0x90 + *(longlong *)&this->ParentToFilterStatus);
        if (*(uint *)&(pFVar2->AllowConnections).Elements == param_1) break;
        iVar1 = *(int *)&pFVar2[1].AllowConnections.Elements.field_0x8;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FSharedConnectionFilterStatus *)&(pFVar2->AllowConnections).Elements.field_0x8;
  if (pFVar2 == (FSharedConnectionFilterStatus *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindSharedConnectionFilterStatus @ 14423a450

FSharedConnectionFilterStatus * __thiscall
UE::Net::FSharedConnectionFilterStatusCollection::FindSharedConnectionFilterStatus
          (FSharedConnectionFilterStatusCollection *this,uint param_1)

{
  int iVar1;
  FSharedConnectionFilterStatus *pFVar2;
  FSharedConnectionFilterStatus *pFVar3;
  undefined1 *puVar4;
  FSharedConnectionFilterStatus *pFVar5;
  
  pFVar5 = (FSharedConnectionFilterStatus *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->ParentToFilterStatus).field_0x8 !=
      *(int *)&(this->ParentToFilterStatus).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ParentToFilterStatus).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToFilterStatus).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ParentToFilterStatus).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar1 != -1) {
      do {
        pFVar2 = (FSharedConnectionFilterStatus *)
                 ((longlong)iVar1 * 0x90 + *(longlong *)&this->ParentToFilterStatus);
        if (*(uint *)&(pFVar2->AllowConnections).Elements == param_1) break;
        iVar1 = *(int *)&pFVar2[1].AllowConnections.Elements.field_0x8;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FSharedConnectionFilterStatus *)&(pFVar2->AllowConnections).Elements.field_0x8;
  if (pFVar2 == (FSharedConnectionFilterStatus *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// GetFilterStatus @ 14423c480

ENetFilterStatus __thiscall
UE::Net::FSharedConnectionFilterStatusCollection::GetFilterStatus
          (FSharedConnectionFilterStatusCollection *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ParentToFilterStatus).field_0x8 !=
      *(int *)&(this->ParentToFilterStatus).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ParentToFilterStatus).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ParentToFilterStatus).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->ParentToFilterStatus).field_0x48 - 1U & param_1) * 4
                     );
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x90 + *(longlong *)&this->ParentToFilterStatus);
        if (*puVar2 == param_1) {
          puVar3 = puVar2 + 2;
          if (puVar2 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return Disallow;
          }
          return (ENetFilterStatus)(puVar3[0xe] != puVar3[0x17]);
        }
        uVar1 = puVar2[0x22];
      } while (uVar1 != 0xffffffff);
    }
  }
  return Disallow;
}

// RemoveConnection @ 14424de20

void __thiscall
UE::Net::FSharedConnectionFilterStatusCollection::RemoveConnection
          (FSharedConnectionFilterStatusCollection *this,FConnectionHandle param_1)

{
  FSharedConnectionFilterStatus *this_00;
  uint uVar1;
  FConnectionHandle local_res10 [3];
  
  uVar1 = param_1.ParentConnectionId;
  local_res10[0] = param_1;
  if ((uVar1 == 0) || (param_1.ChildConnectionId != 0)) {
    if ((uVar1 != 0) && (param_1.ChildConnectionId != 0)) {
      this_00 = FindSharedConnectionFilterStatus(this,uVar1);
      if ((this_00 != (FSharedConnectionFilterStatus *)0x0) &&
         (uVar1 == this_00->ParentConnectionId)) {
        local_res10[0].ParentConnectionId = local_res10[0].ChildConnectionId;
        if (*(int *)&(this_00->AllowConnections).Elements.field_0x38 !=
            *(int *)&(this_00->AllowConnections).Elements.field_0x5c) {
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::RemoveImpl<unsigned_int>
                    (&this_00->AllowConnections,local_res10[0].ChildConnectionId,
                     &local_res10[0].ParentConnectionId);
        }
      }
    }
  }
  else if (*(int *)&(this->ParentToFilterStatus).field_0x8 !=
           *(int *)&(this->ParentToFilterStatus).field_0x34) {
    TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned_int>
              ((TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
                *)this,uVar1,&local_res10[0].ParentConnectionId);
    return;
  }
  return;
}

// SetFilterStatus @ 144251e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FSharedConnectionFilterStatusCollection::SetFilterStatus
          (FSharedConnectionFilterStatusCollection *this,FConnectionHandle param_1,
          ENetFilterStatus param_2)

{
  FConnectionHandle FVar1;
  FSharedConnectionFilterStatus *pFVar2;
  uint uVar3;
  uint local_res10 [4];
  uint local_res20;
  undefined4 uStackX_24;
  
  uVar3 = param_1.ParentConnectionId;
  if (uVar3 == 0) {
    if (1 < (byte)LogIrisFiltering._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIrisFiltering);
      return;
    }
  }
  else {
    local_res10[0] = uVar3;
    if (param_2 == Allow) {
      pFVar2 = TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
               ::FindOrAddImpl<unsigned_int_const_&>
                         ((TMapBase<unsigned_int,UE::Net::FSharedConnectionFilterStatus,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>_>
                           *)this,uVar3,local_res10);
      local_res20 = local_res10[0];
      uStackX_24 = 0;
      FVar1.ChildConnectionId = 0;
      FVar1.ParentConnectionId = local_res10[0];
      FSharedConnectionFilterStatus::SetFilterStatus(pFVar2,FVar1,Disallow);
      FSharedConnectionFilterStatus::SetFilterStatus(pFVar2,param_1,Allow);
      return;
    }
    pFVar2 = FindSharedConnectionFilterStatus(this,uVar3);
    if (((pFVar2 != (FSharedConnectionFilterStatus *)0x0) &&
        (FSharedConnectionFilterStatus::SetFilterStatus(pFVar2,param_1,param_2),
        *(int *)&(pFVar2->AllowConnections).Elements.field_0x38 ==
        *(int *)&(pFVar2->AllowConnections).Elements.field_0x5c)) &&
       (*(int *)&(this->ParentToFilterStatus).field_0x8 !=
        *(int *)&(this->ParentToFilterStatus).field_0x34)) {
      TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,UE::Net::FSharedConnectionFilterStatus>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Net::FSharedConnectionFilterStatus,0>,FDefaultSetAllocator>
                  *)this,uVar3,local_res10);
    }
  }
  return;
}

