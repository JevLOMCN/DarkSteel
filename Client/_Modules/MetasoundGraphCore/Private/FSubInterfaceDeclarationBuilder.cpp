// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 9

// FSubInterfaceDeclarationBuilder @ 14ad3ca50

FSubInterfaceDeclarationBuilder * __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::FSubInterfaceDeclarationBuilder
          (FSubInterfaceDeclarationBuilder *this,
          TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *param_1
          )

{
  this->CurrentNumVertices = 0;
  this->_padding_ = (longlong)&___7FSubInterfaceDeclarationBuilder_VertexPrivate_Metasound__6B_;
  this->SubInterfaces = param_1;
  this->CurrentSubInterfaceIndex = -1;
  return this;
}

// ~FSubInterfaceDeclarationBuilder @ 14ad3e050

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::~FSubInterfaceDeclarationBuilder
          (FSubInterfaceDeclarationBuilder *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FSubInterfaceDeclarationBuilder_VertexPrivate_Metasound__6B_;
  if (this->CurrentSubInterfaceIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubInterfaceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x24,L"Failed to beging/end all sub interfaces");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Add @ 14ad43970

/* WARNING: Removing unreachable block (ram,0x00014ad5ccc9) */

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::Add
          (FSubInterfaceDeclarationBuilder *this,FBeginSubInterface *param_1)

{
  FName *pFVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  uint uVar10;
  int iStack_78;
  undefined4 uStack_74;
  FString FStack_70;
  FString FStack_60;
  FString FStack_50;
  FName FStack_40;
  FName FStack_38;
  undefined8 uStack_30;
  
  pFVar1 = (FName *)(this->SubInterfaces->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->SubInterfaces->ArrayNum * 3) {
    pFVar9 = pFVar1;
    do {
      if (param_1->Name == *pFVar9) {
        if ((int)(((longlong)pFVar9 - (longlong)pFVar1) / 0x18) != -1) {
          ::FName::ToString(&param_1->Name,&FStack_70);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("INDEX_NONE == SubInterfaces->IndexOfByPredicate(FEqualSubInterfaceName{InName})"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                             ,0x44,L"Sub interface %s is already declared.");
          if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        break;
      }
      pFVar9 = pFVar9 + 3;
    } while (pFVar9 != pFVar1 + (longlong)this->SubInterfaces->ArrayNum * 3);
  }
  FStack_40 = param_1->Name;
  pTVar2 = this->SubInterfaces;
  FStack_38.ComparisonIndex.Value = 0;
  FStack_38.Number = 0;
  uStack_30 = 0;
  pFVar1 = (FName *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar1 <= &FStack_40) && (&FStack_40 < pFVar1 + (longlong)pTVar2->ArrayMax * 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = pTVar2->ArrayNum;
  if (iVar6 == pTVar2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar6 + 1;
  pFVar1 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
  *pFVar1 = FStack_40;
  pFVar1[1].ComparisonIndex = 0;
  pFVar1[1].Number = 0;
  pFVar1[1] = FStack_38;
  pFVar1[2].ComparisonIndex.Value = (uint)uStack_30;
  pFVar1[2].Number = uStack_30._4_4_;
  uStack_30 = 0;
  FStack_38.ComparisonIndex.Value = 0;
  FStack_38.Number = 0;
  pTVar2 = this->SubInterfaces;
  uVar8 = this->CurrentSubInterfaceIndex;
  iVar6 = pTVar2->ArrayNum;
  uVar10 = iVar6 - 1;
  if (uVar8 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FName::ToString((FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x18),
                      &FStack_50);
    ::FName::ToString(&param_1->Name,&FStack_60);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubInterfaceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x49,L"Sub interface %s cannot be embedded inside sub interface %s");
    if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
    }
    if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = this->SubInterfaces;
  this->CurrentSubInterfaceIndex = uVar10;
  uVar8 = 0;
  if ((int)uVar10 < pTVar2->ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_74 = 0xffffffff;
  iStack_78 = this->CurrentNumVertices;
  if (((*(int **)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8) <= &iStack_78) &&
      (&iStack_78 <
       *(int **)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8) +
       (longlong)*(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x14) * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x10);
  if (iVar6 == *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8),
                       (int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x14));
  }
  *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x10) = iVar6 + 1;
  *(ulonglong *)(*(longlong *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8) + (longlong)iVar6 * 8) =
       CONCAT44(uStack_74,iStack_78);
  return;
}

// Add @ 14ad43980

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::Add
          (FSubInterfaceDeclarationBuilder *this,FEndSubInterface *param_1)

{
  int iVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  if ((this->CurrentSubInterfaceIndex < 0) ||
     (this->SubInterfaces->ArrayNum <= this->CurrentSubInterfaceIndex)) {
    local_res8[0] = 0;
    bVar5 = `Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::PopSubInterfaceDeclaration'
            ::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar5) {
      return;
    }
  }
  uVar7 = this->CurrentSubInterfaceIndex;
  lVar6 = (longlong)(int)uVar7;
  iVar1 = this->CurrentNumVertices;
  pTVar2 = this->SubInterfaces;
  uVar8 = 0;
  if ((int)uVar7 < pTVar2->ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uVar8 = *(int *)(pFVar3 + lVar6 * 0x18 + 0x10) - 1;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)(pFVar3 + lVar6 * 0x18 + 0x10)) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)(*(longlong *)(pFVar3 + lVar6 * 0x18 + 8) + -4 +
          (longlong)*(int *)(pFVar3 + lVar6 * 0x18 + 0x10) * 8) = iVar1;
  this->CurrentSubInterfaceIndex = -1;
  return;
}

// OnVertexAdded @ 14ad5b460

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::OnVertexAdded
          (FSubInterfaceDeclarationBuilder *this,FName *param_1)

{
  uint uVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString local_28;
  FString local_18;
  
  uVar1 = this->CurrentSubInterfaceIndex;
  if ((uVar1 == 0xffffffff) || (param_1->Number == 0)) {
    this->CurrentNumVertices = this->CurrentNumVertices + 1;
    return;
  }
  pTVar2 = this->SubInterfaces;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::ToString((FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x18),
                    &local_18);
  ::FName::ToString(param_1,&local_28);
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(CurrentSubInterfaceIndex == INDEX_NONE) || (InName.GetNumber() == 0)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                     ,0x3a,
                     L"Vertex %s in sub interface %s cannot have a trailing number because it is in a sub interface."
                    );
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->CurrentNumVertices = this->CurrentNumVertices + 1;
  return;
}

// PopSubInterfaceDeclaration @ 14ad5b670

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::PopSubInterfaceDeclaration
          (FSubInterfaceDeclarationBuilder *this)

{
  int iVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  if ((this->CurrentSubInterfaceIndex < 0) ||
     (this->SubInterfaces->ArrayNum <= this->CurrentSubInterfaceIndex)) {
    local_res8[0] = 0;
    bVar5 = `Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::PopSubInterfaceDeclaration'
            ::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar5) {
      return;
    }
  }
  uVar7 = this->CurrentSubInterfaceIndex;
  lVar6 = (longlong)(int)uVar7;
  iVar1 = this->CurrentNumVertices;
  pTVar2 = this->SubInterfaces;
  uVar8 = 0;
  if ((int)uVar7 < pTVar2->ArrayNum) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uVar8 = *(int *)(pFVar3 + lVar6 * 0x18 + 0x10) - 1;
  uVar7 = 0;
  if ((int)uVar8 < *(int *)(pFVar3 + lVar6 * 0x18 + 0x10)) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)(*(longlong *)(pFVar3 + lVar6 * 0x18 + 8) + -4 +
          (longlong)*(int *)(pFVar3 + lVar6 * 0x18 + 0x10) * 8) = iVar1;
  this->CurrentSubInterfaceIndex = -1;
  return;
}

