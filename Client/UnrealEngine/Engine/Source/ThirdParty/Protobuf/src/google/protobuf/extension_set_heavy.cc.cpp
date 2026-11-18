// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 51

// AddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14fb7a7a0

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::AddAllocated<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(class
   google::protobuf::MessageLite * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
          (RepeatedPtrFieldBase *this,MessageLite *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  byte bVar5;
  RepeatedPtrFieldBase *pRVar6;
  Arena *pAVar7;
  bool bVar8;
  
  pAVar7 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar7 = (Arena *)(pAVar7->impl_).tag_and_id_;
  }
  if (this->arena_ == pAVar7) {
    pvVar3 = this->tagged_rep_or_elem_;
    bVar5 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
    if (bVar5 == 0) {
      bVar8 = this->capacity_proxy_ + 1 <= *(int *)((longlong)pvVar3 + -1);
    }
    else {
      bVar8 = pvVar3 != (void *)0x0;
    }
    if (!bVar8) {
      if (bVar5 == 0) {
        uVar4 = *(uint *)((longlong)pvVar3 + -1);
        pRVar6 = (RepeatedPtrFieldBase *)((longlong)pvVar3 + 7);
      }
      else {
        uVar4 = (uint)(pvVar3 != (void *)0x0);
        pRVar6 = this;
      }
      if (this->current_size_ < (int)uVar4) {
        if ((~(byte)pvVar3 & 1) == 0) {
          uVar4 = *(uint *)((longlong)pvVar3 + -1);
        }
        else {
          uVar4 = (uint)(pvVar3 != (void *)0x0);
        }
        (&pRVar6->tagged_rep_or_elem_)[(int)uVar4] =
             (&pRVar6->tagged_rep_or_elem_)[this->current_size_];
      }
      iVar2 = this->current_size_;
      this->current_size_ = iVar2 + 1;
      (&pRVar6->tagged_rep_or_elem_)[iVar2] = param_1;
      if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
        piVar1 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
        *piVar1 = *piVar1 + 1;
        return;
      }
      return;
    }
  }
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
            (this,param_1,pAVar7,this->arena_);
  return;
}

// AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14fb7a870

/* protected: void __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(class
   google::protobuf::MessageLite * __ptr64,class google::protobuf::Arena * __ptr64,class
   google::protobuf::Arena * __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
          (RepeatedPtrFieldBase *this,MessageLite *param_1,Arena *param_2,Arena *param_3)

{
  if ((param_3 == (Arena *)0x0) || (param_2 != (Arena *)0x0)) {
    if (param_3 != param_2) {
      param_1 = CloneSlow(param_3,param_1);
    }
  }
  else if (param_1 != (MessageLite *)0x0) {
    ThreadSafeArena::AddCleanup
              (&param_3->impl_,param_1,arena_delete_object<google::protobuf::MessageLite>);
  }
  UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
            (this,param_1);
  return;
}

// AddFromCleared<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14fb7a8d0

/* protected: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddFromCleared<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(void)
   __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddFromCleared<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
          (RepeatedPtrFieldBase *this)

{
  int iVar1;
  uint uVar2;
  MessageLite *pMVar3;
  byte bVar4;
  
  pMVar3 = this->tagged_rep_or_elem_;
  bVar4 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
  if (bVar4 == 0) {
    uVar2 = *(uint *)((longlong)&pMVar3[-1]._internal_metadata_.ptr_ + 7);
  }
  else {
    uVar2 = (uint)(pMVar3 != (MessageLite *)0x0);
  }
  iVar1 = this->current_size_;
  if (iVar1 < (int)uVar2) {
    this->current_size_ = iVar1 + 1;
    if (bVar4 == 0) {
      pMVar3 = *(MessageLite **)((longlong)&pMVar3->_padding_ + (longlong)iVar1 * 8 + 7);
    }
    return pMVar3;
  }
  return (MessageLite *)0x0;
}

// FindExtensionInfoFromFieldNumber<google::protobuf::internal::DescriptorPoolExtensionFinder> @ 14fb7a920

/* private: bool __cdecl
   google::protobuf::internal::ExtensionSet::FindExtensionInfoFromFieldNumber<class
   google::protobuf::internal::DescriptorPoolExtensionFinder>(int,int,class
   google::protobuf::internal::DescriptorPoolExtensionFinder * __ptr64,struct
   google::protobuf::internal::ExtensionInfo * __ptr64,bool * __ptr64)const __ptr64 */

bool __thiscall
google::protobuf::internal::ExtensionSet::
FindExtensionInfoFromFieldNumber<google::protobuf::internal::DescriptorPoolExtensionFinder>
          (ExtensionSet *this,int param_1,int param_2,DescriptorPoolExtensionFinder *param_3,
          ExtensionInfo *param_4,bool *param_5)

{
  WireType WVar1;
  bool bVar2;
  
  bVar2 = DescriptorPoolExtensionFinder::Find(param_3,param_2,param_4);
  if (!bVar2) {
    return false;
  }
  WVar1 = *(WireType *)
           ((longlong)&WireFormatLite::kWireTypeForFieldType + (ulonglong)param_4->type * 4);
  *param_5 = false;
  if (((param_4->is_repeated != false) && (param_1 == 2)) && (bVar2 = is_packable(WVar1), bVar2)) {
    *param_5 = true;
    return true;
  }
  return WVar1 == param_1;
}

// FUN_14fb7a9b0 @ 14fb7a9b0

void FUN_14fb7a9b0(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong local_48;
  uint uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((short)*(ushort *)(param_1 + 10) < 0) {
    local_48 = puVar1[1];
    uStack_40 = (uint)*(byte *)(local_48 + 10);
    local_38 = *(undefined8 *)*puVar1;
    uStack_30 = 0;
    FUN_14fb7ae30(&local_38,&local_48);
    return;
  }
  FUN_14fb7ab80(puVar1,puVar1 + (ulonglong)*(ushort *)(param_1 + 10) * 4,&local_28,param_3);
  return;
}

// FUN_14fb7aa50 @ 14fb7aa50

void FUN_14fb7aa50(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  __uint64 _Var2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong local_28;
  uint uStack_20;
  undefined8 local_18;
  undefined4 uStack_10;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if ((short)*(ushort *)(param_1 + 10) < 0) {
    local_28 = puVar5[1];
    uStack_20 = (uint)*(byte *)(local_28 + 10);
    local_18 = *(undefined8 *)*puVar5;
    uStack_10 = 0;
    FUN_14fb7b300(&local_18,&local_28,param_2,param_3);
    return;
  }
  iVar3 = 0;
  puVar4 = puVar5 + (ulonglong)*(ushort *)(param_1 + 10) * 4;
  puVar1 = puVar5;
  if (puVar5 != puVar4) {
    do {
      puVar6 = puVar1 + 1;
      if (0xf < iVar3) {
        do {
          _Var2 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong
                            ((Extension *)(puVar5 + 1));
          *param_2 = *param_2 + _Var2;
          puVar5 = puVar5 + 4;
          puVar1 = puVar6 + 3;
          puVar6 = puVar6 + 4;
          if (puVar1 == puVar4) goto joined_r0x00014fb7ab43;
        } while( true );
      }
      puVar1 = puVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (puVar1 != puVar4);
    do {
      _Var2 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong
                        ((Extension *)(puVar5 + 1));
      *param_2 = *param_2 + _Var2;
      puVar5 = puVar5 + 4;
joined_r0x00014fb7ab43:
    } while (puVar5 != puVar4);
  }
  return;
}

// FUN_14fb7ab80 @ 14fb7ab80

void FUN_14fb7ab80(FieldDescriptor **param_1,FieldDescriptor **param_2,undefined8 *param_3)

{
  FieldDescriptor **ppFVar1;
  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
  *pvVar2;
  bool bVar3;
  int iVar4;
  FieldDescriptor **ppFVar5;
  FieldDescriptor **ppFVar6;
  int iVar7;
  FieldDescriptor *local_res8;
  
  if (param_1 != param_2) {
    iVar7 = 0;
    ppFVar5 = param_1;
    while (iVar7 < 0x10) {
      ppFVar5 = ppFVar5 + 4;
      iVar7 = iVar7 + 1;
      if (ppFVar5 == param_2) goto LAB_14fb7aca4;
    }
    ppFVar6 = param_1 + 3;
    ppFVar5 = ppFVar5 + 1;
    do {
      iVar7 = *(int *)param_1;
      if (*(char *)((longlong)ppFVar6 + -7) == '\0') {
        bVar3 = (bool)(~(*(byte *)((longlong)ppFVar6 + -6) >> 1) & 1);
      }
      else {
        iVar4 = google::protobuf::internal::ExtensionSet::Extension::GetSize
                          ((Extension *)(ppFVar6 + -2));
        bVar3 = 0 < iVar4;
      }
      if (bVar3 != false) {
        pvVar2 = *(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                   **)param_3[2];
        if (*ppFVar6 == (FieldDescriptor *)0x0) {
          local_res8 = google::protobuf::DescriptorPool::FindExtensionByNumber
                                 ((DescriptorPool *)param_3[1],(Descriptor *)*param_3,iVar7);
          ppFVar1 = *(FieldDescriptor ***)(pvVar2 + 8);
          if (ppFVar1 == *(FieldDescriptor ***)(pvVar2 + 0x10)) {
            std::
            vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
            ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                      (pvVar2,ppFVar1,&local_res8);
          }
          else {
            *ppFVar1 = local_res8;
            *(longlong *)(pvVar2 + 8) = *(longlong *)(pvVar2 + 8) + 8;
          }
        }
        else {
          ppFVar1 = *(FieldDescriptor ***)(pvVar2 + 8);
          if (ppFVar1 == *(FieldDescriptor ***)(pvVar2 + 0x10)) {
            std::
            vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
            ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64>
                      (pvVar2,ppFVar1,ppFVar6);
          }
          else {
            *ppFVar1 = *ppFVar6;
            *(longlong *)(pvVar2 + 8) = *(longlong *)(pvVar2 + 8) + 8;
          }
        }
      }
      param_1 = param_1 + 4;
      ppFVar6 = ppFVar6 + 4;
      ppFVar1 = ppFVar5 + 3;
      ppFVar5 = ppFVar5 + 4;
    } while (ppFVar1 != param_2);
    if (param_1 != param_2) {
LAB_14fb7aca4:
      ppFVar5 = param_1 + 3;
      do {
        iVar7 = *(int *)(ppFVar5 + -3);
        if (*(char *)((longlong)ppFVar5 + -7) == '\0') {
          bVar3 = (bool)(~(*(byte *)((longlong)ppFVar5 + -6) >> 1) & 1);
        }
        else {
          iVar4 = google::protobuf::internal::ExtensionSet::Extension::GetSize
                            ((Extension *)(ppFVar5 + -2));
          bVar3 = 0 < iVar4;
        }
        if (bVar3 != false) {
          pvVar2 = *(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                     **)param_3[2];
          if (*ppFVar5 == (FieldDescriptor *)0x0) {
            local_res8 = google::protobuf::DescriptorPool::FindExtensionByNumber
                                   ((DescriptorPool *)param_3[1],(Descriptor *)*param_3,iVar7);
            ppFVar6 = *(FieldDescriptor ***)(pvVar2 + 8);
            if (ppFVar6 == *(FieldDescriptor ***)(pvVar2 + 0x10)) {
              std::
              vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                        (pvVar2,ppFVar6,&local_res8);
            }
            else {
              *ppFVar6 = local_res8;
              *(longlong *)(pvVar2 + 8) = *(longlong *)(pvVar2 + 8) + 8;
            }
          }
          else {
            ppFVar6 = *(FieldDescriptor ***)(pvVar2 + 8);
            if (ppFVar6 == *(FieldDescriptor ***)(pvVar2 + 0x10)) {
              std::
              vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
              ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64>
                        (pvVar2,ppFVar6,ppFVar5);
            }
            else {
              *ppFVar6 = *ppFVar5;
              *(longlong *)(pvVar2 + 8) = *(longlong *)(pvVar2 + 8) + 8;
            }
          }
        }
        ppFVar6 = ppFVar5 + 1;
        ppFVar5 = ppFVar5 + 4;
      } while (ppFVar6 != param_2);
    }
  }
  return;
}

// FUN_14fb7ad70 @ 14fb7ad70

void FUN_14fb7ad70(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  __uint64 _Var2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      lVar4 = lVar1 + 8;
      if (0xf < iVar3) {
        do {
          _Var2 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong
                            ((Extension *)(param_1 + 8));
          *param_3 = *param_3 + _Var2;
          param_1 = param_1 + 0x20;
          lVar1 = lVar4 + 0x18;
          lVar4 = lVar4 + 0x20;
          if (lVar1 == param_2) goto joined_r0x00014fb7adf1;
        } while( true );
      }
      lVar1 = lVar1 + 0x20;
      iVar3 = iVar3 + 1;
    } while (lVar1 != param_2);
    do {
      _Var2 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong
                        ((Extension *)(param_1 + 8));
      *param_3 = *param_3 + _Var2;
      param_1 = param_1 + 0x20;
joined_r0x00014fb7adf1:
    } while (param_1 != param_2);
  }
  return;
}

// FUN_14fb7ae30 @ 14fb7ae30

