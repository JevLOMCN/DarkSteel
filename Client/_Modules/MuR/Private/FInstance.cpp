// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 41

// ~FInstance @ 14a9782b0

void __thiscall UE::Mutable::Private::FInstance::~FInstance(FInstance *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar2;
  
  DestructItems<UE::Mutable::Private::NamedExtensionData,int>
            ((NamedExtensionData *)(this->ExtensionData).AllocatorInstance.Data,
             (this->ExtensionData).ArrayNum);
  pFVar1 = (this->ExtensionData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar2 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  DestructItems<UE::Mutable::Private::FInstanceComponent,int>
            ((FInstanceComponent *)FVar2,(this->Components).ArrayNum);
  FVar2 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  this->_padding_ = (longlong)&___7FResource_Private_Mutable_UE__6B_;
  return;
}

// AddComponent @ 14aab9fe0

int __thiscall UE::Mutable::Private::FInstance::AddComponent(FInstance *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar4;
  
  iVar2 = (this->Components).ArrayNum;
  piVar1 = &(this->Components).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceComponent>_>
                      (0x8d0,&(this->Components).AllocatorInstance,piVar1);
  }
  (this->Components).ArrayNum = iVar2 + 1;
  FVar4 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  puVar3 = (undefined8 *)((longlong)iVar2 * 0xd0 + (longlong)FVar4);
  *puVar3 = 0;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  memset(puVar3 + 4,0,0xa0);
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[0x18] = 0;
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = 1;
  return iVar2;
}

// AddImage @ 14aaba0a0

int __thiscall
UE::Mutable::Private::FInstance::AddImage
          (FInstance *this,int param_1,int param_2,int param_3,FHandle *param_4,FName param_5)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  uchar *puVar10;
  uint uVar11;
  FInstanceImage local_60;
  
  iVar5 = (this->Components).ArrayNum;
  while (iVar5 <= param_1) {
    AddComponent(this);
    iVar5 = (this->Components).ArrayNum;
  }
  lVar9 = (longlong)param_1 * 0xd0;
  pTVar1 = &this->Components;
  uVar11 = (uint)~param_1 >> 0x1f;
  while( true ) {
    uVar4 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar4 = uVar11;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    if (param_2 < *(int *)(lVar9 + 200 + (longlong)FVar7)) break;
    AddLOD(this,param_1);
  }
  while( true ) {
    uVar4 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar4 = uVar11;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    puVar10 = (uchar *)((longlong)FVar7 + 0x20) + lVar9;
    uVar4 = 0;
    if (param_2 < *(int *)(puVar10 + 0xa8)) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (*(uchar **)(puVar10 + 0xa0) != (uchar *)0x0) {
      puVar10 = *(uchar **)(puVar10 + 0xa0);
    }
    if (param_3 < *(int *)(puVar10 + (longlong)param_2 * 0xa0 + 0x98)) break;
    AddSurface(this,param_2,param_1);
  }
  uVar4 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar4 = uVar11;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
  }
  lVar9 = lVar9 + 0x20 + (longlong)FVar6;
  uVar11 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar8 = *(longlong *)(lVar9 + 0xa0);
  if (*(longlong *)(lVar9 + 0xa0) == 0) {
    lVar8 = lVar9;
  }
  lVar8 = (longlong)param_2 * 0xa0 + 0x20 + lVar8;
  uVar11 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar11 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar9 = *(longlong *)(lVar8 + 0x70);
  if (*(longlong *)(lVar8 + 0x70) == 0) {
    lVar9 = lVar8;
  }
  lVar9 = (longlong)param_3 * 0x70 + lVar9;
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::FHandle(&local_60.Id,param_4);
  local_60.Name = param_5;
  if (((*(FInstanceImage **)(lVar9 + 0x30) <= &local_60) &&
      (&local_60 < *(FInstanceImage **)(lVar9 + 0x30) + *(int *)(lVar9 + 0x3c))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = *(int *)(lVar9 + 0x38);
  if (iVar5 == *(int *)(lVar9 + 0x3c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(lVar9 + 0x30),(int *)(lVar9 + 0x3c));
  }
  *(int *)(lVar9 + 0x38) = iVar5 + 1;
  FInstanceSurface::FInstanceImage::FInstanceImage
            ((FInstanceImage *)((longlong)iVar5 * 0x20 + *(longlong *)(lVar9 + 0x30)),&local_60);
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::~FHandle(&local_60.Id);
  return iVar5;
}

// AddLOD @ 14aaba490

int __thiscall UE::Mutable::Private::FInstance::AddLOD(FInstance *this,int param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  longlong lVar7;
  ForElementType<UE::Mutable::Private::FInstanceLOD> *pFVar8;
  
  iVar5 = (this->Components).ArrayNum;
  while (iVar5 <= param_1) {
    AddComponent(this);
    iVar5 = (this->Components).ArrayNum;
  }
  uVar4 = 0;
  if (param_1 < iVar5) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar7 = (longlong)param_1 * 0xd0 + (longlong)FVar6;
  iVar5 = *(int *)(lVar7 + 200);
  if (iVar5 == *(int *)(lVar7 + 0xcc)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceLOD>_>
                      (0x8a0,(ForElementType<UE::Mutable::Private::FInstanceLOD> *)(lVar7 + 0x20),
                       (int *)(lVar7 + 0xcc));
  }
  *(int *)(lVar7 + 200) = iVar5 + 1;
  pFVar8 = *(ForElementType<UE::Mutable::Private::FInstanceLOD> **)(lVar7 + 0xc0);
  if (*(ForElementType<UE::Mutable::Private::FInstanceLOD> **)(lVar7 + 0xc0) ==
      (ForElementType<UE::Mutable::Private::FInstanceLOD> *)0x0) {
    pFVar8 = (ForElementType<UE::Mutable::Private::FInstanceLOD> *)(lVar7 + 0x20);
  }
  lVar7 = (longlong)iVar5 * 0xa0;
  puVar1 = pFVar8->InlineData + lVar7 + 4;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x20;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x30;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x40;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x50;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x60;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x70;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x80;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1[8] = '\0';
  puVar1[9] = '\0';
  puVar1[10] = '\0';
  puVar1[0xb] = '\0';
  puVar1[0xc] = '\0';
  puVar1[0xd] = '\0';
  puVar1[0xe] = '\0';
  puVar1[0xf] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x10;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x18;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x90;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar8->InlineData + lVar7;
  puVar1[0] = 0xff;
  puVar1[1] = 0xff;
  puVar1[2] = 0xff;
  puVar1[3] = 0xff;
  puVar1 = pFVar8->InlineData + lVar7 + 0x98;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1 = pFVar8->InlineData + lVar7 + 0x9c;
  puVar1[0] = '\x01';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  return iVar5;
}

// AddScalar @ 14aaba790

int __thiscall
UE::Mutable::Private::FInstance::AddScalar
          (FInstance *this,int param_1,int param_2,int param_3,float param_4,FName param_5)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  uchar *puVar10;
  uint uVar11;
  float local_50;
  FNameEntryId FStack_4c;
  uint uStack_48;
  
  iVar5 = (this->Components).ArrayNum;
  while (iVar5 <= param_1) {
    AddComponent(this);
    iVar5 = (this->Components).ArrayNum;
  }
  lVar9 = (longlong)param_1 * 0xd0;
  pTVar1 = &this->Components;
  uVar11 = (uint)~param_1 >> 0x1f;
  while( true ) {
    uVar4 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar4 = uVar11;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    if (param_2 < *(int *)(lVar9 + 200 + (longlong)FVar7)) break;
    AddLOD(this,param_1);
  }
  while( true ) {
    uVar4 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar4 = uVar11;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    puVar10 = (uchar *)((longlong)FVar7 + 0x20) + lVar9;
    uVar4 = 0;
    if (param_2 < *(int *)(puVar10 + 0xa8)) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    if (*(uchar **)(puVar10 + 0xa0) != (uchar *)0x0) {
      puVar10 = *(uchar **)(puVar10 + 0xa0);
    }
    if (param_3 < *(int *)(puVar10 + (longlong)param_2 * 0xa0 + 0x98)) break;
    AddSurface(this,param_2,param_1);
  }
  uVar4 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar4 = uVar11;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
  }
  lVar9 = lVar9 + 0x20 + (longlong)FVar6;
  uVar11 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar8 = *(longlong *)(lVar9 + 0xa0);
  if (*(longlong *)(lVar9 + 0xa0) == 0) {
    lVar8 = lVar9;
  }
  lVar8 = (longlong)param_2 * 0xa0 + 0x20 + lVar8;
  uVar11 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar11 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar9 = *(longlong *)(lVar8 + 0x70);
  if (*(longlong *)(lVar8 + 0x70) == 0) {
    lVar9 = lVar8;
  }
  FStack_4c = param_5.ComparisonIndex.Value;
  uStack_48 = param_5.Number;
  local_50 = param_4;
  lVar9 = (longlong)param_3 * 0x70 + lVar9;
  if (((*(float **)(lVar9 + 0x50) <= &local_50) &&
      (&local_50 < *(float **)(lVar9 + 0x50) + (longlong)*(int *)(lVar9 + 0x5c) * 3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = *(int *)(lVar9 + 0x58);
  if (iVar5 == *(int *)(lVar9 + 0x5c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)(lVar9 + 0x50),(int *)(lVar9 + 0x5c));
  }
  lVar8 = *(longlong *)(lVar9 + 0x50);
  *(int *)(lVar9 + 0x58) = iVar5 + 1;
  *(ulonglong *)(lVar8 + (longlong)iVar5 * 0xc) = CONCAT44(FStack_4c.Value,local_50);
  *(uint *)(lVar8 + 8 + (longlong)iVar5 * 0xc) = uStack_48;
  return iVar5;
}

// AddString @ 14aabac00

/* WARNING: Removing unreachable block (ram,0x00014aabb023) */

int __thiscall
UE::Mutable::Private::FInstance::AddString
          (FInstance *this,int param_1,int param_2,int param_3,FString *param_4,FName param_5)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined8 *puVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar8;
  longlong lVar9;
  longlong lVar10;
  uchar *puVar11;
  uint uVar12;
  ForAnyElementType local_58;
  undefined8 local_50;
  FName local_48;
  
  iVar6 = (this->Components).ArrayNum;
  while (iVar6 <= param_1) {
    AddComponent(this);
    iVar6 = (this->Components).ArrayNum;
  }
  pTVar1 = &this->Components;
  uVar12 = (uint)~param_1 >> 0x1f;
  lVar10 = (longlong)param_1 * 0xd0;
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = uVar12;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    FVar7 = (this->Components).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar7 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar8 = FVar7;
    }
    if (param_2 < *(int *)(lVar10 + 200 + (longlong)FVar8)) break;
    AddLOD(this,param_1);
  }
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = uVar12;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    FVar7 = (this->Components).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar7 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar8 = FVar7;
    }
    puVar11 = (uchar *)((longlong)FVar8 + 0x20) + lVar10;
    uVar5 = 0;
    if (param_2 < *(int *)(puVar11 + 0xa8)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    if (*(uchar **)(puVar11 + 0xa0) != (uchar *)0x0) {
      puVar11 = *(uchar **)(puVar11 + 0xa0);
    }
    if (param_3 < *(int *)(puVar11 + (longlong)param_2 * 0xa0 + 0x98)) break;
    AddSurface(this,param_2,param_1);
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = uVar12;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
  }
  lVar10 = lVar10 + 0x20 + (longlong)FVar7;
  uVar12 = 0;
  if (param_2 < *(int *)(lVar10 + 0xa8)) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  lVar9 = *(longlong *)(lVar10 + 0xa0);
  if (*(longlong *)(lVar10 + 0xa0) == 0) {
    lVar9 = lVar10;
  }
  lVar9 = (longlong)param_2 * 0xa0 + 0x20 + lVar9;
  uVar12 = 0;
  if (param_3 < *(int *)(lVar9 + 0x78)) {
    uVar12 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  lVar10 = *(longlong *)(lVar9 + 0x70);
  if (*(longlong *)(lVar9 + 0x70) == 0) {
    lVar10 = lVar9;
  }
  iVar6 = (param_4->Data).ArrayNum;
  _Src = (param_4->Data).AllocatorInstance.Data;
  lVar10 = (longlong)param_3 * 0x70 + lVar10;
  local_50 = CONCAT44(local_50._4_4_,iVar6);
  if (iVar6 == 0) {
    local_50 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,0,&local_58,iVar6,(int *)((longlong)&local_50 + 4));
    memcpy(local_58.Data,_Src,(longlong)iVar6 * 2);
  }
  local_48 = param_5;
  if (((*(ForAnyElementType **)(lVar10 + 0x60) <= &local_58) &&
      (&local_58 < *(ForAnyElementType **)(lVar10 + 0x60) + (longlong)*(int *)(lVar10 + 0x6c) * 3))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = *(int *)(lVar10 + 0x68);
  if (iVar6 == *(int *)(lVar10 + 0x6c)) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)(lVar10 + 0x60),(int *)(lVar10 + 0x6c));
  }
  *(int *)(lVar10 + 0x68) = iVar6 + 1;
  lVar10 = *(longlong *)(lVar10 + 0x60);
  *(undefined8 *)(lVar10 + (longlong)iVar6 * 0x18) = 0;
  puVar2 = (undefined8 *)(lVar10 + (longlong)iVar6 * 0x18);
  *puVar2 = local_58.Data;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_50._4_4_;
  *(FName *)(puVar2 + 2) = local_48;
  return iVar6;
}

