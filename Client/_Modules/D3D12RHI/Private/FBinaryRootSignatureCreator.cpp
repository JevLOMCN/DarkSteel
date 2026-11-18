// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// AddConstantBufferViewParameter @ 145a510a0

void __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::AddConstantBufferViewParameter
          (FBinaryRootSignatureCreator *this,uint param_1,uint param_2,
          ERootSignatureVisibility param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  
  iVar2 = (this->Parameters).ArrayNum;
  piVar1 = &(this->Parameters).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Parameters).AllocatorInstance,piVar1);
  }
  (this->Parameters).ArrayNum = iVar2 + 1;
  uVar3 = 0;
  pFVar4 = (this->Parameters).AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined4 *)(pFVar4 + 4) = 0;
  *(undefined4 *)(pFVar4 + 0x14) = 0;
  *(undefined4 *)(pFVar4 + 0x1c) = 0;
  if (param_3 == Vertex) {
    uVar3 = 1;
  }
  else if (param_3 == Pixel) {
    uVar3 = 5;
  }
  else if (param_3 == Geometry) {
    uVar3 = 4;
  }
  else if (param_3 == Mesh) {
    uVar3 = 7;
  }
  else if (param_3 == Amplification) {
    uVar3 = 6;
  }
  *(uint *)(pFVar4 + 8) = param_1;
  *(uint *)(pFVar4 + 0xc) = param_2;
  *(undefined4 *)pFVar4 = 2;
  *(undefined4 *)(pFVar4 + 0x18) = uVar3;
  *(undefined4 *)(pFVar4 + 0x10) = 8;
  return;
}

// AddConstantsParameter @ 145a51160

void __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::AddConstantsParameter
          (FBinaryRootSignatureCreator *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->Parameters).ArrayNum;
  piVar1 = &(this->Parameters).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Parameters).AllocatorInstance,piVar1);
  }
  (this->Parameters).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Parameters).AllocatorInstance.Data;
  lVar4 = (longlong)iVar3 * 0x20;
  *(undefined8 *)(pFVar2 + lVar4) = 1;
  *(undefined8 *)(pFVar2 + lVar4 + 0x14) = 0;
  *(undefined4 *)(pFVar2 + lVar4 + 0x1c) = 0;
  *(uint *)(pFVar2 + lVar4 + 0x10) = param_1;
  *(uint *)(pFVar2 + lVar4 + 8) = param_2;
  *(uint *)(pFVar2 + lVar4 + 0xc) = param_3;
  return;
}

// AddRootFlag @ 145a513a0

void __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::AddRootFlag
          (FBinaryRootSignatureCreator *this,D3D12_ROOT_SIGNATURE_FLAGS param_1)

{
  this->RootFlags = this->RootFlags | param_1;
  return;
}

// AddShaderResourceViewParameter @ 145a513b0

void __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::AddShaderResourceViewParameter
          (FBinaryRootSignatureCreator *this,uint param_1,uint param_2,
          ERootSignatureVisibility param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  
  iVar2 = (this->Parameters).ArrayNum;
  piVar1 = &(this->Parameters).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Parameters).AllocatorInstance,piVar1);
  }
  (this->Parameters).ArrayNum = iVar2 + 1;
  uVar3 = 0;
  pFVar4 = (this->Parameters).AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined4 *)(pFVar4 + 4) = 0;
  *(undefined4 *)(pFVar4 + 0x14) = 0;
  *(undefined4 *)(pFVar4 + 0x1c) = 0;
  if (param_3 == Vertex) {
    uVar3 = 1;
  }
  else if (param_3 == Pixel) {
    uVar3 = 5;
  }
  else if (param_3 == Geometry) {
    uVar3 = 4;
  }
  else if (param_3 == Mesh) {
    uVar3 = 7;
  }
  else if (param_3 == Amplification) {
    uVar3 = 6;
  }
  *(uint *)(pFVar4 + 8) = param_1;
  *(uint *)(pFVar4 + 0xc) = param_2;
  *(undefined4 *)pFVar4 = 3;
  *(undefined4 *)(pFVar4 + 0x18) = uVar3;
  *(undefined4 *)(pFVar4 + 0x10) = 0;
  return;
}

// AddTable @ 145a51470

