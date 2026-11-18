// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// FSampleTrackMemoryWriter @ 14a3b8970

FSampleTrackMemoryWriter * __thiscall
FSampleTrackMemoryWriter::FSampleTrackMemoryWriter
          (FSampleTrackMemoryWriter *this,FSampleTrackMemoryData *param_1,bool param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  FArchiveState::SetIsSaving((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  this->_padding_ = (longlong)&___7FSampleTrackMemoryWriter__6B_;
  *(undefined8 *)&this->NameToIndex = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->NameToIndex).field_0x20 = 0;
  this->Data = param_1;
  *(undefined4 *)&(this->NameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->NameToIndex).field_0x48 = 0;
  *(undefined8 *)&this->ObjectToIndex = 0;
  *(undefined8 *)&(this->ObjectToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToIndex).field_0x48 = 0;
  return this;
}

// ~FSampleTrackMemoryWriter @ 14a3bce00

void __thiscall FSampleTrackMemoryWriter::~FSampleTrackMemoryWriter(FSampleTrackMemoryWriter *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ObjectToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToIndex);
  *(undefined4 *)&(this->NameToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToIndex);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// operator<< @ 14a3be440

FArchive * __thiscall
FSampleTrackMemoryWriter::operator<<(FSampleTrackMemoryWriter *this,UObject **param_1)

{
  int *piVar1;
  longlong lVar2;
  UObjectBaseUtility *this_00;
  longlong lVar3;
  FSampleTrackMemoryData *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  int iVar7;
  int iVar8;
  FArchive *pFVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  uint local_res8 [4];
  FString local_58;
  UObject **local_48;
  uint *local_40;
  
  this_00 = (UObjectBaseUtility *)*param_1;
  local_res8[0] = 0xffffffff;
  if (this_00 != (UObjectBaseUtility *)0x0) {
    uVar10 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    if (*(int *)&(this->ObjectToIndex).field_0x8 != *(int *)&(this->ObjectToIndex).field_0x34) {
      puVar13 = *(undefined1 **)&(this->ObjectToIndex).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(this->ObjectToIndex).field_0x38;
      }
      iVar7 = *(int *)(puVar13 +
                      (ulonglong)
                      (*(int *)&(this->ObjectToIndex).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) *
                      4);
      if (iVar7 != -1) {
        lVar3 = *(longlong *)&(this->ObjectToIndex).field_0x0;
        do {
          lVar2 = lVar3 + (longlong)iVar7 * 0x18;
          if (*(UObjectBaseUtility **)(lVar3 + (longlong)iVar7 * 0x18) == this_00) {
            puVar11 = (uint *)(lVar2 + 8);
            if (lVar2 == 0) {
              puVar11 = (uint *)0x0;
            }
            if (puVar11 != (uint *)0x0) {
              local_res8[0] = *puVar11;
              goto LAB_14a3be717;
            }
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x10);
        } while (iVar7 != -1);
      }
    }
    UObjectBaseUtility::GetPathName(this_00,&local_58,(UObject *)0x0);
    pFVar15 = (this->Data->ObjectPaths).AllocatorInstance.Data;
    iVar7 = (this->Data->ObjectPaths).ArrayNum;
    uVar12 = local_58.Data._8_8_;
    for (pFVar14 = pFVar15; pFVar14 != pFVar15 + (longlong)iVar7 * 0x10; pFVar14 = pFVar14 + 0x10) {
      iVar8 = *(int *)(pFVar14 + 8);
      if (iVar8 == (int)uVar12) {
        if (1 < iVar8) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar14,(wchar_t *)local_58.Data.AllocatorInstance.Data);
          bVar16 = iVar8 == 0;
          uVar12 = local_58.Data._8_8_;
          goto LAB_14a3be588;
        }
LAB_14a3be59a:
        local_res8[0] = (uint)((longlong)pFVar14 - (longlong)pFVar15 >> 4);
        if (local_res8[0] != 0xffffffff) goto LAB_14a3be6b9;
        break;
      }
      bVar16 = iVar8 + (int)uVar12 == 1;
LAB_14a3be588:
      if (bVar16) goto LAB_14a3be59a;
    }
    pFVar4 = this->Data;
    pFVar15 = (pFVar4->ObjectPaths).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar15 + (longlong)(pFVar4->ObjectPaths).ArrayMax * 0x10)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FArchive *)(*pcVar6)();
      return pFVar9;
    }
    uVar10 = (pFVar4->ObjectPaths).ArrayNum;
    piVar1 = &(pFVar4->ObjectPaths).ArrayMax;
    if (uVar10 == *piVar1) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar4->ObjectPaths).AllocatorInstance,piVar1);
    }
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    (pFVar4->ObjectPaths).ArrayNum = uVar10 + 1;
    pFVar15 = (pFVar4->ObjectPaths).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10;
    *(undefined8 *)&pFVar15->field_0x0 = 0;
    *(int *)&pFVar15[8].field_0x0 = local_58.Data.ArrayNum;
    if (local_58.Data.ArrayNum == 0) {
      *(int *)(pFVar15 + 0xc) = 0;
      local_res8[0] = uVar10;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,local_58.Data.ArrayNum,
                 (int *)(pFVar15 + 0xc));
      memcpy(*(void **)&pFVar15->field_0x0,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
      local_res8[0] = uVar10;
    }