// AddSurface @ 14aabb050

int __thiscall UE::Mutable::Private::FInstance::AddSurface(FInstance *this,int param_1,int param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  ForElementType<UE::Mutable::Private::FInstanceSurface> *pFVar10;
  
  iVar5 = (this->Components).ArrayNum;
  while (iVar5 <= param_1) {
    AddComponent(this);
    iVar5 = (this->Components).ArrayNum;
  }
  while( true ) {
    uVar4 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    if (param_2 < *(int *)((longlong)param_1 * 0xd0 + 200 + (longlong)FVar7)) break;
    AddLOD(this,param_1);
  }
  uVar4 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = (longlong)FVar6 + (longlong)param_1 * 0xd0;
  uVar4 = 0;
  if (param_2 < *(int *)(lVar8 + 200)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  lVar9 = *(longlong *)(lVar8 + 0xc0);
  if (*(longlong *)(lVar8 + 0xc0) == 0) {
    lVar9 = lVar8 + 0x20;
  }
  lVar9 = (longlong)param_2 * 0xa0 + lVar9;
  iVar5 = *(int *)(lVar9 + 0x98);
  if (iVar5 == *(int *)(lVar9 + 0x9c)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceSurface>_>
                      (0x870,(ForElementType<UE::Mutable::Private::FInstanceSurface> *)
                             (lVar9 + 0x20),(int *)(lVar9 + 0x9c));
  }
  *(int *)(lVar9 + 0x98) = iVar5 + 1;
  pFVar10 = *(ForElementType<UE::Mutable::Private::FInstanceSurface> **)(lVar9 + 0x90);
  if (*(ForElementType<UE::Mutable::Private::FInstanceSurface> **)(lVar9 + 0x90) ==
      (ForElementType<UE::Mutable::Private::FInstanceSurface> *)0x0) {
    pFVar10 = (ForElementType<UE::Mutable::Private::FInstanceSurface> *)(lVar9 + 0x20);
  }
  lVar8 = (longlong)iVar5 * 0x70;
  puVar1 = pFVar10->InlineData + lVar8 + 0x10;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x1c;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1 = pFVar10->InlineData + lVar8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x18;
  puVar1[0] = 0xff;
  puVar1[1] = 0xff;
  puVar1[2] = 0xff;
  puVar1[3] = 0xff;
  puVar1 = pFVar10->InlineData + lVar8 + 0x20;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x28;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x30;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x38;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x40;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x48;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x50;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x58;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x60;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = pFVar10->InlineData + lVar8 + 0x68;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  return iVar5;
}

// AddVector @ 14aabb290

int __thiscall
UE::Mutable::Private::FInstance::AddVector
          (FInstance *this,int param_1,int param_2,int param_3,TVector4<float> *param_4,
          FName param_5)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar8;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar9;
  longlong lVar10;
  longlong lVar11;
  uchar *puVar12;
  uint uVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  FName local_48;
  FName FStack_40;
  
  iVar7 = (this->Components).ArrayNum;
  while (iVar7 <= param_1) {
    AddComponent(this);
    iVar7 = (this->Components).ArrayNum;
  }
  lVar11 = (longlong)param_1 * 0xd0;
  pTVar1 = &this->Components;
  uVar13 = (uint)~param_1 >> 0x1f;
  while( true ) {
    uVar6 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    FVar8 = (this->Components).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar8 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar9 = FVar8;
    }
    if (param_2 < *(int *)(lVar11 + 200 + (longlong)FVar9)) break;
    AddLOD(this,param_1);
  }
  while( true ) {
    uVar6 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar6 = uVar13;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    FVar8 = (this->Components).AllocatorInstance.SecondaryData;
    FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar8 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar9 = FVar8;
    }
    puVar12 = (uchar *)((longlong)FVar9 + 0x20) + lVar11;
    uVar6 = 0;
    if (param_2 < *(int *)(puVar12 + 0xa8)) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    if (*(uchar **)(puVar12 + 0xa0) != (uchar *)0x0) {
      puVar12 = *(uchar **)(puVar12 + 0xa0);
    }
    if (param_3 < *(int *)(puVar12 + (longlong)param_2 * 0xa0 + 0x98)) break;
    AddSurface(this,param_2,param_1);
  }
  uVar6 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar6 = uVar13;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  FVar8 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
  }
  lVar11 = lVar11 + 0x20 + (longlong)FVar8;
  uVar13 = 0;
  if (param_2 < *(int *)(lVar11 + 0xa8)) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  lVar10 = *(longlong *)(lVar11 + 0xa0);
  if (*(longlong *)(lVar11 + 0xa0) == 0) {
    lVar10 = lVar11;
  }
  lVar10 = (longlong)param_2 * 0xa0 + 0x20 + lVar10;
  uVar13 = 0;
  if (param_3 < *(int *)(lVar10 + 0x78)) {
    uVar13 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  lVar11 = *(longlong *)(lVar10 + 0x70);
  if (*(longlong *)(lVar10 + 0x70) == 0) {
    lVar11 = lVar10;
  }
  local_58 = *(undefined8 *)&param_4->field0_0x0;
  uStack_50 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  lVar11 = (longlong)param_3 * 0x70 + lVar11;
  local_48 = param_5;
  if (((*(undefined8 **)(lVar11 + 0x40) <= &local_58) &&
      (&local_58 < *(undefined8 **)(lVar11 + 0x40) + (longlong)*(int *)(lVar11 + 0x4c) * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  iVar7 = *(int *)(lVar11 + 0x48);
  if (iVar7 == *(int *)(lVar11 + 0x4c)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1020,(ForAnyElementType *)(lVar11 + 0x40),(int *)(lVar11 + 0x4c));
  }
  *(int *)(lVar11 + 0x48) = iVar7 + 1;
  lVar11 = *(longlong *)(lVar11 + 0x40);
  puVar2 = (undefined8 *)((longlong)iVar7 * 0x20 + lVar11);
  *puVar2 = local_58;
  puVar2[1] = uStack_50;
  pFVar3 = (FName *)((longlong)iVar7 * 0x20 + 0x10 + lVar11);
  *pFVar3 = local_48;
  pFVar3[1] = FStack_40;
  return iVar7;
}

// Clone @ 14aabdf20

TSharedPtr<UE::Mutable::Private::FInstance,1> * __thiscall
UE::Mutable::Private::FInstance::Clone
          (FInstance *this,TSharedPtr<UE::Mutable::Private::FInstance,1> *__return_storage_ptr__)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FInstance *pFVar5;
  NamedExtensionData *pNVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<UE::Mutable::Private::FInstance,1> *pTVar9;
  TSharedPtr<UE::Mutable::Private::FInstance,1> *pTVar10;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar11;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar12;
  TArray<UE::Mutable::Private::NamedExtensionData,TSizedDefaultAllocator<32>_> *pTVar13;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  TSharedRef<UE::Mutable::Private::FInstance,1> local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name14,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name14,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name14,true);
  pTVar9 = MakeShared<UE::Mutable::Private::FInstance,1>(&local_38);
  __return_storage_ptr__->Object = pTVar9->Object;
  pTVar4 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if ((__return_storage_ptr__->Object == (FInstance *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TSharedPtr<UE::Mutable::Private::FInstance,1> *)(*pcVar7)();
    return pTVar10;
  }
  pFVar5 = __return_storage_ptr__->Object;
  pTVar1 = &pFVar5->Components;
  if (pFVar5 != this) {
    FVar11 = (pFVar5->Components).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar11 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    }
    DestructItems<UE::Mutable::Private::FInstanceComponent,int>
              ((FInstanceComponent *)FVar11,(pFVar5->Components).ArrayNum);
    FVar11 = (this->Components).AllocatorInstance.SecondaryData;
    piVar2 = &(pFVar5->Components).ArrayMax;
    iVar3 = (this->Components).ArrayNum;
    if (FVar11 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar11 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    (pFVar5->Components).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceComponent>_>
                (0xd0,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      FVar12 = (pFVar5->Components).AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar12 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
      }
      ConstructItems<UE::Mutable::Private::FInstanceComponent,UE::Mutable::Private::FInstanceComponent,int>
                ((void *)FVar12,(FInstanceComponent *)FVar11,iVar3);
    }
  }
  pTVar13 = &pFVar5->ExtensionData;
  if (pTVar13 != &this->ExtensionData) {
    DestructItems<UE::Mutable::Private::NamedExtensionData,int>
              ((NamedExtensionData *)(pTVar13->AllocatorInstance).Data,
               (pFVar5->ExtensionData).ArrayNum);
    iVar3 = (this->ExtensionData).ArrayNum;
    piVar2 = &(pFVar5->ExtensionData).ArrayMax;
    pNVar6 = (NamedExtensionData *)(this->ExtensionData).AllocatorInstance.Data;
    (pFVar5->ExtensionData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,*piVar2,&pTVar13->AllocatorInstance,iVar3,piVar2);
      ConstructItems<UE::Mutable::Private::NamedExtensionData,UE::Mutable::Private::NamedExtensionData,int>
                ((pTVar13->AllocatorInstance).Data,pNVar6,iVar3);
    }
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// FindBaseSurfaceBySharedId @ 14aac8760

void __thiscall
UE::Mutable::Private::FInstance::FindBaseSurfaceBySharedId
          (FInstance *this,int param_1,uint param_2,int *param_3,int *param_4)

{
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar5;
  uchar *puVar6;
  uint uVar7;
  uchar *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    uVar11 = 0;
    lVar10 = 0;
    while( true ) {
      uVar7 = 0;
      if (param_1 < (this->Components).ArrayNum) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Components).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
      if (FVar1 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar5 = FVar1;
      }
      if (*(int *)((longlong)param_1 * 0xd0 + 200 + (longlong)FVar5) <= (int)uVar11) break;
      uVar7 = 0;
      if (param_1 < (this->Components).ArrayNum) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar1 = (this->Components).AllocatorInstance.SecondaryData;
      FVar5 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
      if (FVar1 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar5 = FVar1;
      }
      puVar8 = (uchar *)((longlong)FVar5 + 0x20) + (longlong)param_1 * 0xd0;
      uVar7 = 0;
      if ((int)uVar11 < *(int *)(puVar8 + 0xa8)) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uchar **)(puVar8 + 0xa0) != (uchar *)0x0) {
        puVar8 = *(uchar **)(puVar8 + 0xa0);
      }
      uVar7 = 0;
      if (0 < *(int *)(puVar8 + lVar10 + 0x98)) {
        lVar9 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < *(int *)(puVar8 + lVar10 + 0x98)) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar6 = puVar8 + lVar10 + 0x20;
          if (*(uchar **)(puVar8 + lVar10 + 0x90) != (uchar *)0x0) {
            puVar6 = *(uchar **)(puVar8 + lVar10 + 0x90);
          }
          if (*(uint *)(puVar6 + lVar9 + 0x10) == param_2) {
            *param_3 = uVar7;
            *param_4 = uVar11;
            return;
          }
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x70;
        } while ((int)uVar7 < *(int *)(puVar8 + lVar10 + 0x98));
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0xa0;
    }
  }
  *param_3 = -1;
  *param_4 = -1;
  return;
}