void FUN_14fb7ae30(longlong *param_1,FieldDescriptor *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  FieldDescriptor *pFVar5;
  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
  *pvVar6;
  FieldDescriptor **ppFVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  FieldDescriptor *local_res8;
  FieldDescriptor *local_res10;
  undefined8 *local_res18;
  longlong *local_58;
  int iStack_40;
  
  iVar17 = 0;
  uVar13 = param_1[1] & 0xffffffff;
  iStack_40 = (int)*(undefined8 *)&param_2->number_;
  plVar15 = (longlong *)*param_1;
  local_58 = (longlong *)*param_1;
  while (((plVar16 = local_58, plVar15 != *(longlong **)param_2 || ((int)uVar13 != iStack_40)) &&
         (iVar17 < 0x10))) {
    if (*(char *)((longlong)plVar15 + 0xb) == '\0') {
      plVar15 = (longlong *)plVar15[(ulonglong)(byte)((char)uVar13 + 1) + 0x1e];
      cVar2 = *(char *)((longlong)plVar15 + 0xb);
      while (cVar2 == '\0') {
        plVar15 = (longlong *)plVar15[0x1e];
        cVar2 = *(char *)((longlong)plVar15 + 0xb);
      }
      uVar13 = 0;
      local_58 = plVar15;
LAB_14fb7af46:
      iVar17 = iVar17 + 1;
    }
    else {
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar14;
      if ((int)uVar14 < (int)(uint)*(byte *)((longlong)plVar15 + 10)) goto LAB_14fb7af46;
      if (uVar14 == *(byte *)((longlong)plVar15 + 10)) {
        do {
          plVar4 = (longlong *)*plVar15;
          if (*(char *)((longlong)plVar4 + 0xb) != '\0') break;
          pbVar1 = (byte *)(plVar15 + 1);
          uVar13 = (ulonglong)*pbVar1;
          plVar15 = plVar4;
          local_58 = plVar4;
        } while (*pbVar1 == *(byte *)((longlong)plVar4 + 10));
      }
      if ((uint)uVar13 != (uint)*(byte *)((longlong)plVar15 + 10)) goto LAB_14fb7af46;
      uVar13 = (ulonglong)uVar14;
      iVar17 = iVar17 + 1;
      plVar15 = plVar16;
      local_58 = plVar16;
    }
  }
  plVar16 = *(longlong **)param_2;
  iStack_40 = (int)*(undefined8 *)&param_2->number_;
  local_res10 = param_2;
  local_res18 = param_3;
LAB_14fb7af60:
  do {
    plVar4 = local_58;
    if ((plVar15 == plVar16) && ((int)uVar13 == iStack_40)) {
      plVar15 = *(longlong **)local_res10;
      iStack_40 = (int)*(undefined8 *)&local_res10->number_;
      do {
        do {
          while( true ) {
            plVar16 = (longlong *)*param_1;
            if ((plVar16 == plVar15) && ((int)param_1[1] == iStack_40)) {
              return;
            }
            uVar13 = (ulonglong)*(byte *)(param_1 + 1);
            lVar10 = plVar16[uVar13 * 4 + 2];
            if (*(char *)((longlong)plVar16 + uVar13 * 0x20 + 0x21) == '\0') {
              bVar11 = (bool)(~(*(byte *)((longlong)plVar16 + uVar13 * 0x20 + 0x22) >> 1) & 1);
            }
            else {
              iVar17 = google::protobuf::internal::ExtensionSet::Extension::GetSize
                                 ((Extension *)(plVar16 + uVar13 * 4 + 3));
              bVar11 = 0 < iVar17;
            }
            if (bVar11 != false) {
              pFVar5 = (FieldDescriptor *)plVar16[uVar13 * 4 + 5];
              pvVar6 = *(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                         **)local_res18[2];
              if (pFVar5 == (FieldDescriptor *)0x0) {
                local_res10 = google::protobuf::DescriptorPool::FindExtensionByNumber
                                        ((DescriptorPool *)local_res18[1],(Descriptor *)*local_res18
                                         ,(int)lVar10);
                ppFVar7 = *(FieldDescriptor ***)(pvVar6 + 8);
                if (ppFVar7 == *(FieldDescriptor ***)(pvVar6 + 0x10)) {
                  std::
                  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                  ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                            (pvVar6,ppFVar7,&local_res10);
                }
                else {
                  *ppFVar7 = local_res10;
                  *(longlong *)(pvVar6 + 8) = *(longlong *)(pvVar6 + 8) + 8;
                }
              }
              else {
                ppFVar7 = *(FieldDescriptor ***)(pvVar6 + 8);
                if (ppFVar7 == *(FieldDescriptor ***)(pvVar6 + 0x10)) {
                  std::
                  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                  ::
                  _Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64>
                            (pvVar6,ppFVar7,(FieldDescriptor **)(plVar16 + uVar13 * 4 + 5));
                }
                else {
                  *ppFVar7 = pFVar5;
                  *(longlong *)(pvVar6 + 8) = *(longlong *)(pvVar6 + 8) + 8;
                }
              }
            }
            if (*(char *)((longlong)plVar16 + 0xb) != '\0') break;
            lVar10 = plVar16[(ulonglong)(byte)((char)param_1[1] + 1) + 0x1e];
            *param_1 = lVar10;
            cVar2 = *(char *)(lVar10 + 0xb);
            while (cVar2 == '\0') {
              lVar10 = *(longlong *)(lVar10 + 0xf0);
              *param_1 = lVar10;
              cVar2 = *(char *)(lVar10 + 0xb);
            }
            *(undefined4 *)(param_1 + 1) = 0;
          }
          bVar3 = *(byte *)((longlong)plVar16 + 10);
          uVar14 = (int)param_1[1] + 1;
          *(uint *)(param_1 + 1) = uVar14;
        } while ((int)uVar14 < (int)(uint)bVar3);
        lVar10 = *param_1;
        lVar9 = param_1[1];
        if (uVar14 == *(byte *)((longlong)plVar16 + 10)) {
          do {
            plVar4 = (longlong *)*plVar16;
            if (*(char *)((longlong)plVar4 + 0xb) != '\0') break;
            uVar14 = (uint)*(byte *)(plVar16 + 1);
            *param_1 = (longlong)plVar4;
            bVar3 = *(byte *)((longlong)plVar4 + 10);
            *(uint *)(param_1 + 1) = uVar14;
            plVar16 = plVar4;
          } while (uVar14 == bVar3);
        }
        if (uVar14 == *(byte *)(*param_1 + 10)) {
          *param_1 = lVar10;
          param_1[1] = lVar9;
        }
      } while( true );
    }
    plVar18 = (longlong *)*param_1;
    uVar12 = (ulonglong)*(byte *)(param_1 + 1);
    lVar10 = plVar18[uVar12 * 4 + 2];
    if (*(char *)(uVar12 * 0x20 + 0x21 + (longlong)plVar18) == '\0') {
      bVar11 = (bool)(~(*(byte *)((longlong)plVar18 + uVar12 * 0x20 + 0x22) >> 1) & 1);
    }
    else {
      iVar17 = google::protobuf::internal::ExtensionSet::Extension::GetSize
                         ((Extension *)(plVar18 + uVar12 * 4 + 3));
      bVar11 = 0 < iVar17;
    }
    if (bVar11 != false) {
      pFVar5 = (FieldDescriptor *)plVar18[uVar12 * 4 + 5];
      pvVar6 = *(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
                 **)local_res18[2];
      if (pFVar5 == (FieldDescriptor *)0x0) {
        local_res8 = google::protobuf::DescriptorPool::FindExtensionByNumber
                               ((DescriptorPool *)local_res18[1],(Descriptor *)*local_res18,
                                (int)lVar10);
        ppFVar7 = *(FieldDescriptor ***)(pvVar6 + 8);
        if (ppFVar7 == *(FieldDescriptor ***)(pvVar6 + 0x10)) {
          std::
          vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                    (pvVar6,ppFVar7,&local_res8);
        }
        else {
          *ppFVar7 = local_res8;
          *(longlong *)(pvVar6 + 8) = *(longlong *)(pvVar6 + 8) + 8;
        }
      }
      else {
        ppFVar7 = *(FieldDescriptor ***)(pvVar6 + 8);
        if (ppFVar7 == *(FieldDescriptor ***)(pvVar6 + 0x10)) {
          std::
          vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64>
                    (pvVar6,ppFVar7,(FieldDescriptor **)(plVar18 + uVar12 * 4 + 5));
        }
        else {
          *ppFVar7 = pFVar5;
          *(longlong *)(pvVar6 + 8) = *(longlong *)(pvVar6 + 8) + 8;
        }
      }
    }
    if (*(char *)((longlong)plVar18 + 0xb) == '\0') {
      lVar10 = plVar18[(ulonglong)(byte)((char)param_1[1] + 1) + 0x1e];
      *param_1 = lVar10;
      cVar2 = *(char *)(lVar10 + 0xb);
      while (cVar2 == '\0') {
        lVar10 = *(longlong *)(lVar10 + 0xf0);
        *param_1 = lVar10;
        cVar2 = *(char *)(lVar10 + 0xb);
      }
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      if ((int)(uint)*(byte *)((longlong)plVar18 + 10) <= (int)param_1[1]) {
        uVar14 = *(uint *)(param_1 + 1);
        lVar10 = *param_1;
        lVar9 = param_1[1];
        if (uVar14 == *(byte *)((longlong)plVar18 + 10)) {
          do {
            plVar8 = (longlong *)*plVar18;
            if (*(char *)((longlong)plVar8 + 0xb) != '\0') break;
            uVar14 = (uint)*(byte *)(plVar18 + 1);
            *param_1 = (longlong)plVar8;
            bVar3 = *(byte *)((longlong)plVar8 + 10);
            *(uint *)(param_1 + 1) = uVar14;
            plVar18 = plVar8;
          } while (uVar14 == bVar3);
        }
        if (uVar14 == *(byte *)(*param_1 + 10)) {
          *param_1 = lVar10;
          param_1[1] = lVar9;
        }
      }
    }
    if (*(char *)((longlong)plVar15 + 0xb) == '\0') {
      plVar15 = (longlong *)plVar15[(ulonglong)(byte)((char)uVar13 + 1) + 0x1e];
      cVar2 = *(char *)((longlong)plVar15 + 0xb);
      while (cVar2 == '\0') {
        plVar15 = (longlong *)plVar15[0x1e];
        cVar2 = *(char *)((longlong)plVar15 + 0xb);
      }
      uVar13 = 0;
      local_58 = plVar15;
      goto LAB_14fb7af60;
    }
    uVar14 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar14;
    local_58 = plVar4;
    if ((int)(uint)*(byte *)((longlong)plVar15 + 10) <= (int)uVar14) {
      if (uVar14 == *(byte *)((longlong)plVar15 + 10)) {
        do {
          plVar18 = (longlong *)*plVar15;
          if (*(char *)((longlong)plVar18 + 0xb) != '\0') break;
          pbVar1 = (byte *)(plVar15 + 1);
          uVar13 = (ulonglong)*pbVar1;
          plVar15 = plVar18;
          local_58 = plVar18;
        } while (*pbVar1 == *(byte *)((longlong)plVar18 + 10));
      }
      if ((uint)uVar13 == (uint)*(byte *)((longlong)plVar15 + 10)) {
        uVar13 = (ulonglong)uVar14;
        plVar15 = plVar4;
        local_58 = plVar4;
      }
    }
  } while( true );
}

// FUN_14fb7b300 @ 14fb7b300

void FUN_14fb7b300(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  __uint64 _Var8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *local_48;
  int iStack_30;
  
  iVar11 = 0;
  uVar13 = param_1[1] & 0xffffffff;
  iStack_30 = (int)param_2[1];
  plVar9 = (longlong *)*param_1;
  local_48 = (longlong *)*param_1;
  while (((plVar10 = local_48, plVar9 != (longlong *)*param_2 || ((int)uVar13 != iStack_30)) &&
         (iVar11 < 0x10))) {
    if (*(char *)((longlong)plVar9 + 0xb) == '\0') {
      plVar9 = (longlong *)plVar9[(ulonglong)(byte)((char)uVar13 + 1) + 0x1e];
      cVar2 = *(char *)((longlong)plVar9 + 0xb);
      while (cVar2 == '\0') {
        plVar9 = (longlong *)plVar9[0x1e];
        cVar2 = *(char *)((longlong)plVar9 + 0xb);
      }
      uVar13 = 0;
      local_48 = plVar9;
LAB_14fb7b427:
      iVar11 = iVar11 + 1;
    }
    else {
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      if ((int)uVar12 < (int)(uint)*(byte *)((longlong)plVar9 + 10)) goto LAB_14fb7b427;
      if (uVar12 == *(byte *)((longlong)plVar9 + 10)) {
        do {
          plVar4 = (longlong *)*plVar9;
          if (*(char *)((longlong)plVar4 + 0xb) != '\0') break;
          pbVar1 = (byte *)(plVar9 + 1);
          uVar13 = (ulonglong)*pbVar1;
          plVar9 = plVar4;
          local_48 = plVar4;
        } while (*pbVar1 == *(byte *)((longlong)plVar4 + 10));
      }
      if ((uint)uVar13 != (uint)*(byte *)((longlong)plVar9 + 10)) goto LAB_14fb7b427;
      uVar13 = (ulonglong)uVar12;
      iVar11 = iVar11 + 1;
      plVar9 = plVar10;
      local_48 = plVar10;
    }
  }
  plVar10 = (longlong *)*param_2;
  iStack_30 = (int)param_2[1];
LAB_14fb7b440:
  do {
    plVar4 = local_48;
    if ((plVar9 == plVar10) && ((int)uVar13 == iStack_30)) {
      plVar9 = (longlong *)*param_2;
      iStack_30 = (int)param_2[1];
      do {
        do {
          while( true ) {
            plVar10 = (longlong *)*param_1;
            if ((plVar10 == plVar9) && ((int)param_1[1] == iStack_30)) {
              return;
            }
            bVar3 = *(byte *)(param_1 + 1);
            _Var8 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong
                              ((Extension *)(plVar10 + (ulonglong)bVar3 * 4 + 3));
            *param_3 = *param_3 + _Var8;
            if (*(char *)((longlong)plVar10 + 0xb) != '\0') break;
            lVar6 = plVar10[(ulonglong)(byte)(bVar3 + 1) + 0x1e];
            *param_1 = lVar6;
            cVar2 = *(char *)(lVar6 + 0xb);
            while (cVar2 == '\0') {
              lVar6 = *(longlong *)(lVar6 + 0xf0);
              *param_1 = lVar6;
              cVar2 = *(char *)(lVar6 + 0xb);
            }
            *(undefined4 *)(param_1 + 1) = 0;
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        } while ((int)param_1[1] < (int)(uint)*(byte *)((longlong)plVar10 + 10));
        uVar12 = *(uint *)(param_1 + 1);
        lVar6 = *param_1;
        lVar7 = param_1[1];
        if (uVar12 == *(byte *)((longlong)plVar10 + 10)) {
          do {
            plVar4 = (longlong *)*plVar10;
            if (*(char *)((longlong)plVar4 + 0xb) != '\0') break;
            uVar12 = (uint)*(byte *)(plVar10 + 1);
            *param_1 = (longlong)plVar4;
            bVar3 = *(byte *)((longlong)plVar4 + 10);
            *(uint *)(param_1 + 1) = uVar12;
            plVar10 = plVar4;
          } while (uVar12 == bVar3);
        }
        if (uVar12 == *(byte *)(*param_1 + 10)) {
          *param_1 = lVar6;
          param_1[1] = lVar7;
        }
      } while( true );
    }
    plVar14 = (longlong *)*param_1;
    bVar3 = *(byte *)(param_1 + 1);
    _Var8 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong
                      ((Extension *)(plVar14 + (ulonglong)bVar3 * 4 + 3));
    *param_3 = *param_3 + _Var8;
    if (*(char *)((longlong)plVar14 + 0xb) == '\0') {
      lVar6 = plVar14[(ulonglong)(byte)(bVar3 + 1) + 0x1e];
      *param_1 = lVar6;
      cVar2 = *(char *)(lVar6 + 0xb);
      while (cVar2 == '\0') {
        lVar6 = *(longlong *)(lVar6 + 0xf0);
        *param_1 = lVar6;
        cVar2 = *(char *)(lVar6 + 0xb);
      }
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      if ((int)(uint)*(byte *)((longlong)plVar14 + 10) <= (int)param_1[1]) {
        uVar12 = *(uint *)(param_1 + 1);
        lVar6 = *param_1;
        lVar7 = param_1[1];
        if (uVar12 == *(byte *)((longlong)plVar14 + 10)) {
          do {
            plVar5 = (longlong *)*plVar14;
            if (*(char *)((longlong)plVar5 + 0xb) != '\0') break;
            uVar12 = (uint)*(byte *)(plVar14 + 1);
            *param_1 = (longlong)plVar5;
            bVar3 = *(byte *)((longlong)plVar5 + 10);
            *(uint *)(param_1 + 1) = uVar12;
            plVar14 = plVar5;
          } while (uVar12 == bVar3);
        }
        if (uVar12 == *(byte *)(*param_1 + 10)) {
          *param_1 = lVar6;
          param_1[1] = lVar7;
        }
      }
    }
    if (*(char *)((longlong)plVar9 + 0xb) == '\0') {
      plVar9 = (longlong *)plVar9[(ulonglong)(byte)((char)uVar13 + 1) + 0x1e];
      cVar2 = *(char *)((longlong)plVar9 + 0xb);
      while (cVar2 == '\0') {
        plVar9 = (longlong *)plVar9[0x1e];
        cVar2 = *(char *)((longlong)plVar9 + 0xb);
      }
      uVar13 = 0;
      local_48 = plVar9;
      goto LAB_14fb7b440;
    }
    uVar12 = (int)uVar13 + 1;
    uVar13 = (ulonglong)uVar12;
    local_48 = plVar4;
    if ((int)(uint)*(byte *)((longlong)plVar9 + 10) <= (int)uVar12) {
      if (uVar12 == *(byte *)((longlong)plVar9 + 10)) {
        do {
          plVar14 = (longlong *)*plVar9;
          if (*(char *)((longlong)plVar14 + 0xb) != '\0') break;
          pbVar1 = (byte *)(plVar9 + 1);
          uVar13 = (ulonglong)*pbVar1;
          plVar9 = plVar14;
          local_48 = plVar14;
        } while (*pbVar1 == *(byte *)((longlong)plVar14 + 10));
      }
      if ((uint)uVar13 == (uint)*(byte *)((longlong)plVar9 + 10)) {
        uVar13 = (ulonglong)uVar12;
        plVar9 = plVar4;
        local_48 = plVar4;
      }
    }
  } while( true );
}

// PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck> @ 14fb7b6b0

/* char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int) */

char * __cdecl
google::protobuf::internal::
PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>
          (void *param_1,char *param_2,ParseContext *param_3,EnumValidityCheck *param_4,
          InternalMetadata *param_5,int param_6)

{
  char *pcVar1;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_44;
  void *local_38;
  _func___cdecl_bool_void_ptr_int *p_Stack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  InternalMetadata *pIStack_20;
  undefined8 local_18;
  
  p_Stack_30 = param_4->func;
  uStack_58 = SUB84(param_4->arg,0);
  uStack_54 = (undefined4)((ulonglong)param_4->arg >> 0x20);
  local_18 = CONCAT44(uStack_44,param_6);
  local_28 = uStack_58;
  uStack_24 = uStack_54;
  local_38 = param_1;
  pIStack_20 = param_5;
  pcVar1 = EpsCopyInputStream::
           ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                     ((EpsCopyInputStream *)param_3,uStack_58,&local_38);
  return pcVar1;
}

// ParseFieldWithExtensionInfo<google::protobuf::UnknownFieldSet> @ 14fb7b720

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseFieldWithExtensionInfo<class
   google::protobuf::UnknownFieldSet>(int,bool,struct google::protobuf::internal::ExtensionInfo
   const & __ptr64,class google::protobuf::internal::InternalMetadata * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ExtensionSet::
ParseFieldWithExtensionInfo<google::protobuf::UnknownFieldSet>
          (ExtensionSet *this,int param_1,bool param_2,ExtensionInfo *param_3,
          InternalMetadata *param_4,char *param_5,ParseContext *param_6)

{
  int *piVar1;
  byte bVar2;
  _func___cdecl_bool_void_ptr_int *p_Var3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  char *pcVar10;
  UnknownFieldSet *this_00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar11;
  MessageLite *pMVar12;
  LogMessage *this_01;
  uint uVar13;
  uchar uVar14;
  basic_string_view<char,std::char_traits<char>_> local_a8;
  LogMessageFatal local_98;
  void *local_88;
  _func___cdecl_bool_void_ptr_int *p_Stack_80;
  undefined8 uStack_78;
  InternalMetadata *pIStack_70;
  int local_68;
  undefined4 uStack_64;
  void *local_58;
  _func___cdecl_bool_void_ptr_int *p_Stack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  InternalMetadata *pIStack_40;
  undefined8 local_38;
  
  bVar2 = param_3->type;
  uVar8 = bVar2 - 1;
  if (0x11 < uVar8) {
    return param_5;
  }
  if (param_2) {
    switch(uVar8) {
    case 0:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedDoubleParser(pvVar9,param_5,param_6);
      return pcVar10;
    case 1:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedFloatParser(pvVar9,param_5,param_6);
      return pcVar10;
    case 2:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedInt64Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 3:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedUInt64Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 4:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedInt32Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 5:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedFixed64Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 6:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedFixed32Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 7:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedBoolParser(pvVar9,param_5,param_6);
      return pcVar10;
    default:
      this_01 = (LogMessage *)
                absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                          (&local_98,
                           "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google/protobuf/extension_set_inl.h"
                           ,0x37);
      local_a8._Mydata = "Non-primitive types can\'t be packed.";
      local_a8._Mysize = 0x24;
      absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_01,&local_a8);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_98);
    case 0xc:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedUInt32Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 0xd:
      p_Var3 = (param_3->field6_0x10).enum_validity_check.func;
      uVar5 = *(undefined8 *)((longlong)&param_3->field6_0x10 + 8);
      local_88 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pIStack_70 = param_4;
      uStack_78._0_4_ = (undefined4)uVar5;
      uStack_78._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_48 = (undefined4)uStack_78;
      uStack_44 = uStack_78._4_4_;
      local_38 = CONCAT44(uStack_64,param_1);
      p_Stack_80 = p_Var3;
      uStack_78 = uVar5;
      local_68 = param_1;
      local_58 = local_88;
      p_Stack_50 = p_Var3;
      pIStack_40 = param_4;
      pcVar10 = EpsCopyInputStream::
                ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                          ((EpsCopyInputStream *)param_6,param_5,&local_58);
      return pcVar10;
    case 0xe:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedSFixed32Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 0xf:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedSFixed64Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 0x10:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedSInt32Parser(pvVar9,param_5,param_6);
      return pcVar10;
    case 0x11:
      pvVar9 = MutableRawRepeatedField(this,param_1,bVar2,param_3->is_packed,param_3->descriptor);
      pcVar10 = PackedSInt64Parser(pvVar9,param_5,param_6);
      return pcVar10;
    }
  }
  uVar13 = (uint)param_5;
  switch(uVar8) {
  case 0:
    pcVar10 = param_5 + 8;
    if (param_3->is_repeated == false) {
      SetDouble(this,param_1,'\x01',*(double *)param_5,param_3->descriptor);
    }
    else {
      AddDouble(this,param_1,'\x01',param_3->is_packed,*(double *)param_5,param_3->descriptor);
    }
    break;
  case 1:
    pcVar10 = param_5 + 4;
    if (param_3->is_repeated == false) {
      SetFloat(this,param_1,'\x02',*(float *)param_5,param_3->descriptor);
    }
    else {
      AddFloat(this,param_1,'\x02',param_3->is_packed,*(float *)param_5,param_3->descriptor);
    }
    break;
  case 2:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
    }
    else {
      local_a8._Mysize = (ulong64)(byte)*param_5;
      local_a8._Mydata = param_5 + 1;
    }
    if (local_a8._Mydata == (char *)0x0) goto LAB_14fb7beca;
    uVar14 = '\x03';
    pcVar10 = local_a8._Mydata;
    goto LAB_14fb7bac4;
  case 3:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
    }
    else {
      local_a8._Mysize = (ulong64)(byte)*param_5;
      local_a8._Mydata = param_5 + 1;
    }
    if (local_a8._Mydata != (char *)0x0) {
      uVar14 = '\x04';
      pcVar10 = local_a8._Mydata;
      goto LAB_14fb7bb98;
    }
    goto LAB_14fb7beca;
  case 4:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
      uVar8 = (uint)local_a8._Mysize;
    }
    else {
      uVar8 = (uint)(byte)*param_5;
      local_a8._Mydata = param_5 + 1;
    }
    if (local_a8._Mydata != (char *)0x0) {
      uVar14 = '\x05';
      pcVar10 = local_a8._Mydata;
      goto LAB_14fb7ba5a;
    }
    goto LAB_14fb7beca;
  case 5:
    local_a8._Mysize = *(ulong64 *)param_5;
    uVar14 = '\x06';
    pcVar10 = param_5 + 8;
