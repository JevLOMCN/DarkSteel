// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 2

// UpdateValue @ 14cd3c950

void __thiscall
TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange>::UpdateValue
          (TIndexedValuesChangeBuilder<float,FMeshAttributePaintChange> *this,int param_1,
          float *param_2,float *param_3)

{
  float fVar1;
  FMeshAttributePaintChange *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_48;
  undefined4 *local_38;
  
  local_res10[0] = param_1;
  if (((this->Change).Ptr == (FMeshAttributePaintChange *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Change.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Changes\\IndexedAttributeChange.h"
                         ,0x3c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(this->SavedIndices).field_0x8 != *(int *)&(this->SavedIndices).field_0x34) {
    puVar10 = *(undefined1 **)&(this->SavedIndices).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SavedIndices).field_0x38;
    }
    uVar5 = *(uint *)(puVar10 +
                     (ulonglong)(*(int *)&(this->SavedIndices).field_0x48 - 1U & local_res10[0]) * 4
                     );
    if (uVar5 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&this->SavedIndices);
        if (*puVar8 == local_res10[0]) {
          puVar7 = puVar8 + 1;
          if (puVar8 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            uVar5 = *puVar7;
            pFVar2 = (this->Change).Ptr;
            fVar1 = *param_3;
            uVar9 = 0;
            if ((int)uVar5 < *(int *)&pFVar2->field_0x30) {
              uVar9 = ~uVar5 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(float *)(*(longlong *)&pFVar2->field_0x28 + (longlong)(int)uVar5 * 4) = fVar1;
            return;
          }
          break;
        }
        uVar5 = puVar8[2];
      } while (uVar5 != 0xffffffff);
    }
  }
  local_res8[0] = *(undefined4 *)&((this->Change).Ptr)->field_0x10;
  local_48.Value = (int *)local_res10;
  local_38 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedIndices,&local_48,(bool *)&local_48.Value);
  pFVar2 = (this->Change).Ptr;
  if (((*(uint **)&pFVar2->field_0x8 <= local_res10) &&
      (local_res10 < *(uint **)&pFVar2->field_0x8 + *(int *)&pFVar2->field_0x14)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)&pFVar2->field_0x10;
  if (iVar6 == *(int *)&pFVar2->field_0x14) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&pFVar2->field_0x8,(int *)&pFVar2->field_0x14);
  }
  *(int *)&pFVar2->field_0x10 = iVar6 + 1;
  *(uint *)(*(longlong *)&pFVar2->field_0x8 + (longlong)iVar6 * 4) = local_res10[0];
  pFVar2 = (this->Change).Ptr;
  if (((*(float **)&pFVar2->field_0x18 <= param_2) &&
      (param_2 < *(float **)&pFVar2->field_0x18 + *(int *)&pFVar2->field_0x24)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)&pFVar2->field_0x20;
  if (iVar6 == *(int *)&pFVar2->field_0x24) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&pFVar2->field_0x18,(int *)&pFVar2->field_0x24);
  }
  *(int *)&pFVar2->field_0x20 = iVar6 + 1;
  *(float *)(*(longlong *)&pFVar2->field_0x18 + (longlong)iVar6 * 4) = *param_2;
  pFVar2 = (this->Change).Ptr;
  if (((*(float **)&pFVar2->field_0x28 <= param_3) &&
      (param_3 < *(float **)&pFVar2->field_0x28 + *(int *)&pFVar2->field_0x34)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = *(int *)&pFVar2->field_0x30;
  if (iVar6 == *(int *)&pFVar2->field_0x34) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&pFVar2->field_0x28,(int *)&pFVar2->field_0x34);
  }
  *(int *)&pFVar2->field_0x30 = iVar6 + 1;
  *(float *)(*(longlong *)&pFVar2->field_0x28 + (longlong)iVar6 * 4) = *param_3;
  return;
}

// UpdateValue @ 14cd3cc90

void __thiscall
TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::UpdateValue
          (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *this,
          int param_1,TVector4<float> *param_2,TVector4<float> *param_3)

