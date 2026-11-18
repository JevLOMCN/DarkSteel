// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// Write @ 14d5d4b40

void __thiscall
UE::Cameras::FCameraDebugBlockWriter::Write
          (FCameraDebugBlockWriter *this,FCameraDebugBlock *param_1)

{
  int iVar1;
  FBufferArchive *pFVar2;
  uchar *puVar3;
  FCameraDebugBlock *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 local_res8 [2];
  TPairInitializer<UE::Cameras::FCameraDebugBlock_*_&&,int_&&> local_res10;
  TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> local_38;
  int **local_28;
  undefined4 *local_20;
  
  if (((this->Archive->field_0x28 & 4) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Archive.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0x49,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))
              (pFVar2,&FCameraDebugBlockSerializer::TokenBufferStart,1);
  }
  else {
    FCameraDebugBlockSerializer::TokenBufferStart = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  pFVar2 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))
              (pFVar2,&FCameraDebugBlockSerializer::TokenSerializerVersion,1);
  }
  else {
    FCameraDebugBlockSerializer::TokenSerializerVersion = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  local_28 = &local_res10.Value;
  this->NextBlockIndex = 1;
  local_20 = local_res8;
  local_res8[0] = 0;
  local_res10.Value = (int *)param_1;
  TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_&&,int_&&>_>
            ((TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
              *)&this->BlockIndices,&local_res10,(bool *)&local_28);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  iVar7 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_38.AllocatorInstance,&local_38.ArrayMax);
  local_38.ArrayNum = iVar7 + 1;
  *(FCameraDebugBlock **)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) = param_1;
  iVar7 = iVar7 + 1;
  while (iVar7 != 0) {
    if (iVar7 < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = local_38.ArrayNum;
    }
    iVar1 = iVar7 + -1;
    pFVar4 = *(FCameraDebugBlock **)(local_38.AllocatorInstance.Data + (longlong)iVar1 * 8);
    iVar8 = (iVar7 - iVar1) + -1;
    if (iVar8 != 0) {
      memmove(local_38.AllocatorInstance.Data + (longlong)iVar1 * 8,
              local_38.AllocatorInstance.Data + (longlong)iVar1 * 8 + 8,(longlong)iVar8 << 3);
      iVar7 = local_38.ArrayNum;
    }
    local_38.ArrayNum = iVar7 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&local_38.AllocatorInstance,iVar7 + -1,&local_38.ArrayMax);
    WriteImpl(this,pFVar4,&local_38);
    iVar7 = local_38.ArrayNum;
  }
  pFVar2 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))
              (pFVar2,&FCameraDebugBlockSerializer::TokenBufferEnd,1);
  }
  else {
    FCameraDebugBlockSerializer::TokenBufferEnd = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  if ((*(int *)&(this->BlockIndices).field_0x8 != *(int *)&(this->BlockIndices).field_0x34) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<657926107131019355>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0x5b,"BlockIndices.IsEmpty()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// WriteImpl @ 14d5d4db0

void __thiscall
UE::Cameras::FCameraDebugBlockWriter::WriteImpl
          (FCameraDebugBlockWriter *this,FCameraDebugBlock *param_1,
          TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FBufferArchive *pFVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  FCameraObjectTypeInfo *pFVar9;
  uint uVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res20;
  undefined4 local_a8;
  undefined4 local_a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined1 local_6c [12];
  FName local_60;
  undefined8 *local_58;
  int *local_50;
  undefined8 *local_48;
  int *local_40;
  
  pFVar2 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))
              (pFVar2,&FCameraDebugBlockSerializer::TokenBlockStart,1);
  }
  else {
    FCameraDebugBlockSerializer::TokenBlockStart = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  lVar14 = 0;
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  lVar13 = lVar14;
  if (*(int *)&(this->BlockIndices).field_0x8 != *(int *)&(this->BlockIndices).field_0x34) {
    puVar11 = *(undefined1 **)&(this->BlockIndices).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->BlockIndices).field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->BlockIndices).field_0x48 - 1U & uVar10) * 4);
    if (iVar7 != -1) {
      do {
        lVar13 = *(longlong *)&this->BlockIndices + (longlong)iVar7 * 0x18;
        if (*(FCameraDebugBlock **)(*(longlong *)&this->BlockIndices + (longlong)iVar7 * 0x18) ==
            param_1) {
          if (lVar13 != 0) goto LAB_14d5d4eb1;
          break;
        }
        iVar7 = *(int *)(lVar13 + 0x10);
        lVar13 = lVar14;
      } while (iVar7 != -1);
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d5d4eb1:
  local_res8[0] = *(uint *)(lVar13 + 8);
  pFVar2 = this->Archive;
  puVar8 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar8 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)pFVar2,local_res8);
    }
  }
  else {
    local_res8[0] = *puVar8;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  local_6c._4_8_ = param_1;
  if (*(int *)&(this->BlockIndices).field_0x8 != *(int *)&(this->BlockIndices).field_0x34) {
    TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<UE::Cameras::FCameraDebugBlock_const_*>
              ((TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
                *)&this->BlockIndices,uVar10,(FCameraDebugBlock **)(local_6c + 4));
  }
  puVar8 = (uint *)(**(code **)param_1->_padding_)(param_1);
  pFVar9 = FCameraObjectTypeRegistry::GetTypeInfo(this->TypeRegistry,(FCameraObjectTypeID)*puVar8);
  if ((pFVar9 == (FCameraObjectTypeInfo *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockTypeInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\CameraSystemTrace.cpp"
                         ,0x6d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_60 = pFVar9->TypeName;
  (**(code **)(*(longlong *)this->Archive + 0x178))(this->Archive,&local_60);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,this->Archive);
  pFVar2 = this->Archive;
  puVar3 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))
              (pFVar2,&FCameraDebugBlockSerializer::TokenRelatedIndices,1);
  }
  else {
    FCameraDebugBlockSerializer::TokenRelatedIndices = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
  }
  iVar7 = (param_1->Attachments).ArrayNum;
  pFVar12 = (param_1->Attachments).AllocatorInstance.Data;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = pFVar12 + (longlong)iVar7 * 8;
  while( true ) {
    if (pFVar12 == pFVar1) {
      TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                ((FArchive *)this->Archive,&local_90);
      iVar7 = (param_1->Children).ArrayNum;
      pFVar12 = (param_1->Children).AllocatorInstance.Data;
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      if ((iVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = pFVar12 + (longlong)iVar7 * 8;
      while( true ) {
        if (pFVar12 == pFVar1) {
          TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
                    ((FArchive *)this->Archive,&local_a0);
          pFVar2 = this->Archive;
          puVar3 = (uchar *)**(undefined8 **)&pFVar2->field_0x8;
          if ((uchar *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
            (**(code **)(*(longlong *)pFVar2 + 0x188))
                      (pFVar2,&FCameraDebugBlockSerializer::TokenBlockEnd,1);
          }
          else {
            FCameraDebugBlockSerializer::TokenBlockEnd = *puVar3;
            **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
          }
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
          if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.AllocatorInstance.Data);
          }
          return;
        }
        local_78 = *(undefined8 *)pFVar12;
        local_70 = this->NextBlockIndex;
        this->NextBlockIndex = local_70 + 1;
        local_48 = &local_78;
        local_40 = &local_70;
        TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&>_>
                  ((TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
                    *)&this->BlockIndices,
                   (TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&> *)local_6c,
                   (bool *)&local_48);
        local_a4 = *(undefined4 *)
                    (*(longlong *)&this->BlockIndices + 8 + (longlong)(int)local_6c._0_4_ * 0x18);
        if (((local_a0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a4) &&
            ((FScriptContainerElement *)&local_a4 <
             local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) break;
        iVar7 = local_a0.ArrayNum;
        if (local_a0.ArrayNum == local_a0.ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
        }
        local_a0.ArrayNum = iVar7 + 1;
        *(undefined4 *)(local_a0.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_a4;
        pFVar4 = (param_2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar4 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = param_2->ArrayNum;
        if (iVar7 == param_2->ArrayMax) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        pFVar12 = pFVar12 + 8;
        param_2->ArrayNum = iVar7 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_78;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_80 = *(undefined8 *)pFVar12;
    local_res10[0] = this->NextBlockIndex;
    this->NextBlockIndex = local_res10[0] + 1;
    local_58 = &local_80;
    local_50 = local_res10;
    TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&>_>
              ((TSet<TTuple<UE::Cameras::FCameraDebugBlock_*,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraDebugBlock_*,int,0>,FDefaultSetAllocator>
                *)&this->BlockIndices,
               (TPairInitializer<UE::Cameras::FCameraDebugBlock_*_const_&,int_&&> *)&local_res20,
               (bool *)&local_58);
    local_a8 = *(undefined4 *)(*(longlong *)&this->BlockIndices + 8 + (longlong)local_res20 * 0x18);
    if (((local_90.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 <
         local_90.AllocatorInstance.Data + (longlong)local_90.ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = local_90.ArrayNum;
    if (local_90.ArrayNum == local_90.ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_90.AllocatorInstance,&local_90.ArrayMax);
    }
    local_90.ArrayNum = iVar7 + 1;
    *(undefined4 *)(local_90.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_a8;
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_80) &&
        ((FScriptContainerElement *)&local_80 < pFVar4 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    pFVar12 = pFVar12 + 8;
    param_2->ArrayNum = iVar7 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_80;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