// FindSurfaceById @ 14aac92e0

/* WARNING: Type propagation algorithm not settling */

int __thiscall
UE::Mutable::Private::FInstance::FindSurfaceById
          (FInstance *this,int param_1,int param_2,uint param_3)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  longlong lVar7;
  longlong lVar8;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    pTVar1 = &this->Components;
    if (-1 < param_2) {
      lVar7 = (longlong)param_1 * 0xd0;
      if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
      }
      if (param_2 < *(int *)((longlong)FVar6 + 200 + lVar7)) {
        uVar10 = 0;
        lVar11 = 0;
        while( true ) {
          uVar4 = 0;
          if (param_1 < (this->Components).ArrayNum) {
            uVar4 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          FVar6 = (this->Components).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
          if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
            FVar9 = FVar6;
          }
          lVar8 = (longlong)FVar9 + lVar7 + 0x20;
          uVar4 = 0;
          if (param_2 < *(int *)(lVar8 + 0xa8)) {
            uVar4 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (*(longlong *)(lVar8 + 0xa0) != 0) {
            lVar8 = *(longlong *)(lVar8 + 0xa0);
          }
          if (*(int *)(lVar8 + 0x98 + (longlong)param_2 * 0xa0) <= (int)uVar10) {
            return -1;
          }
          uVar4 = 0;
          if (param_1 < (this->Components).ArrayNum) {
            uVar4 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          FVar6 = (this->Components).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
          if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
            FVar9 = FVar6;
          }
          lVar8 = (longlong)FVar9 + lVar7 + 0x20;
          uVar4 = 0;
          if (param_2 < *(int *)(lVar8 + 0xa8)) {
            uVar4 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (*(longlong *)(lVar8 + 0xa0) != 0) {
            lVar8 = *(longlong *)(lVar8 + 0xa0);
          }
          lVar8 = lVar8 + 0x20 + (longlong)param_2 * 0xa0;
          uVar4 = 0;
          if ((int)uVar10 < *(int *)(lVar8 + 0x78)) {
            uVar4 = ~uVar10 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) break;
          if (*(longlong *)(lVar8 + 0x70) != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x70);
          }
          if (*(uint *)(lVar8 + 8 + lVar11) == param_3) {
            return uVar10;
          }
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x70;
        }
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x6d,L"");
  if (!bVar3) {
    return -1;
  }
  pcVar2 = (code *)swi(3);
  iVar5 = (*pcVar2)();
  return iVar5;
}