{
  undefined8 *puVar1;
  FMeshVertexColorPaintChange *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_const_&,int_const_&> local_48;
  undefined4 *local_38;
  
  local_res10[0] = param_1;
  if (((this->Change).Ptr == (FMeshVertexColorPaintChange *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Change.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Changes\\IndexedAttributeChange.h"
                         ,0x3c,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(int *)&(this->SavedIndices).field_0x8 != *(int *)&(this->SavedIndices).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SavedIndices).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SavedIndices).field_0x38;
    }
    uVar7 = *(uint *)(puVar12 +
                     (ulonglong)(*(int *)&(this->SavedIndices).field_0x48 - 1U & local_res10[0]) * 4
                     );
    if (uVar7 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&this->SavedIndices);
        if (*puVar10 == local_res10[0]) {
          puVar9 = puVar10 + 1;
          if (puVar10 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            uVar7 = *puVar9;
            pFVar2 = (this->Change).Ptr;
            uVar4 = *(undefined8 *)&param_3->field0_0x0;
            uVar5 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
            uVar11 = 0;
            if ((int)uVar7 < *(int *)&pFVar2->field_0x30) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar1 = (undefined8 *)(*(longlong *)&pFVar2->field_0x28 + (longlong)(int)uVar7 * 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            return;
          }
          break;
        }
        uVar7 = puVar10[2];
      } while (uVar7 != 0xffffffff);
    }
  }
  local_res8[0] = *(undefined4 *)&((this->Change).Ptr)->field_0x10;
  local_48.Value = (int *)local_res10;
  local_38 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->SavedIndices,&local_48,(bool *)&local_48.Value);
  pFVar2 = (this->Change).Ptr;
  if (((*(uint **)&pFVar2->field_0x8 <= local_res10) &&
      (local_res10 < *(uint **)&pFVar2->field_0x8 + *(int *)&pFVar2->field_0x14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = *(int *)&pFVar2->field_0x10;
  if (iVar8 == *(int *)&pFVar2->field_0x14) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)&pFVar2->field_0x8,(int *)&pFVar2->field_0x14);
  }
  *(int *)&pFVar2->field_0x10 = iVar8 + 1;
  *(uint *)(*(longlong *)&pFVar2->field_0x8 + (longlong)iVar8 * 4) = local_res10[0];
  pFVar2 = (this->Change).Ptr;
  if (((*(TVector4<float> **)&pFVar2->field_0x18 <= param_2) &&
      (param_2 < *(TVector4<float> **)&pFVar2->field_0x18 + *(int *)&pFVar2->field_0x24)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = *(int *)&pFVar2->field_0x20;
  if (iVar8 == *(int *)&pFVar2->field_0x24) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,(ForAnyElementType *)&pFVar2->field_0x18,(int *)&pFVar2->field_0x24);
  }
  *(int *)&pFVar2->field_0x20 = iVar8 + 1;
  uVar4 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  puVar1 = (undefined8 *)(*(longlong *)&pFVar2->field_0x18 + (longlong)iVar8 * 0x10);
  *puVar1 = *(undefined8 *)&param_2->field0_0x0;
  puVar1[1] = uVar4;
  pFVar2 = (this->Change).Ptr;
  if (((*(TVector4<float> **)&pFVar2->field_0x28 <= param_3) &&
      (param_3 < *(TVector4<float> **)&pFVar2->field_0x28 + *(int *)&pFVar2->field_0x34)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = *(int *)&pFVar2->field_0x30;
  if (iVar8 == *(int *)&pFVar2->field_0x34) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1010,(ForAnyElementType *)&pFVar2->field_0x28,(int *)&pFVar2->field_0x34);
  }
  *(int *)&pFVar2->field_0x30 = iVar8 + 1;
  uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  puVar1 = (undefined8 *)(*(longlong *)&pFVar2->field_0x28 + (longlong)iVar8 * 0x10);
  *puVar1 = *(undefined8 *)&param_3->field0_0x0;
  puVar1[1] = uVar4;
  return;
}

