// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Setup @ 14875b8d0

void __thiscall
FSplineMeshSceneInstanceDataBuffers::Setup
          (FSplineMeshSceneInstanceDataBuffers *this,FSplineMeshShaderParams *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = &this->field_0xa8;
  iVar6 = *(int *)&this->field_0xb0;
  puVar1 = &this->field_0xb0;
  if (iVar6 < 7) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,7 - iVar6,(ForAnyElementType *)puVar2,(int *)puVar1,
               (int *)&this->field_0xb4);
  }
  else if (7 < iVar6) {
    iVar6 = iVar6 + -7;
    if (iVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar6 == 0) goto LAB_14875b9c7;
    iVar5 = (*(int *)puVar1 - iVar6) + -7;
    if (iVar5 != 0) {
      memmove((void *)(*(longlong *)puVar2 + 0x70),
              (void *)(*(longlong *)puVar2 + 0x70 + (longlong)iVar6 * 0x10),(longlong)iVar5 << 4);
    }
    *(int *)puVar1 = *(int *)puVar1 - iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,(ForAnyElementType *)puVar2,*(int *)puVar1,(int *)&this->field_0xb4);
  }
LAB_14875b9c7:
  *(ushort *)&this->field_0x100 = *(ushort *)&this->field_0x100 | 0x80;
  Update(this,param_1);
  return;
}

// Update @ 14875e380

bool __thiscall
FSplineMeshSceneInstanceDataBuffers::Update
          (FSplineMeshSceneInstanceDataBuffers *this,FSplineMeshShaderParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TArrayView<UE::Math::TVector4<float>,int> local_18;
  
  iVar1 = *(int *)&this->field_0xb0;
  if (iVar1 == 0) {
    return false;
  }
  local_18.DataPtr = *(TVector4<float> **)&this->field_0xa8;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_18.ArrayNum = iVar1;
  PackSplineMeshParams(param_1,&local_18);
  return true;
}