// GetComponentCount @ 14aacc9f0

int __thiscall UE::Mutable::Private::FInstance::GetComponentCount(FInstance *this)

{
  return (this->Components).ArrayNum;
}

// GetComponentId @ 14aacca00

ushort __thiscall UE::Mutable::Private::FInstance::GetComponentId(FInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
    }
    FVar4 = (this->Components).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    return *(ushort *)((longlong)FVar4 + (longlong)param_1 * 0xd0);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x36,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// GetDataSize @ 14aacce00

int __thiscall UE::Mutable::Private::FInstance::GetDataSize(FInstance *this)

{
  uint uVar1;
  
  uVar1 = (this->Components).ArrayMax;
  if (1 < uVar1) {
    return uVar1 * 0xd0 + ((this->ExtensionData).ArrayMax + 0xb) * 0x18;
  }
  return ((this->ExtensionData).ArrayMax + 0xb) * 0x18;
}

// GetExtensionData @ 14aacd280

void __thiscall
UE::Mutable::Private::FInstance::GetExtensionData
          (FInstance *this,int param_1,
          TSharedPtr<UE::Mutable::Private::FExtensionData_const_,1> *param_2,FName *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FExtensionData *pFVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  
  if ((param_1 < 0) || ((this->ExtensionData).ArrayNum <= param_1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExtensionData.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                       ,0x15a,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = 0;
  if (param_1 < (this->ExtensionData).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar1 = (longlong)param_1 * 0x18;
  pFVar2 = (this->ExtensionData).AllocatorInstance.Data;
  pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar1 + 8);
  pFVar4 = *(FExtensionData **)(pFVar2 + lVar1);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
  param_2->Object = pFVar4;
  (param_2->SharedReferenceCount).ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  uVar8 = 0;
  if (param_1 < (this->ExtensionData).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *param_3 = *(FName *)((this->ExtensionData).AllocatorInstance.Data + lVar1 + 0x10);
  return;
}

// GetExtensionDataCount @ 14aacd3e0

int __thiscall UE::Mutable::Private::FInstance::GetExtensionDataCount(FInstance *this)

{
  return (this->ExtensionData).ArrayNum;
}

// GetImageCount @ 14aacd6d0

int __thiscall
UE::Mutable::Private::FInstance::GetImageCount(FInstance *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  piVar1 = &(this->Components).ArrayNum;
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xb1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar7 + 200 + lVar8 * 0xd0)) goto LAB_14aacd825;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xb2,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14aacd825:
  local_50 = &this->Components;
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar9) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xb3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar8 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xa0);
  }
  lVar8 = lVar8 + 0x20 + (longlong)param_2 * 0xa0;
  uVar6 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x70);
  }
  return *(int *)((longlong)param_3 * 0x70 + 0x38 + lVar8);
}

// GetImageId @ 14aacdb70

FHandle * __thiscall
UE::Mutable::Private::FInstance::GetImageId
          (FInstance *this,FHandle *__return_storage_ptr__,int param_1,int param_2,int param_3,
          int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHandle *pFVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  lVar8 = (longlong)param_2;
  lVar9 = (longlong)param_1;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xe2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar7 + 200 + lVar9 * 0xd0)) goto LAB_14aacdccc;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xe3,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
LAB_14aacdccc:
  local_50 = &this->Components;
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)(lVar8 * 0xa0 + 0x98 + lVar10) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xe4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  lVar10 = lVar10 + 0x20 + lVar8 * 0xa0;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar10 + 0x70) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x70);
  }
  if (((param_4 < 0) || (*(int *)((longlong)param_3 * 0x70 + 0x38 + lVar10) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Images.IsValidIndex(ImageIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xe5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar9 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  lVar9 = lVar9 + lVar8 * 0xa0 + 0x20;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar9 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x70);
  }
  lVar9 = lVar9 + (longlong)param_3 * 0x70;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar9 + 0x38)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::FHandle(__return_storage_ptr__,
                   (FHandle *)((longlong)param_4 * 0x20 + *(longlong *)(lVar9 + 0x30)));
  return __return_storage_ptr__;
}

// GetImageName @ 14aace0f0

FName __thiscall
UE::Mutable::Private::FInstance::GetImageName
          (FInstance *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  uint in_register_00000014;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint in_stack_00000030;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  lVar8 = (longlong)param_3;
  lVar9 = (longlong)param_2;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xed,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < *piVar1) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_3) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_3 < *(int *)((longlong)FVar7 + 200 + lVar9 * 0xd0)) goto LAB_14aace24c;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xee,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
LAB_14aace24c:
  local_50 = &this->Components;
  uVar5 = 0;
  if (param_2 < *piVar1) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  if (((param_4 < 0) || (*(int *)(lVar8 * 0xa0 + 0x98 + lVar10) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xef,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  lVar10 = lVar10 + 0x20 + lVar8 * 0xa0;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar10 + 0x78)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0x70) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x70);
  }
  if ((((int)in_stack_00000030 < 0) ||
      (*(int *)((longlong)param_4 * 0x70 + 0x38 + lVar10) <= (int)in_stack_00000030)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Images.IsValidIndex(ImageIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xf0,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar9 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  lVar9 = lVar9 + lVar8 * 0xa0 + 0x20;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar9 + 0x78)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x70);
  }
  lVar9 = lVar9 + (longlong)param_4 * 0x70;
  uVar5 = 0;
  if ((int)in_stack_00000030 < *(int *)(lVar9 + 0x38)) {
    uVar5 = ~in_stack_00000030 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  *(undefined8 *)FVar6 =
       *(undefined8 *)((longlong)(int)in_stack_00000030 * 0x20 + 0x18 + *(longlong *)(lVar9 + 0x30))
  ;
  return FVar6;
}

// GetLODCount @ 14aaceb60

int __thiscall UE::Mutable::Private::FInstance::GetLODCount(FInstance *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    FVar4 = (this->Components).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    return *(int *)((uchar *)((longlong)FVar4 + 200) + (longlong)param_1 * 0xd0);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x29,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetMaterialId @ 14aacedf0

FHandle * __thiscall
UE::Mutable::Private::FInstance::GetMaterialId
          (FInstance *this,FHandle *__return_storage_ptr__,int param_1,int param_2,int param_3)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHandle *pFVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  
  piVar1 = &(this->Components).ArrayNum;
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x14a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((uchar *)((longlong)FVar7 + 200) + lVar8 * 0xd0)) goto LAB_14aacef57;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x14b,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
LAB_14aacef57:
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar9) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x14c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar8 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xa0);
  }
  lVar8 = lVar8 + 0x20 + (longlong)param_2 * 0xa0;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FHandle *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x70);
  }
  __return_storage_ptr__->Id = 0xffffffff;
  (__return_storage_ptr__->WeakRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
        *)0x0;
  (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::FHandle::operator=(__return_storage_ptr__,(FHandle *)((longlong)param_3 * 0x70 + 0x18 + lVar8));
  return __return_storage_ptr__;
}

// GetMeshId @ 14aacf5a0

