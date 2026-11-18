// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FUniformBufferStaticBindings @ 145c88e30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FUniformBufferStaticBindings * __thiscall
FUniformBufferStaticBindings::FUniformBufferStaticBindings
          (FUniformBufferStaticBindings *this,FRHIShaderBindingLayout *param_1)

{
  uint uVar1;
  
  (this->Slots).AllocatorInstance.SecondaryData = (ForElementType<unsigned_char>)0x0;
  uVar1 = 0;
  (this->Slots).ArrayNum = 0;
  (this->Slots).ArrayMax = 8;
  (this->UniformBuffers).AllocatorInstance.SecondaryData = (ForElementType<FRHIUniformBuffer_*>)0x0;
  (this->UniformBuffers).ArrayNum = 0;
  (this->UniformBuffers).ArrayMax = 8;
  this->SlotCount = 0;
  this->ShaderBindingLayout = param_1;
  if (param_1 != (FRHIShaderBindingLayout *)0x0) {
    uVar1 = param_1->NumUniformBufferEntries;
  }
  TArray<FRHIUniformBuffer_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&this->UniformBuffers,uVar1,Default);
  return this;
}

// AddUniformBuffer @ 145c91060

void __thiscall
FUniformBufferStaticBindings::AddUniformBuffer
          (FUniformBufferStaticBindings *this,FRHIUniformBuffer *param_1)

