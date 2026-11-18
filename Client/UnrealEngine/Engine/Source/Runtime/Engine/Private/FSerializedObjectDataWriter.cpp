// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FSerializedObjectDataWriter @ 1488aeb50

FSerializedObjectDataWriter * __thiscall
UE::Transaction::FSerializedObjectDataWriter::FSerializedObjectDataWriter
          (FSerializedObjectDataWriter *this,FSerializedObject *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FSerializedObjectDataWriter *pFVar5;
  FSerializedObject *pFVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<UObject_*_&&,int_const_&> local_res18;
  UObject *local_68;
  UObject **local_60;
  uint *local_58;
  FScriptContainerElement *local_50;
  uint *local_48;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FSerializedObjectDataWriterCommon_Internal_Transaction_UE__6B_;
  this->_padding_ = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  this->SerializedObject = param_1;
  this->Offset = 0;
  local_res8[0] = 0;
  this->_padding_ = (longlong)&___7FSerializedObjectDataWriter_Transaction_UE__6B_;
  *(undefined8 *)&(this->ObjectMap).field_0x0 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectMap).field_0x48 = 0;
  *(undefined8 *)&(this->NameMap).field_0x0 = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  pFVar6 = this->SerializedObject;
  if (0 < (pFVar6->ReferencedObjects).ArrayNum) {
    do {
      uVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < (pFVar6->ReferencedObjects).ArrayNum) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FSerializedObjectDataWriter *)(*pcVar1)();
        return pFVar5;
      }
      local_68 = FPersistentObjectRef::Get
                           ((FPersistentObjectRef *)
                            ((pFVar6->ReferencedObjects).AllocatorInstance.Data +
                            (longlong)(int)uVar2 * 0x78));
      local_60 = &local_68;
      local_58 = local_res8;
      TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_&&,int_const_&>_>
                ((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                  *)&this->ObjectMap,&local_res18,(bool *)&local_60);
      pFVar6 = this->SerializedObject;
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < (pFVar6->ReferencedObjects).ArrayNum);
  }
  local_res10[0] = 0;
  if (0 < (pFVar6->ReferencedNames).ArrayNum) {
    do {
      uVar2 = local_res10[0];
      uVar4 = 0;
      if ((int)local_res10[0] < (pFVar6->ReferencedNames).ArrayNum) {
        uVar4 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FSerializedObjectDataWriter *)(*pcVar1)();
        return pFVar5;
      }
      local_50 = (pFVar6->ReferencedNames).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
      local_48 = local_res10;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->NameMap,(TPairInitializer<FName_const_&,int_const_&> *)&local_res18.Value
                 ,(bool *)&local_50);
      pFVar6 = this->SerializedObject;
      local_res10[0] = local_res10[0] + 1;
    } while ((int)local_res10[0] < (pFVar6->ReferencedNames).ArrayNum);
  }
  return this;
}

// operator<< @ 1488b3360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __thiscall
UE::Transaction::FSerializedObjectDataWriter::operator<<
          (FSerializedObjectDataWriter *this,UObject **param_1)