// PushSubInterfaceDeclaration @ 14ad5cb10

/* WARNING: Removing unreachable block (ram,0x00014ad5ccc9) */

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::PushSubInterfaceDeclaration
          (FSubInterfaceDeclarationBuilder *this,FName *param_1)

{
  FName *pFVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  uint uVar10;
  int local_78;
  undefined4 uStack_74;
  FString local_70;
  FString local_60;
  FString local_50;
  FName local_40;
  FName local_38;
  undefined8 local_30;
  
  pFVar1 = (FName *)(this->SubInterfaces->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->SubInterfaces->ArrayNum * 3) {
    pFVar9 = pFVar1;
    do {
      if (*param_1 == *pFVar9) {
        if ((int)(((longlong)pFVar9 - (longlong)pFVar1) / 0x18) != -1) {
          ::FName::ToString(param_1,&local_70);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("INDEX_NONE == SubInterfaces->IndexOfByPredicate(FEqualSubInterfaceName{InName})"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                             ,0x44,L"Sub interface %s is already declared.");
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        break;
      }
      pFVar9 = pFVar9 + 3;
    } while (pFVar9 != pFVar1 + (longlong)this->SubInterfaces->ArrayNum * 3);
  }
  local_40 = *param_1;
  pTVar2 = this->SubInterfaces;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_30 = 0;
  pFVar1 = (FName *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_40) && (&local_40 < pFVar1 + (longlong)pTVar2->ArrayMax * 3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = pTVar2->ArrayNum;
  if (iVar6 == pTVar2->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
  }
  pTVar2->ArrayNum = iVar6 + 1;
  pFVar1 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
  *pFVar1 = local_40;
  pFVar1[1].ComparisonIndex = 0;
  pFVar1[1].Number = 0;
  pFVar1[1] = local_38;
  pFVar1[2].ComparisonIndex.Value = (uint)local_30;
  pFVar1[2].Number = local_30._4_4_;
  local_30 = 0;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  pTVar2 = this->SubInterfaces;
  uVar8 = this->CurrentSubInterfaceIndex;
  iVar6 = pTVar2->ArrayNum;
  uVar10 = iVar6 - 1;
  if (uVar8 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar8 < iVar6) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FName::ToString((FName *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x18),
                      &local_50);
    ::FName::ToString(param_1,&local_60);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSubInterfaceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                       ,0x49,L"Sub interface %s cannot be embedded inside sub interface %s");
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar2 = this->SubInterfaces;
  this->CurrentSubInterfaceIndex = uVar10;
  uVar8 = 0;
  if ((int)uVar10 < pTVar2->ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_74 = 0xffffffff;
  local_78 = this->CurrentNumVertices;
  if (((*(int **)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8) <= &local_78) &&
      (&local_78 <
       *(int **)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8) +
       (longlong)*(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x14) * 2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x10);
  if (iVar6 == *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x14)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8),
                       (int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x14));
  }
  *(int *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 0x10) = iVar6 + 1;
  *(ulonglong *)(*(longlong *)(pFVar3 + (longlong)(int)uVar10 * 0x18 + 8) + (longlong)iVar6 * 8) =
       CONCAT44(uStack_74,local_78);
  return;
}

// ReserveSubInterfaces @ 14ad62640

void __thiscall
Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::ReserveSubInterfaces
          (FSubInterfaceDeclarationBuilder *this,int param_1)

{
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = this->SubInterfaces;
  if (-1 < param_1) {
    if (pTVar1->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,&pTVar1->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// operator() @ 15055bac0

bool __thiscall
`Metasound::VertexPrivate::FSubInterfaceDeclarationBuilder::PopSubInterfaceDeclaration'::__l3::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_167742559085395887>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_167742559085395887>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

