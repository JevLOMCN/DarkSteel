// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12VertexDeclaration @ 145a902c0

FD3D12VertexDeclaration * __thiscall
FD3D12VertexDeclaration::FD3D12VertexDeclaration
          (FD3D12VertexDeclaration *this,
          TArray<D3D12_INPUT_ELEMENT_DESC,TFixedAllocator<17>_> *param_1,ushort *param_2,
          uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_VertexDeclaration);
  this->_padding_ = (longlong)&___7FD3D12VertexDeclaration__6B_;
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->VertexElements).ArrayMax;
  (this->VertexElements).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0x11;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TFixedAllocator<17>::ForElementType<D3D12_INPUT_ELEMENT_DESC>_>
              (0x20,8,iVar2,0,&(this->VertexElements).AllocatorInstance,iVar2,piVar1);
    memcpy(&this->VertexElements,param_1,(longlong)iVar2 << 5);
  }
  this->HashNoStrides = param_4;
  this->Hash = param_3;
  uVar3 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(this->StreamStrides).Elements = *(undefined8 *)param_2;
  *(undefined8 *)((this->StreamStrides).Elements + 4) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((this->StreamStrides).Elements + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((this->StreamStrides).Elements + 0xc) = uVar3;
  (this->StreamStrides).Elements[0x10] = param_2[0x10];
  return this;
}

// GetInitializer @ 145aa9ab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FD3D12VertexDeclaration::GetInitializer
          (FD3D12VertexDeclaration *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uchar *puVar8;
  uint uVar9;
  uchar *puVar10;
  longlong lVar11;
  
  uVar3 = (this->VertexElements).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
              (8,2,uVar3,&param_1->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
            (8,2,uVar3,&param_1->AllocatorInstance,piVar2,piVar1);
  uVar9 = 0;
  if (0 < (int)uVar3) {
    puVar8 = (param_1->AllocatorInstance).InlineData[0].Pad + 2;
    lVar11 = 0;
    puVar10 = (this->VertexElements).AllocatorInstance.InlineData[0].Pad + 0xc;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->VertexElements).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar7 = 0;
      if ((int)uVar9 < *piVar2) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      ((TTypeCompatibleBytes<FVertexElement> *)(puVar8 + -2))->Pad[0] = puVar10[4];
      puVar8[-1] = puVar10[8];
      switch(*(undefined4 *)puVar10) {
      case 2:
        *puVar8 = '\x04';
        break;
      default:
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        break;
      case 6:
        *puVar8 = '\x03';
        break;
      case 10:
        *puVar8 = '\r';
        break;
      case 0xb:
        *puVar8 = '\x12';
        break;
      case 0xc:
        *puVar8 = '\x10';
        break;
      case 0xd:
        *puVar8 = '\x0e';
        break;
      case 0xe:
        *puVar8 = '\n';
        break;
      case 0x10:
        *puVar8 = '\x02';
        break;
      case 0x18:
        *puVar8 = '\x13';
        break;
      case 0x1c:
        *puVar8 = '\a';
        break;
      case 0x1e:
        *puVar8 = '\x06';
        break;
      case 0x1f:
        *puVar8 = '\x05';
        break;
      case 0x22:
        *puVar8 = '\f';
        break;
      case 0x23:
        *puVar8 = '\x11';
        break;
      case 0x24:
        *puVar8 = '\x0f';
        break;
      case 0x25:
        *puVar8 = '\v';
        break;
      case 0x26:
        *puVar8 = '\t';
        break;
      case 0x29:
        *puVar8 = '\x01';
        break;
      case 0x2a:
        *puVar8 = '\x14';
        break;
      case 0x57:
        *puVar8 = '\b';
      }
      puVar8[1] = puVar10[-4];
      *(ushort *)(puVar8 + 2) = (this->StreamStrides).Elements[*(uint *)(puVar10 + 4)];
      uVar9 = uVar9 + 1;
      *(ushort *)(puVar8 + 4) = (ushort)(*(int *)(puVar10 + 0xc) == 1);
      lVar11 = lVar11 + 1;
      puVar8 = puVar8 + 8;
      puVar10 = puVar10 + 0x20;
    } while (lVar11 < (int)uVar3);
  }
  return true;
}

// GetPrecachePSOHash @ 145aaa2f0

uint __thiscall FD3D12VertexDeclaration::GetPrecachePSOHash(FD3D12VertexDeclaration *this)

{
  return this->HashNoStrides;
}

