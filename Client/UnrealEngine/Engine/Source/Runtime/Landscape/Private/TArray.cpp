// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 40

// operator=<TSizedDefaultAllocator<32>,TObjectPtr<UTexture2D>_> @ 145ef83f0

TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_>::
operator=<TSizedDefaultAllocator<32>,TObjectPtr<UTexture2D>_>
          (TArray<TObjectPtr<UTexture2D>,TSizedDefaultAllocator<32>_> *this,
          TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<TObjectPtr<UTexture2D>,UTexture2D_*,int>
            ((this->AllocatorInstance).Data,(UTexture2D **)pFVar3,iVar2);
  return this;
}

// AddUniqueImpl<UPhysicalMaterial_*_const_&> @ 145efad20

int __thiscall
TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UPhysicalMaterial_*_const_&>
          (TArray<UPhysicalMaterial_*,TSizedDefaultAllocator<32>_> *this,UPhysicalMaterial **param_1
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UPhysicalMaterial **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UPhysicalMaterial **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// CopyToEmpty<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,int> @ 145efbab0

void __thiscall
TArray<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,TSizedDefaultAllocator<32>_>
::CopyToEmpty<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,int>
          (TArray<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,TSizedDefaultAllocator<32>_>
           *this,FRenderInfo *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xf0,0x10,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,UE::Landscape::Private::RenderMergedTexture_RenderThread::FRenderInfo,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// AddUniqueImpl<ULandscapeComponent::FExcludeBox> @ 145f36ae0

int __thiscall
TArray<ULandscapeComponent::FExcludeBox,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<ULandscapeComponent::FExcludeBox>
          (TArray<ULandscapeComponent::FExcludeBox,TSizedDefaultAllocator<32>_> *this,
          FExcludeBox *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x38)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    dVar3 = (param_1->Box).Min.field0_0x0._s_0.Y;
    lVar6 = (longlong)iVar5 * 0x38;
    pFVar1 = (this->AllocatorInstance).Data;
    *(double *)(pFVar1 + lVar6) = (param_1->Box).Min.field0_0x0._s_0.X;
    *(double *)(pFVar1 + lVar6 + 8) = dVar3;
    dVar3 = (param_1->Box).Max.field0_0x0._s_0.X;
    *(double *)(pFVar1 + lVar6 + 0x10) = (param_1->Box).Min.field0_0x0._s_0.Z;
    *(double *)(pFVar1 + lVar6 + 0x10 + 8) = dVar3;
    dVar3 = (param_1->Box).Max.field0_0x0._s_0.Z;
    *(double *)(pFVar1 + lVar6 + 0x20) = (param_1->Box).Max.field0_0x0._s_0.Y;
    *(double *)(pFVar1 + lVar6 + 0x20 + 8) = dVar3;
    *(undefined8 *)(pFVar1 + lVar6 + 0x30) = *(undefined8 *)&(param_1->Box).IsValid;
  }
  return iVar5;
}

// CopyToEmpty<TObjectPtr<UMaterialInterface>,int> @ 145f36ef0

void __thiscall
TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TObjectPtr<UMaterialInterface>,int>
          (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMaterialInterface> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// CopyToEmpty<FGuid,int> @ 145f36f70

void __thiscall
TArray<FGuid,TSizedDefaultAllocator<32>_>::CopyToEmpty<FGuid,int>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *this,FGuid *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 4);
  }
  return;
}

// BulkSerialize @ 145f4cd40

void __thiscall
TArray<float,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<float,TMemoryImageAllocator<0>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 4;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<float,TMemoryImageAllocator<0>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 2,(longlong)*piVar1 << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_145f4cf64:
      FVar10 = this->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar10,(longlong)(int)uVar4 << 2);
      return;
    }
  }
  else {
    if (local_res10[0] == 4) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x20000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (4,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_145f4cf64;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar11 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar11 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar11,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 145f4cfb0

void __thiscall
TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>::
BulkSerialize(TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
              *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char *pcVar6;
  longlong lVar7;
  atomic<unsigned_char> *paVar8;
  ForAnyElementType FVar9;
  int iVar10;
  code *pcVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0x30;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::
    Serialize<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*piVar2 * 0x30,(longlong)this->ArrayMax * 0x30);
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res10[0] == 0x30) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      if (local_res18[0] < 0x2aaaaab) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x30,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x30,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
        lVar7 = (longlong)(int)local_res18[0];
        goto LAB_145f4d157;
      }
      pcVar6 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar8 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar6 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar8 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar8,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar6);
    if (!bVar5) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    return;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = *piVar2;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
      lVar7 = (longlong)(int)local_res20[0];
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
      lVar7 = (longlong)(int)local_res20[0];
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
    pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
    lVar7 = (longlong)(int)local_res20[0];
  }