LAB_14fb7bb98:
    if (param_3->is_repeated == false) {
      SetUInt64(this,param_1,uVar14,local_a8._Mysize,param_3->descriptor);
    }
    else {
      AddUInt64(this,param_1,uVar14,param_3->is_packed,local_a8._Mysize,param_3->descriptor);
    }
    break;
  case 6:
    uVar8 = *(uint *)param_5;
    pcVar10 = param_5 + 4;
    uVar14 = '\a';
LAB_14fb7bb2e:
    if (param_3->is_repeated == false) {
      SetUInt32(this,param_1,uVar14,uVar8,param_3->descriptor);
    }
    else {
      AddUInt32(this,param_1,uVar14,param_3->is_packed,uVar8,param_3->descriptor);
    }
    break;
  case 7:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
      pcVar10 = local_a8._Mydata;
    }
    else {
      local_a8._Mysize = (ulonglong)(byte)*param_5;
      pcVar10 = param_5 + 1;
    }
    if (pcVar10 != (char *)0x0) {
      if (param_3->is_repeated != false) {
        AddBool(this,param_1,'\b',param_3->is_packed,local_a8._Mysize != 0,param_3->descriptor);
        return pcVar10;
      }
      SetBool(this,param_1,'\b',local_a8._Mysize != 0,param_3->descriptor);
      return pcVar10;
    }
    goto LAB_14fb7beca;
  default:
    if (param_3->is_repeated == false) {
      pbVar11 = MutableString(this,param_1,'\t',param_3->descriptor);
    }
    else {
      pbVar11 = AddString(this,param_1,'\t',param_3->descriptor);
    }
    if ((byte)*param_5 < 0x80) {
      local_a8._Mydata = param_5 + 1;
      local_a8._Mysize._0_4_ = (uint)(byte)*param_5;
    }
    else {
      ReadSizeFallback((char *)&local_a8,uVar13);
    }
    if (local_a8._Mydata != (char *)0x0) {
      pcVar10 = EpsCopyInputStream::ReadString
                          ((EpsCopyInputStream *)param_6,local_a8._Mydata,(uint)local_a8._Mysize,
                           pbVar11);
      return pcVar10;
    }
    goto LAB_14fb7beca;
  case 9:
    pMVar12 = (param_3->field6_0x10).message_info.prototype;
    if (param_3->is_repeated == false) {
      pMVar12 = MutableMessage(this,param_1,'\n',pMVar12,param_3->descriptor);
    }
    else {
      pMVar12 = AddMessage(this,param_1,'\n',pMVar12,param_3->descriptor);
    }
    piVar1 = &param_6->depth_;
    *piVar1 = *piVar1 + -1;
    pcVar10 = (char *)0x0;
    if (-1 < *piVar1) {
      param_6->group_depth_ = param_6->group_depth_ + 1;
      pcVar10 = MessageLite::_InternalParse(pMVar12,param_5,param_6);
      param_6->group_depth_ = param_6->group_depth_ + -1;
      param_6->depth_ = param_6->depth_ + 1;
      lVar6 = param_6->_padding_;
      *(undefined4 *)&param_6->_padding_ = 0;
      if ((int)lVar6 != param_1 * 8 + 3) {
        pcVar10 = (char *)0x0;
      }
    }
    break;
  case 10:
    pMVar12 = (param_3->field6_0x10).message_info.prototype;
    if (param_3->is_repeated == false) {
      pMVar12 = MutableMessage(this,param_1,'\v',pMVar12,param_3->descriptor);
    }
    else {
      pMVar12 = AddMessage(this,param_1,'\v',pMVar12,param_3->descriptor);
    }
    pcVar10 = ParseContext::ParseMessage(param_6,pMVar12,param_5);
    break;
  case 0xc:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
      uVar8 = (uint)local_a8._Mysize;
    }
    else {
      uVar8 = (uint)(byte)*param_5;
      local_a8._Mydata = param_5 + 1;
    }
    if (local_a8._Mydata != (char *)0x0) {
      uVar14 = '\r';
      pcVar10 = local_a8._Mydata;
      goto LAB_14fb7bb2e;
    }
    goto LAB_14fb7beca;
  case 0xd:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
      pcVar10 = local_a8._Mydata;
      uVar8 = (uint)local_a8._Mysize;
    }
    else {
      pcVar10 = param_5 + 1;
      uVar8 = (uint)(byte)*param_5;
    }
    if (pcVar10 != (char *)0x0) {
      p_Var3 = (param_3->field6_0x10).enum_validity_check.func;
      puVar4 = (param_3->field6_0x10).enum_validity_check.arg;
      if (p_Var3 == (_func___cdecl_bool_void_ptr_int *)0x0) {
        bVar7 = ValidateEnum(uVar8,puVar4);
      }
      else {
        bVar7 = (*p_Var3)(puVar4,uVar8);
      }
      if (bVar7 == false) {
        if ((param_4->ptr_ & 1) != 0) {
          UnknownFieldSet::AddVarint
                    ((UnknownFieldSet *)((param_4->ptr_ & 0xfffffffffffffffeU) + 8),param_1,
                     (longlong)(int)uVar8);
          return pcVar10;
        }
        this_00 = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                            (param_4);
        UnknownFieldSet::AddVarint(this_00,param_1,(longlong)(int)uVar8);
        return pcVar10;
      }
      if (param_3->is_repeated != false) {
        AddEnum(this,param_1,'\x0e',param_3->is_packed,uVar8,param_3->descriptor);
        return pcVar10;
      }
      SetEnum(this,param_1,'\x0e',uVar8,param_3->descriptor);
      return pcVar10;
    }
    goto LAB_14fb7beca;
  case 0xe:
    uVar8 = *(uint *)param_5;
    uVar14 = '\x0f';
    pcVar10 = param_5 + 4;
LAB_14fb7ba5a:
    if (param_3->is_repeated == false) {
      SetInt32(this,param_1,uVar14,uVar8,param_3->descriptor);
    }
    else {
      AddInt32(this,param_1,uVar14,param_3->is_packed,uVar8,param_3->descriptor);
    }
    break;
  case 0xf:
    local_a8._Mysize = *(ulong64 *)param_5;
    uVar14 = '\x10';
    pcVar10 = param_5 + 8;
    goto LAB_14fb7bac4;
  case 0x10:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
    }
    else {
      local_a8._Mydata = param_5 + 1;
      local_a8._Mysize = (ulonglong)(byte)*param_5;
    }
    if (local_a8._Mydata != (char *)0x0) {
      uVar8 = (uint)(local_a8._Mysize >> 1) & 0x7fffffff ^ -((uint)local_a8._Mysize & 1);
      uVar14 = '\x11';
      pcVar10 = local_a8._Mydata;
      goto LAB_14fb7ba5a;
    }
LAB_14fb7beca:
    pcVar10 = (char *)0x0;
    break;
  case 0x11:
    if (*param_5 < '\0') {
      VarintParseSlow64((char *)&local_a8,uVar13);
    }
    else {
      local_a8._Mydata = param_5 + 1;
      local_a8._Mysize = (ulonglong)(byte)*param_5;
    }
    if (local_a8._Mydata == (char *)0x0) goto LAB_14fb7beca;
    local_a8._Mysize = local_a8._Mysize >> 1 ^ -(ulonglong)((uint)local_a8._Mysize & 1);
    uVar14 = '\x12';
    pcVar10 = local_a8._Mydata;
LAB_14fb7bac4:
    if (param_3->is_repeated == false) {
      SetInt64(this,param_1,uVar14,local_a8._Mysize,param_3->descriptor);
    }
    else {
      AddInt64(this,param_1,uVar14,param_3->is_packed,local_a8._Mysize,param_3->descriptor);
    }
  }
  return pcVar10;
}