LAB_14a3be6b9:
    local_40 = local_res8;
    local_48 = param_1;
    TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<UObject_*_const_&,int_const_&>_>
              ((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                *)&this->ObjectToIndex,
               (TPairInitializer<UObject_*_const_&,int_const_&> *)(local_res8 + 2),(bool *)&local_48
              );
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
LAB_14a3be717:
  plVar5 = (longlong *)this->_padding_;
  if (*plVar5 + 4U <= (ulonglong)plVar5[1]) {
    *plVar5 = *plVar5 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) == 0) {
    (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    return (FArchive *)this;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
  return (FArchive *)this;
}

// operator<< @ 14a3be790

FArchive * __thiscall
FSampleTrackMemoryWriter::operator<<(FSampleTrackMemoryWriter *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 local_res8 [4];
  
  local_res8[0] = param_1->field0_0x0;
  (**(code **)(this->_padding_ + 0x168))(this,local_res8);
  return (FArchive *)this;
}

// operator<< @ 14a3be7c0

FArchive * __thiscall
FSampleTrackMemoryWriter::operator<<(FSampleTrackMemoryWriter *this,FName *param_1)

{
  int *piVar1;
  FSampleTrackMemoryData *pFVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TTuple<FName,int> *pTVar9;
  FArchive *pFVar10;
  uint *puVar11;
  FName *pFVar12;
  uint local_res8 [4];
  FName *local_28;
  uint *local_20;
  
  pTVar9 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->NameToIndex,*param_1);
  puVar11 = (uint *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,int> *)0x0) {
    puVar11 = (uint *)0x0;
  }
  if (puVar11 == (uint *)0x0) {
    pFVar2 = this->Data;
    pFVar3 = (FName *)(pFVar2->Names).AllocatorInstance.Data;
    if (pFVar3 != pFVar3 + (pFVar2->Names).ArrayNum) {
      pFVar12 = pFVar3;
      do {
        if (*pFVar12 == *param_1) {
          local_res8[0] = (uint)((longlong)pFVar12 - (longlong)pFVar3 >> 3);
          if (local_res8[0] != 0xffffffff) goto LAB_14a3be8e9;
          break;
        }
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != pFVar3 + (pFVar2->Names).ArrayNum);
    }
    pFVar3 = (FName *)(pFVar2->Names).AllocatorInstance.Data;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + (pFVar2->Names).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FArchive *)(*pcVar6)();
      return pFVar10;
    }
    uVar8 = (pFVar2->Names).ArrayNum;
    piVar1 = &(pFVar2->Names).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(pFVar2->Names).AllocatorInstance,piVar1);
    }
    pFVar4 = (pFVar2->Names).AllocatorInstance.Data;
    (pFVar2->Names).ArrayNum = uVar8 + 1;
    *(FName *)(pFVar4 + (longlong)(int)uVar8 * 8) = *param_1;
    local_res8[0] = uVar8;
LAB_14a3be8e9:
    local_20 = local_res8;
    local_28 = param_1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->NameToIndex,(TPairInitializer<FName_const_&,int_const_&> *)(local_res8 + 2)
               ,(bool *)&local_28);
  }
  else {
    local_res8[0] = *puVar11;
  }
  plVar5 = (longlong *)this->_padding_;
  if (*plVar5 + 4U <= (ulonglong)plVar5[1]) {
    *plVar5 = *plVar5 + 4;
    return (FArchive *)this;
  }
  if ((this->_padding_ & 0x10000) != 0) {
    FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    return (FArchive *)this;
  }
  (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
  return (FArchive *)this;
}

// operator<< @ 14a3be990

FArchive * __thiscall
FSampleTrackMemoryWriter::operator<<(FSampleTrackMemoryWriter *this,FText *param_1)

{
  FScriptContainerElement *_Src;
  FString *pFVar1;
  longlong lVar2;
  FString local_18;
  
  pFVar1 = FText::ToString(param_1);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = (pFVar1->Data).ArrayNum;
  lVar2 = (longlong)local_18.Data.ArrayNum;
  _Src = (pFVar1->Data).AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::operator<<((FArchive *)this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