LAB_145f4d157:
  FVar9 = this->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  (*pcVar11)(param_1,FVar9,lVar7 * 0x30);
  return;
}

// BulkSerialize @ 145f4d270

void __thiscall
TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>::
BulkSerialize(TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
              *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char *pcVar6;
  longlong lVar7;
  atomic<unsigned_char> *paVar8;
  ForAnyElementType FVar9;
  int iVar10;
  code *pcVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0x18;
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::
    Serialize<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*piVar2 * 0x18,(longlong)this->ArrayMax * 0x18);
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res10[0] == 0x18) {
      plVar4 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      if (local_res18[0] < 0x5555556) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x18,2,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x18,2,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
        lVar7 = (longlong)(int)local_res18[0];
        goto LAB_145f4d417;
      }
      pcVar6 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar10 = 0x65a;
      paVar8 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar6 = "SerializedElementSize == ElementSize";
      iVar10 = 0x64f;
      paVar8 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar8,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar10,pcVar6);
    if (!bVar5) {
      FArchiveState::SetError((FArchiveState *)param_1);
      return;
    }
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    return;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = *piVar2;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
      lVar7 = (longlong)(int)local_res20[0];
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
      pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
      lVar7 = (longlong)(int)local_res20[0];
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
    pcVar11 = *(code **)(*(longlong *)param_1 + 0x188);
    lVar7 = (longlong)(int)local_res20[0];
  }
LAB_145f4d417:
  FVar9 = this->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  (*pcVar11)(param_1,FVar9,lVar7 * 0x18);
  return;
}

// BulkSerialize @ 145f4d530