// ParseMessageSetItemTmpl<google::protobuf::Message,google::protobuf::UnknownFieldSet> @ 14fb7c090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseMessageSetItemTmpl<class
   google::protobuf::Message,class google::protobuf::UnknownFieldSet>(char const * __ptr64,class
   google::protobuf::Message const * __ptr64,class google::protobuf::internal::InternalMetadata *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ExtensionSet::
ParseMessageSetItemTmpl<google::protobuf::Message,google::protobuf::UnknownFieldSet>
          (ExtensionSet *this,char *param_1,Message *param_2,InternalMetadata *param_3,
          ParseContext *param_4)

{
  ushort uVar1;
  WireType WVar2;
  bool bVar3;
  int iVar4;
  UnknownFieldSet *this_00;
  Metadata *pMVar5;
  MessageLite *this_01;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_02;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  __uint64 _Var11;
  ulonglong uVar12;
  ulong64 uVar13;
  byte bVar14;
  ushort *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined1 auStackY_1f8 [32];
  uint local_1c8;
  <lambda_1> local_1b8;
  ExtensionInfo local_1a8;
  InternalMetadata *local_178;
  Message *local_170;
  ushort *local_168;
  char local_160;
  ushort *local_158;
  uint local_150;
  ushort *local_148;
  uint local_140;
  DescriptorPool *local_138;
  MessageFactory *local_130;
  Descriptor *local_128;
  Metadata local_120;
  _Bxty local_110;
  ulonglong local_100;
  ulonglong uStack_f8;
  _Bxty local_f0;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_c8 [48];
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  DescriptorPool *local_68;
  MessageFactory *pMStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar17 = 0;
  local_f0._8_8_ = 0;
  local_e0 = 0;
  uStack_d8 = 0xf;
  local_f0._Ptr = (char *)0x0;
  local_1c8 = 0;
  uVar12 = uVar17;
  local_178 = param_3;
LAB_14fb7c105:
  do {
    while( true ) {
      if ((ushort *)param_4->_padding_ <= param_1) {
        iVar4 = (int)param_1 - (int)param_4->_padding_;
        if (iVar4 == *(int *)((longlong)&param_4->_padding_ + 4)) {
          puVar18 = (ushort *)param_1;
          if ((0 < iVar4) && (puVar18 = (ushort *)param_1, param_4->_padding_ == 0)) {
            puVar18 = (ushort *)0x0;
          }
          goto LAB_14fb7c775;
        }
        EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_4,(int)&local_168,iVar4);
        puVar18 = local_168;
        param_1 = (char *)local_168;
        if (local_160 != '\0') goto LAB_14fb7c775;
      }
      puVar18 = (ushort *)((longlong)param_1 + 1);
      iVar4 = (int)uVar17;
      if ((byte)*(ushort *)param_1 != 0x10) break;
      uVar8 = (uint)(char)*puVar18;
      uVar9 = (uVar8 & *puVar18) + uVar8;
      param_1 = (char *)((ulonglong)(uVar9 < uVar8) + 1 + (longlong)puVar18);
      uVar8 = uVar9 >> 1;
      uVar16 = (ulonglong)uVar8;
      if ((short)uVar9 < 0) {
        uVar9 = 1;
        bVar14 = 0xd;
        while( true ) {
          puVar15 = (ushort *)((ulonglong)(uVar9 * 2) + (longlong)puVar18);
          uVar1 = *puVar15;
          uVar8 = (uint)(char)uVar1;
          uVar10 = (uVar8 & uVar1) + uVar8;
          param_1 = (char *)((longlong)puVar15 + (ulonglong)(uVar10 < uVar8) + 1);
          uVar16 = uVar16 + ((ulonglong)uVar10 - 2 << (bVar14 & 0x3f));
          uVar8 = (uint)uVar16;
          if (-1 < (short)uVar10) break;
          uVar9 = uVar9 + 1;
          bVar14 = bVar14 + 0xe;
          if (4 < uVar9) goto LAB_14fb7c1d5;
        }
      }
      if (((ushort *)param_1 == (ushort *)0x0) || (uVar8 == 0)) {
LAB_14fb7c1d5:
        puVar18 = (ushort *)0x0;
        goto LAB_14fb7c775;
      }
      if (iVar4 == 0) {
        uVar12 = (ulonglong)uVar8;
        uVar17 = 1;
        local_1c8 = uVar8;
      }
      else if (iVar4 == 2) {
        local_1a8.message = (MessageLite *)0x0;
        local_1a8.number = 0;
        local_1a8.type = '\0';
        local_1a8.is_repeated = false;
        local_1a8.is_packed = false;
        local_1a8.is_lazy = kUndefined;
        local_1a8.field6_0x10.enum_validity_check.func = (_func___cdecl_bool_void_ptr_int *)0x0;
        local_1a8.field6_0x10.enum_validity_check.arg = (void *)0x0;
        local_1a8.descriptor = (FieldDescriptor *)0x0;
        local_1a8.lazy_eager_verify_func = (_func___cdecl_char_ptr_char_ptr_ParseContext_ptr *)0x0;
        if ((param_4->data_).pool == (DescriptorPool *)0x0) {
          local_170 = param_2;
          bVar3 = GeneratedExtensionFinder::Find
                            ((GeneratedExtensionFinder *)&local_170,uVar8,&local_1a8);
          if (!bVar3) goto LAB_14fb7c280;
          WVar2 = *(WireType *)
                   ((longlong)&WireFormatLite::kWireTypeForFieldType +
                   ((ulonglong)local_1a8._8_8_ >> 0x20 & 0xff) * 4);
          if (((local_1a8.is_repeated == false) || (bVar3 = is_packable(WVar2), !bVar3)) &&
             (WVar2 != WIRETYPE_LENGTH_DELIMITED)) goto LAB_14fb7c280;
LAB_14fb7c2f7:
          if (local_1a8.is_repeated == false) {
            this_01 = MutableMessage(this,uVar8,'\v',local_1a8.field6_0x10.message_info.prototype,
                                     local_1a8.descriptor);
          }
          else {
            this_01 = AddMessage(this,uVar8,'\v',local_1a8.field6_0x10.message_info.prototype,
                                 local_1a8.descriptor);
          }
          uVar12 = local_e0;
          local_c8._32_8_ = 0;
          local_c8._40_8_ = 0;
          lStack_98 = 0;
          local_90 = 0;
          lStack_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = param_4->depth_;
          local_6c = -0x80000000;
          local_68 = (param_4->data_).pool;
          pMStack_60 = (param_4->data_).factory;
          uVar7 = &local_f0;
          if (0xf < uStack_d8) {
            uVar7 = local_f0._Ptr;
          }
          if (local_e0 < 0x11) {
            if (local_e0 != 0) {
              memcpy(local_c8 + 0x28,(void *)uVar7,local_e0);
            }
            local_c8._28_4_ = 0;
            local_c8._8_8_ = local_c8 + uVar12 + 0x28;
            local_c8._16_8_ = (undefined1 *)0x0;
            if (local_80 == 1) {
              local_80 = uVar7 + (-0x28 - (longlong)local_c8);
            }
            uVar7 = local_c8 + 0x28;
          }
          else {
            local_c8._28_4_ = 0x10;
            local_c8._8_8_ = uVar7 + (local_e0 - 0x10);
            local_c8._16_8_ = local_c8 + 0x28;
          }
          local_c8._0_8_ = local_c8._8_8_;
          pcVar6 = MessageLite::_InternalParse(this_01,(char *)uVar7,(ParseContext *)local_c8);
          if ((pcVar6 == (char *)0x0) || ((int)local_78 != 0)) goto LAB_14fb7c1d5;
        }
        else {
          pMVar5 = protobuf::Message::GetMetadata(param_2,&local_120);
          local_128 = pMVar5->descriptor;
          local_130 = (param_4->data_).factory;
          local_138 = (param_4->data_).pool;
          bVar3 = DescriptorPoolExtensionFinder::Find
                            ((DescriptorPoolExtensionFinder *)&local_138,uVar8,&local_1a8);
          if (bVar3) {
            WVar2 = *(WireType *)
                     ((longlong)&WireFormatLite::kWireTypeForFieldType +
                     ((ulonglong)local_1a8._8_8_ >> 0x20 & 0xff) * 4);
            if (((local_1a8.is_repeated != false) && (bVar3 = is_packable(WVar2), bVar3)) ||
               (WVar2 == WIRETYPE_LENGTH_DELIMITED)) goto LAB_14fb7c2f7;
          }
LAB_14fb7c280:
          if ((param_3->ptr_ & 1) == 0) {
            this_00 = InternalMetadata::
                      mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(param_3);
          }
          else {
            this_00 = (UnknownFieldSet *)((param_3->ptr_ & 0xfffffffffffffffeU) + 8);
          }
          uVar12 = local_e0;
          uVar7 = &local_f0;
          if (0xf < uStack_d8) {
            uVar7 = local_f0._Ptr;
          }
          this_02 = UnknownFieldSet::AddLengthDelimited(this_00,uVar8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (this_02,(char *)uVar7,uVar12);
        }
        uVar12 = (ulonglong)uVar8;
        uVar17 = 3;
        param_3 = local_178;
        local_1c8 = uVar8;
      }
    }
    if ((byte)*(ushort *)param_1 == 0x1a) {
      if (iVar4 == 1) {
        param_1 = ParseField(this,uVar12 * 8 + 2,(char *)puVar18,param_2,param_3,param_4);
        if ((ushort *)param_1 == (ushort *)0x0) goto LAB_14fb7c1d5;
        uVar17 = 3;
        goto LAB_14fb7c105;
      }
      local_110._8_8_ = 0;
      local_100 = 0;
      uStack_f8 = 0xf;
      local_110._Ptr = (char *)0x0;
      if (*(byte *)puVar18 < 0x80) {
        puVar15 = (ushort *)((longlong)param_1 + 2);
        uVar8 = (uint)*(byte *)puVar18;
      }
      else {
        ReadSizeFallback((char *)&local_158,(uint)puVar18);
        puVar15 = local_158;
        uVar8 = local_150;
      }
      if (puVar15 != (ushort *)0x0) {
        if (((int)param_4->_padding_ - (int)puVar15) + 0x10 < (int)uVar8) {
          param_1 = EpsCopyInputStream::ReadStringFallback
                              ((EpsCopyInputStream *)param_4,(char *)puVar15,uVar8,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &local_110);
        }
        else {
          uVar16 = (ulonglong)(int)uVar8;
          if (local_100 < uVar16) {
            uVar12 = uVar16 - local_100;
            if (uStack_f8 - local_100 < uVar12) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &local_110,uVar12,local_1b8,uVar12,'\0');
            }
            else {
              uVar7 = &local_110;
              if (0xf < uStack_f8) {
                uVar7 = local_110._Ptr;
              }
              pcVar6 = (char *)(uVar7 + local_100);
              local_100 = uVar16;
              memset(pcVar6,0,uVar12);
              pcVar6[uVar12] = '\0';
            }
            uVar12 = (ulonglong)local_1c8;
          }
          else {
            uVar7 = &local_110;
            if (0xf < uStack_f8) {
              uVar7 = local_110._Ptr;
            }
            local_100 = uVar16;
            *(char *)(uVar7 + uVar16) = '\0';
          }
          uVar7 = &local_110;
          if (0xf < uStack_f8) {
            uVar7 = local_110._Ptr;
          }
          memcpy((void *)uVar7,puVar15,uVar16);
          param_1 = (char *)((longlong)puVar15 + uVar16);
          param_3 = local_178;
        }
        if ((ushort *)param_1 != (ushort *)0x0) {
          if (iVar4 == 0) {
            if (0xf < uStack_d8) {
              uVar13 = uStack_d8 + 1;
              uVar7 = local_f0._Ptr;
              if (0xfff < uVar13) {
                uVar13 = uStack_d8 + 0x28;
                uVar7 = *(undefined8 *)(local_f0._Ptr + -8);
                if ((char *)0x1f < local_f0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              ::operator_delete((void *)uVar7,uVar13);
            }
            local_f0._Ptr = local_110._Ptr;
            local_f0._8_8_ = local_110._8_8_;
            local_e0 = local_100;
            uStack_d8 = uStack_f8;
            local_100 = 0;
            uStack_f8 = 0xf;
            local_110._Ptr = local_110._Ptr & 0xffffffffffffff00;
            uVar17 = 2;
          }
          if (0xf < uStack_f8) {
            uVar16 = uStack_f8 + 1;
            uVar7 = local_110._Ptr;
            if (0xfff < uVar16) {
              uVar16 = uStack_f8 + 0x28;
              uVar7 = *(undefined8 *)(local_110._Ptr + -8);
              if ((char *)0x1f < local_110._Ptr + (-8 - uVar7)) goto LAB_14fb7c75b;
            }
            ::operator_delete((void *)uVar7,uVar16);
          }
          local_100 = 0;
          uStack_f8 = 0xf;
          local_110._Ptr = local_110._Ptr & 0xffffffffffffff00;
          goto LAB_14fb7c105;
        }
      }
      if (0xf < uStack_f8) {
        uVar12 = uStack_f8 + 1;
        uVar7 = local_110._Ptr;
        if (0xfff < uVar12) {
          uVar12 = uStack_f8 + 0x28;
          uVar7 = *(undefined8 *)(local_110._Ptr + -8);
          if ((char *)0x1f < local_110._Ptr + (-8 - uVar7)) {
LAB_14fb7c75b:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar7,uVar12);
      }
      goto LAB_14fb7c767;
    }
    bVar14 = (byte)*(ushort *)param_1;
    _Var11 = (__uint64)bVar14;
    if (0x7f < bVar14) {
      _Var11 = (__uint64)((bVar14 - 0x80) + (uint)*(byte *)puVar18 * 0x80);
      if (*(byte *)puVar18 < 0x80) {
        puVar18 = (ushort *)((longlong)param_1 + 2);
      }
      else {
        ReadTagFallback((char *)&local_148,(uint)param_1);
        _Var11 = (__uint64)local_140;
        puVar18 = local_148;
      }
    }
    if (((int)_Var11 == 0) || (((byte)_Var11 & 7) == 4)) {
      *(int *)&param_4->_padding_ = (int)_Var11 + -1;
      goto LAB_14fb7c775;
    }
    param_1 = ParseField(this,_Var11,(char *)puVar18,param_2,param_3,param_4);
    if ((ushort *)param_1 == (ushort *)0x0) {
LAB_14fb7c767:
      puVar18 = (ushort *)0x0;
LAB_14fb7c775:
      if (0xf < uStack_d8) {
        uVar13 = uStack_d8 + 1;
        uVar7 = local_f0._Ptr;
        if (0xfff < uVar13) {
          uVar13 = uStack_d8 + 0x28;
          uVar7 = *(undefined8 *)(local_f0._Ptr + -8);
          if ((char *)0x1f < local_f0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar7,uVar13);
      }
      return (char *)puVar18;
    }
  } while( true );
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>_> @ 14fb7c7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,byte *param_1,undefined8 *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  byte *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pbVar3 = (byte *)0x0;
  if (*param_1 < 0x80) {
    local_60 = param_1 + 1;
    local_58 = (uint)*param_1;
  }
  else {
    ReadSizeFallback((char *)&local_60,(uint)param_1);
  }
  if (local_60 != (byte *)0x0) {
    iVar4 = *(int *)&this->buffer_end_ - (int)local_60;
    uVar7 = local_58;
    if (iVar4 < (int)local_58) {
      do {
        local_98 = *param_3;
        uStack_90 = param_3[1];
        local_88 = *(undefined4 *)(param_3 + 2);
        uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
        uStack_80 = *(undefined4 *)(param_3 + 3);
        uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
        local_78 = param_3[4];
        pcVar1 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                           (local_60,this->buffer_end_,&local_98);
        if (pcVar1 == (char *)0x0) {
          return (char *)0x0;
        }
        iVar6 = (int)pcVar1 - *(int *)&this->buffer_end_;
        if ((int)(uVar7 - iVar4) < 0x11) {
          local_88 = *(undefined4 *)(param_3 + 2);
          uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
          uStack_80 = *(undefined4 *)(param_3 + 3);
          uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
          local_40 = 0;
          local_38 = 0;
          local_50 = *(undefined8 *)this->buffer_end_;
          uStack_48 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_50 + (longlong)(int)(uVar7 - iVar4));
          local_98 = *param_3;
          uStack_90 = param_3[1];
          local_78 = param_3[4];
          pcVar1 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                             ((longlong)&local_50 + (longlong)iVar6,pcVar5,&local_98);
          if (pcVar1 == (char *)0x0) {
            return (char *)0x0;
          }
          if (pcVar1 != pcVar5) {
            return (char *)0x0;
          }
          return pcVar1 + ((longlong)this->buffer_end_ - (longlong)&local_50);
        }
        uVar7 = uVar7 - (iVar4 + iVar6);
        if (this->limit_ < 0x11) {
          return (char *)0x0;
        }
        pcVar1 = Next(this);
        if (pcVar1 == (char *)0x0) {
          return (char *)0x0;
        }
        local_60 = (byte *)(pcVar1 + iVar6);
        iVar4 = *(int *)&this->buffer_end_ - (int)local_60;
      } while (iVar4 < (int)uVar7);
    }
    local_98 = *param_3;
    uStack_90 = param_3[1];
    local_88 = *(undefined4 *)(param_3 + 2);
    uStack_84 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_80 = *(undefined4 *)(param_3 + 3);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_78 = param_3[4];
    pbVar2 = (byte *)ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                               (local_60,local_60 + (int)uVar7,&local_98);
    pbVar3 = (byte *)0x0;
    if (local_60 + (int)uVar7 == pbVar2) {
      pbVar3 = pbVar2;
    }
  }
  return (char *)pbVar3;
}

// ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>,`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>)___ptr64'::`2'::<lambda_1>_> @ 14fb7c9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>,class `public: char
   const * __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class
   `char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>)
   __ptr64'::`2'::<lambda_1> >(char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::PackedEnumParserArg<class google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>,class `public: char
   const * __ptr64 __cdecl google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class
   `char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>)
   __ptr64'::`2'::<lambda_1>) __ptr64 */

char * __thiscall
google::protobuf::internal::EpsCopyInputStream::
ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>,_public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>(char_const*___ptr64,_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>)___ptr64_::_2_::<lambda_1>_>
          (EpsCopyInputStream *this,byte *param_1,undefined8 *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (*param_1 < 0x80) {
    local_50 = param_1 + 1;
    uStack_48._0_4_ = (uint)*param_1;
  }
  else {
    ReadSizeFallback((char *)&local_50,(uint)param_1);
  }
  if (local_50 == (byte *)0x0) {
LAB_14fb7cb73:
    pbVar3 = (byte *)0x0;
  }
  else {
    iVar4 = *(int *)&this->buffer_end_ - (int)local_50;
    uVar7 = (uint)uStack_48;
    if (iVar4 < (int)(uint)uStack_48) {
      do {
        local_88 = *param_3;
        uStack_80 = param_3[1];
        local_78 = *(undefined4 *)(param_3 + 2);
        uStack_74 = *(undefined4 *)((longlong)param_3 + 0x14);
        uStack_70 = *(undefined4 *)(param_3 + 3);
        uStack_6c = *(undefined4 *)((longlong)param_3 + 0x1c);
        local_68 = param_3[4];
        pcVar1 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                           (local_50,this->buffer_end_,&local_88);
        if (pcVar1 == (char *)0x0) goto LAB_14fb7cb73;
        iVar6 = (int)pcVar1 - *(int *)&this->buffer_end_;
        if ((int)(uVar7 - iVar4) < 0x11) {
          local_78 = *(undefined4 *)(param_3 + 2);
          uStack_74 = *(undefined4 *)((longlong)param_3 + 0x14);
          uStack_70 = *(undefined4 *)(param_3 + 3);
          uStack_6c = *(undefined4 *)((longlong)param_3 + 0x1c);
          local_40 = 0;
          local_38 = 0;
          local_50 = *(byte **)this->buffer_end_;
          uStack_48 = *(undefined8 *)(this->buffer_end_ + 8);
          pcVar5 = (char *)((longlong)&local_50 + (longlong)(int)(uVar7 - iVar4));
          local_88 = *param_3;
          uStack_80 = param_3[1];
          local_68 = param_3[4];
          pcVar1 = ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                             ((longlong)&local_50 + (longlong)iVar6,pcVar5,&local_88);
          if ((pcVar1 != (char *)0x0) && (pcVar1 == pcVar5)) {
            return this->buffer_end_ + ((longlong)pcVar1 - (longlong)&local_50);
          }
          goto LAB_14fb7cb73;
        }
        uVar7 = uVar7 - (iVar4 + iVar6);
        if ((this->limit_ < 0x11) || (pcVar1 = Next(this), pcVar1 == (char *)0x0))
        goto LAB_14fb7cb73;
        local_50 = (byte *)(pcVar1 + iVar6);
        iVar4 = *(int *)&this->buffer_end_ - (int)local_50;
      } while (iVar4 < (int)uVar7);
    }
    local_88 = *param_3;
    uStack_80 = param_3[1];
    local_78 = *(undefined4 *)(param_3 + 2);
    uStack_74 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_70 = *(undefined4 *)(param_3 + 3);
    uStack_6c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_68 = param_3[4];
    pbVar2 = (byte *)ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
                               (local_50,local_50 + (int)uVar7,&local_88);
    pbVar3 = (byte *)0x0;
    if (local_50 + (int)uVar7 == pbVar2) {
      pbVar3 = pbVar2;
    }
  }
  return (char *)pbVar3;
}

// ReadPackedVarintArray<`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>_> @ 14fb7cbb0

/* char const * __ptr64 __cdecl google::protobuf::internal::ReadPackedVarintArray<class `char const
   * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1> >(char const *
   __ptr64,char const * __ptr64,class `char const * __ptr64 __cdecl
   google::protobuf::internal::PackedEnumParserArg<class google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>) */

char * __cdecl
google::protobuf::internal::
ReadPackedVarintArray<_char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)_::_2_::<lambda_1>_>
          (byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  InternalMetadata *this;
  char cVar2;
  UnknownFieldSet *this_00;
  int iVar3;
  ulonglong uVar4;
  byte *local_18;
  ulonglong local_10;
  
  while( true ) {
    if (param_2 <= param_1) {
      return (char *)param_1;
    }
    bVar1 = *param_1;
    if ((char)bVar1 < '\0') {
      VarintParseSlow64((char *)&local_18,(uint)param_1);
      param_1 = local_18;
      uVar4 = local_10;
    }
    else {
      param_1 = param_1 + 1;
      uVar4 = (ulonglong)bVar1;
    }
    if (param_1 == (byte *)0x0) break;
    iVar3 = (int)uVar4;
    if ((code *)param_3[1] == (code *)0x0) {
      cVar2 = ValidateEnum(iVar3,(uint *)param_3[2]);
    }
    else {
      cVar2 = (*(code *)param_3[1])((uint *)param_3[2],uVar4 & 0xffffffff);
    }
    if (cVar2 == '\0') {
      this = (InternalMetadata *)param_3[3];
      if ((this->ptr_ & 1) == 0) {
        this_00 = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                            (this);
      }
      else {
        this_00 = (UnknownFieldSet *)((this->ptr_ & 0xfffffffffffffffeU) + 8);
      }
      UnknownFieldSet::AddVarint(this_00,*(int *)(param_3 + 4),(longlong)iVar3);
    }
    else {
      RepeatedField<int>::Add((RepeatedField<int> *)*param_3,iVar3);
    }
  }
  return (char *)0x0;
}

// <lambda_1> @ 14fb7ccb0

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::PackedEnumParserArg<class google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>::<lambda_1>(void *
   __ptr64 const & __ptr64,struct google::protobuf::internal::ExtensionInfo::EnumValidityCheck const
   & __ptr64,class google::protobuf::internal::InternalMetadata * __ptr64 const & __ptr64,int const
   & __ptr64) __ptr64 */

<lambda_1> * __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'
::__l2::<lambda_1>::<lambda_1>
          (<lambda_1> *this,void **param_1,EnumValidityCheck *param_2,InternalMetadata **param_3,
          int *param_4)

{
  void *pvVar1;
  
  *(void **)this = *param_1;
  pvVar1 = param_2->arg;
  *(_func___cdecl_bool_void_ptr_int **)(this + 8) = param_2->func;
  *(void **)(this + 0x10) = pvVar1;
  *(InternalMetadata **)(this + 0x18) = *param_3;
  *(int *)(this + 0x20) = *param_4;
  return this;
}

// DescriptorPoolExtensionFinder @ 14fb7cd10

/* public: __cdecl
   google::protobuf::internal::DescriptorPoolExtensionFinder::DescriptorPoolExtensionFinder(class
   google::protobuf::DescriptorPool const * __ptr64,class google::protobuf::MessageFactory *
   __ptr64,class google::protobuf::Descriptor const * __ptr64) __ptr64 */

DescriptorPoolExtensionFinder * __thiscall
google::protobuf::internal::DescriptorPoolExtensionFinder::DescriptorPoolExtensionFinder
          (DescriptorPoolExtensionFinder *this,DescriptorPool *param_1,MessageFactory *param_2,
          Descriptor *param_3)

{
  *(DescriptorPool **)this = param_1;
  *(MessageFactory **)(this + 8) = param_2;
  *(Descriptor **)(this + 0x10) = param_3;
  return this;
}

// operator() @ 14fb7cd30

/* public: __cdecl `char const * __ptr64 __cdecl
   google::protobuf::internal::PackedEnumParserArg<class google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata *
   __ptr64,int)'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  InternalMetadata *this_00;
  char cVar1;
  UnknownFieldSet *this_01;
  
  if (*(code **)(this + 8) == (code *)0x0) {
    cVar1 = google::protobuf::internal::ValidateEnum(param_1,*(uint **)(this + 0x10));
  }
  else {
    cVar1 = (**(code **)(this + 8))(*(uint **)(this + 0x10),param_1);
  }
  if (cVar1 != '\0') {
    google::protobuf::RepeatedField<int>::Add(*(RepeatedField<int> **)this,param_1);
    return;
  }
  this_00 = *(InternalMetadata **)(this + 0x18);
  if ((this_00->ptr_ & 1) == 0) {
    this_01 = google::protobuf::internal::InternalMetadata::
              mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(this_00);
  }
  else {
    this_01 = (UnknownFieldSet *)((this_00->ptr_ & 0xfffffffffffffffeU) + 8);
  }
  google::protobuf::UnknownFieldSet::AddVarint(this_01,*(int *)(this + 0x20),(longlong)param_1);
  return;
}

// operator() @ 14fb7cdb0

/* public: __cdecl `public: char const * __ptr64 __cdecl
   google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<class `char const * __ptr64
   __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1> >(char const *
   __ptr64,class `char const * __ptr64 __cdecl google::protobuf::internal::PackedEnumParserArg<class
   google::protobuf::UnknownFieldSet,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void * __ptr64,char const *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64,struct
   google::protobuf::internal::ExtensionInfo::EnumValidityCheck,class
   google::protobuf::internal::InternalMetadata * __ptr64,int)'::`2'::<lambda_1>)
   __ptr64'::`2'::<lambda_1>::operator()(int)const __ptr64 */

void __thiscall
`public:_char_const*___ptr64___cdecl_google::protobuf::internal::EpsCopyInputStream::ReadPackedVarint<`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>_>(char_const*___ptr64,`char_const*___ptr64___cdecl_google::protobuf::internal::PackedEnumParserArg<google::protobuf::UnknownFieldSet,google::protobuf::internal::ExtensionInfo::EnumValidityCheck>(void*___ptr64,char_const*___ptr64,google::protobuf::internal::ParseContext*___ptr64,google::protobuf::internal::ExtensionInfo::EnumValidityCheck,google::protobuf::internal::InternalMetadata*___ptr64,int)'::`2'::<lambda_1>)___ptr64'
::__l2::<lambda_1>::operator()(<lambda_1> *this,int param_1)

{
  return;
}

// FUN_14fb7cdc0 @ 14fb7cdc0

void FUN_14fb7cdc0(undefined8 *param_1,int param_2,Extension *param_3)

{
  FieldDescriptor *pFVar1;
  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
  *this;
  FieldDescriptor **ppFVar2;
  bool bVar3;
  int iVar4;
  FieldDescriptor *local_res18 [2];
  
  if (param_3->is_repeated == false) {
    bVar3 = (bool)(~param_3->is_cleared & 1);
  }
  else {
    iVar4 = google::protobuf::internal::ExtensionSet::Extension::GetSize(param_3);
    bVar3 = 0 < iVar4;
  }
  if (bVar3 != false) {
    pFVar1 = param_3->descriptor;
    this = *(vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
             **)param_1[2];
    if (pFVar1 == (FieldDescriptor *)0x0) {
      local_res18[0] =
           google::protobuf::DescriptorPool::FindExtensionByNumber
                     ((DescriptorPool *)param_1[1],(Descriptor *)*param_1,param_2);
      ppFVar2 = *(FieldDescriptor ***)(this + 8);
      if (ppFVar2 != *(FieldDescriptor ***)(this + 0x10)) {
        *ppFVar2 = local_res18[0];
        *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
        return;
      }
      std::
      vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
      ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64>
                (this,ppFVar2,local_res18);
      return;
    }
    ppFVar2 = *(FieldDescriptor ***)(this + 8);
    if (ppFVar2 != *(FieldDescriptor ***)(this + 0x10)) {
      *ppFVar2 = pFVar1;
      *(longlong *)(this + 8) = *(longlong *)(this + 8) + 8;
      return;
    }
    std::
    vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
    ::_Emplace_reallocate<google::protobuf::FieldDescriptor_const*___ptr64_const&___ptr64>
              (this,ppFVar2,&param_3->descriptor);
  }
  return;
}

// FUN_14fb7ceb0 @ 14fb7ceb0

void FUN_14fb7ceb0(undefined8 *param_1,undefined8 param_2,Extension *param_3)

{
  __uint64 _Var1;
  
  _Var1 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong(param_3);
  *(longlong *)*param_1 = *(longlong *)*param_1 + _Var1;
  return;
}

// AddAllocated @ 14fb7cee0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::MessageLite>::AddAllocated(class google::protobuf::MessageLite * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::AddAllocated
          (RepeatedPtrField<google::protobuf::MessageLite> *this,MessageLite *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  RepeatedPtrField<google::protobuf::MessageLite> *pRVar4;
  Arena *pAVar5;
  bool bVar6;
  
  pAVar5 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar5 = (Arena *)(pAVar5->impl_).tag_and_id_;
  }
  if (*(Arena **)(this + 0x10) == pAVar5) {
    lVar2 = *(longlong *)this;
    if ((~(byte)*this & 1) == 0) {
      bVar6 = *(int *)(this + 0xc) + 1 <= *(int *)(lVar2 + -1);
    }
    else {
      bVar6 = lVar2 != 0;
    }
    if (!bVar6) {
      if ((~(byte)*this & 1) == 0) {
        uVar3 = *(uint *)(lVar2 + -1);
        pRVar4 = (RepeatedPtrField<google::protobuf::MessageLite> *)(lVar2 + 7);
      }
      else {
        uVar3 = (uint)(lVar2 != 0);
        pRVar4 = this;
      }
      if (*(int *)(this + 8) < (int)uVar3) {
        if ((~(byte)lVar2 & 1) == 0) {
          uVar3 = *(uint *)(lVar2 + -1);
        }
        else {
          uVar3 = (uint)(lVar2 != 0);
        }
        *(undefined8 *)(pRVar4 + (longlong)(int)uVar3 * 8) =
             *(undefined8 *)(pRVar4 + (longlong)*(int *)(this + 8) * 8);
      }
      iVar1 = *(int *)(this + 8);
      *(int *)(this + 8) = iVar1 + 1;
      *(MessageLite **)(pRVar4 + (longlong)iVar1 * 8) = param_1;
      if ((~(byte)*this & 1) == 0) {
        *(int *)(*(longlong *)this + -1) = *(int *)(*(longlong *)this + -1) + 1;
        return;
      }
      return;
    }
  }
  internal::RepeatedPtrFieldBase::
  AddAllocatedSlowWithCopy<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
            ((RepeatedPtrFieldBase *)this,param_1,pAVar5,*(Arena **)(this + 0x10));
  return;
}

// AddAllocatedMessage @ 14fb7cfb0

/* public: void __cdecl google::protobuf::internal::ExtensionSet::AddAllocatedMessage(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::MessageLite * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::ExtensionSet::AddAllocatedMessage
          (ExtensionSet *this,FieldDescriptor *param_1,MessageLite *param_2)

{
  Extension *pEVar1;
  
  pEVar1 = MaybeNewRepeatedExtension(this,param_1);
  RepeatedPtrField<google::protobuf::MessageLite>::AddAllocated
            ((RepeatedPtrField<google::protobuf::MessageLite> *)pEVar1->field0_0x0,param_2);
  return;
}

// AddMessage @ 14fb7cfe0

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::AddMessage(class google::protobuf::FieldDescriptor
   const * __ptr64,class google::protobuf::MessageFactory * __ptr64) __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::ExtensionSet::AddMessage
          (ExtensionSet *this,FieldDescriptor *param_1,MessageFactory *param_2)

{
  int iVar1;
  code *pcVar2;
  Extension *pEVar3;
  Descriptor *pDVar4;
  MessageLite *pMVar5;
  uint uVar6;
  byte *pbVar7;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  pEVar3 = MaybeNewRepeatedExtension(this,param_1);
  pbVar7 = *(byte **)&(pEVar3->field0_0x0).int32_t_value;
  pMVar5 = *(MessageLite **)pbVar7;
  if ((~*pbVar7 & 1) == 0) {
    uVar6 = *(uint *)((longlong)&pMVar5[-1]._internal_metadata_.ptr_ + 7);
  }
  else {
    uVar6 = (uint)(pMVar5 != (MessageLite *)0x0);
  }
  iVar1 = *(int *)(pbVar7 + 8);
  if (iVar1 < (int)uVar6) {
    *(int *)(pbVar7 + 8) = iVar1 + 1;
    if ((~*pbVar7 & 1) == 0) {
      pMVar5 = *(MessageLite **)((longlong)&pMVar5->_padding_ + (longlong)iVar1 * 8 + 7);
    }
    if (pMVar5 != (MessageLite *)0x0) {
      return pMVar5;
    }
  }
  pbVar7 = *(byte **)&(pEVar3->field0_0x0).int32_t_value;
  if (*(int *)(pbVar7 + 8) == 0) {
    pcVar2 = *(code **)((longlong)*param_2 + 8);
    pDVar4 = FieldDescriptor::message_type(param_1);
    pMVar5 = (MessageLite *)(*pcVar2)(param_2,pDVar4);
    if (pMVar5 == (MessageLite *)0x0) {
      local_38._Mydata = "prototype != nullptr";
      local_38._Mysize = 0x14;
      absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                (&local_28,
                 "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\extension_set_heavy.cc"
                 ,0xf1,&local_38);
                    /* WARNING: Subroutine does not return */
      absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
    }
  }
  else {
    if ((~*pbVar7 & 1) == 0) {
      pbVar7 = (byte *)(*(longlong *)pbVar7 + 7);
    }
    pMVar5 = *(MessageLite **)pbVar7;
  }
  pMVar5 = MessageLite::New(pMVar5,this->arena_);
  RepeatedPtrField<google::protobuf::MessageLite>::AddAllocated
            ((RepeatedPtrField<google::protobuf::MessageLite> *)pEVar3->field0_0x0,pMVar5);
  return pMVar5;
}

