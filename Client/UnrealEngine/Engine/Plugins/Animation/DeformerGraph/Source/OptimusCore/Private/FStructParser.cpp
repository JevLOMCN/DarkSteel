// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// WalkStruct @ 14e230c20

/* WARNING: Removing unreachable block (ram,0x00014e23103f) */
/* WARNING: Removing unreachable block (ram,0x00014e231173) */
/* WARNING: Removing unreachable block (ram,0x00014e23128b) */

void __thiscall
`UOptimusAnimAttributeDataInterface::GetHLSL'::__l14::FStructParser::WalkStruct
          (void *this,FString *param_1,FShaderValueTypeHandle param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  FName this_00;
  code *pcVar1;
  FName *pFVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6 [6];
  TArray<FString,TSizedDefaultAllocator<32>_> local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FName *local_90;
  uint local_88;
  FString local_80;
  FString local_70;
  FName local_60;
  FString local_58;
  FName *local_48;
  
  local_88 = ((param_2.ValueTypePtr)->StructElements).ArrayNum;
  uVar5 = (ulonglong)(int)local_88;
  pFVar7 = (FName *)((param_2.ValueTypePtr)->StructElements).AllocatorInstance.Data;
  local_48 = pFVar7 + uVar5 * 2;
  do {
    pFVar2 = local_48;
    local_90 = pFVar7;
    if (((param_2.ValueTypePtr)->StructElements).ArrayNum != (int)uVar5) {
      local_e8 = 0;
      `TCheckedPointerIterator<FShaderValueType::FStructElement_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_e8);
    }
    if (pFVar7 == pFVar2) {
      return;
    }
    ::FName::ToString(pFVar7,&local_70);
    iVar4 = param_3->ArrayNum;
    pFVar8 = (param_3->AllocatorInstance).Data;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_e0.ArrayMax = 0;
LAB_14e230d06:
      if (((FScriptContainerElement *)&local_70 <
           local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x10) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,0,&local_e0.AllocatorInstance,iVar4,&local_e0.ArrayMax);
      ConstructItems<FString,FString,int>(local_e0.AllocatorInstance.Data,(FString *)pFVar8,iVar4);
      if (local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_70)
      goto LAB_14e230d06;
    }
    if (local_e0.ArrayNum == local_e0.ArrayMax) {
      local_e0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
    }
    FVar9.Data = local_70.Data.AllocatorInstance.Data;
    pFVar8 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 0x10;
    *(FScriptContainerElement **)pFVar8 = (FScriptContainerElement *)0x0;
    iVar4 = local_70.Data.ArrayNum;
    *(int *)(pFVar8 + 8) = iVar4;
    if (iVar4 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
      local_e0.ArrayNum = local_e0.ArrayNum + 1;
    }
    else {
      local_e0.ArrayNum = local_e0.ArrayNum + 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)pFVar8,iVar4,(int *)(pFVar8 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar8,FVar9.Data,(longlong)iVar4 * 2);
    }
    iVar4 = local_e0.ArrayNum;
    bVar3 = true;
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.Data.ArrayNum = 0;
    local_d0.Data.ArrayMax = 0;
    pFVar8 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 0x10;
    FVar9.Data = local_e0.AllocatorInstance.Data;
    while( true ) {
      if (local_e0.ArrayNum != iVar4) {
        local_e7 = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_e7);
      }
      iVar10 = local_e0.ArrayNum;
      if (FVar9.Data == pFVar8) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_d0,L"_",1);
      }
      iVar10 = *(int *)(FVar9.Data + 8) + -1;
      if (*(int *)(FVar9.Data + 8) == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_d0,*(wchar_t **)FVar9.Data,iVar10);
      FVar9.Data = FVar9.Data + 0x10;
    }
    bVar3 = true;
    pFVar8 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 0x10;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    FVar9.Data = local_e0.AllocatorInstance.Data;
    while( true ) {
      if (local_e0.ArrayNum != iVar10) {
        local_e6[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e6);
      }
      pFVar7 = local_90;
      if (FVar9.Data == pFVar8) break;
      if (bVar3) {
        bVar3 = false;
      }
      else {
        ::FString::AppendChars(&local_80,L".",1);
      }
      iVar4 = *(int *)(FVar9.Data + 8) + -1;
      if (*(int *)(FVar9.Data + 8) == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_80,*(wchar_t **)FVar9.Data,iVar4);
      FVar9.Data = FVar9.Data + 0x10;
    }
    this_00 = local_90[1];
    if ((*(char *)this_00 == '\x04') && (*(bool *)((longlong)this_00 + 0xc) == false)) {
      WalkStruct(this,param_1,(FShaderValueTypeHandle)this_00,&local_e0);
    }
    else {
      local_60.ComparisonIndex.Value = 0;
      local_60.Number = 0;
      FShaderValueType::ToString((FShaderValueType *)this_00,&local_58,&local_60);
      ::FString::PrintfImpl(&local_c0,L"%s %s_%s;\n");
      if ((*(FString **)this <= &local_c0) &&
         ((&local_c0 < *(FString **)this + *(int *)((longlong)this + 0xc) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)((longlong)this + 8);
      if (iVar4 == *(int *)((longlong)this + 0xc)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,this,(int *)((longlong)this + 0xc));
      }
      *(int *)((longlong)this + 8) = iVar4 + 1;
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)this);
      *puVar6 = 0;
      *puVar6 = local_c0.Data.AllocatorInstance.Data;
      *(int *)(puVar6 + 1) = local_c0.Data.ArrayNum;
      *(int *)((longlong)puVar6 + 0xc) = local_c0.Data.ArrayMax;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::PrintfImpl(&local_b0,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n");
      if (((*(FString **)this <= &local_b0) &&
          (&local_b0 < *(FString **)this + *(int *)((longlong)this + 0xc))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)((longlong)this + 8);
      if (iVar4 == *(int *)((longlong)this + 0xc)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,this,(int *)((longlong)this + 0xc));
      }
      *(int *)((longlong)this + 8) = iVar4 + 1;
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)this);
      *puVar6 = 0;
      *puVar6 = local_b0.Data.AllocatorInstance.Data;
      *(int *)(puVar6 + 1) = local_b0.Data.ArrayNum;
      *(int *)((longlong)puVar6 + 0xc) = local_b0.Data.ArrayMax;
      local_b0.Data.ArrayNum = 0;
      local_b0.Data.ArrayMax = 0;
      local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::FString::PrintfImpl(&local_a0,L"%s = %s_%s;\n");
      if (((*(FString **)((longlong)this + 0x10) <= &local_a0) &&
          (&local_a0 < *(FString **)((longlong)this + 0x10) + *(int *)((longlong)this + 0x1c))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)((longlong)this + 0x18);
      if (iVar4 == *(int *)((longlong)this + 0x1c)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)((longlong)this + 0x10),
                           (int *)((longlong)this + 0x1c));
      }
      *(int *)((longlong)this + 0x18) = iVar4 + 1;
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)this + 0x10));
      *puVar6 = 0;
      *puVar6 = local_a0.Data.AllocatorInstance.Data;
      *(int *)(puVar6 + 1) = local_a0.Data.ArrayNum;
      *(int *)((longlong)puVar6 + 0xc) = local_a0.Data.ArrayMax;
      local_a0.Data.ArrayNum = 0;
      local_a0.Data.ArrayMax = 0;
      local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 2;
    uVar5 = (ulonglong)local_88;
  } while( true );
}