void __thiscall
TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_> *this,FArchive *param_1,
          bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 0x10;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 4,(longlong)*piVar1 << 4);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_145f4d754:
      FVar10 = this->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar10,(longlong)(int)uVar4 << 4);
      return;
    }
  }
  else {
    if (local_res10[0] == 0x10) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x8000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x10,0x10,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (0x10,0x10,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_145f4d754;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar11 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar11 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar11,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 145f4d7a0

void __thiscall
TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_> *this,
          FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 8;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::
    Serialize<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>
              (param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 3,(longlong)*piVar1 << 3);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_145f4d9ca:
      FVar10 = this->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar10,(longlong)(int)uVar4 << 3);
      return;
    }
  }
  else {
    if (local_res10[0] == 8) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x10000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (8,2,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (8,2,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_145f4d9ca;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar11 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar11 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar11,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// Empty @ 145f50480

void __thiscall
TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>::Empty
          (TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x30,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145f504d0

void __thiscall
TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>::Empty
          (TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,2,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145f50520

void __thiscall
TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>::Empty
          (TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,2,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 145f51010

int __thiscall
TArray<ULandscapeComponent::FExcludeBox,TSizedDefaultAllocator<32>_>::Find
          (TArray<ULandscapeComponent::FExcludeBox,TSizedDefaultAllocator<32>_> *this,
          FExcludeBox *param_1)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->AllocatorInstance).Data;
  if (pFVar3 != pFVar3 + (longlong)this->ArrayNum * 0x38) {
    dVar1 = (param_1->Box).Min.field0_0x0._s_0.X;
    pFVar4 = pFVar3;
    do {
      if ((*(double *)pFVar4 <= dVar1) && (dVar1 <= *(double *)(pFVar4 + 0x18))) {
        dVar2 = (param_1->Box).Min.field0_0x0._s_0.Y;
        if ((*(double *)(pFVar4 + 8) <= dVar2) && (dVar2 <= *(double *)(pFVar4 + 0x20))) {
          dVar2 = (param_1->Box).Min.field0_0x0._s_0.Z;
          if ((((((*(double *)(pFVar4 + 0x10) <= dVar2) && (dVar2 <= *(double *)(pFVar4 + 0x28))) &&
                (dVar2 = (param_1->Box).Max.field0_0x0._s_0.X, *(double *)pFVar4 <= dVar2)) &&
               ((dVar2 <= *(double *)(pFVar4 + 0x18) &&
                (dVar2 = (param_1->Box).Max.field0_0x0._s_0.Y, *(double *)(pFVar4 + 8) <= dVar2))))
              && (dVar2 <= *(double *)(pFVar4 + 0x20))) &&
             ((dVar2 = (param_1->Box).Max.field0_0x0._s_0.Z, *(double *)(pFVar4 + 0x10) <= dVar2 &&
              (dVar2 <= *(double *)(pFVar4 + 0x28))))) {
            return (int)(((longlong)pFVar4 - (longlong)pFVar3) / 0x38);
          }
        }
      }
      pFVar4 = pFVar4 + 0x38;
    } while (pFVar4 != pFVar3 + (longlong)this->ArrayNum * 0x38);
  }
  return -1;
}

// RemoveAtImpl @ 145f5c2e0

void __thiscall
TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FColor,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FColor,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145f5c360

void __thiscall
TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TRefCountPtr<FRHITexture>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  DestructItems<TRefCountPtr<FRHITexture>,int>((TRefCountPtr<FRHITexture> *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 145f5c3d0

void __thiscall
TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 8,
            (longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 145f5cd90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>::
RemoveSwap(TArray<TObjectPtr<UHierarchicalInstancedStaticMeshComponent>,TSizedDefaultAllocator<32>_>
           *this,TObjectPtr<UHierarchicalInstancedStaticMeshComponent> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(UHierarchicalInstancedStaticMeshComponent **)((this->AllocatorInstance).Data + lVar7) ==
          (param_1->field0_0x0).DebugPtr) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNumZeroed @ 145f5e310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<float,TMemoryImageAllocator<0>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 4),0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145f5e470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  void *_Dst;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x10,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)iVar4 * 0x10 + (longlong)FVar6),0,(longlong)(param_1 - iVar5) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar6);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar7 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x10,0x10,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// Contains<ULandscapeComponent_*> @ 145f6d2b0

bool __thiscall
TArray<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
Contains<ULandscapeComponent_*>
          (TArray<TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
           *this,ULandscapeComponent **param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *this_00;
  
  this_00 = (this->AllocatorInstance).Data;
  pFVar1 = this_00 + (longlong)this->ArrayNum * 8;
  while( true ) {
    if (this_00 == pFVar1) {
      return false;
    }
    bVar2 = TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr>::UEOpEquals<ULandscapeComponent,bool>
                      ((TWeakObjectPtr<ULandscapeComponent,FWeakObjectPtr> *)this_00,*param_1);
    if (bVar2) break;
    this_00 = this_00 + 8;
  }
  return true;
}

// FindItemByClass<ULandscapeInfoMap> @ 145f72cd0

bool __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::FindItemByClass<ULandscapeInfoMap>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,ULandscapeInfoMap **param_1
          ,int *param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  uVar8 = (ulonglong)param_3;
  pUVar6 = ULandscapeInfoMap::StaticClass();
  iVar9 = this->ArrayNum;
  if (param_3 < iVar9) {
    lVar10 = uVar8 * 8;
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar9) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (*(longlong *)((this->AllocatorInstance).Data + lVar10) != 0) {
        uVar5 = 0;
        if ((int)uVar7 < this->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = *(longlong *)(*(longlong *)((this->AllocatorInstance).Data + lVar10) + 0x10);
        iVar9 = (int)pUVar6->_padding_;
        if ((iVar9 <= *(int *)(lVar1 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar6->_padding_)) {
          if (param_1 != (ULandscapeInfoMap **)0x0) {
            uVar5 = 0;
            if ((int)uVar7 < this->ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            *param_1 = *(ULandscapeInfoMap **)
                        ((this->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
          }
          if (param_2 != (int *)0x0) {
            *param_2 = uVar7;
          }
          return true;
        }
      }
      iVar9 = this->ArrayNum;
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar10 = lVar10 + 8;
    } while ((int)(uVar7 + 1) < iVar9);
  }
  return false;
}

// operator= @ 145f7e450

TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UTexture2D_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// BulkSerialize @ 145f83800

void __thiscall
TArray<unsigned_short,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<unsigned_short,TMemoryImageAllocator<0>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 2;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<unsigned_short,TMemoryImageAllocator<0>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum * 2,(longlong)*piVar1 * 2);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_145f83a22:
      FVar10 = this->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar10,(longlong)(int)uVar4 * 2);
      return;
    }
  }
  else {
    if (local_res10[0] == 2) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x40000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (2,2,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_145f83a22;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar11 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar11 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar11,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// BulkSerialize @ 145f83a70

void __thiscall
TArray<unsigned_int,TMemoryImageAllocator<0>_>::BulkSerialize
          (TArray<unsigned_int,TMemoryImageAllocator<0>_> *this,FArchive *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  atomic<unsigned_char> *paVar9;
  ForAnyElementType FVar10;
  int iVar11;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  local_res10[0] = 4;
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  if ((param_2) ||
     ((((param_1->field_0x28 & 4) != 0 &&
       ((*(longlong *)&param_1->field_0x68 == 0 ||
        (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)))) || ((*puVar3 & 1) != 0))))
  {
    TArrayPrivateFriend::Serialize<unsigned_int,TMemoryImageAllocator<0>_>(param_1,this);
    return;
  }
  piVar1 = &this->ArrayMax;
  piVar2 = &this->ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)this->ArrayNum << 2,(longlong)*piVar1 << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res20[0] = *piVar2;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          uVar4 = local_res20[0];
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          uVar4 = local_res20[0];
        }
      }
      else {
        uVar4 = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
        local_res20[0] = uVar4;
      }
LAB_145f83c94:
      FVar10 = this->AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar10,(longlong)(int)uVar4 << 2);
      return;
    }
  }
  else {
    if (local_res10[0] == 4) {
      plVar5 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0;
      if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res18);
        }
      }
      else {
        local_res18[0] = *(uint *)*plVar5;
        *plVar5 = *plVar5 + 4;
      }
      if (local_res18[0] < 0x20000000) {
        *piVar2 = 0;
        if (*piVar1 != local_res18[0]) {
          UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,local_res18[0],&this->AllocatorInstance,0,piVar1);
        }
        UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                  (4,4,local_res18[0],&this->AllocatorInstance,piVar2,piVar1);
        uVar4 = local_res18[0];
        goto LAB_145f83c94;
      }
      pcVar8 = 
      "NewArrayNum >= 0 && std::numeric_limits<SizeType>::max() / (SizeType)ElementSize >= NewArrayNum"
      ;
      iVar11 = 0x65a;
      paVar9 = &bGEnsureHasExecuted<2846541355549722202>;
    }
    else {
      pcVar8 = "SerializedElementSize == ElementSize";
      iVar11 = 0x64f;
      paVar9 = &bGEnsureHasExecuted<2846541355549722191>;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar9,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,iVar11,pcVar8);
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