FHandle * __thiscall
UE::Mutable::Private::FInstance::GetMeshId
          (FInstance *this,FHandle *__return_storage_ptr__,int param_1,int param_2)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FHandle *pFVar7;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar8;
  longlong lVar9;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_48;
  
  piVar1 = &(this->Components).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xd9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHandle *)(*pcVar4)();
    return pFVar7;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHandle *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar8 = *pFVar2;
  if (-1 < param_2) {
    if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar8 + 200 + (longlong)param_1 * 0xd0)) goto LAB_14aacf6ff;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xda,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHandle *)(*pcVar4)();
    return pFVar7;
  }
LAB_14aacf6ff:
  local_48 = &this->Components;
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHandle *)(*pcVar4)();
    return pFVar7;
  }
  FVar8 = *pFVar2;
  if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_48;
  }
  lVar9 = (longlong)param_1 * 0xd0 + 0x20 + (longlong)FVar8;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FHandle *)(*pcVar4)();
    return pFVar7;
  }
  lVar3 = *(longlong *)(lVar9 + 0xa0);
  __return_storage_ptr__->Id = 0xffffffff;
  (__return_storage_ptr__->WeakRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
        *)0x0;
  if (lVar3 != 0) {
    lVar9 = lVar3;
  }
  (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
  FHandle::operator=(__return_storage_ptr__,(FHandle *)((longlong)param_2 * 0xa0 + lVar9));
  return __return_storage_ptr__;
}

// GetOverlayMaterialId @ 14aad0cd0

FHandle * __thiscall
UE::Mutable::Private::FInstance::GetOverlayMaterialId
          (FInstance *this,FHandle *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FHandle *pFVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  
  piVar1 = &(this->Components).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Components.IsValidIndex(ComponentIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                       ,0x144,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  __return_storage_ptr__->Id = 0xffffffff;
  (__return_storage_ptr__->WeakRegistry).Object =
       (TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
        *)0x0;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  (__return_storage_ptr__->WeakRegistry).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::FHandle::operator=
            (__return_storage_ptr__,(FHandle *)((longlong)FVar6 + (longlong)param_1 * 0xd0 + 8));
  return __return_storage_ptr__;
}

// GetScalar @ 14aad1290

float __thiscall
UE::Mutable::Private::FInstance::GetScalar
          (FInstance *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_48;
  
  lVar7 = (longlong)param_2;
  piVar1 = &(this->Components).ArrayNum;
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x10e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar6 = *pFVar2;
  if (-1 < param_2) {
    if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar6 + 200 + lVar8 * 0xd0)) goto LAB_14aad13f4;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x10f,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
LAB_14aad13f4:
  local_48 = &this->Components;
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  FVar6 = *pFVar2;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_48;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar6;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)(lVar7 * 0xa0 + 0x98 + lVar9) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x110,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar6;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  lVar9 = lVar9 + 0x20 + lVar7 * 0xa0;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar9 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x70);
  }
  if (((param_4 < 0) || (*(int *)((longlong)param_3 * 0x70 + 0x58 + lVar9) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Scalars.IsValidIndex(ScalarIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x111,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = lVar8 * 0xd0 + 0x20 + (longlong)FVar6;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar8 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xa0);
  }
  lVar8 = lVar8 + lVar7 * 0xa0 + 0x20;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x70);
  }
  lVar7 = (longlong)param_3 * 0x70;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar7 + 0x58 + lVar8)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  return *(float *)(*(longlong *)(lVar7 + 0x50 + lVar8) + (longlong)param_4 * 0xc);
}

// GetScalarCount @ 14aad1800

int __thiscall
UE::Mutable::Private::FInstance::GetScalarCount(FInstance *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  piVar1 = &(this->Components).ArrayNum;
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xc5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar7 + 200 + lVar8 * 0xd0)) goto LAB_14aad1955;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xc6,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14aad1955:
  local_50 = &this->Components;
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar9) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,199,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar8 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xa0);
  }
  lVar8 = lVar8 + 0x20 + (longlong)param_2 * 0xa0;
  uVar6 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x70);
  }
  return *(int *)((longlong)param_3 * 0x70 + 0x58 + lVar8);
}

// GetScalarName @ 14aad1ba0

FName __thiscall
UE::Mutable::Private::FInstance::GetScalarName
          (FInstance *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  uint in_register_00000014;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint in_stack_00000030;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  lVar8 = (longlong)param_3;
  lVar9 = (longlong)param_2;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x119,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < *piVar1) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_3) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_3 < *(int *)((longlong)FVar7 + 200 + lVar9 * 0xd0)) goto LAB_14aad1cfc;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x11a,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
LAB_14aad1cfc:
  local_50 = &this->Components;
  uVar5 = 0;
  if (param_2 < *piVar1) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  if (((param_4 < 0) || (*(int *)(lVar8 * 0xa0 + 0x98 + lVar10) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x11b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  lVar10 = lVar10 + 0x20 + lVar8 * 0xa0;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar10 + 0x78)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0x70) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x70);
  }
  if ((((int)in_stack_00000030 < 0) ||
      (*(int *)((longlong)param_4 * 0x70 + 0x58 + lVar10) <= (int)in_stack_00000030)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Scalars.IsValidIndex(ScalarIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x11c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar9 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  lVar9 = lVar9 + lVar8 * 0xa0 + 0x20;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar9 + 0x78)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x70);
  }
  lVar9 = lVar9 + (longlong)param_4 * 0x70;
  uVar5 = 0;
  if ((int)in_stack_00000030 < *(int *)(lVar9 + 0x58)) {
    uVar5 = ~in_stack_00000030 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  *(undefined8 *)FVar6 =
       *(undefined8 *)(*(longlong *)(lVar9 + 0x50) + 4 + (longlong)(int)in_stack_00000030 * 0xc);
  return FVar6;
}

// GetSharedSurfaceId @ 14aad2110

uint __thiscall
UE::Mutable::Private::FInstance::GetSharedSurfaceId
          (FInstance *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    FVar4 = (this->Components).AllocatorInstance.SecondaryData;
    if (-1 < param_2) {
      lVar5 = (longlong)param_1 * 0xd0;
      if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
      }
      if (param_2 < *(int *)((longlong)FVar4 + 200 + lVar5)) {
        uVar3 = 0;
        if (param_1 < (this->Components).ArrayNum) {
          uVar3 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        FVar4 = (this->Components).AllocatorInstance.SecondaryData;
        if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
          FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
        }
        lVar6 = lVar5 + 0x20 + (longlong)FVar4;
        uVar3 = 0;
        if (param_2 < *(int *)(lVar6 + 0xa8)) {
          uVar3 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        if (*(longlong *)(lVar6 + 0xa0) != 0) {
          lVar6 = *(longlong *)(lVar6 + 0xa0);
        }
        if ((-1 < param_3) && (param_3 < *(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar6))) {
          uVar3 = 0;
          if (param_1 < (this->Components).ArrayNum) {
            uVar3 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          FVar4 = (this->Components).AllocatorInstance.SecondaryData;
          if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
            FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
          }
          lVar5 = lVar5 + 0x20 + (longlong)FVar4;
          uVar3 = 0;
          if (param_2 < *(int *)(lVar5 + 0xa8)) {
            uVar3 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (*(longlong *)(lVar5 + 0xa0) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0xa0);
          }
          lVar5 = lVar5 + 0x20 + (longlong)param_2 * 0xa0;
          uVar3 = 0;
          if (param_3 < *(int *)(lVar5 + 0x78)) {
            uVar3 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (*(longlong *)(lVar5 + 0x70) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x70);
          }
          return *(uint *)((longlong)param_3 * 0x70 + 0x10 + lVar5);
        }
      }
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x97,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// GetString @ 14aad2770

FString * __thiscall
UE::Mutable::Private::FInstance::GetString
          (FInstance *this,FString *__return_storage_ptr__,int param_1,int param_2,int param_3,
          int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  lVar8 = (longlong)param_2;
  lVar10 = (longlong)param_1;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x124,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar7 + 200 + lVar10 * 0xd0)) goto LAB_14aad28cc;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x125,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
LAB_14aad28cc:
  local_50 = &this->Components;
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar11 = lVar10 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar11 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  lVar9 = (longlong)param_3;
  if (*(longlong *)(lVar11 + 0xa0) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)(lVar8 * 0xa0 + 0x98 + lVar11) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x126,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar11 = lVar10 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar11 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar11 + 0xa0) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0xa0);
  }
  lVar11 = lVar11 + 0x20 + lVar8 * 0xa0;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar11 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar11 + 0x70) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0x70);
  }
  if (((param_4 < 0) || (*(int *)(lVar9 * 0x70 + 0x68 + lVar11) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Strings.IsValidIndex(StringIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x127,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar11 = lVar10 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar11 + 0xa8)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar11 + 0xa0) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0xa0);
  }
  lVar11 = lVar11 + lVar8 * 0xa0 + 0x20;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar11 + 0x78)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (*(longlong *)(lVar11 + 0x70) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0x70);
  }
  if ((param_4 < 0) || (*(int *)(lVar9 * 0x70 + 0x68 + lVar11) <= param_4)) {
    ::FString::FString(__return_storage_ptr__,"");
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    FVar7 = (this->Components).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    lVar10 = lVar10 * 0xd0 + 0x20 + (longlong)FVar7;
    uVar5 = 0;
    if (param_2 < *(int *)(lVar10 + 0xa8)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    if (*(longlong *)(lVar10 + 0xa0) != 0) {
      lVar10 = *(longlong *)(lVar10 + 0xa0);
    }
    lVar10 = lVar10 + lVar8 * 0xa0 + 0x20;
    uVar5 = 0;
    if (param_3 < *(int *)(lVar10 + 0x78)) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    if (*(longlong *)(lVar10 + 0x70) != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x70);
    }
    lVar10 = lVar10 + lVar9 * 0x70;
    uVar5 = 0;
    if (param_4 < *(int *)(lVar10 + 0x68)) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    ::FString::FString(__return_storage_ptr__,
                       (FString *)(*(longlong *)(lVar10 + 0x60) + (longlong)param_4 * 0x18));
  }
  return __return_storage_ptr__;
}

