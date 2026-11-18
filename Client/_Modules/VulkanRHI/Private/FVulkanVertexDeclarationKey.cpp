// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// FVulkanVertexDeclarationKey @ 145b94b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FVulkanVertexDeclarationKey * __thiscall
FVulkanVertexDeclarationKey::FVulkanVertexDeclarationKey
          (FVulkanVertexDeclarationKey *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FVulkanVertexDeclarationKey *pFVar8;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar9;
  longlong lVar10;
  undefined1 auStackY_108 [32];
  uint6 local_c8;
  undefined2 uStack_c2;
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->VertexElements).ArrayMax;
  (this->VertexElements).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0x11;
  }
  else {
    UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
              (8,2,iVar2,0,(ForElementType<FVertexElement> *)this,iVar2,piVar1);
    memcpy(this,param_1,(longlong)iVar2 << 3);
  }
  uVar6 = FCrc::MemCrc_DEPRECATED(this,(this->VertexElements).ArrayNum << 3,0);
  this->Hash = uVar6;
  local_b8.ArrayNum = (this->VertexElements).ArrayNum;
  lVar10 = (longlong)local_b8.ArrayNum;
  if (local_b8.ArrayNum == 0) {
    local_b8.ArrayMax = 0x11;
  }
  else {
    UE::Core::Private::ReallocForCopy<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
              (8,2,local_b8.ArrayNum,0,&local_b8.AllocatorInstance,local_b8.ArrayNum,
               &local_b8.ArrayMax);
    memcpy(&local_b8,this,lVar10 << 3);
  }
  FPipelineCacheFileFormatPSO::SortVertexElements(&local_b8);
  this->HashNoStride = 0;
  uVar6 = 0;
  if (0 < local_b8.ArrayNum) {
    pTVar9 = &local_b8;
    do {
      uVar7 = 0;
      if ((int)uVar6 < local_b8.ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FVulkanVertexDeclarationKey *)(*pcVar4)();
          return pFVar8;
        }
      }
      uVar3 = *(undefined8 *)(pTVar9->AllocatorInstance).InlineData[0].Pad;
      uStack_c2 = (undefined2)((ulonglong)uVar3 >> 0x30);
      local_c8 = (uint6)(uint)uVar3;
      uVar7 = (*FCrc::MemCrc32Func)(&local_c8,8,this->HashNoStride);
      uVar6 = uVar6 + 1;
      pTVar9 = (TArray<FVertexElement,TFixedAllocator<17>_> *)
               ((pTVar9->AllocatorInstance).InlineData + 1);
      this->HashNoStride = uVar7;
    } while ((int)uVar6 < local_b8.ArrayNum);
  }
  return this;
}