{
  int *piVar1;
  TArray<FRHIUniformBuffer_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FRHIShaderBindingLayout *pFVar3;
  FRHIUniformBufferLayout *pFVar4;
  code *pcVar5;
  FRHIUniformBuffer *pFVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_char> FVar9;
  ForElementType<FRHIUniformBuffer_*> FVar10;
  uint uVar11;
  uint uVar12;
  FRHIShaderBindingLayout *pFVar13;
  ForElementType<unsigned_char> FVar14;
  FRHIUniformBuffer *local_res10;
  byte local_28 [16];
  
  local_res10 = param_1;
  if ((param_1 == (FRHIUniformBuffer *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIContext.cpp"
                         ,0x3a,
                         L"Attemped to assign a null uniform buffer to the global uniform buffer bindings."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = this->ShaderBindingLayout;
  pFVar4 = (local_res10->Layout).Reference;
  if (pFVar3 == (FRHIShaderBindingLayout *)0x0) {
    local_28[0] = pFVar4->StaticSlot;
    if ((local_28[0] == 0xff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsUniformBufferStaticSlotValid(Slot)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIContext.cpp"
                           ,0x47,
                           L"Attempted to set a global uniform buffer %s with an invalid slot."),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar14 = (this->Slots).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<unsigned_char>)this;
    if (FVar14 != (ForElementType<unsigned_char>)0x0) {
      FVar9 = FVar14;
    }
    for (FVar14 = FVar9;
        FVar14 != (ForElementType<unsigned_char>)
                  ((longlong)(this->Slots).ArrayNum + (longlong)FVar9);
        FVar14 = (ForElementType<unsigned_char>)((longlong)FVar14 + 1)) {
      if (*(byte *)FVar14 == local_28[0]) {
        uVar11 = FVar14._0_4_ - FVar9._0_4_;
        if (uVar11 != 0xffffffff) {
          uVar12 = 0;
          if ((int)uVar11 < (this->UniformBuffers).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
          if (FVar10 == (ForElementType<FRHIUniformBuffer_*>)0x0) {
            FVar10 = (ForElementType<FRHIUniformBuffer_*>)&this->UniformBuffers;
          }
          if ((*(FRHIUniformBuffer **)((longlong)FVar10 + (longlong)(int)uVar11 * 8) != local_res10)
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("UniformBuffers[SlotIndex] == UniformBuffer",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIContext.cpp"
                                    ,0x4c,
                                    L"Uniform Buffer %s was added multiple times to the binding array but with different values."
                                   ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        break;
      }
    }
    FVar14 = (this->Slots).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<unsigned_char>)this;
    if (FVar14 != (ForElementType<unsigned_char>)0x0) {
      FVar9 = FVar14;
    }
    if ((ulonglong)FVar9 <= local_28) {
      FVar9 = (ForElementType<unsigned_char>)this;
      if (FVar14 != (ForElementType<unsigned_char>)0x0) {
        FVar9 = FVar14;
      }
      if ((local_28 < (byte *)((longlong)FVar9 + (longlong)(this->Slots).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->Slots).ArrayNum;
    piVar1 = &(this->Slots).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
                        (0x101,(ForElementType<unsigned_char> *)this,piVar1);
    }
    (this->Slots).ArrayNum = iVar8 + 1;
    pTVar2 = &this->UniformBuffers;
    FVar14 = (this->Slots).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<unsigned_char>)this;
    if (FVar14 != (ForElementType<unsigned_char>)0x0) {
      FVar9 = FVar14;
    }
    *(byte *)((longlong)iVar8 + (longlong)FVar9) = local_28[0];
    FVar10 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FRHIUniformBuffer_*>)0x0) {
      FVar10 = (ForElementType<FRHIUniformBuffer_*>)pTVar2;
    }
    if ((((ulonglong)FVar10 <= &local_res10) &&
        (&local_res10 <
         (FRHIUniformBuffer **)((longlong)FVar10 + (longlong)(this->UniformBuffers).ArrayMax * 8)))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->UniformBuffers).ArrayNum;
    piVar1 = &(this->UniformBuffers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHIUniformBuffer_*>_>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->UniformBuffers).ArrayNum = iVar8 + 1;
    FVar10 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FRHIUniformBuffer_*>)0x0) {
      FVar10 = (ForElementType<FRHIUniformBuffer_*>)pTVar2;
    }
    *(FRHIUniformBuffer **)((longlong)FVar10 + (longlong)iVar8 * 8) = local_res10;
    iVar8 = local_28[0] + 1;
    if ((int)(local_28[0] + 1) < this->SlotCount) {
      iVar8 = this->SlotCount;
    }
    this->SlotCount = iVar8;
  }
  else {
    for (pFVar13 = (FRHIShaderBindingLayout *)&pFVar3->UniformBufferEntries; pFVar13 != pFVar3 + 1;
        pFVar13 = (FRHIShaderBindingLayout *)
                  ((FRHIUniformBufferShaderBindingLayout_u_16 *)&pFVar13->UniformBufferEntries + 2))
    {
      uVar11 = pFVar13->NumUniformBufferEntries;
      uVar12 = (pFVar4->Name).Data.ArrayNum;
      if (uVar11 == uVar12) {
        if ((int)uVar11 < 2) goto LAB_145c91146;
        iVar8 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)pFVar13,
                           (wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data);
        bVar7 = iVar8 == 0;
      }
      else {
        bVar7 = uVar11 + uVar12 == 1;
      }
      if (bVar7) goto LAB_145c91146;
    }
    pFVar13 = (FRHIShaderBindingLayout *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferEntry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIContext.cpp"
                       ,0x41,
                       L"Attempted to set a static uniform buffer %s which is not defined in the ShaderBindingLayout provided."
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_145c91146:
    pFVar6 = local_res10;
    uVar11 = ((FRHIUniformBufferShaderBindingLayout_u_16 *)&pFVar13->UniformBufferEntries)->Flags >>
             4 & 0x3f;
    if (((this->UniformBuffers).ArrayNum <= (int)uVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar10 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<FRHIUniformBuffer_*>)0x0) {
      FVar10 = (ForElementType<FRHIUniformBuffer_*>)&this->UniformBuffers;
    }
    *(FRHIUniformBuffer **)((longlong)FVar10 + (ulonglong)uVar11 * 8) = pFVar6;
  }
  return;
}

// Bind @ 145c91f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FUniformBufferStaticBindings::Bind
          (FUniformBufferStaticBindings *this,
          TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *param_1)

{
  byte bVar1;
  ForElementType<FRHIUniformBuffer_*> FVar2;
  undefined8 uVar3;
  ForElementType<unsigned_char> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<FRHIUniformBuffer_*> FVar8;
  ForElementType<unsigned_char> FVar9;
  uint uVar10;
  longlong lVar11;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if (this->ShaderBindingLayout == (FRHIShaderBindingLayout *)0x0) {
    TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,this->SlotCount,Default);
    uVar10 = 0;
    if (0 < (this->UniformBuffers).ArrayNum) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->UniformBuffers).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<FRHIUniformBuffer_*>)&this->UniformBuffers;
        if (FVar2 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
          FVar8 = FVar2;
        }
        uVar3 = *(undefined8 *)((longlong)FVar8 + lVar11 * 8);
        uVar7 = 0;
        if ((int)uVar10 < (this->Slots).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (this->Slots).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<unsigned_char>)this;
        if (FVar4 != (ForElementType<unsigned_char>)0x0) {
          FVar9 = FVar4;
        }
        bVar1 = *(byte *)(lVar11 + (longlong)FVar9);
        if ((param_1->ArrayNum <= (int)(uint)bVar1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (ulonglong)bVar1 * 8) = uVar3;
      } while ((int)uVar10 < (this->UniformBuffers).ArrayNum);
    }
  }
  else {
    TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (param_1,(this->UniformBuffers).ArrayNum,Default);
    uVar10 = 0;
    if (0 < (this->UniformBuffers).ArrayNum) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->UniformBuffers).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = (this->UniformBuffers).AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<FRHIUniformBuffer_*>)&this->UniformBuffers;
        if (FVar2 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
          FVar8 = FVar2;
        }
        uVar3 = *(undefined8 *)(lVar11 + (longlong)FVar8);
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + lVar11) = uVar3;
        lVar11 = lVar11 + 8;
      } while ((int)uVar10 < (this->UniformBuffers).ArrayNum);
    }
  }
  return;
}