// AppendToList @ 14fb7d120

/* public: void __cdecl google::protobuf::internal::ExtensionSet::AppendToList(class
   google::protobuf::Descriptor const * __ptr64,class google::protobuf::DescriptorPool const *
   __ptr64,class std::vector<class google::protobuf::FieldDescriptor const * __ptr64,class
   std::allocator<class google::protobuf::FieldDescriptor const * __ptr64> > * __ptr64)const __ptr64
    */

void __thiscall
google::protobuf::internal::ExtensionSet::AppendToList
          (ExtensionSet *this,Descriptor *param_1,DescriptorPool *param_2,
          vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
          *param_3)

{
  KeyValue *pKVar1;
  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
  *local_res20;
  longlong local_48;
  uint uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  Descriptor *local_28;
  DescriptorPool *local_20;
  vector<google::protobuf::FieldDescriptor_const*___ptr64,std::allocator<google::protobuf::FieldDescriptor_const*___ptr64>_>
  **local_18;
  
  pKVar1 = (this->map_).flat;
  local_res20 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  if ((short)this->flat_size_ < 0) {
    local_48 = (pKVar1->second).field0_0x0.int64_t_value;
    uStack_40 = (uint)*(byte *)(local_48 + 10);
    local_38 = **(undefined8 **)pKVar1;
    local_18 = &local_res20;
    uStack_30 = 0;
    FUN_14fb7ae30(&local_38,&local_48);
    return;
  }
  local_18 = &local_res20;
  FUN_14fb7ab80(pKVar1,pKVar1 + this->flat_size_,&local_28);
  return;
}