// GetStringCount @ 14aad2e50

int __thiscall
UE::Mutable::Private::FInstance::GetStringCount(FInstance *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  piVar1 = &(this->Components).ArrayNum;
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xcf,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar7 + 200 + lVar8 * 0xd0)) goto LAB_14aad2fa5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xd0,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14aad2fa5:
  local_50 = &this->Components;
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar9) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar8 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xa0);
  }
  lVar8 = lVar8 + 0x20 + (longlong)param_2 * 0xa0;
  uVar6 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x70);
  }
  return *(int *)((longlong)param_3 * 0x70 + 0x68 + lVar8);
}

// GetStringName @ 14aad31f0

FName __thiscall
UE::Mutable::Private::FInstance::GetStringName
          (FInstance *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FName FVar7;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar8;
  uint in_register_00000014;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint in_stack_00000030;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  FVar7.Number = in_register_00000014;
  FVar7.ComparisonIndex.Value = param_1;
  lVar11 = (longlong)param_3;
  lVar9 = (longlong)param_2;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x135,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  uVar5 = 0;
  uVar6 = uVar5;
  if (param_2 < *piVar1) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar8 = *pFVar2;
  if (-1 < param_3) {
    if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_3 < *(int *)((longlong)FVar8 + 200 + lVar9 * 0xd0)) goto LAB_14aad334d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x136,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
LAB_14aad334d:
  local_50 = &this->Components;
  uVar6 = uVar5;
  if (param_2 < *piVar1) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  FVar8 = *pFVar2;
  if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar8;
  uVar6 = uVar5;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  if (((param_4 < 0) || (*(int *)(lVar11 * 0xa0 + 0x98 + lVar10) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x137,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  FVar8 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar8;
  uVar5 = 0;
  uVar6 = uVar5;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  lVar10 = lVar10 + 0x20 + lVar11 * 0xa0;
  uVar6 = uVar5;
  if (param_4 < *(int *)(lVar10 + 0x78)) {
    uVar6 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar7 = (FName)(*pcVar3)();
    return FVar7;
  }
  if (*(longlong *)(lVar10 + 0x70) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x70);
  }
  if (((int)in_stack_00000030 < 0) ||
     (*(int *)((longlong)param_4 * 0x70 + 0x68 + lVar10) <= (int)in_stack_00000030)) {
    *(undefined8 *)FVar7 = 0;
  }
  else {
    uVar6 = uVar5;
    if (param_2 < (this->Components).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FName)(*pcVar3)();
      return FVar7;
    }
    FVar8 = (this->Components).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar8 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    lVar9 = lVar9 * 0xd0 + 0x20 + (longlong)FVar8;
    uVar6 = uVar5;
    if (param_3 < *(int *)(lVar9 + 0xa8)) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FName)(*pcVar3)();
      return FVar7;
    }
    if (*(longlong *)(lVar9 + 0xa0) != 0) {
      lVar9 = *(longlong *)(lVar9 + 0xa0);
    }
    lVar9 = lVar9 + lVar11 * 0xa0 + 0x20;
    if (param_4 < *(int *)(lVar9 + 0x78)) {
      uVar5 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FName)(*pcVar3)();
      return FVar7;
    }
    if (*(longlong *)(lVar9 + 0x70) != 0) {
      lVar9 = *(longlong *)(lVar9 + 0x70);
    }
    lVar9 = lVar9 + (longlong)param_4 * 0x70;
    uVar6 = 0;
    if ((int)in_stack_00000030 < *(int *)(lVar9 + 0x68)) {
      uVar6 = ~in_stack_00000030 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FName)(*pcVar3)();
      return FVar7;
    }
    *(undefined8 *)FVar7 =
         *(undefined8 *)
          (*(longlong *)(lVar9 + 0x60) + 0x10 + (longlong)(int)in_stack_00000030 * 0x18);
  }
  return FVar7;
}

// GetSurfaceCount @ 14aad39f0

