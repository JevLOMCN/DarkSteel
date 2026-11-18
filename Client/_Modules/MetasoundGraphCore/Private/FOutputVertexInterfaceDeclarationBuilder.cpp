// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FOutputVertexInterfaceDeclarationBuilder @ 14ad3c210

FOutputVertexInterfaceDeclarationBuilder * __thiscall
Metasound::VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::
FOutputVertexInterfaceDeclarationBuilder
          (FOutputVertexInterfaceDeclarationBuilder *this,
          TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *param_2
          )

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ =
       (longlong)&___7FOutputVertexInterfaceDeclarationBuilder_VertexPrivate_Metasound__6B_;
  this->_padding_ = (longlong)param_2;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->Vertices = param_1;
  return this;
}

// Add @ 14ad437e0

void __thiscall
Metasound::VertexPrivate::FOutputVertexInterfaceDeclarationBuilder::Add
          (FOutputVertexInterfaceDeclarationBuilder *this,FOutputDataVertex *param_1)

{
  undefined1 *this_00;
  TArray<Metasound::FOutputDataVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  this_00 = &param_1->field_0x8;
  pFVar6 = (this->Vertices->AllocatorInstance).Data;
  pFVar8 = pFVar6 + (longlong)this->Vertices->ArrayNum * 0x20;
  if (pFVar6 != pFVar8) {
    do {
      if (*(longlong *)(pFVar6 + 8) == *(longlong *)this_00) {
        ::FName::ToString((FName *)this_00,&local_18);
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Vertices.ContainsByPredicate(FEqualVertexName(InVertex.VertexName))",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertex.cpp"
                           ,0x72,L"Duplicate vertex name %s. Vertex names must be unique");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      pFVar6 = pFVar6 + 0x20;
    } while (pFVar6 != pFVar8);
  }
  pTVar1 = this->Vertices;
  iVar4 = pTVar1->ArrayNum;
  if (iVar4 == pTVar1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar4 + 1;
  pFVar6 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x20;
  *(undefined ***)pFVar6 = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)this_00;
  *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)&param_1->field_0x10;
  *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)&param_1->field_0x18;
  *(undefined ***)pFVar6 = &___7FOutputDataVertex_Metasound__6B_;
  pTVar1 = this->Vertices;
  uVar7 = pTVar1->ArrayNum - 1;
  uVar5 = 0;
  if ((int)uVar7 < pTVar1->ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FSubInterfaceDeclarationBuilder::OnVertexAdded
            ((FSubInterfaceDeclarationBuilder *)this,
             (FName *)((pTVar1->AllocatorInstance).Data +
                      (longlong)(pTVar1->ArrayNum + -1) * 0x20 + 8));
  return;
}