void __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable
          (FBinaryRootSignatureCreator *this,ERootSignatureVisibility param_1,
          ERootSignatureRangeType param_2,int param_3,D3D12_DESCRIPTOR_RANGE_FLAGS param_4)

{
  byte bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_2 - SRV < 2) {
    bVar1 = (byte)this->_padding_ >> 2;
  }
  else {
    if (param_2 != Sampler) goto LAB_145a514aa;
    bVar1 = (byte)this->_padding_ >> 3;
  }
  if ((bVar1 & 1) != 0) {
    return;
  }
LAB_145a514aa:
  iVar2 = (this->PendingTables).ArrayNum;
  if (iVar2 == (this->PendingTables).ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&(this->PendingTables).AllocatorInstance,
                       &(this->PendingTables).ArrayMax);
  }
  (this->PendingTables).ArrayNum = iVar2 + 1;
  pFVar3 = (this->PendingTables).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
  *(ERootSignatureVisibility *)pFVar3 = param_1;
  *(ERootSignatureRangeType *)(pFVar3 + 4) = param_2;
  *(int *)(pFVar3 + 8) = param_3;
  *(D3D12_DESCRIPTOR_RANGE_FLAGS *)(pFVar3 + 0xc) = param_4;
  return;
}

// AddUnorderedAccessViewParameter @ 145a51510

void __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::AddUnorderedAccessViewParameter
          (FBinaryRootSignatureCreator *this,uint param_1,uint param_2,
          ERootSignatureVisibility param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  
  iVar2 = (this->Parameters).ArrayNum;
  piVar1 = &(this->Parameters).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->Parameters).AllocatorInstance,piVar1);
  }
  (this->Parameters).ArrayNum = iVar2 + 1;
  uVar3 = 0;
  pFVar4 = (this->Parameters).AllocatorInstance.Data + (longlong)iVar2 * 0x20;
  *(undefined4 *)(pFVar4 + 4) = 0;
  *(undefined4 *)(pFVar4 + 0x14) = 0;
  *(undefined4 *)(pFVar4 + 0x1c) = 0;
  if (param_3 == Vertex) {
    uVar3 = 1;
  }
  else if (param_3 == Pixel) {
    uVar3 = 5;
  }
  else if (param_3 == Geometry) {
    uVar3 = 4;
  }
  else if (param_3 == Mesh) {
    uVar3 = 7;
  }
  else if (param_3 == Amplification) {
    uVar3 = 6;
  }
  *(uint *)(pFVar4 + 8) = param_1;
  *(uint *)(pFVar4 + 0xc) = param_2;
  *(undefined4 *)pFVar4 = 4;
  *(undefined4 *)(pFVar4 + 0x18) = uVar3;
  *(undefined4 *)(pFVar4 + 0x10) = 0;
  return;
}

// Finalize @ 145a66380

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

