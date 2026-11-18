// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Fill @ 145db55b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FRDGTrace::OutputGraphEnd'::__l2::FTransientAllocation::Fill
          (void *this,FRHITransientAllocationStats *param_1,FRHITransientResource *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
  *pTVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  
  pTVar7 = TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                   *)&param_1->Resources,param_2);
  if (pTVar7 == (TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = *(int *)&pTVar7->field_0x40;
  puVar8 = *(undefined8 **)&pTVar7->field_0x38;
  if (*(undefined8 **)&pTVar7->field_0x38 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)&pTVar7->field_0x8;
  }
  puVar2 = puVar8 + (longlong)iVar3 * 3;
  while( true ) {
    if (*(int *)&pTVar7->field_0x40 != iVar3) {
      `TCheckedPointerIterator<FRHITransientAllocationStats::FAllocation_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar8 == puVar2) break;
    iVar6 = *(int *)((longlong)this + 8);
    if (iVar6 == *(int *)((longlong)this + 0xc)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,this,(int *)((longlong)this + 0xc));
    }
    *(int *)((longlong)this + 8) = iVar6 + 1;
    *(undefined8 *)(*(longlong *)this + (longlong)iVar6 * 8) = *puVar8;
    iVar6 = *(int *)((longlong)this + 0x18);
    if (iVar6 == *(int *)((longlong)this + 0x1c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)((longlong)this + 0x10),
                         (int *)((longlong)this + 0x1c));
    }
    *(int *)((longlong)this + 0x18) = iVar6 + 1;
    *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + (longlong)iVar6 * 8) = puVar8[1];
    iVar6 = *(int *)((longlong)this + 0x28);
    if (iVar6 == *(int *)((longlong)this + 0x2c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,(ForAnyElementType *)((longlong)this + 0x20),
                         (int *)((longlong)this + 0x2c));
    }
    *(int *)((longlong)this + 0x28) = iVar6 + 1;
    puVar1 = puVar8 + 2;
    puVar8 = puVar8 + 3;
    *(undefined2 *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar6 * 2) =
         *(undefined2 *)puVar1;
  }
  *(bool *)((longlong)this + 0x30) = 1 < param_2->AcquireCount;
  return;
}