// Empty @ 145f8b620

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TArray<FMeshBatchElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TArray<FMeshBatchElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1)

{
  ForElementType<FMeshBatchElement> FVar1;
  ForElementType<FMeshBatchElement> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<FMeshBatchElement>)this;
    if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                (0x98,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 145f97aa0

void __thiscall
TArray<unsigned_short,TMemoryImageAllocator<0>_>::InsertUninitializedImpl
          (TArray<unsigned_short,TMemoryImageAllocator<0>_> *this,int param_1,int param_2)

{
  void *_Src;
  int iVar1;
  ForAnyElementType FVar2;
  
  iVar1 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar2 = this->AllocatorInstance;
  if (((ulonglong)FVar2 & 1) != 0) {
    FVar2 = (ForAnyElementType)
            ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar2 >> 0x18));
  }
  _Src = (void *)((longlong)FVar2 + (longlong)param_1 * 2);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 2),_Src,(longlong)(iVar1 - param_1) * 2);
  return;
}

// InsertUninitializedImpl @ 145f97b20

void __thiscall
TArray<unsigned_int,TMemoryImageAllocator<0>_>::InsertUninitializedImpl
          (TArray<unsigned_int,TMemoryImageAllocator<0>_> *this,int param_1,int param_2)

{
  void *_Src;
  int iVar1;
  ForAnyElementType FVar2;
  
  iVar1 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar2 = this->AllocatorInstance;
  if (((ulonglong)FVar2 & 1) != 0) {
    FVar2 = (ForAnyElementType)
            ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar2 >> 0x18));
  }
  _Src = (void *)((longlong)FVar2 + (longlong)param_1 * 4);
  memmove((void *)((longlong)_Src + (longlong)param_2 * 4),_Src,(longlong)(iVar1 - param_1) << 2);
  return;
}

// RemoveAtImpl @ 145f9f950

void __thiscall
TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLandscapeSectionRayTracingState,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FLandscapeSectionRayTracingState *_Dst;
  
  _Dst = (FLandscapeSectionRayTracingState *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x138);
  DestructItems<FLandscapeSectionRayTracingState,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x138);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 145f9f9d0