D3D12_VERSIONED_ROOT_SIGNATURE_DESC * __thiscall
D3D12ShaderUtils::FBinaryRootSignatureCreator::Finalize(FBinaryRootSignatureCreator *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *pDVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong local_res10;
  longlong local_res18;
  
  if ((this->RootFlags & D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE) !=
      D3D12_ROOT_SIGNATURE_FLAG_NONE) {
    this->RootFlags = D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE;
  }
  uVar13 = (this->PendingTables).ArrayNum;
  piVar1 = &(this->DescriptorRanges).ArrayNum;
  iVar7 = (this->DescriptorRanges).ArrayNum;
  if (iVar7 < (int)uVar13) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar13 - iVar7,&(this->DescriptorRanges).AllocatorInstance,piVar1,
               &(this->DescriptorRanges).ArrayMax);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar7) {
      uVar12 = iVar7 - uVar13;
      if (((int)(uVar12 | uVar13) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pDVar8 = (D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)(*pcVar4)();
        return pDVar8;
      }
      if (uVar12 != 0) {
        pFVar11 = (this->DescriptorRanges).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x18;
        iVar7 = (*piVar1 - uVar13) - uVar12;
        if (iVar7 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar12 * 0x18,(longlong)iVar7 * 0x18);
        }
        *piVar1 = *piVar1 - uVar12;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&(this->DescriptorRanges).AllocatorInstance,*piVar1,
                   &(this->DescriptorRanges).ArrayMax);
      }
    }
  }
  uVar13 = 0;
  if (0 < (this->PendingTables).ArrayNum) {
    local_res18 = 0;
    local_res10 = 0;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar13 < (this->PendingTables).ArrayNum) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pDVar8 = (D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)(*pcVar4)();
        return pDVar8;
      }
      pFVar11 = (this->PendingTables).AllocatorInstance.Data + local_res18;
      iVar7 = *(int *)(pFVar11 + 0xc);
      if (iVar7 == 0) {
        iVar2 = *(int *)(pFVar11 + 4);
        if ((iVar2 == 0) || (iVar2 == 1)) {
          iVar7 = 5;
        }
        else if (iVar2 == 2) {
          iVar7 = 3;
        }
        else if (iVar2 == 3) {
          iVar7 = 1;
        }
      }
      uVar12 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pDVar8 = (D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)(*pcVar4)();
        return pDVar8;
      }
      pFVar9 = (this->DescriptorRanges).AllocatorInstance.Data + local_res10;
      iVar2 = *(int *)(pFVar11 + 4);
      uVar10 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      iVar3 = *(int *)(pFVar11 + 8);
      if (iVar2 == 1) {
        uVar6 = 0;
      }
      else if (iVar2 == 2) {
        uVar6 = 1;
      }
      else if (iVar2 == 3) {
        uVar6 = 3;
      }
      else {
        uVar6 = 2;
      }
      *(undefined4 *)pFVar9 = uVar6;
      *(int *)(pFVar9 + 4) = iVar3;
      *(undefined4 *)(pFVar9 + 8) = 0;
      *(undefined4 *)(pFVar9 + 0xc) = uVar10;
      *(int *)(pFVar9 + 0x10) = iVar7;
      *(undefined4 *)(pFVar9 + 0x14) = 0xffffffff;
      iVar7 = (this->Parameters).ArrayNum;
      if (iVar7 == (this->Parameters).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&(this->Parameters).AllocatorInstance,&(this->Parameters).ArrayMax)
        ;
      }
      (this->Parameters).ArrayNum = iVar7 + 1;
      pFVar9 = (this->Parameters).AllocatorInstance.Data + (longlong)iVar7 * 0x20;
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)(pFVar9 + 8) = 0;
      *(undefined8 *)(pFVar9 + 0x10) = 0;
      *(undefined8 *)(pFVar9 + 0x18) = 0;
      iVar7 = *(int *)pFVar11;
      if (iVar7 == 0) {
        uVar10 = 1;
      }
      else if (iVar7 == 1) {
        uVar10 = 5;
      }
      else if (iVar7 == 2) {
        uVar10 = 4;
      }
      else if (iVar7 == 3) {
        uVar10 = 7;
      }
      else if (iVar7 == 4) {
        uVar10 = 6;
      }
      else {
        uVar10 = 0;
      }
      uVar12 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pDVar8 = (D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)(*pcVar4)();
        return pDVar8;
      }
      uVar13 = uVar13 + 1;
      pFVar11 = (this->DescriptorRanges).AllocatorInstance.Data + local_res10;
      *(undefined4 *)(pFVar9 + 0x18) = uVar10;
      local_res10 = local_res10 + 0x18;
      local_res18 = local_res18 + 0x10;
      *(undefined4 *)pFVar9 = 0;
      *(undefined4 *)(pFVar9 + 8) = 1;
      *(FScriptContainerElement **)(pFVar9 + 0x10) = pFVar11;
    } while ((int)uVar13 < (this->PendingTables).ArrayNum);
  }
  *(int *)&(this->RootDesc).field_0x8 = (this->Parameters).ArrayNum;
  *(FScriptContainerElement **)&(this->RootDesc).field_0x10 =
       (this->Parameters).AllocatorInstance.Data;
  *(D3D12_ROOT_SIGNATURE_FLAGS *)&(this->RootDesc).field_0x28 = this->RootFlags;
  *(undefined4 *)&(this->RootDesc).field_0x0 = 2;
  *(undefined4 *)&(this->RootDesc).field_0x18 = 0;
  *(undefined8 *)&(this->RootDesc).field_0x20 = 0;
  return (D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)&this->RootDesc;
}