// Find @ 14fb7d1d0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: bool __cdecl google::protobuf::internal::DescriptorPoolExtensionFinder::Find(int,struct
   google::protobuf::internal::ExtensionInfo * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::DescriptorPoolExtensionFinder::Find
          (DescriptorPoolExtensionFinder *this,int param_1,ExtensionInfo *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar4;
  bool bVar5;
  FieldDescriptor *this_00;
  Descriptor *pDVar6;
  MessageLite *pMVar7;
  longlong lVar8;
  void *pvVar9;
  LogMessage *this_01;
  EnumDescriptor *pEVar10;
  bool bVar11;
  basic_string_view<char,std::char_traits<char>_> local_38;
  LogMessageFatal local_28;
  
  bVar11 = false;
  this_00 = DescriptorPool::FindExtensionByNumber
                      (*(DescriptorPool **)this,*(Descriptor **)(this + 0x10),param_1);
  bVar5 = false;
  if (this_00 != (FieldDescriptor *)0x0) {
    param_2->type = this_00->type_;
    param_2->is_repeated = this_00->is_repeated_;
    bVar5 = FieldDescriptor::is_packed(this_00);
    param_2->is_packed = bVar5;
    param_2->descriptor = this_00;
    iVar1 = *(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)this_00->type_ * 4);
    if (iVar1 == 10) {
      plVar2 = *(longlong **)(this + 8);
      pcVar3 = *(code **)(*plVar2 + 8);
      pDVar6 = FieldDescriptor::message_type(this_00);
      pMVar7 = (MessageLite *)(*pcVar3)(plVar2,pDVar6);
      (param_2->field6_0x10).message_info.prototype = pMVar7;
      lVar8 = (**(code **)(pMVar7->_padding_ + 0x18))(pMVar7);
      pvVar9 = *(void **)(lVar8 + 8);
      if (pvVar9 == (void *)0x0) {
        pvVar9 = (void *)(**(code **)(*(longlong *)(lVar8 + 0x40) + 0x10))(pMVar7);
      }
      (param_2->field6_0x10).enum_validity_check.arg = pvVar9;
      if ((param_2->field6_0x10).enum_validity_check.func == (_func___cdecl_bool_void_ptr_int *)0x0)
      {
        local_38._Mydata = "output->message_info.prototype != nullptr";
        local_38._Mysize = 0x29;
        this_01 = (LogMessage *)
                  absl::lts_20240722::log_internal::LogMessageFatal::LogMessageFatal
                            (&local_28,
                             "D:\\fn\\main\\Engine\\Source\\ThirdParty\\Protobuf\\30.0\\src\\src\\google\\protobuf\\extension_set_heavy.cc"
                             ,0x11d,&local_38);
        bVar11 = true;
        local_38._Mydata = "Extension factory\'s GetPrototype() returned nullptr; extension: ";
        local_38._Mysize = 0x40;
        absl::lts_20240722::log_internal::LogMessage::CopyToEncodedBuffer<0>(this_01,&local_38);
        pbVar4 = this_00->all_names_;
        local_38._Mydata = (char *)(pbVar4 + 1);
        if (0xf < pbVar4[1]._Mypair._Myval2._Myres) {
          local_38._Mydata = pbVar4[1]._Mypair._Myval2._Bx._Ptr;
        }
        local_38._Mysize = pbVar4[1]._Mypair._Myval2._Mysize;
        absl::lts_20240722::log_internal::LogMessage::operator<<(this_01,&local_38);
      }
      if (bVar11) {
                    /* WARNING: Subroutine does not return */
        absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal(&local_28);
      }
    }
    else if (iVar1 == 8) {
      (param_2->field6_0x10).enum_validity_check.func = FUN_14fb7deb0;
      pEVar10 = FieldDescriptor::enum_type(this_00);
      (param_2->field6_0x10).message_info.tc_table = (TcParseTableBase *)pEVar10;
    }
    bVar5 = true;
  }
  return bVar5;
}

// FindExtension @ 14fb7d390

/* private: bool __cdecl google::protobuf::internal::ExtensionSet::FindExtension(int,unsigned
   int,class google::protobuf::Message const * __ptr64,class
   google::protobuf::internal::ParseContext const * __ptr64,struct
   google::protobuf::internal::ExtensionInfo * __ptr64,bool * __ptr64) __ptr64 */

bool __thiscall
google::protobuf::internal::ExtensionSet::FindExtension
          (ExtensionSet *this,int param_1,uint param_2,Message *param_3,ParseContext *param_4,
          ExtensionInfo *param_5,bool *param_6)

{
  WireType WVar1;
  ParseContext *pPVar2;
  ExtensionInfo *pEVar3;
  bool *pbVar4;
  bool bVar5;
  Metadata *pMVar6;
  Metadata local_30;
  DescriptorPool *local_20;
  MessageFactory *local_18;
  Descriptor *local_10;
  
  pEVar3 = param_5;
  pPVar2 = param_4;
  if ((param_4->data_).pool == (DescriptorPool *)0x0) {
    param_4 = (ParseContext *)param_3;
    bVar5 = GeneratedExtensionFinder::Find((GeneratedExtensionFinder *)&param_4,param_2,param_5);
    pbVar4 = param_6;
    if (bVar5) {
      WVar1 = *(WireType *)
               ((longlong)&WireFormatLite::kWireTypeForFieldType + (ulonglong)pEVar3->type * 4);
      *param_6 = false;
      if (((pEVar3->is_repeated != false) && (param_1 == 2)) && (bVar5 = is_packable(WVar1), bVar5))
      {
        *pbVar4 = true;
        return true;
      }
      if (WVar1 == param_1) {
        return true;
      }
    }
  }
  else {
    pMVar6 = protobuf::Message::GetMetadata(param_3,&local_30);
    pEVar3 = param_5;
    local_10 = pMVar6->descriptor;
    local_20 = (pPVar2->data_).pool;
    local_18 = (pPVar2->data_).factory;
    bVar5 = DescriptorPoolExtensionFinder::Find
                      ((DescriptorPoolExtensionFinder *)&local_20,param_2,param_5);
    pbVar4 = param_6;
    if (bVar5) {
      WVar1 = *(WireType *)
               ((longlong)&WireFormatLite::kWireTypeForFieldType + (ulonglong)pEVar3->type * 4);
      *param_6 = false;
      if (((pEVar3->is_repeated != false) && (param_1 == 2)) && (bVar5 = is_packable(WVar1), bVar5))
      {
        *pbVar4 = true;
        return true;
      }
      return WVar1 == param_1;
    }
  }
  return false;
}

// GetArena @ 14fb7d4d0

/* public: static class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::MessageLite>::GetArena(class google::protobuf::MessageLite * __ptr64) */

Arena * __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::GetArena
          (MessageLite *param_1)

{
  Arena *pAVar1;
  
  pAVar1 = (Arena *)((param_1->_internal_metadata_).ptr_ & 0xfffffffffffffffe);
  if (((param_1->_internal_metadata_).ptr_ & 1) != 0) {
    pAVar1 = (Arena *)(pAVar1->impl_).tag_and_id_;
  }
  return pAVar1;
}

// GetMessage @ 14fb7d4f0

/* public: class google::protobuf::MessageLite const & __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::GetMessage(int,class google::protobuf::Descriptor const
   * __ptr64,class google::protobuf::MessageFactory * __ptr64)const __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::ExtensionSet::GetMessage
          (ExtensionSet *this,int param_1,Descriptor *param_2,MessageFactory *param_3)

{
  Arena *pAVar1;
  code *pcVar2;
  Extension *pEVar3;
  undefined8 uVar4;
  MessageLite *pMVar5;
  
  pEVar3 = FindOrNull(this,param_1);
  if ((pEVar3 != (Extension *)0x0) && (!pEVar3->is_cleared)) {
    pMVar5 = (MessageLite *)(pEVar3->field0_0x0).int64_t_value;
    if (pEVar3->is_lazy) {
      pAVar1 = this->arena_;
      pcVar2 = *(code **)(pMVar5->_padding_ + 0x10);
      uVar4 = (**(code **)((longlong)*param_3 + 8))(param_3,param_2);
      pMVar5 = (MessageLite *)(*pcVar2)(pMVar5,uVar4,pAVar1);
    }
    return pMVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00014fb7d585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pMVar5 = (MessageLite *)(**(code **)((longlong)*param_3 + 8))(param_3,param_2);
  return pMVar5;
}

// MaybeNewRepeatedExtension @ 14fb7d590

/* private: struct google::protobuf::internal::ExtensionSet::Extension * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension(class
   google::protobuf::FieldDescriptor const * __ptr64) __ptr64 */

Extension * __thiscall
google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension
          (ExtensionSet *this,FieldDescriptor *param_1)

{
  Arena *this_00;
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Extension *local_res10 [2];
  
  puVar3 = (undefined8 *)0x0;
  bVar1 = MaybeNewExtension(this,param_1->number_,param_1,local_res10);
  if (!bVar1) {
    return local_res10[0];
  }
  local_res10[0]->type = param_1->type_;
  local_res10[0]->is_repeated = true;
  local_res10[0]->is_pointer = true;
  this_00 = this->arena_;
  if (this_00 == (Arena *)0x0) {
    puVar2 = ::operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) goto LAB_14fb7d61c;
    puVar2[2] = 0;
  }
  else {
    puVar2 = Arena::Allocate(this_00,0x18);
    puVar2[2] = this_00;
  }
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar3 = puVar2;
LAB_14fb7d61c:
  *(undefined8 **)&(local_res10[0]->field0_0x0).int32_t_value = puVar3;
  return local_res10[0];
}

// MutableMessage @ 14fb7d640

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::MutableMessage(class google::protobuf::FieldDescriptor
   const * __ptr64,class google::protobuf::MessageFactory * __ptr64) __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::ExtensionSet::MutableMessage
          (ExtensionSet *this,FieldDescriptor *param_1,MessageFactory *param_2)

{
  code *pcVar1;
  Arena *pAVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  Descriptor *pDVar6;
  MessageLite *pMVar7;
  Extension_u_0 EVar8;
  undefined8 uVar9;
  Extension *local_res10;
  
  bVar5 = MaybeNewExtension(this,param_1->number_,param_1,&local_res10);
  if (bVar5) {
    local_res10->type = param_1->type_;
    local_res10->is_repeated = false;
    local_res10->is_pointer = true;
    local_res10->is_packed = false;
    pcVar1 = *(code **)((longlong)*param_2 + 8);
    pDVar6 = FieldDescriptor::message_type(param_1);
    pMVar7 = (MessageLite *)(*pcVar1)(param_2,pDVar6);
    local_res10->is_lazy = false;
    EVar8 = (Extension_u_0)MessageLite::New(pMVar7,this->arena_);
    local_res10->field0_0x0 = EVar8;
    local_res10->is_cleared = false;
  }
  else {
    local_res10->is_cleared = false;
    if (local_res10->is_lazy) {
      pAVar2 = this->arena_;
      plVar3 = *(longlong **)&(local_res10->field0_0x0).int32_t_value;
      pcVar1 = *(code **)(*plVar3 + 0x20);
      pcVar4 = *(code **)((longlong)*param_2 + 8);
      pDVar6 = FieldDescriptor::message_type(param_1);
      uVar9 = (*pcVar4)(param_2,pDVar6);
      pMVar7 = (MessageLite *)(*pcVar1)(plVar3,uVar9,pAVar2);
      return pMVar7;
    }
  }
  return (MessageLite *)(local_res10->field0_0x0).int64_t_value;
}

// ParseField @ 14fb7d750

/* public: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseField(unsigned __int64,char const * __ptr64,class
   google::protobuf::Message const * __ptr64,class google::protobuf::internal::InternalMetadata *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ExtensionSet::ParseField
          (ExtensionSet *this,__uint64 param_1,char *param_2,Message *param_3,
          InternalMetadata *param_4,ParseContext *param_5)

{
  WireType WVar1;
  ParseContext *pPVar2;
  bool bVar3;
  UnknownFieldSet *pUVar4;
  Metadata *pMVar5;
  char *pcVar6;
  WireType WVar7;
  int iVar8;
  Metadata local_88;
  DescriptorPool *local_78;
  MessageFactory *local_70;
  Descriptor *local_68;
  ExtensionInfo local_60;
  
  pPVar2 = param_5;
  local_60.message = (MessageLite *)0x0;
  local_60.number = 0;
  local_60.type = '\0';
  local_60.is_repeated = false;
  local_60.is_packed = false;
  local_60.is_lazy = kUndefined;
  local_60.field6_0x10.enum_validity_check.func = (_func___cdecl_bool_void_ptr_int *)0x0;
  local_60.field6_0x10.enum_validity_check.arg = (void *)0x0;
  WVar7 = (WireType)param_1 & (WIRETYPE_END_GROUP|WIRETYPE_START_GROUP);
  local_60.descriptor = (FieldDescriptor *)0x0;
  local_60.lazy_eager_verify_func = (_func___cdecl_char_ptr_char_ptr_ParseContext_ptr *)0x0;
  iVar8 = (int)(param_1 >> 3);
  if ((param_5->data_).pool == (DescriptorPool *)0x0) {
    param_5 = (ParseContext *)param_3;
    bVar3 = GeneratedExtensionFinder::Find((GeneratedExtensionFinder *)&param_5,iVar8,&local_60);
    if (!bVar3) goto LAB_14fb7d7f8;
    WVar1 = *(WireType *)
             ((longlong)&WireFormatLite::kWireTypeForFieldType +
             ((ulonglong)local_60._8_8_ >> 0x20 & 0xff) * 4);
    if (((local_60.is_repeated != false) && (WVar7 == WIRETYPE_LENGTH_DELIMITED)) &&
       (bVar3 = is_packable(WVar1), bVar3)) {
LAB_14fb7d87e:
      bVar3 = true;
      goto LAB_14fb7d88b;
    }
  }
  else {
    pMVar5 = protobuf::Message::GetMetadata(param_3,&local_88);
    local_68 = pMVar5->descriptor;
    local_78 = (pPVar2->data_).pool;
    local_70 = (pPVar2->data_).factory;
    bVar3 = DescriptorPoolExtensionFinder::Find
                      ((DescriptorPoolExtensionFinder *)&local_78,iVar8,&local_60);
    if (!bVar3) goto LAB_14fb7d7f8;
    WVar1 = *(WireType *)
             ((longlong)&WireFormatLite::kWireTypeForFieldType +
             ((ulonglong)local_60._8_8_ >> 0x20 & 0xff) * 4);
    if (((local_60.is_repeated != false) && (WVar7 == WIRETYPE_LENGTH_DELIMITED)) &&
       (bVar3 = is_packable(WVar1), bVar3)) goto LAB_14fb7d87e;
  }
  bVar3 = false;
  if (WVar1 != WVar7) {
LAB_14fb7d7f8:
    if ((param_4->ptr_ & 1) == 0) {
      pUVar4 = InternalMetadata::mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>
                         (param_4);
    }
    else {
      pUVar4 = (UnknownFieldSet *)((param_4->ptr_ & 0xfffffffffffffffeU) + 8);
    }
    pcVar6 = UnknownFieldParse(param_1,pUVar4,param_2,pPVar2);
    return pcVar6;
  }
LAB_14fb7d88b:
  pcVar6 = ParseFieldWithExtensionInfo<google::protobuf::UnknownFieldSet>
                     (this,iVar8,bVar3,&local_60,param_4,param_2,pPVar2);
  return pcVar6;
}

// ParseFieldMaybeLazily @ 14fb7d900

/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseFieldMaybeLazily(unsigned __int64,char const *
   __ptr64,class google::protobuf::Message const * __ptr64,class
   google::protobuf::internal::InternalMetadata * __ptr64,class
   google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ExtensionSet::ParseFieldMaybeLazily
          (ExtensionSet *this,__uint64 param_1,char *param_2,Message *param_3,
          InternalMetadata *param_4,ParseContext *param_5)

{
  char *pcVar1;
  
  pcVar1 = ParseField(this,param_1,param_2,param_3,param_4,param_5);
  return pcVar1;
}

// ParseMessageSetItem @ 14fb7d910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: char const * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ParseMessageSetItem(char const * __ptr64,class
   google::protobuf::Message const * __ptr64,class google::protobuf::internal::InternalMetadata *
   __ptr64,class google::protobuf::internal::ParseContext * __ptr64) __ptr64 */

