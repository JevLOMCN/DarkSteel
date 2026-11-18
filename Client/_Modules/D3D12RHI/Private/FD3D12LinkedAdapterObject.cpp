// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 10

// ~FD3D12LinkedAdapterObject<FD3D12Buffer> @ 1459aac00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459aac53) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12Buffer>::~FD3D12LinkedAdapterObject<FD3D12Buffer>
          (FD3D12LinkedAdapterObject<FD3D12Buffer> *this)

{
  undefined8 *puVar1;
  FD3D12Buffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> FVar10;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> FVar11;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [16];
  undefined8 local_f8;
  longlong lStack_f0;
  uint local_e8;
  uint uStack_e4;
  longlong lStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator> local_b8;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_d8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_d0 = 0;
  if (local_d8 != 0) {
    for (; (local_d8 >> local_d0 & 1) == 0; local_d0 = local_d0 + 1) {
    }
  }
  uVar7 = 0x20;
  if (local_d8 != 0) {
    uVar7 = (ulonglong)local_d0;
  }
  plVar9 = (longlong *)0x0;
  pFVar2 = (this->LinkedObjects).Objects.Elements[uVar7];
  plVar8 = &pFVar2->_padding_;
  if (pFVar2 == (FD3D12Buffer *)0x0) {
    plVar8 = plVar9;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12Buffer> *)plVar8 == this) {
    local_c8 = 0;
    if (local_d8 != 0) {
      for (; (local_d8 >> local_c8 & 1) == 0; local_c8 = local_c8 + 1) {
      }
    }
    local_cc = 0;
    uStack_d4 = 0x20;
    if (local_d8 != 0) {
      uStack_d4 = local_c8;
    }
    local_b8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0;
    local_30 = 0;
    local_2c = 8;
    lStack_e0 = 0;
    local_e8 = ~(1 << ((byte)uStack_d4 & 0x1f)) & local_d8;
    local_c4 = 0;
    if (local_e8 != 0) {
      for (; (local_e8 >> local_c4 & 1) == 0; local_c4 = local_c4 + 1) {
      }
    }
    uStack_e4 = 0x20;
    if (local_e8 != 0) {
      local_f8 = CONCAT44(local_c4,local_e8);
      lStack_f0 = (&(this->LinkedObjects).Objects.Elements[uStack_d4]->_padding_)[local_c4];
      plVar9 = (longlong *)0x0;
      lStack_e0 = lStack_f0;
      uStack_e4 = local_c4;
      for (; lStack_f0 != 0; lStack_f0 = *(longlong *)(lStack_f0 + 0x1b0 + uVar7 * 8)) {
        FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
                 &local_b8;
        if (local_b8.SecondaryData !=
            (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0) {
          FVar10 = local_b8.SecondaryData;
        }
        uVar5 = (uint)plVar9;
        if ((ulonglong)FVar10 <= &local_f8) {
          FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
                   &local_b8;
          if (local_b8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0) {
            FVar10 = local_b8.SecondaryData;
          }
          if ((&local_f8 < (undefined8 *)((longlong)(int)local_2c * 0x10 + (longlong)FVar10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), uVar5 = local_30, bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uVar5 == local_2c) {
          uVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>_>
                            (0x810,&local_b8,(int *)&local_2c);
        }
        local_30 = uVar5 + 1;
        FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
                 &local_b8;
        if (local_b8.SecondaryData !=
            (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0) {
          FVar10 = local_b8.SecondaryData;
        }
        puVar1 = (undefined8 *)((longlong)FVar10 + (longlong)(int)uVar5 * 0x10);
        *puVar1 = local_f8;
        puVar1[1] = lStack_f0;
        local_f8._0_4_ = (uint)local_f8 & ~(1 << ((byte)((ulonglong)local_f8 >> 0x20) & 0x1f));
        local_c0 = 0;
        if ((uint)local_f8 != 0) {
          for (; ((uint)local_f8 >> local_c0 & 1) == 0; local_c0 = local_c0 + 1) {
          }
        }
        uVar7 = 0x20;
        if ((uint)local_f8 != 0) {
          uVar7 = (ulonglong)local_c0;
        }
        local_f8 = CONCAT44((int)uVar7,(uint)local_f8);
        if ((uint)local_f8 == 0) {
          plVar9 = (longlong *)(ulonglong)local_30;
          break;
        }
        plVar9 = (longlong *)(ulonglong)local_30;
      }
    }
    iVar6 = (int)plVar9;
    FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
             &local_b8;
    if (local_b8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0) {
      FVar10 = local_b8.SecondaryData;
    }
    FVar11 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
             ((longlong)iVar6 * 0x10 + (longlong)FVar10);
    while( true ) {
      if ((int)plVar9 != iVar6) {
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (FVar10 == FVar11) break;
      (**(code **)(*(longlong *)(*(longlong *)((longlong)FVar10 + 8) + 0xe8) + 0x10))();
      plVar9 = (longlong *)(ulonglong)local_30;
      FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)
               ((longlong)FVar10 + 0x10);
    }
    local_30 = 0;
    if (local_2c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_b8,0,(int *)&local_2c);
    }
    if (local_b8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12Buffer>::FLinkedObjectIterator>)0x0) {
      FMemory::Free((void *)local_b8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12RenderQuery> @ 1459f5ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459f5b1f) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12RenderQuery>::~FD3D12LinkedAdapterObject<FD3D12RenderQuery>
          (FD3D12LinkedAdapterObject<FD3D12RenderQuery> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12RenderQuery *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator> FVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator> FVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator> local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  plVar12 = (longlong *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  plVar11 = &pFVar4->_padding_;
  if (pFVar4 == (FD3D12RenderQuery *)0x0) {
    plVar11 = plVar12;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12RenderQuery> *)plVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    plVar11 = (longlong *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = (&(this->LinkedObjects).Objects.Elements[uStack_f4]->_padding_)[local_e4];
      local_118 = CONCAT44(local_e4,local_108);
      plVar11 = plVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)
              0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)plVar12;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
                )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)
              0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          plVar11 = (longlong *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_1459f5d10;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0x28 + uVar8 * 8);
          plVar12 = plVar11;
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_1459f5d10:
    iVar10 = (int)plVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)
            &local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)
             ((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)plVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      plVar11 = (longlong *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)
              ((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12RenderQuery>::FLinkedObjectIterator>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12ResourceCollection> @ 145a46c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a46cdf) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::
~FD3D12LinkedAdapterObject<FD3D12ResourceCollection>
          (FD3D12LinkedAdapterObject<FD3D12ResourceCollection> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12ResourceCollection *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator> FVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator> FVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
  local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  plVar12 = (longlong *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  plVar11 = &pFVar4->_padding_;
  if (pFVar4 == (FD3D12ResourceCollection *)0x0) {
    plVar11 = plVar12;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12ResourceCollection> *)plVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    plVar11 = (longlong *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
         )0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = (&(this->LinkedObjects).Objects.Elements[uStack_f4]->_padding_)[local_e4];
      local_118 = CONCAT44(local_e4,local_108);
      plVar11 = plVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)plVar12;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
                 )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          plVar11 = (longlong *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_145a46ed0;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0x38 + uVar8 * 8);
          plVar12 = plVar11;
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_145a46ed0:
    iVar10 = (int)plVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
             )&local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>)
        0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
              )((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)plVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      plVar11 = (longlong *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>
               )((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12ResourceCollection>::FLinkedObjectIterator>)
        0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12SamplerState> @ 145a47060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a470af) */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12SamplerState>::~FD3D12LinkedAdapterObject<FD3D12SamplerState>
          (FD3D12LinkedAdapterObject<FD3D12SamplerState> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12SamplerState *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator> FVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator> FVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator> local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  plVar12 = (longlong *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  plVar11 = &pFVar4->_padding_;
  if (pFVar4 == (FD3D12SamplerState *)0x0) {
    plVar11 = plVar12;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12SamplerState> *)plVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    plVar11 = (longlong *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = (&(this->LinkedObjects).Objects.Elements[uStack_f4]->_padding_)[local_e4];
      local_118 = CONCAT44(local_e4,local_108);
      plVar11 = plVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)
              0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)plVar12;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
                 )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)
              0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          plVar11 = (longlong *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_145a472a0;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0x28 + uVar8 * 8);
          plVar12 = plVar11;
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_145a472a0:
    iVar10 = (int)plVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)
            &local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)
             ((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)plVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      plVar11 = (longlong *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)
              ((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12SamplerState>::FLinkedObjectIterator>)0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> @ 145a47430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a47482) */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::
~FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>
          (FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12ShaderResourceView_RHI *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
  FVar9;
  int iVar10;
  FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *pFVar11;
  FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *pFVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
  FVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
  local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  pFVar12 = (FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  pFVar11 = (FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *)&pFVar4->field_0xc8;
  if (pFVar4 == (FD3D12ShaderResourceView_RHI *)0x0) {
    pFVar11 = pFVar12;
  }
  if (pFVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    pFVar11 = (FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
          )0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = *(longlong *)
                    (&(this->LinkedObjects).Objects.Elements[uStack_f4]->field_0xd0 +
                    (ulonglong)local_e4 * 8);
      local_118 = CONCAT44(local_e4,local_108);
      pFVar11 = pFVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)pFVar11;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
                 )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          pFVar11 = (FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_145a47673;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0xd0 + uVar8 * 8);
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_145a47673:
    iVar10 = (int)pFVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
             )&local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
         )0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
              )((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)pFVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      pFVar11 = (FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI> *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
               )((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12ShaderResourceView_RHI>::FLinkedObjectIterator>
         )0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12Texture> @ 145a47800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a47853) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12Texture>::~FD3D12LinkedAdapterObject<FD3D12Texture>
          (FD3D12LinkedAdapterObject<FD3D12Texture> *this)

{
  undefined8 *puVar1;
  FD3D12Texture *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> FVar10;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> FVar11;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [16];
  undefined8 local_f8;
  longlong lStack_f0;
  uint local_e8;
  uint uStack_e4;
  longlong lStack_e0;
  uint local_d8;
  uint uStack_d4;
  uint local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator> local_b8;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_d8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_d0 = 0;
  if (local_d8 != 0) {
    for (; (local_d8 >> local_d0 & 1) == 0; local_d0 = local_d0 + 1) {
    }
  }
  uVar7 = 0x20;
  if (local_d8 != 0) {
    uVar7 = (ulonglong)local_d0;
  }
  plVar9 = (longlong *)0x0;
  pFVar2 = (this->LinkedObjects).Objects.Elements[uVar7];
  plVar8 = &pFVar2->_padding_;
  if (pFVar2 == (FD3D12Texture *)0x0) {
    plVar8 = plVar9;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12Texture> *)plVar8 == this) {
    local_c8 = 0;
    if (local_d8 != 0) {
      for (; (local_d8 >> local_c8 & 1) == 0; local_c8 = local_c8 + 1) {
      }
    }
    local_cc = 0;
    uStack_d4 = 0x20;
    if (local_d8 != 0) {
      uStack_d4 = local_c8;
    }
    local_b8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0;
    local_30 = 0;
    local_2c = 8;
    lStack_e0 = 0;
    local_e8 = ~(1 << ((byte)uStack_d4 & 0x1f)) & local_d8;
    local_c4 = 0;
    if (local_e8 != 0) {
      for (; (local_e8 >> local_c4 & 1) == 0; local_c4 = local_c4 + 1) {
      }
    }
    uStack_e4 = 0x20;
    if (local_e8 != 0) {
      local_f8 = CONCAT44(local_c4,local_e8);
      lStack_f0 = *(longlong *)
                   (((this->LinkedObjects).Objects.Elements[uStack_d4]->RenderTargetViews).
                    AllocatorInstance.InlineData + (ulonglong)local_c4 * 8 + -0x58);
      plVar9 = (longlong *)0x0;
      lStack_e0 = lStack_f0;
      uStack_e4 = local_c4;
      for (; lStack_f0 != 0; lStack_f0 = *(longlong *)(lStack_f0 + 0x200 + uVar7 * 8)) {
        FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
                 &local_b8;
        if (local_b8.SecondaryData !=
            (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0) {
          FVar10 = local_b8.SecondaryData;
        }
        uVar5 = (uint)plVar9;
        if ((ulonglong)FVar10 <= &local_f8) {
          FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
                   &local_b8;
          if (local_b8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0)
          {
            FVar10 = local_b8.SecondaryData;
          }
          if ((&local_f8 < (undefined8 *)((longlong)(int)local_2c * 0x10 + (longlong)FVar10)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), uVar5 = local_30, bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (uVar5 == local_2c) {
          uVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>_>
                            (0x810,&local_b8,(int *)&local_2c);
        }
        local_30 = uVar5 + 1;
        FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
                 &local_b8;
        if (local_b8.SecondaryData !=
            (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0) {
          FVar10 = local_b8.SecondaryData;
        }
        puVar1 = (undefined8 *)((longlong)FVar10 + (longlong)(int)uVar5 * 0x10);
        *puVar1 = local_f8;
        puVar1[1] = lStack_f0;
        local_f8._0_4_ = (uint)local_f8 & ~(1 << ((byte)((ulonglong)local_f8 >> 0x20) & 0x1f));
        local_c0 = 0;
        if ((uint)local_f8 != 0) {
          for (; ((uint)local_f8 >> local_c0 & 1) == 0; local_c0 = local_c0 + 1) {
          }
        }
        uVar7 = 0x20;
        if ((uint)local_f8 != 0) {
          uVar7 = (ulonglong)local_c0;
        }
        local_f8 = CONCAT44((int)uVar7,(uint)local_f8);
        if ((uint)local_f8 == 0) {
          plVar9 = (longlong *)(ulonglong)local_30;
          break;
        }
        plVar9 = (longlong *)(ulonglong)local_30;
      }
    }
    iVar6 = (int)plVar9;
    FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
             &local_b8;
    if (local_b8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0) {
      FVar10 = local_b8.SecondaryData;
    }
    FVar11 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
             ((longlong)iVar6 * 0x10 + (longlong)FVar10);
    while( true ) {
      if ((int)plVar9 != iVar6) {
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (FVar10 == FVar11) break;
      (**(code **)(*(longlong *)(*(longlong *)((longlong)FVar10 + 8) + 0x138) + 0x10))();
      plVar9 = (longlong *)(ulonglong)local_30;
      FVar10 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)
               ((longlong)FVar10 + 0x10);
    }
    local_30 = 0;
    if (local_2c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_b8,0,(int *)&local_2c);
    }
    if (local_b8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12Texture>::FLinkedObjectIterator>)0x0) {
      FMemory::Free((void *)local_b8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12RHITextureReference> @ 145a92e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a92ee2) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::
~FD3D12LinkedAdapterObject<FD3D12RHITextureReference>
          (FD3D12LinkedAdapterObject<FD3D12RHITextureReference> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12RHITextureReference *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator> FVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator> FVar13
  ;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
  local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  plVar12 = (longlong *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  plVar11 = &pFVar4->_padding_;
  if (pFVar4 == (FD3D12RHITextureReference *)0x0) {
    plVar11 = plVar12;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12RHITextureReference> *)plVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    plVar11 = (longlong *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
          )0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = (longlong)
                   ((this->LinkedObjects).Objects.Elements[uStack_f4]->TextureReplaceListenersCS).
                   CriticalSection.Opaque1[(ulonglong)local_e4 + 0xfffffffffffffff7];
      local_118 = CONCAT44(local_e4,local_108);
      plVar11 = plVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)plVar11;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
                 )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          plVar11 = (longlong *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_145a930d3;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0x160 + uVar8 * 8);
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_145a930d3:
    iVar10 = (int)plVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
             )&local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
        )0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
              )((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)plVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      plVar11 = (longlong *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
               )((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12RHITextureReference>::FLinkedObjectIterator>
        )0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12TransientHeap> @ 145a93260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a932b3) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12TransientHeap>::~FD3D12LinkedAdapterObject<FD3D12TransientHeap>
          (FD3D12LinkedAdapterObject<FD3D12TransientHeap> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FD3D12TransientHeap *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator> FVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator> FVar13;
  longlong *plVar14;
  undefined1 auStackY_158 [32];
  undefined1 local_108 [16];
  undefined8 local_f8;
  longlong lStack_f0;
  uint local_e8;
  uint uStack_e4;
  uint local_d8;
  uint uStack_d4;
  longlong lStack_d0;
  uint local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator> local_b0;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_e8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_c8 = 0;
  if (local_e8 != 0) {
    for (; (local_e8 >> local_c8 & 1) == 0; local_c8 = local_c8 + 1) {
    }
  }
  uVar10 = 0x20;
  if (local_e8 != 0) {
    uVar10 = (ulonglong)local_c8;
  }
  plVar14 = (longlong *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar10];
  plVar11 = &pFVar4->_padding_;
  if (pFVar4 == (FD3D12TransientHeap *)0x0) {
    plVar11 = plVar14;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12TransientHeap> *)plVar11 == this) {
    local_c0 = 0;
    if (local_e8 != 0) {
      for (; (local_e8 >> local_c0 & 1) == 0; local_c0 = local_c0 + 1) {
      }
    }
    local_c4 = 0;
    plVar11 = (longlong *)0x0;
    uStack_e4 = 0x20;
    if (local_e8 != 0) {
      uStack_e4 = local_c0;
    }
    local_b0.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)0x0;
    local_28 = 0;
    local_24 = 8;
    local_d8 = ~(1 << ((byte)uStack_e4 & 0x1f)) & local_e8;
    local_bc = 0;
    if (local_d8 != 0) {
      for (; (local_d8 >> local_bc & 1) == 0; local_bc = local_bc + 1) {
      }
    }
    uStack_d4 = 0x20;
    if (local_d8 != 0) {
      local_f8 = CONCAT44(local_bc,local_d8);
      lStack_f0 = (&(this->LinkedObjects).Objects.Elements[uStack_e4]->_padding_)[local_bc];
      lStack_d0 = lStack_f0;
      uStack_d4 = local_bc;
      plVar11 = plVar14;
      for (; lStack_f0 != 0; lStack_f0 = *(longlong *)(lStack_f0 + 0x158 + uVar10 * 8)) {
        FVar12 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
                  )&local_b0;
        if (local_b0.SecondaryData !=
            (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)
            0x0) {
          FVar12 = local_b0.SecondaryData;
        }
        uVar8 = (uint)plVar11;
        if ((ulonglong)FVar12 <= &local_f8) {
          FVar12 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
                    )&local_b0;
          if (local_b0.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
              )0x0) {
            FVar12 = local_b0.SecondaryData;
          }
          if ((&local_f8 < (undefined8 *)((longlong)(int)local_24 * 0x10 + (longlong)FVar12)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), uVar8 = local_28, bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (uVar8 == local_24) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>_>
                            (0x810,&local_b0,(int *)&local_24);
        }
        local_28 = uVar8 + 1;
        FVar12 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
                  )&local_b0;
        if (local_b0.SecondaryData !=
            (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)
            0x0) {
          FVar12 = local_b0.SecondaryData;
        }
        puVar2 = (undefined8 *)((longlong)FVar12 + (longlong)(int)uVar8 * 0x10);
        *puVar2 = local_f8;
        puVar2[1] = lStack_f0;
        local_f8._0_4_ = (uint)local_f8 & ~(1 << ((byte)((ulonglong)local_f8 >> 0x20) & 0x1f));
        local_b8 = 0;
        if ((uint)local_f8 != 0) {
          for (; ((uint)local_f8 >> local_b8 & 1) == 0; local_b8 = local_b8 + 1) {
          }
        }
        uVar10 = 0x20;
        if ((uint)local_f8 != 0) {
          uVar10 = (ulonglong)local_b8;
        }
        local_f8 = CONCAT44((int)uVar10,(uint)local_f8);
        if ((uint)local_f8 == 0) {
          plVar11 = (longlong *)(ulonglong)local_28;
          break;
        }
        plVar11 = (longlong *)(ulonglong)local_28;
      }
    }
    else {
      lStack_d0 = 0;
      local_f8 = 0x2000000000;
      lStack_f0 = 0;
    }
    iVar9 = (int)plVar11;
    FVar12 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)
             &local_b0;
    if (local_b0.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)0x0)
    {
      FVar12 = local_b0.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)
             ((longlong)iVar9 * 0x10 + (longlong)FVar12);
    while( true ) {
      if ((int)plVar11 != iVar9) {
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_108);
      }
      if (FVar12 == FVar13) break;
      lVar5 = *(longlong *)((longlong)FVar12 + 8);
      piVar1 = (int *)(lVar5 + 0x148);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        plVar11 = (longlong *)(lVar5 + 0x140);
        if (piVar1 == (int *)0x0) {
          plVar11 = plVar14;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)*plVar11)(plVar11,1);
        }
      }
      plVar11 = (longlong *)(ulonglong)local_28;
      FVar12 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>
                )((longlong)FVar12 + 0x10);
    }
    local_28 = 0;
    if (local_24 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_b0,0,(int *)&local_24);
    }
    if (local_b0.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12TransientHeap>::FLinkedObjectIterator>)0x0)
    {
      FMemory::Free((void *)local_b0.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12UniformBuffer> @ 145a93570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a935bf) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::~FD3D12LinkedAdapterObject<FD3D12UniformBuffer>
          (FD3D12LinkedAdapterObject<FD3D12UniformBuffer> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12UniformBuffer *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator> FVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator> FVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator> local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  plVar12 = (longlong *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  plVar11 = &pFVar4->_padding_;
  if (pFVar4 == (FD3D12UniformBuffer *)0x0) {
    plVar11 = plVar12;
  }
  if ((FD3D12LinkedAdapterObject<FD3D12UniformBuffer> *)plVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    plVar11 = (longlong *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>)0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = (longlong)
                   ((this->LinkedObjects).Objects.Elements[uStack_f4]->UpdateListenersCS).
                   CriticalSection.Opaque1[(ulonglong)local_e4 + 0xfffffffffffffff8];
      local_118 = CONCAT44(local_e4,local_108);
      plVar11 = plVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
              )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)plVar12;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
                 )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
              )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          plVar11 = (longlong *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_145a937b0;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0x60 + uVar8 * 8);
          plVar12 = plVar11;
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_145a937b0:
    iVar10 = (int)plVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>)
            &local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>)0x0)
    {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>)
             ((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)plVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      plVar11 = (longlong *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>
              )((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12UniformBuffer>::FLinkedObjectIterator>)0x0)
    {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

// ~FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> @ 145a93940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a93992) */

void __thiscall
FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::
~FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>
          (FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *this)

{
  FAtomicFlags *pFVar1;
  undefined8 *puVar2;
  atomic<unsigned_int> aVar3;
  FD3D12UnorderedAccessView_RHI *pFVar4;
  FRHIResource *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
  FVar9;
  int iVar10;
  FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *pFVar11;
  FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *pFVar12;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
  FVar13;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint uStack_104;
  longlong lStack_100;
  uint local_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
  local_c8;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_f8 = (this->LinkedObjects).GPUMask.GPUMask;
  local_f0 = 0;
  if (local_f8 != 0) {
    for (; (local_f8 >> local_f0 & 1) == 0; local_f0 = local_f0 + 1) {
    }
  }
  uVar8 = 0x20;
  if (local_f8 != 0) {
    uVar8 = (ulonglong)local_f0;
  }
  pFVar12 = (FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *)0x0;
  pFVar4 = (this->LinkedObjects).Objects.Elements[uVar8];
  pFVar11 = (FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *)&pFVar4->field_0xc8;
  if (pFVar4 == (FD3D12UnorderedAccessView_RHI *)0x0) {
    pFVar11 = pFVar12;
  }
  if (pFVar11 == this) {
    local_ec = 0;
    local_e8 = 0;
    if (local_f8 != 0) {
      for (; (local_f8 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
      }
    }
    pFVar11 = (FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *)0x0;
    uStack_f4 = 0x20;
    if (local_f8 != 0) {
      uStack_f4 = local_e8;
    }
    local_c8.SecondaryData =
         (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
          )0x0;
    local_108 = ~(1 << ((byte)uStack_f4 & 0x1f)) & local_f8;
    local_40 = 0;
    local_3c = 8;
    local_e4 = 0;
    if (local_108 != 0) {
      for (; (local_108 >> local_e4 & 1) == 0; local_e4 = local_e4 + 1) {
      }
    }
    uStack_104 = 0x20;
    if (local_108 != 0) {
      lStack_110 = *(longlong *)
                    (&(this->LinkedObjects).Objects.Elements[uStack_f4]->field_0xd0 +
                    (ulonglong)local_e4 * 8);
      local_118 = CONCAT44(local_e4,local_108);
      pFVar11 = pFVar12;
      uStack_104 = local_e4;
      lStack_100 = lStack_110;
      if (lStack_110 != 0) {
        do {
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          uVar7 = (uint)pFVar11;
          if ((ulonglong)FVar9 <= &local_118) {
            FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
                     )&local_c8;
            if (local_c8.SecondaryData !=
                (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
                 )0x0) {
              FVar9 = local_c8.SecondaryData;
            }
            if ((&local_118 < (undefined8 *)((longlong)(int)local_3c * 0x10 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), uVar7 = local_40, bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (uVar7 == local_3c) {
            uVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>_>
                              (0x810,&local_c8,(int *)&local_3c);
          }
          local_40 = uVar7 + 1;
          FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
                   )&local_c8;
          if (local_c8.SecondaryData !=
              (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
               )0x0) {
            FVar9 = local_c8.SecondaryData;
          }
          puVar2 = (undefined8 *)((longlong)FVar9 + (longlong)(int)uVar7 * 0x10);
          *puVar2 = local_118;
          puVar2[1] = lStack_110;
          pFVar11 = (FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *)(ulonglong)local_40;
          local_118._0_4_ = (uint)local_118 & ~(1 << ((byte)((ulonglong)local_118 >> 0x20) & 0x1f));
          local_e0 = 0;
          if ((uint)local_118 != 0) {
            for (; ((uint)local_118 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          uVar8 = 0x20;
          if ((uint)local_118 != 0) {
            uVar8 = (ulonglong)local_e0;
          }
          local_118 = CONCAT44((int)uVar8,(uint)local_118);
          if ((uint)local_118 == 0) {
            lStack_110 = 0;
            goto LAB_145a93b83;
          }
          lStack_110 = *(longlong *)(lStack_110 + 0xd0 + uVar8 * 8);
        } while (lStack_110 != 0);
        lStack_110 = 0;
      }
    }
    else {
      lStack_100 = 0;
      local_118 = 0x2000000000;
      lStack_110 = 0;
    }
LAB_145a93b83:
    iVar10 = (int)pFVar11;
    FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
             )&local_c8;
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
         )0x0) {
      FVar9 = local_c8.SecondaryData;
    }
    FVar13 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
              )((longlong)iVar10 * 0x10 + (longlong)FVar9);
    while( true ) {
      if ((int)pFVar11 != iVar10) {
        local_128[0] = 0;
        `TCheckedPointerIterator<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (FVar9 == FVar13) break;
      local_d8 = *(undefined8 *)FVar9;
      uStack_d0 = *(undefined8 *)((longlong)FVar9 + 8);
      this_00 = *(FRHIResource **)((longlong)FVar9 + 8);
      LOCK();
      pFVar1 = &this_00->AtomicFlags;
      aVar3 = pFVar1->Packed;
      pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
      UNLOCK();
      if (((int)aVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xa2,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (uint)aVar3 & 0x3fffffff;
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xa4,L"Reference count has underflowed.");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewValue >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x53,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (uVar7 == 1) {
        FRHIResource::MarkForDelete(this_00);
      }
      pFVar11 = (FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI> *)(ulonglong)local_40;
      FVar9 = (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
               )((longlong)FVar9 + 0x10);
    }
    local_40 = 0;
    if (local_3c != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>_>
                (0x10,8,0,&local_c8,0,(int *)&local_3c);
    }
    if (local_c8.SecondaryData !=
        (ForElementType<FD3D12LinkedAdapterObject<FD3D12UnorderedAccessView_RHI>::FLinkedObjectIterator>
         )0x0) {
      FMemory::Free((void *)local_c8.SecondaryData);
    }
  }
  return;
}