{
  int *piVar1;
  longlong lVar2;
  UObject *pUVar3;
  FSerializedObject *pFVar4;
  FPersistentObjectRef *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FPersistentObjectRef *pFVar10;
  FArchive *pFVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  FPersistentObjectRef *local_108;
  FPersistentObjectRef *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  uint local_d8;
  undefined1 local_d4 [4];
  UObject **local_d0;
  uint *local_c8;
  FPersistentObjectRef local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar3 = *param_1;
  local_d8 = 0xffffffff;
  uVar12 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  if (*(int *)&(this->ObjectMap).field_0x8 != *(int *)&(this->ObjectMap).field_0x34) {
    puVar14 = *(undefined1 **)&(this->ObjectMap).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->ObjectMap).field_0x38;
    }
    iVar9 = *(int *)(puVar14 +
                    (ulonglong)
                    (*(int *)&(this->ObjectMap).field_0x48 - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar9 != -1) {
      lVar15 = *(longlong *)&(this->ObjectMap).field_0x0;
      do {
        lVar2 = lVar15 + (longlong)iVar9 * 0x18;
        if (*(UObject **)(lVar15 + (longlong)iVar9 * 0x18) == pUVar3) {
          puVar13 = (uint *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) {
            local_d8 = *puVar13;
            goto LAB_1488b354d;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10);
      } while (iVar9 != -1);
    }
  }
  if (pUVar3 != (UObject *)0x0) {
    pFVar4 = this->SerializedObject;
    pFVar10 = FPersistentObjectRef::FPersistentObjectRef(&local_b8,pUVar3);
    pFVar5 = (FPersistentObjectRef *)(pFVar4->ReferencedObjects).AllocatorInstance.Data;
    if ((pFVar5 <= pFVar10) &&
       (lVar15 = (longlong)(pFVar4->ReferencedObjects).ArrayMax, pFVar10 < pFVar5 + lVar15)) {
      local_f0 = (longlong)(pFVar4->ReferencedObjects).ArrayNum;
      local_e8 = 0x78;
      local_108 = pFVar10;
      local_100 = pFVar5;
      local_f8 = lVar15;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar11 = (FArchive *)(*pcVar7)();
        return pFVar11;
      }
    }
    uVar12 = (pFVar4->ReferencedObjects).ArrayNum;
    piVar1 = &(pFVar4->ReferencedObjects).ArrayMax;
    if (uVar12 == *piVar1) {
      uVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x878,&(pFVar4->ReferencedObjects).AllocatorInstance,piVar1);
    }
    (pFVar4->ReferencedObjects).ArrayNum = uVar12 + 1;
    FPersistentObjectRef::FPersistentObjectRef
              ((FPersistentObjectRef *)
               ((pFVar4->ReferencedObjects).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x78),
               pFVar10);
    local_d8 = uVar12;
    if (local_b8.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData !=
        (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)local_b8.CachedSubObjectHierarchy.AllocatorInstance.SecondaryData);
    }
    if (local_b8.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0
       ) {
      FMemory::Free((void *)local_b8.SubObjectHierarchyIDs.AllocatorInstance.SecondaryData);
    }
    local_c8 = &local_d8;
    local_d0 = param_1;
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<UObject_*_const_&,int_const_&>_>
              ((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                *)&this->ObjectMap,(TPairInitializer<UObject_*_const_&,int_const_&> *)local_d4,
               (bool *)(local_d4 + 4));
  }
LAB_1488b354d:
  plVar6 = (longlong *)this->_padding_;
  if ((ulonglong)plVar6[1] < *plVar6 + 4U) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,&local_d8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_d8);
    }
  }
  else {
    *plVar6 = *plVar6 + 4;
  }
  return (FArchive *)this;
}

// operator<< @ 1488b35e0

FArchive * __thiscall
UE::Transaction::FSerializedObjectDataWriter::operator<<
          (FSerializedObjectDataWriter *this,FName *param_1)

{
  int *piVar1;
  longlong lVar2;
  FName FVar3;
  longlong lVar4;
  FSerializedObject *pFVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FArchive *pFVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint local_res8 [4];
  FName *local_28;
  uint *local_20;
  
  FVar3 = *param_1;
  uVar11 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  if (*(int *)&(this->NameMap).field_0x8 != *(int *)&(this->NameMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->NameMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->NameMap).field_0x38;
    }
    iVar12 = *(int *)(puVar15 +
                     (ulonglong)(*(int *)&(this->NameMap).field_0x48 - 1U & FVar3.Number + uVar11) *
                     4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&(this->NameMap).field_0x0;
      do {
        lVar2 = lVar4 + (longlong)iVar12 * 0x14;
        if (*(FName *)(lVar4 + (longlong)iVar12 * 0x14) == FVar3) {
          puVar14 = (uint *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar14 = (uint *)0x0;
          }
          if (puVar14 != (uint *)0x0) {
            local_res8[0] = *puVar14;
            goto LAB_1488b371f;
          }
          break;
        }
        iVar12 = *(int *)(lVar2 + 0xc);
      } while (iVar12 != -1);
    }
  }
  pFVar5 = this->SerializedObject;
  pFVar6 = (FName *)(pFVar5->ReferencedNames).AllocatorInstance.Data;
  if ((pFVar6 <= param_1) && (param_1 < pFVar6 + (pFVar5->ReferencedNames).ArrayMax)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      pFVar13 = (FArchive *)(*pcVar9)();
      return pFVar13;
    }
  }
  local_res8[0] = (pFVar5->ReferencedNames).ArrayNum;
  piVar1 = &(pFVar5->ReferencedNames).ArrayMax;
  if (local_res8[0] == *piVar1) {
    local_res8[0] =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&(pFVar5->ReferencedNames).AllocatorInstance,piVar1);
  }
  pFVar7 = (pFVar5->ReferencedNames).AllocatorInstance.Data;
  (pFVar5->ReferencedNames).ArrayNum = local_res8[0] + 1;
  *(FName *)(pFVar7 + (longlong)(int)local_res8[0] * 8) = *param_1;
  local_20 = local_res8;
  local_28 = param_1;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->NameMap,(TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2),
             (bool *)&local_28);
LAB_1488b371f:
  plVar8 = (longlong *)this->_padding_;
  if ((ulonglong)plVar8[1] < *plVar8 + 4U) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    *plVar8 = *plVar8 + 4;
  }
  return (FArchive *)this;
}