int __thiscall
UE::Mutable::Private::FInstance::GetSurfaceCount(FInstance *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar5;
  longlong lVar6;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    FVar5 = (this->Components).AllocatorInstance.SecondaryData;
    if (-1 < param_2) {
      if (FVar5 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar5 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
      }
      if (param_2 < *(int *)((longlong)FVar5 + 200 + (longlong)param_1 * 0xd0)) {
        uVar3 = 0;
        if (param_1 < (this->Components).ArrayNum) {
          uVar3 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        FVar5 = (this->Components).AllocatorInstance.SecondaryData;
        if (FVar5 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
          FVar5 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
        }
        lVar6 = (longlong)param_1 * 0xd0 + 0x20 + (longlong)FVar5;
        uVar3 = 0;
        if (param_2 < *(int *)(lVar6 + 0xa8)) {
          uVar3 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (*(longlong *)(lVar6 + 0xa0) != 0) {
          lVar6 = *(longlong *)(lVar6 + 0xa0);
        }
        return *(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar6);
      }
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x46,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  iVar4 = (*pcVar1)();
  return iVar4;
}

// GetSurfaceCustomId @ 14aad3b80

uint __thiscall
UE::Mutable::Private::FInstance::GetSurfaceCustomId
          (FInstance *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    FVar4 = (this->Components).AllocatorInstance.SecondaryData;
    if (-1 < param_2) {
      lVar5 = (longlong)param_1 * 0xd0;
      if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
      }
      if (param_2 < *(int *)((longlong)FVar4 + 200 + lVar5)) {
        uVar3 = 0;
        if (param_1 < (this->Components).ArrayNum) {
          uVar3 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        FVar4 = (this->Components).AllocatorInstance.SecondaryData;
        if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
          FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
        }
        lVar6 = lVar5 + 0x20 + (longlong)FVar4;
        uVar3 = 0;
        if (param_2 < *(int *)(lVar6 + 0xa8)) {
          uVar3 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        if (*(longlong *)(lVar6 + 0xa0) != 0) {
          lVar6 = *(longlong *)(lVar6 + 0xa0);
        }
        if ((-1 < param_3) && (param_3 < *(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar6))) {
          uVar3 = 0;
          if (param_1 < (this->Components).ArrayNum) {
            uVar3 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          FVar4 = (this->Components).AllocatorInstance.SecondaryData;
          if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
            FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
          }
          lVar5 = lVar5 + 0x20 + (longlong)FVar4;
          uVar3 = 0;
          if (param_2 < *(int *)(lVar5 + 0xa8)) {
            uVar3 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (*(longlong *)(lVar5 + 0xa0) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0xa0);
          }
          lVar5 = lVar5 + 0x20 + (longlong)param_2 * 0xa0;
          uVar3 = 0;
          if (param_3 < *(int *)(lVar5 + 0x78)) {
            uVar3 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (*(longlong *)(lVar5 + 0x70) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x70);
          }
          return *(uint *)((longlong)param_3 * 0x70 + 0xc + lVar5);
        }
      }
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xa8,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// GetSurfaceId @ 14aad3e40

uint __thiscall
UE::Mutable::Private::FInstance::GetSurfaceId(FInstance *this,int param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((-1 < param_1) && (param_1 < (this->Components).ArrayNum)) {
    FVar4 = (this->Components).AllocatorInstance.SecondaryData;
    if (-1 < param_2) {
      lVar5 = (longlong)param_1 * 0xd0;
      if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
      }
      if (param_2 < *(int *)((longlong)FVar4 + 200 + lVar5)) {
        uVar3 = 0;
        if (param_1 < (this->Components).ArrayNum) {
          uVar3 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        FVar4 = (this->Components).AllocatorInstance.SecondaryData;
        if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
          FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
        }
        lVar6 = lVar5 + 0x20 + (longlong)FVar4;
        uVar3 = 0;
        if (param_2 < *(int *)(lVar6 + 0xa8)) {
          uVar3 = (uint)~param_2 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return uVar3;
        }
        if (*(longlong *)(lVar6 + 0xa0) != 0) {
          lVar6 = *(longlong *)(lVar6 + 0xa0);
        }
        if ((-1 < param_3) && (param_3 < *(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar6))) {
          uVar3 = 0;
          if (param_1 < (this->Components).ArrayNum) {
            uVar3 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          FVar4 = (this->Components).AllocatorInstance.SecondaryData;
          if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
            FVar4 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
          }
          lVar5 = lVar5 + 0x20 + (longlong)FVar4;
          uVar3 = 0;
          if (param_2 < *(int *)(lVar5 + 0xa8)) {
            uVar3 = (uint)~param_2 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (*(longlong *)(lVar5 + 0xa0) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0xa0);
          }
          lVar5 = lVar5 + 0x20 + (longlong)param_2 * 0xa0;
          uVar3 = 0;
          if (param_3 < *(int *)(lVar5 + 0x78)) {
            uVar3 = (uint)~param_3 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return uVar3;
          }
          if (*(longlong *)(lVar5 + 0x70) != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x70);
          }
          return *(uint *)((longlong)param_3 * 0x70 + 8 + lVar5);
        }
      }
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x57,L"");
  if (!bVar2) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// GetVector @ 14aad5190

TVector4<float> * __thiscall
UE::Mutable::Private::FInstance::GetVector
          (FInstance *this,TVector4<float> *__return_storage_ptr__,int param_1,int param_2,
          int param_3,int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TVector4<float> *pTVar8;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  lVar10 = (longlong)param_2;
  lVar11 = (longlong)param_1;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xf8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar9 = *pFVar2;
  if (-1 < param_2) {
    if (FVar9 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar9 + 200 + lVar11 * 0xd0)) goto LAB_14aad52ec;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xf9,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
LAB_14aad52ec:
  local_50 = &this->Components;
  uVar7 = 0;
  if (param_1 < *piVar1) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  FVar9 = *pFVar2;
  if (FVar9 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar12 = lVar11 * 0xd0 + 0x20 + (longlong)FVar9;
  uVar7 = 0;
  if (param_2 < *(int *)(lVar12 + 0xa8)) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  if (*(longlong *)(lVar12 + 0xa0) != 0) {
    lVar12 = *(longlong *)(lVar12 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)(lVar10 * 0xa0 + 0x98 + lVar12) <= param_3)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xfa,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  uVar7 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  FVar9 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar12 = lVar11 * 0xd0 + 0x20 + (longlong)FVar9;
  uVar7 = 0;
  if (param_2 < *(int *)(lVar12 + 0xa8)) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  if (*(longlong *)(lVar12 + 0xa0) != 0) {
    lVar12 = *(longlong *)(lVar12 + 0xa0);
  }
  lVar12 = lVar12 + 0x20 + lVar10 * 0xa0;
  uVar7 = 0;
  if (param_3 < *(int *)(lVar12 + 0x78)) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  if (*(longlong *)(lVar12 + 0x70) != 0) {
    lVar12 = *(longlong *)(lVar12 + 0x70);
  }
  if (((param_4 < 0) || (*(int *)((longlong)param_3 * 0x70 + 0x48 + lVar12) <= param_4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Vectors.IsValidIndex(VectorIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xfb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  uVar7 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  FVar9 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar9 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar11 = lVar11 * 0xd0 + 0x20 + (longlong)FVar9;
  uVar7 = 0;
  if (param_2 < *(int *)(lVar11 + 0xa8)) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  if (*(longlong *)(lVar11 + 0xa0) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0xa0);
  }
  lVar11 = lVar11 + lVar10 * 0xa0 + 0x20;
  uVar7 = 0;
  if (param_3 < *(int *)(lVar11 + 0x78)) {
    uVar7 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  if (*(longlong *)(lVar11 + 0x70) != 0) {
    lVar11 = *(longlong *)(lVar11 + 0x70);
  }
  lVar11 = lVar11 + (longlong)param_3 * 0x70;
  uVar7 = 0;
  if (param_4 < *(int *)(lVar11 + 0x48)) {
    uVar7 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TVector4<float> *)(*pcVar4)();
    return pTVar8;
  }
  puVar3 = (undefined8 *)((longlong)param_4 * 0x20 + *(longlong *)(lVar11 + 0x40));
  uVar5 = puVar3[1];
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *puVar3;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  return __return_storage_ptr__;
}

// GetVectorCount @ 14aad5700

int __thiscall
UE::Mutable::Private::FInstance::GetVectorCount(FInstance *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  piVar1 = &(this->Components).ArrayNum;
  lVar8 = (longlong)param_1;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xbb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_2) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_2 < *(int *)((longlong)FVar7 + 200 + lVar8 * 0xd0)) goto LAB_14aad5855;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0xbc,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14aad5855:
  local_50 = &this->Components;
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar9 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar9 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  if (((param_3 < 0) || (*(int *)((longlong)param_2 * 0xa0 + 0x98 + lVar9) <= param_3)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0xbd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar8 = lVar8 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar6 = 0;
  if (param_2 < *(int *)(lVar8 + 0xa8)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xa0);
  }
  lVar8 = lVar8 + 0x20 + (longlong)param_2 * 0xa0;
  uVar6 = 0;
  if (param_3 < *(int *)(lVar8 + 0x78)) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if (*(longlong *)(lVar8 + 0x70) != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x70);
  }
  return *(int *)((longlong)param_3 * 0x70 + 0x48 + lVar8);
}

// GetVectorName @ 14aad5aa0

FName __thiscall
UE::Mutable::Private::FInstance::GetVectorName
          (FInstance *this,int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ForElementType<UE::Mutable::Private::FInstanceComponent> *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  uint in_register_00000014;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint in_stack_00000030;
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  lVar8 = (longlong)param_3;
  lVar9 = (longlong)param_2;
  piVar1 = &(this->Components).ArrayNum;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x103,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < *piVar1) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  pFVar2 = &(this->Components).AllocatorInstance.SecondaryData;
  FVar7 = *pFVar2;
  if (-1 < param_3) {
    if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    }
    if (param_3 < *(int *)((longlong)FVar7 + 200 + lVar9 * 0xd0)) goto LAB_14aad5bfc;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Components[ComponentIndex].LODs.IsValidIndex(LODIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                     ,0x104,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
LAB_14aad5bfc:
  local_50 = &this->Components;
  uVar5 = 0;
  if (param_2 < *piVar1) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = *pFVar2;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)local_50;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  if (((param_4 < 0) || (*(int *)(lVar8 * 0xa0 + 0x98 + lVar10) <= param_4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces.IsValidIndex(SurfaceIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x105,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar10 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar10 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0xa0) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0xa0);
  }
  lVar10 = lVar10 + 0x20 + lVar8 * 0xa0;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar10 + 0x78)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar10 + 0x70) != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x70);
  }
  if ((((int)in_stack_00000030 < 0) ||
      (*(int *)((longlong)param_4 * 0x70 + 0x48 + lVar10) <= (int)in_stack_00000030)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Components[ComponentIndex].LODs[LODIndex].Surfaces[SurfaceIndex].Vectors.IsValidIndex(VectorIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\Instance.cpp"
                         ,0x106,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  uVar5 = 0;
  if (param_2 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  FVar7 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar9 = lVar9 * 0xd0 + 0x20 + (longlong)FVar7;
  uVar5 = 0;
  if (param_3 < *(int *)(lVar9 + 0xa8)) {
    uVar5 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar9 + 0xa0) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0xa0);
  }
  lVar9 = lVar9 + lVar8 * 0xa0 + 0x20;
  uVar5 = 0;
  if (param_4 < *(int *)(lVar9 + 0x78)) {
    uVar5 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  if (*(longlong *)(lVar9 + 0x70) != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x70);
  }
  lVar9 = lVar9 + (longlong)param_4 * 0x70;
  uVar5 = 0;
  if ((int)in_stack_00000030 < *(int *)(lVar9 + 0x48)) {
    uVar5 = ~in_stack_00000030 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    FVar6 = (FName)(*pcVar3)();
    return FVar6;
  }
  *(undefined8 *)FVar6 =
       *(undefined8 *)((longlong)(int)in_stack_00000030 * 0x20 + 0x10 + *(longlong *)(lVar9 + 0x40))
  ;
  return FVar6;
}

// SetExtensionData @ 14aaf71b0

void __thiscall
UE::Mutable::Private::FInstance::SetExtensionData
          (FInstance *this,TSharedRef<UE::Mutable::Private::FExtensionData_const_,1> *param_1,
          FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FExtensionData *local_18;
  FSharedReferencer<1> local_10;
  
  iVar3 = (this->ExtensionData).ArrayNum;
  piVar1 = &(this->ExtensionData).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->ExtensionData).AllocatorInstance,piVar1);
  }
  (this->ExtensionData).ArrayNum = iVar3 + 1;
  pFVar2 = (this->ExtensionData).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
  DefaultConstructItems<UE::Mutable::Private::NamedExtensionData,int>(pFVar2,1);
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 != (FScriptContainerElement *)&local_18) {
    *(FExtensionData **)pFVar2 = local_18;
    local_18 = (FExtensionData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar2 + 8),&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  *(FName *)(pFVar2 + 0x10) = param_2;
  return;
}

// SetMaterialId @ 14aaf73e0

void __thiscall
UE::Mutable::Private::FInstance::SetMaterialId
          (FInstance *this,int param_1,int param_2,int param_3,FHandle *param_4)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  uchar *puVar10;
  uint uVar11;
  
  iVar2 = (this->Components).ArrayNum;
  while (iVar2 <= param_1) {
    AddComponent(this);
    iVar2 = (this->Components).ArrayNum;
  }
  lVar9 = (longlong)param_1 * 0xd0;
  pTVar1 = &this->Components;
  uVar11 = (uint)~param_1 >> 0x1f;
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = uVar11;
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
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    if (param_2 < *(int *)(lVar9 + 200 + (longlong)FVar7)) break;
    AddLOD(this,param_1);
  }
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = uVar11;
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
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    puVar10 = (uchar *)((longlong)FVar7 + 0x20) + lVar9;
    uVar5 = 0;
    if (param_2 < *(int *)(puVar10 + 0xa8)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    if (*(uchar **)(puVar10 + 0xa0) != (uchar *)0x0) {
      puVar10 = *(uchar **)(puVar10 + 0xa0);
    }
    if (param_3 < *(int *)(puVar10 + (longlong)param_2 * 0xa0 + 0x98)) {
      uVar5 = 0;
      if (param_1 < (this->Components).ArrayNum) {
        uVar5 = uVar11;
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
      FVar6 = (this->Components).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
      }
      lVar9 = lVar9 + 0x20 + (longlong)FVar6;
      uVar11 = 0;
      if (param_2 < *(int *)(lVar9 + 0xa8)) {
        uVar11 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = *(longlong *)(lVar9 + 0xa0);
      if (*(longlong *)(lVar9 + 0xa0) == 0) {
        lVar8 = lVar9;
      }
      lVar8 = (longlong)param_2 * 0xa0 + 0x20 + lVar8;
      uVar11 = 0;
      if (param_3 < *(int *)(lVar8 + 0x78)) {
        uVar11 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = *(longlong *)(lVar8 + 0x70);
      if (*(longlong *)(lVar8 + 0x70) == 0) {
        lVar9 = lVar8;
      }
      TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
      ::FHandle::operator=((FHandle *)((longlong)param_3 * 0x70 + 0x18 + lVar9),param_4);
      return;
    }
    AddSurface(this,param_2,param_1);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetMesh @ 14aaf7770

void __thiscall
UE::Mutable::Private::FInstance::SetMesh
          (FInstance *this,int param_1,int param_2,FHandle *param_3,FName param_4)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  FHandle *this_00;
  
  iVar2 = (this->Components).ArrayNum;
  while (iVar2 <= param_1) {
    AddComponent(this);
    iVar2 = (this->Components).ArrayNum;
  }
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
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
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    if (param_2 < *(int *)((uchar *)((longlong)FVar7 + 200) + (longlong)param_1 * 0xd0)) break;
    AddLOD(this,param_1);
  }
  uVar5 = 0;
  if (param_1 < (this->Components).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
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
  FVar6 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  lVar1 = (longlong)FVar6 + (longlong)param_1 * 0xd0;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar1 + 200)) {
    uVar5 = (uint)~param_2 >> 0x1f;
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
  lVar8 = *(longlong *)(lVar1 + 0xc0);
  if (*(longlong *)(lVar1 + 0xc0) == 0) {
    lVar8 = lVar1 + 0x20;
  }
  this_00 = (FHandle *)((longlong)param_2 * 0xa0 + lVar8);
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
  FHandle::operator=(this_00,param_3);
  this_00[1].Id = param_4.ComparisonIndex.Value;
  *(uint *)&this_00[1].field_0x4 = param_4.Number;
  return;
}

// SetOverlayMaterialId @ 14aaf8ec0

void __thiscall
UE::Mutable::Private::FInstance::SetOverlayMaterialId(FInstance *this,int param_1,FHandle *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar5;
  
  iVar1 = (this->Components).ArrayNum;
  while (iVar1 <= param_1) {
    AddComponent(this);
    iVar1 = (this->Components).ArrayNum;
  }
  uVar4 = 0;
  if (param_1 < iVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar5 = (this->Components).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
    FVar5 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)&this->Components;
  }
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::FHandle::operator=((FHandle *)((longlong)param_1 * 0xd0 + 8 + (longlong)FVar5),param_2);
  return;
}

// SetSurfaceName @ 14aaf9060

void __thiscall
UE::Mutable::Private::FInstance::SetSurfaceName
          (FInstance *this,int param_1,int param_2,int param_3,FName param_4)

{
  TArray<UE::Mutable::Private::FInstanceComponent,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar6;
  ForElementType<UE::Mutable::Private::FInstanceComponent> FVar7;
  longlong lVar8;
  longlong lVar9;
  uchar *puVar10;
  uint uVar11;
  
  iVar2 = (this->Components).ArrayNum;
  while (iVar2 <= param_1) {
    AddComponent(this);
    iVar2 = (this->Components).ArrayNum;
  }
  lVar9 = (longlong)param_1 * 0xd0;
  pTVar1 = &this->Components;
  uVar11 = (uint)~param_1 >> 0x1f;
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = uVar11;
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
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    if (param_2 < *(int *)(lVar9 + 200 + (longlong)FVar7)) break;
    AddLOD(this,param_1);
  }
  while( true ) {
    uVar5 = 0;
    if (param_1 < (this->Components).ArrayNum) {
      uVar5 = uVar11;
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
    FVar6 = (this->Components).AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
    if (FVar6 != (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
      FVar7 = FVar6;
    }
    puVar10 = (uchar *)((longlong)FVar7 + 0x20) + lVar9;
    uVar5 = 0;
    if (param_2 < *(int *)(puVar10 + 0xa8)) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    if (*(uchar **)(puVar10 + 0xa0) != (uchar *)0x0) {
      puVar10 = *(uchar **)(puVar10 + 0xa0);
    }
    if (param_3 < *(int *)(puVar10 + (longlong)param_2 * 0xa0 + 0x98)) {
      uVar5 = 0;
      if (param_1 < (this->Components).ArrayNum) {
        uVar5 = uVar11;
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
      FVar6 = (this->Components).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<UE::Mutable::Private::FInstanceComponent>)0x0) {
        FVar6 = (ForElementType<UE::Mutable::Private::FInstanceComponent>)pTVar1;
      }
      lVar9 = lVar9 + 0x20 + (longlong)FVar6;
      uVar11 = 0;
      if (param_2 < *(int *)(lVar9 + 0xa8)) {
        uVar11 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar8 = *(longlong *)(lVar9 + 0xa0);
      if (*(longlong *)(lVar9 + 0xa0) == 0) {
        lVar8 = lVar9;
      }
      lVar8 = (longlong)param_2 * 0xa0 + 0x20 + lVar8;
      uVar11 = 0;
      if (param_3 < *(int *)(lVar8 + 0x78)) {
        uVar11 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = *(longlong *)(lVar8 + 0x70);
      if (*(longlong *)(lVar8 + 0x70) == 0) {
        lVar9 = lVar8;
      }
      *(FName *)(lVar9 + (longlong)param_3 * 0x70) = param_4;
      return;
    }
    AddSurface(this,param_2,param_1);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