void __thiscall
TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FLandscapeRayTracingState,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FLandscapeRayTracingState *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FLandscapeRayTracingState *)(pFVar1 + (longlong)param_1 * 0x28);
  FLandscapeRayTracingState::~FLandscapeRayTracingState(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x28,(longlong)iVar2 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNumZeroed @ 145fa1e40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_char,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<unsigned_char,TMemoryImageAllocator<0>_> *this,int param_1,EAllowShrinking param_2
          )

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)iVar4 + (longlong)FVar6),0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove((void *)((longlong)FVar6 + (longlong)param_1),
                  (void *)((longlong)(int)uVar7 + (longlong)FVar6 + (longlong)param_1),
                  (longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145fa1f90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_short,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<unsigned_short,TMemoryImageAllocator<0>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (2,2,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 2),0,(longlong)(param_1 - iVar5) * 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 2);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 2),(longlong)iVar5 * 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145fa20f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TMemoryImageAllocator<0>_>::SetNumZeroed
          (TArray<unsigned_int,TMemoryImageAllocator<0>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (4,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar6 = this->AllocatorInstance;
    if (((ulonglong)FVar6 & 1) != 0) {
      FVar6 = (ForAnyElementType)
              ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar4 * 4),0,(longlong)(param_1 - iVar5) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar7 != 0) {
        FVar6 = this->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(this->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        _Dst = (void *)((longlong)FVar6 + (longlong)param_1 * 4);
        iVar5 = (*piVar1 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar7 * 4),(longlong)iVar5 << 2);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar7;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar5 - uVar7,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal,TSizedDefaultAllocator<32>_><UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int> @ 145fae210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

TArray<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal,TSizedDefaultAllocator<32>_>
::
TArray<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal,TSizedDefaultAllocator<32>_><UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>
          (TArray<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal,TSizedDefaultAllocator<32>_>
           *this,TArrayView<UE::Landscape::FRDGBuilderRecorder::FRDGExternalTextureAccessFinal_const_,int>
                 *param_1)

{
  int iVar1;
  FRDGExternalTextureAccessFinal *_Src;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
  return this;
}

// operator=<UE::Math::TVector<double>,int> @ 145fae2a0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
operator=<UE::Math::TVector<double>,int>
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Math::TVector<double>,int> *param_1)

{
  int *piVar1;
  int iVar2;
  TVector<double> *_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
  }
  return this;
}

// AddUniqueImpl<TObjectPtr<ALandscape>_const_&> @ 145faf330

int __thiscall
TArray<TObjectPtr<ALandscape>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<ALandscape>_const_&>
          (TArray<TObjectPtr<ALandscape>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<ALandscape> *param_1)

{
  FScriptContainerElement *pFVar1;
  ALandscape *pAVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(ALandscape **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pAVar2 = (param_1->field0_0x0).DebugPtr;
  *(ALandscape **)(pFVar1 + (longlong)iVar5 * 8) = pAVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (ALandscape *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  return iVar5;
}

// operator= @ 145fb6c10

TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::operator=
          (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *this,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_1
          )

{
  int iVar1;
  ForElementType<FTextureMipInfo> FVar2;
  int *piVar3;
  ForElementType<FTextureMipInfo> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    piVar3 = &this->ArrayMax;
    iVar1 = param_1->ArrayNum;
    if (FVar2 != (ForElementType<FTextureMipInfo>)0x0) {
      param_1 = (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *
                )FVar2;
    }
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0xf;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FTextureMipInfo>_>
              (0x30,8,iVar1,*piVar3,&this->AllocatorInstance,iVar1,piVar3);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<FTextureMipInfo>)this;
    if (FVar2 != (ForElementType<FTextureMipInfo>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// RemoveAtImpl @ 145fc72f0

void __thiscall
TArray<FLandscapeTexture2DMipMap,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLandscapeTexture2DMipMap,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FLandscapeTexture2DMipMap *_Dst;
  
  _Dst = (FLandscapeTexture2DMipMap *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<FLandscapeTexture2DMipMap,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSwap @ 145fc75b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FLandscapeTextureStreamingManager_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<FLandscapeTextureStreamingManager_*,TSizedDefaultAllocator<32>_> *this,
          FLandscapeTextureStreamingManager **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(FLandscapeTextureStreamingManager **)((this->AllocatorInstance).Data + lVar7) ==
          *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