char * __thiscall
google::protobuf::internal::ExtensionSet::ParseMessageSetItem
          (ExtensionSet *this,char *param_1,Message *param_2,InternalMetadata *param_3,
          ParseContext *param_4)

{
  ushort uVar1;
  WireType WVar2;
  bool bVar3;
  int iVar4;
  UnknownFieldSet *this_00;
  Metadata *pMVar5;
  MessageLite *this_01;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_02;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  __uint64 _Var11;
  ulonglong uVar12;
  ulong64 uVar13;
  byte bVar14;
  ushort *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined1 auStackY_1f8 [32];
  uint uStack_1c8;
  <lambda_1> <Stack_1b8;
  ExtensionInfo EStack_1a8;
  InternalMetadata *pIStack_178;
  Message *pMStack_170;
  ushort *puStack_168;
  char cStack_160;
  ushort *puStack_158;
  uint uStack_150;
  ushort *puStack_148;
  uint uStack_140;
  DescriptorPool *pDStack_138;
  MessageFactory *pMStack_130;
  Descriptor *pDStack_128;
  Metadata MStack_120;
  _Bxty _Stack_110;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  _Bxty _Stack_f0;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  undefined1 auStack_c8 [48];
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  DescriptorPool *pDStack_68;
  MessageFactory *pMStack_60;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar17 = 0;
  _Stack_f0._8_8_ = 0;
  uStack_e0 = 0;
  uStack_d8 = 0xf;
  _Stack_f0._Ptr = (char *)0x0;
  uStack_1c8 = 0;
  uVar12 = uVar17;
  pIStack_178 = param_3;
LAB_14fb7c105:
  do {
    while( true ) {
      if ((ushort *)param_4->_padding_ <= param_1) {
        iVar4 = (int)param_1 - (int)param_4->_padding_;
        if (iVar4 == *(int *)((longlong)&param_4->_padding_ + 4)) {
          puVar18 = (ushort *)param_1;
          if ((0 < iVar4) && (puVar18 = (ushort *)param_1, param_4->_padding_ == 0)) {
            puVar18 = (ushort *)0x0;
          }
          goto LAB_14fb7c775;
        }
        EpsCopyInputStream::DoneFallback((EpsCopyInputStream *)param_4,(int)&puStack_168,iVar4);
        puVar18 = puStack_168;
        param_1 = (char *)puStack_168;
        if (cStack_160 != '\0') goto LAB_14fb7c775;
      }
      puVar18 = (ushort *)((longlong)param_1 + 1);
      iVar4 = (int)uVar17;
      if ((byte)*(ushort *)param_1 != 0x10) break;
      uVar8 = (uint)(char)*puVar18;
      uVar9 = (uVar8 & *puVar18) + uVar8;
      param_1 = (char *)((ulonglong)(uVar9 < uVar8) + 1 + (longlong)puVar18);
      uVar8 = uVar9 >> 1;
      uVar16 = (ulonglong)uVar8;
      if ((short)uVar9 < 0) {
        uVar9 = 1;
        bVar14 = 0xd;
        while( true ) {
          puVar15 = (ushort *)((ulonglong)(uVar9 * 2) + (longlong)puVar18);
          uVar1 = *puVar15;
          uVar8 = (uint)(char)uVar1;
          uVar10 = (uVar8 & uVar1) + uVar8;
          param_1 = (char *)((longlong)puVar15 + (ulonglong)(uVar10 < uVar8) + 1);
          uVar16 = uVar16 + ((ulonglong)uVar10 - 2 << (bVar14 & 0x3f));
          uVar8 = (uint)uVar16;
          if (-1 < (short)uVar10) break;
          uVar9 = uVar9 + 1;
          bVar14 = bVar14 + 0xe;
          if (4 < uVar9) goto LAB_14fb7c1d5;
        }
      }
      if (((ushort *)param_1 == (ushort *)0x0) || (uVar8 == 0)) {
LAB_14fb7c1d5:
        puVar18 = (ushort *)0x0;
        goto LAB_14fb7c775;
      }
      if (iVar4 == 0) {
        uVar12 = (ulonglong)uVar8;
        uVar17 = 1;
        uStack_1c8 = uVar8;
      }
      else if (iVar4 == 2) {
        EStack_1a8.message = (MessageLite *)0x0;
        EStack_1a8.number = 0;
        EStack_1a8.type = '\0';
        EStack_1a8.is_repeated = false;
        EStack_1a8.is_packed = false;
        EStack_1a8.is_lazy = kUndefined;
        EStack_1a8.field6_0x10.enum_validity_check.func = (_func___cdecl_bool_void_ptr_int *)0x0;
        EStack_1a8.field6_0x10.enum_validity_check.arg = (void *)0x0;
        EStack_1a8.descriptor = (FieldDescriptor *)0x0;
        EStack_1a8.lazy_eager_verify_func = (_func___cdecl_char_ptr_char_ptr_ParseContext_ptr *)0x0;
        if ((param_4->data_).pool == (DescriptorPool *)0x0) {
          pMStack_170 = param_2;
          bVar3 = GeneratedExtensionFinder::Find
                            ((GeneratedExtensionFinder *)&pMStack_170,uVar8,&EStack_1a8);
          if (!bVar3) goto LAB_14fb7c280;
          WVar2 = *(WireType *)
                   ((longlong)&WireFormatLite::kWireTypeForFieldType +
                   ((ulonglong)EStack_1a8._8_8_ >> 0x20 & 0xff) * 4);
          if (((EStack_1a8.is_repeated == false) || (bVar3 = is_packable(WVar2), !bVar3)) &&
             (WVar2 != WIRETYPE_LENGTH_DELIMITED)) goto LAB_14fb7c280;
LAB_14fb7c2f7:
          if (EStack_1a8.is_repeated == false) {
            this_01 = MutableMessage(this,uVar8,'\v',EStack_1a8.field6_0x10.message_info.prototype,
                                     EStack_1a8.descriptor);
          }
          else {
            this_01 = AddMessage(this,uVar8,'\v',EStack_1a8.field6_0x10.message_info.prototype,
                                 EStack_1a8.descriptor);
          }
          uVar12 = uStack_e0;
          auStack_c8._32_8_ = 0;
          auStack_c8._40_8_ = 0;
          lStack_98 = 0;
          lStack_90 = 0;
          lStack_88 = 0;
          lStack_80 = 0;
          lStack_78 = 0;
          iStack_70 = param_4->depth_;
          iStack_6c = -0x80000000;
          pDStack_68 = (param_4->data_).pool;
          pMStack_60 = (param_4->data_).factory;
          uVar7 = &_Stack_f0;
          if (0xf < uStack_d8) {
            uVar7 = _Stack_f0._Ptr;
          }
          if (uStack_e0 < 0x11) {
            if (uStack_e0 != 0) {
              memcpy(auStack_c8 + 0x28,(void *)uVar7,uStack_e0);
            }
            auStack_c8._28_4_ = 0;
            auStack_c8._8_8_ = auStack_c8 + uVar12 + 0x28;
            auStack_c8._16_8_ = (undefined1 *)0x0;
            if (lStack_80 == 1) {
              lStack_80 = uVar7 + (-0x28 - (longlong)auStack_c8);
            }
            uVar7 = auStack_c8 + 0x28;
          }
          else {
            auStack_c8._28_4_ = 0x10;
            auStack_c8._8_8_ = uVar7 + (uStack_e0 - 0x10);
            auStack_c8._16_8_ = auStack_c8 + 0x28;
          }
          auStack_c8._0_8_ = auStack_c8._8_8_;
          pcVar6 = MessageLite::_InternalParse(this_01,(char *)uVar7,(ParseContext *)auStack_c8);
          if ((pcVar6 == (char *)0x0) || ((int)lStack_78 != 0)) goto LAB_14fb7c1d5;
        }
        else {
          pMVar5 = protobuf::Message::GetMetadata(param_2,&MStack_120);
          pDStack_128 = pMVar5->descriptor;
          pMStack_130 = (param_4->data_).factory;
          pDStack_138 = (param_4->data_).pool;
          bVar3 = DescriptorPoolExtensionFinder::Find
                            ((DescriptorPoolExtensionFinder *)&pDStack_138,uVar8,&EStack_1a8);
          if (bVar3) {
            WVar2 = *(WireType *)
                     ((longlong)&WireFormatLite::kWireTypeForFieldType +
                     ((ulonglong)EStack_1a8._8_8_ >> 0x20 & 0xff) * 4);
            if (((EStack_1a8.is_repeated != false) && (bVar3 = is_packable(WVar2), bVar3)) ||
               (WVar2 == WIRETYPE_LENGTH_DELIMITED)) goto LAB_14fb7c2f7;
          }
LAB_14fb7c280:
          if ((param_3->ptr_ & 1) == 0) {
            this_00 = InternalMetadata::
                      mutable_unknown_fields_slow<google::protobuf::UnknownFieldSet>(param_3);
          }
          else {
            this_00 = (UnknownFieldSet *)((param_3->ptr_ & 0xfffffffffffffffeU) + 8);
          }
          uVar12 = uStack_e0;
          uVar7 = &_Stack_f0;
          if (0xf < uStack_d8) {
            uVar7 = _Stack_f0._Ptr;
          }
          this_02 = UnknownFieldSet::AddLengthDelimited(this_00,uVar8);
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                    (this_02,(char *)uVar7,uVar12);
        }
        uVar12 = (ulonglong)uVar8;
        uVar17 = 3;
        param_3 = pIStack_178;
        uStack_1c8 = uVar8;
      }
    }
    if ((byte)*(ushort *)param_1 == 0x1a) {
      if (iVar4 == 1) {
        param_1 = ParseField(this,uVar12 * 8 + 2,(char *)puVar18,param_2,param_3,param_4);
        if ((ushort *)param_1 == (ushort *)0x0) goto LAB_14fb7c1d5;
        uVar17 = 3;
        goto LAB_14fb7c105;
      }
      _Stack_110._8_8_ = 0;
      uStack_100 = 0;
      uStack_f8 = 0xf;
      _Stack_110._Ptr = (char *)0x0;
      if (*(byte *)puVar18 < 0x80) {
        puVar15 = (ushort *)((longlong)param_1 + 2);
        uVar8 = (uint)*(byte *)puVar18;
      }
      else {
        ReadSizeFallback((char *)&puStack_158,(uint)puVar18);
        puVar15 = puStack_158;
        uVar8 = uStack_150;
      }
      if (puVar15 != (ushort *)0x0) {
        if (((int)param_4->_padding_ - (int)puVar15) + 0x10 < (int)uVar8) {
          param_1 = EpsCopyInputStream::ReadStringFallback
                              ((EpsCopyInputStream *)param_4,(char *)puVar15,uVar8,
                               (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               &_Stack_110);
        }
        else {
          uVar16 = (ulonglong)(int)uVar8;
          if (uStack_100 < uVar16) {
            uVar12 = uVar16 - uStack_100;
            if (uStack_f8 - uStack_100 < uVar12) {
              std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
              _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,unsigned___int64,char>
                        ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                         &_Stack_110,uVar12,<Stack_1b8,uVar12,'\0');
            }
            else {
              uVar7 = &_Stack_110;
              if (0xf < uStack_f8) {
                uVar7 = _Stack_110._Ptr;
              }
              pcVar6 = (char *)(uVar7 + uStack_100);
              uStack_100 = uVar16;
              memset(pcVar6,0,uVar12);
              pcVar6[uVar12] = '\0';
            }
            uVar12 = (ulonglong)uStack_1c8;
          }
          else {
            uVar7 = &_Stack_110;
            if (0xf < uStack_f8) {
              uVar7 = _Stack_110._Ptr;
            }
            uStack_100 = uVar16;
            *(char *)(uVar7 + uVar16) = '\0';
          }
          uVar7 = &_Stack_110;
          if (0xf < uStack_f8) {
            uVar7 = _Stack_110._Ptr;
          }
          memcpy((void *)uVar7,puVar15,uVar16);
          param_1 = (char *)((longlong)puVar15 + uVar16);
          param_3 = pIStack_178;
        }
        if ((ushort *)param_1 != (ushort *)0x0) {
          if (iVar4 == 0) {
            if (0xf < uStack_d8) {
              uVar13 = uStack_d8 + 1;
              uVar7 = _Stack_f0._Ptr;
              if (0xfff < uVar13) {
                uVar13 = uStack_d8 + 0x28;
                uVar7 = *(undefined8 *)(_Stack_f0._Ptr + -8);
                if ((char *)0x1f < _Stack_f0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              ::operator_delete((void *)uVar7,uVar13);
            }
            _Stack_f0._Ptr = _Stack_110._Ptr;
            _Stack_f0._8_8_ = _Stack_110._8_8_;
            uStack_e0 = uStack_100;
            uStack_d8 = uStack_f8;
            uStack_100 = 0;
            uStack_f8 = 0xf;
            _Stack_110._Ptr = _Stack_110._Ptr & 0xffffffffffffff00;
            uVar17 = 2;
          }
          if (0xf < uStack_f8) {
            uVar16 = uStack_f8 + 1;
            uVar7 = _Stack_110._Ptr;
            if (0xfff < uVar16) {
              uVar16 = uStack_f8 + 0x28;
              uVar7 = *(undefined8 *)(_Stack_110._Ptr + -8);
              if ((char *)0x1f < _Stack_110._Ptr + (-8 - uVar7)) goto LAB_14fb7c75b;
            }
            ::operator_delete((void *)uVar7,uVar16);
          }
          uStack_100 = 0;
          uStack_f8 = 0xf;
          _Stack_110._Ptr = _Stack_110._Ptr & 0xffffffffffffff00;
          goto LAB_14fb7c105;
        }
      }
      if (0xf < uStack_f8) {
        uVar12 = uStack_f8 + 1;
        uVar7 = _Stack_110._Ptr;
        if (0xfff < uVar12) {
          uVar12 = uStack_f8 + 0x28;
          uVar7 = *(undefined8 *)(_Stack_110._Ptr + -8);
          if ((char *)0x1f < _Stack_110._Ptr + (-8 - uVar7)) {
LAB_14fb7c75b:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar7,uVar12);
      }
      goto LAB_14fb7c767;
    }
    bVar14 = (byte)*(ushort *)param_1;
    _Var11 = (__uint64)bVar14;
    if (0x7f < bVar14) {
      _Var11 = (__uint64)((bVar14 - 0x80) + (uint)*(byte *)puVar18 * 0x80);
      if (*(byte *)puVar18 < 0x80) {
        puVar18 = (ushort *)((longlong)param_1 + 2);
      }
      else {
        ReadTagFallback((char *)&puStack_148,(uint)param_1);
        _Var11 = (__uint64)uStack_140;
        puVar18 = puStack_148;
      }
    }
    if (((int)_Var11 == 0) || (((byte)_Var11 & 7) == 4)) {
      *(int *)&param_4->_padding_ = (int)_Var11 + -1;
      goto LAB_14fb7c775;
    }
    param_1 = ParseField(this,_Var11,(char *)puVar18,param_2,param_3,param_4);
    if ((ushort *)param_1 == (ushort *)0x0) {
LAB_14fb7c767:
      puVar18 = (ushort *)0x0;
LAB_14fb7c775:
      if (0xf < uStack_d8) {
        uVar13 = uStack_d8 + 1;
        uVar7 = _Stack_f0._Ptr;
        if (0xfff < uVar13) {
          uVar13 = uStack_d8 + 0x28;
          uVar7 = *(undefined8 *)(_Stack_f0._Ptr + -8);
          if ((char *)0x1f < _Stack_f0._Ptr + (-8 - uVar7)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        ::operator_delete((void *)uVar7,uVar13);
      }
      return (char *)puVar18;
    }
  } while( true );
}

// ReleaseMessage @ 14fb7d920

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::ReleaseMessage(class google::protobuf::FieldDescriptor
   const * __ptr64,class google::protobuf::MessageFactory * __ptr64) __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::ExtensionSet::ReleaseMessage
          (ExtensionSet *this,FieldDescriptor *param_1,MessageFactory *param_2)

{
  Arena *pAVar1;
  longlong *plVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 *puVar5;
  Extension *pEVar6;
  Descriptor *pDVar7;
  undefined8 uVar8;
  MessageLite *this_00;
  
  pEVar6 = FindOrNull(this,param_1->number_);
  if (pEVar6 == (Extension *)0x0) {
    return (MessageLite *)0x0;
  }
  if (pEVar6->is_lazy) {
    pAVar1 = this->arena_;
    plVar2 = *(longlong **)&(pEVar6->field0_0x0).int32_t_value;
    pcVar3 = *(code **)(*plVar2 + 0x38);
    pcVar4 = *(code **)((longlong)*param_2 + 8);
    pDVar7 = FieldDescriptor::message_type(param_1);
    uVar8 = (*pcVar4)(param_2,pDVar7);
    this_00 = (MessageLite *)(*pcVar3)(plVar2,uVar8,pAVar1);
    if ((this->arena_ == (Arena *)0x0) &&
       (puVar5 = (undefined8 *)(pEVar6->field0_0x0).int64_t_value, puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
    this_00 = (MessageLite *)(pEVar6->field0_0x0).int64_t_value;
    if (this->arena_ != (Arena *)0x0) {
      this_00 = MessageLite::New(this_00,(Arena *)0x0);
      MessageLite::CheckTypeAndMergeFrom(this_00,(MessageLite *)pEVar6->field0_0x0);
    }
  }
  Erase(this,param_1->number_);
  return this_00;
}

// RepeatedMessage_SpaceUsedExcludingSelfLong @ 14fb7da20

/* private: static unsigned __int64 __cdecl
   google::protobuf::internal::ExtensionSet::RepeatedMessage_SpaceUsedExcludingSelfLong(class
   google::protobuf::internal::RepeatedPtrFieldBase * __ptr64) */

__uint64 __cdecl
google::protobuf::internal::ExtensionSet::RepeatedMessage_SpaceUsedExcludingSelfLong
          (RepeatedPtrFieldBase *param_1)

{
  __uint64 _Var1;
  
  _Var1 = RepeatedPtrFieldBase::
          SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
                    (param_1);
  return _Var1;
}

// SerializeMessageSetWithCachedSizesToArray @ 14fb7da30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned char * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizesToArray(class
   google::protobuf::MessageLite const * __ptr64,unsigned char * __ptr64)const __ptr64 */

uchar * __thiscall
google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizesToArray
          (ExtensionSet *this,MessageLite *param_1,uchar *param_2)

{
  atomic<bool> aVar1;
  __uint64 _Var2;
  uchar *puVar3;
  undefined1 auStack_88 [32];
  EpsCopyOutputStream local_68;
  ulonglong local_28;
  
  aVar1 = io::CodedOutputStream::default_serialization_deterministic_;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  _Var2 = MessageSetByteSize(this);
  local_68.end_ = param_2 + (int)_Var2;
  local_68.is_serialization_deterministic_ = aVar1 != (atomic<bool>)0x0;
  local_68.buffer_end_ = (uchar *)0x0;
  local_68.stream_ = (ZeroCopyOutputStream *)0x0;
  local_68.had_error_ = false;
  local_68.aliasing_enabled_ = false;
  local_68.skip_check_consistency = false;
  puVar3 = InternalSerializeMessageSetWithCachedSizesToArray(this,param_1,param_2,&local_68);
  return puVar3;
}

// SpaceUsedExcludingSelf @ 14fb7dac0

/* public: int __cdecl google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelf(void)const
   __ptr64 */

int __thiscall google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelf(ExtensionSet *this)

{
  __uint64 _Var1;
  
  _Var1 = SpaceUsedExcludingSelfLong(this);
  return (int)_Var1;
}

// SpaceUsedExcludingSelfLong @ 14fb7dad0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* public: unsigned __int64 __cdecl
   google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong(void)const
   __ptr64 */

__uint64 __thiscall
google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong(Extension *this)

{
  longlong lVar1;
  int iVar2;
  __uint64 _Var3;
  
  _Var3 = 0;
  lVar1 = (ulonglong)this->type * 4;
  if (this->is_repeated != false) {
    switch(*(undefined4 *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + lVar1)) {
    case 1:
    case 3:
    case 6:
    case 8:
      if (((~(*(byte *)(this->field0_0x0).int64_t_value >> 2) & 1) == 0) &&
         (iVar2 = *(int *)((byte *)(this->field0_0x0).int64_t_value + 0xc), 2 < iVar2)) {
        return (longlong)iVar2 * 4 + 0x18;
      }
      break;
    case 2:
    case 4:
    case 5:
      if (((~(*(byte *)(this->field0_0x0).int64_t_value >> 2) & 1) == 0) &&
         (iVar2 = *(int *)((byte *)(this->field0_0x0).int64_t_value + 0xc), 1 < iVar2)) {
        return (longlong)iVar2 * 8 + 0x18;
      }
      break;
    case 7:
      if (((~(*(byte *)(this->field0_0x0).int64_t_value >> 2) & 1) == 0) &&
         (iVar2 = *(int *)((byte *)(this->field0_0x0).int64_t_value + 0xc), 3 < iVar2)) {
        return (longlong)iVar2 + 0x18;
      }
      break;
    case 9:
      _Var3 = RepeatedPtrFieldBase::
              SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                        ((RepeatedPtrFieldBase *)this->field0_0x0);
      return _Var3 + 0x18;
    case 10:
      _Var3 = RepeatedPtrFieldBase::
              SpaceUsedExcludingSelfLong<google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>_>
                        ((RepeatedPtrFieldBase *)this->field0_0x0);
      return _Var3 + 0x18;
    default:
      goto switchD_14fb7db12_default;
    }
    return 0x10;
  }
  iVar2 = *(int *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + lVar1);
  if (iVar2 == 9) {
    _Var3 = StringSpaceUsedExcludingSelfLong
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                       this->field0_0x0);
    _Var3 = _Var3 + 0x20;
  }
  else if (iVar2 == 10) {
    if (!this->is_lazy) {
      _Var3 = protobuf::Message::SpaceUsedLong(*(Message **)&(this->field0_0x0).int32_t_value);
      return _Var3;
    }
                    /* WARNING: Could not recover jumptable at 0x00014fb7dbdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var3 = (**(code **)(*(longlong *)*(Message **)&(this->field0_0x0).int32_t_value + 0x68))();
    return _Var3;
  }
switchD_14fb7db12_default:
  return _Var3;
}

// SpaceUsedExcludingSelfLong @ 14fb7dc30

/* public: unsigned __int64 __cdecl
   google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong(void)const __ptr64 */

__uint64 __thiscall
google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong(ExtensionSet *this)

{
  longlong lVar1;
  KeyValue *pKVar2;
  __uint64 _Var3;
  int iVar4;
  Extension *pEVar5;
  KeyValue *pKVar6;
  KeyValue *pKVar7;
  __uint64 local_res8;
  longlong local_28;
  uint uStack_20;
  undefined8 local_18;
  undefined4 uStack_10;
  
  if ((short)this->flat_size_ < 0) {
    pKVar7 = (this->map_).flat;
    lVar1._0_1_ = (pKVar7->second).type;
    lVar1._1_1_ = (pKVar7->second).is_repeated;
    lVar1._2_1_ = (pKVar7->second).field_0xa;
    lVar1._3_1_ = (pKVar7->second).is_packed;
    lVar1._4_4_ = (pKVar7->second).cached_size;
    local_res8 = lVar1 << 5;
    local_28 = (pKVar7->second).field0_0x0.int64_t_value;
    uStack_20 = (uint)*(byte *)(local_28 + 10);
    local_18 = **(undefined8 **)pKVar7;
    uStack_10 = 0;
    FUN_14fb7b300(&local_18,&local_28,&local_res8,0);
    return local_res8;
  }
  local_res8 = (ulonglong)this->flat_capacity_ << 5;
  pKVar7 = (this->map_).flat;
  iVar4 = 0;
  pKVar6 = pKVar7 + this->flat_size_;
  pKVar2 = pKVar7;
  if (pKVar7 == pKVar6) {
    return local_res8;
  }
  do {
    if (0xf < iVar4) goto LAB_14fb7dd12;
    pKVar2 = pKVar2 + 1;
    iVar4 = iVar4 + 1;
  } while (pKVar2 != pKVar6);
LAB_14fb7dd50:
  do {
    _Var3 = Extension::SpaceUsedExcludingSelfLong(&pKVar7->second);
    pKVar7 = pKVar7 + 1;
    local_res8 = local_res8 + _Var3;
  } while (pKVar7 != pKVar6);
  return local_res8;
LAB_14fb7dd12:
  do {
    pEVar5 = &pKVar2->second;
    _Var3 = Extension::SpaceUsedExcludingSelfLong(&pKVar7->second);
    local_res8 = local_res8 + _Var3;
    pKVar2 = (KeyValue *)(pEVar5 + 1);
    pKVar7 = pKVar7 + 1;
  } while ((KeyValue *)(pEVar5 + 1) != pKVar6);
  if (pKVar7 == pKVar6) {
    return local_res8;
  }
  goto LAB_14fb7dd50;
}

// UnsafeArenaAddAllocated @ 14fb7dda0

/* public: void __cdecl google::protobuf::RepeatedPtrField<class
   google::protobuf::MessageLite>::UnsafeArenaAddAllocated(class google::protobuf::MessageLite *
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::UnsafeArenaAddAllocated
          (RepeatedPtrField<google::protobuf::MessageLite> *this,MessageLite *param_1)

{
  internal::RepeatedPtrFieldBase::
  UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
            ((RepeatedPtrFieldBase *)this,param_1);
  return;
}

// UnsafeArenaAddAllocatedMessage @ 14fb7ddb0

/* public: void __cdecl
   google::protobuf::internal::ExtensionSet::UnsafeArenaAddAllocatedMessage(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::MessageLite * __ptr64)
   __ptr64 */

void __thiscall
google::protobuf::internal::ExtensionSet::UnsafeArenaAddAllocatedMessage
          (ExtensionSet *this,FieldDescriptor *param_1,MessageLite *param_2)

{
  Extension *pEVar1;
  
  pEVar1 = MaybeNewRepeatedExtension(this,param_1);
  RepeatedPtrFieldBase::
  UnsafeArenaAddAllocated<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
            ((RepeatedPtrFieldBase *)pEVar1->field0_0x0,param_2);
  return;
}

// UnsafeArenaReleaseMessage @ 14fb7dde0

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage(class
   google::protobuf::FieldDescriptor const * __ptr64,class google::protobuf::MessageFactory *
   __ptr64) __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage
          (ExtensionSet *this,FieldDescriptor *param_1,MessageFactory *param_2)

{
  code *pcVar1;
  Arena *pAVar2;
  code *pcVar3;
  undefined8 *puVar4;
  Extension *pEVar5;
  Descriptor *pDVar6;
  undefined8 uVar7;
  MessageLite *pMVar8;
  
  pEVar5 = FindOrNull(this,param_1->number_);
  if (pEVar5 == (Extension *)0x0) {
    return (MessageLite *)0x0;
  }
  pMVar8 = (MessageLite *)(pEVar5->field0_0x0).int64_t_value;
  if (pEVar5->is_lazy) {
    pcVar1 = *(code **)(pMVar8->_padding_ + 0x40);
    pAVar2 = this->arena_;
    pcVar3 = *(code **)((longlong)*param_2 + 8);
    pDVar6 = FieldDescriptor::message_type(param_1);
    uVar7 = (*pcVar3)(param_2,pDVar6);
    pMVar8 = (MessageLite *)(*pcVar1)(pMVar8,uVar7,pAVar2);
    if ((this->arena_ == (Arena *)0x0) &&
       (puVar4 = (undefined8 *)(pEVar5->field0_0x0).int64_t_value, puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  Erase(this,param_1->number_);
  return pMVar8;
}

// FUN_14fb7deb0 @ 14fb7deb0

bool FUN_14fb7deb0(EnumDescriptor *param_1,int param_2)

{
  EnumValueDescriptor *pEVar1;
  
  pEVar1 = google::protobuf::EnumDescriptor::FindValueByNumber(param_1,param_2);
  return pEVar1 != (EnumValueDescriptor *)0x0;
}

// cpp_type @ 14fb7ded0

/* WARNING: Enum "CppType": Some values do not have unique names */
/* enum google::protobuf::internal::FieldDescriptorLite::CppType __cdecl
   google::protobuf::internal::cpp_type(unsigned char) */

CppType __cdecl google::protobuf::internal::cpp_type(uchar param_1)

{
  return *(CppType *)((longlong)&FieldDescriptor::kTypeToCppTypeMap + (ulonglong)param_1 * 4);
}

// data @ 14fb7def0

/* public: struct google::protobuf::internal::ParseContext::Data const & __ptr64 __cdecl
   google::protobuf::internal::ParseContext::data(void)const __ptr64 */

Data * __thiscall google::protobuf::internal::ParseContext::data(ParseContext *this)

{
  return &this->data_;
}

// size @ 14fb7df00

/* public: unsigned __int64 __cdecl absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::map_params<int,struct
   google::protobuf::internal::ExtensionSet::Extension,struct std::less<int>,class
   std::allocator<struct std::pair<int const ,struct
   google::protobuf::internal::ExtensionSet::Extension> >,256,0> >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::
btree<absl::lts_20240722::container_internal::map_params<int,google::protobuf::internal::ExtensionSet::Extension,std::less<int>,std::allocator<std::pair<int_const_,google::protobuf::internal::ExtensionSet::Extension>_>,256,0>_>
::size(btree<absl::lts_20240722::container_internal::map_params<int,google::protobuf::internal::ExtensionSet::Extension,std::less<int>,std::allocator<std::pair<int_const_,google::protobuf::internal::ExtensionSet::Extension>_>,256,0>_>
       *this)

{
  return this->size_;
}

// size @ 14fb7df10

/* public: unsigned __int64 __cdecl absl::lts_20240722::container_internal::btree_container<class
   absl::lts_20240722::container_internal::btree<struct
   absl::lts_20240722::container_internal::map_params<int,struct
   google::protobuf::internal::ExtensionSet::Extension,struct std::less<int>,class
   std::allocator<struct std::pair<int const ,struct
   google::protobuf::internal::ExtensionSet::Extension> >,256,0> > >::size(void)const __ptr64 */

__uint64 __thiscall
absl::lts_20240722::container_internal::
btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::map_params<int,google::protobuf::internal::ExtensionSet::Extension,std::less<int>,std::allocator<std::pair<int_const_,google::protobuf::internal::ExtensionSet::Extension>_>,256,0>_>_>
::size(btree_container<absl::lts_20240722::container_internal::btree<absl::lts_20240722::container_internal::map_params<int,google::protobuf::internal::ExtensionSet::Extension,std::less<int>,std::allocator<std::pair<int_const_,google::protobuf::internal::ExtensionSet::Extension>_>,256,0>_>_>
       *this)

{
  return (this->tree_).size_;
}

// FUN_1502ac680 @ 1502ac680

void FUN_1502ac680(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xf0) & 1) != 0) {
    *(uint *)(param_2 + 0xf0) = *(uint *)(param_2 + 0xf0) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x40));
  }
  return;
}

// FUN_1502ac700 @ 1502ac700

void FUN_1502ac700(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
                    /* WARNING: Subroutine does not return */
    absl::lts_20240722::log_internal::LogMessageFatal::~LogMessageFatal
              ((LogMessageFatal *)(param_2 + 0x30));
  }
  return;
}

